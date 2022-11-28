#include <iostream>
#include <sstream>
#include <memory>
#include "SoftSynth.h"

std::shared_ptr<SoftSynth> soft_synth;
std::map<size_t, Definition> SoftSynth::tones_custom_def;

SoftSynth::SoftSynth() {
    synth = std::make_unique<Synthesizer>();

    // Create default tones and instruments
    tones.insert(std::make_pair(0, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::sine(frequency, time); })));
    tones.insert(std::make_pair(1, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::square(frequency, time); })));
    tones.insert(std::make_pair(2, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::triangle(frequency, time); })));
    tones.insert(std::make_pair(3, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::sawtooth(frequency, time); })));
    tones.insert(std::make_pair(4, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::noise(); })));
    tones.insert(std::make_pair(5, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 5.0); })));
    tones.insert(std::make_pair(6, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 10.0); })));
    tones.insert(std::make_pair(7, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 15.0); })));
    tones.insert(std::make_pair(8, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 20.0); })));
    tones.insert(std::make_pair(9, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 25.0); })));
    tones.insert(std::make_pair(10, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 50.0); })));
    tones.insert(std::make_pair(11, std::make_shared<Tone>([](double frequency, double time) { return Waveforms::pulse(frequency, time, 75.0); })));

    instruments.insert(std::make_pair(64, std::make_shared<PolyphonicInstrument>(Patches::PIANO, Patches::PIANO_ENVELOPE)));
    instruments.insert(std::make_pair(65, std::make_shared<PolyphonicInstrument>(Patches::BASS, Patches::BASS_ENVELOPE)));
    instruments.insert(std::make_pair(66, std::make_shared<PolyphonicInstrument>(Patches::BRASS, Patches::BRASS_ENVELOPE)));
    instruments.insert(std::make_pair(67, std::make_shared<PolyphonicInstrument>(Patches::CYMBAL, Patches::CYMBAL_ENVELOPE)));
    instruments.insert(std::make_pair(68, std::make_shared<PolyphonicInstrument>(Patches::GLOCKENSPIEL, Patches::GLOCKENSPIEL_ENVELOPE)));
    instruments.insert(std::make_pair(69, std::make_shared<PolyphonicInstrument>(Patches::GUITAR, Patches::GUITAR_ENVELOPE)));
    instruments.insert(std::make_pair(70, std::make_shared<PolyphonicInstrument>(Patches::ORGAN, Patches::ORGAN_ENVELOPE)));
    instruments.insert(std::make_pair(71, std::make_shared<PolyphonicInstrument>(Patches::REED, Patches::REED_ENVELOPE)));

    // Startup synth
    synth->open();
    for (auto &t: tones)
        synth->addSoundGenerator(t.second.get());
    for (auto &i: instruments)
        synth->addSoundGenerator(i.second.get());
    synth->unpause();

    auto t = std::thread(&SoftSynth::Thread, this);
    t.detach();
    //std::cout << "SoftSynth initialised" << std::endl;
}

SoftSynth::~SoftSynth() {
    quit_requested = true;
    while (!quit_executed) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    synth->pause();
    Clear();
    synth->close();
//    std::cout << "Software synth is dead\n";
}

void SoftSynth::Clear() {
    lock.lock();
    for (auto &sr: queue) {
        switch (sr.type) {
            case SoundType::Note:
                tones[sr.channel]->stopNote(sr.pitch);
                break;
            case SoundType::NoteCustom:
                tones_custom[sr.channel]->stopNote(sr.pitch);
                break;
            case SoundType::Instrument:
                instruments[sr.channel]->releaseNote(sr.pitch);
                break;
            case SoundType::InstrumentCustom:
                instruments_custom[sr.channel]->releaseNote(sr.pitch);
                break;
        }
    }
    queue.clear();
//    tones_custom.clear();
//    tones_custom_def.clear();
    lock.unlock();
}

void SoftSynth::Thread() {
    while (!quit_requested) {
        lock.lock();
        auto t2 = std::chrono::steady_clock::now();
        for (auto &sr: queue) {
            if (sr.playing == false) {
                sr.playing = true;
                switch (sr.type) {
                    case SoundType::Note:
                        tones[sr.channel]->playNote(sr.pitch);
                        break;
                    case SoundType::NoteCustom:
                        tones_custom[sr.channel]->playNote(sr.pitch);
                        break;
                    case SoundType::Instrument:
                        instruments[sr.channel]->holdNote(sr.pitch);
                        break;
                    case SoundType::InstrumentCustom:
                        instruments_custom[sr.channel]->holdNote(sr.pitch);
                        break;
                }
                sr.playing = true;
            } else {
                // Have we finished?
                auto time_span = static_cast<double>(std::chrono::duration_cast<std::chrono::milliseconds>(t2 - sr.t1).count()) / 1000.0;
                if (time_span > sr.duration) {
                    sr.playing = false;
                    sr.finished = true;
                    switch (sr.type) {
                        case SoundType::Note:
                            tones[sr.channel]->stopNote(sr.pitch);
                            break;
                        case SoundType::NoteCustom:
                            tones_custom[sr.channel]->stopNote(sr.pitch);
                            break;
                        case SoundType::Instrument:
                            instruments[sr.channel]->releaseNote(sr.pitch);
                            break;
                        case SoundType::InstrumentCustom:
                            instruments_custom[sr.channel]->releaseNote(sr.pitch);
                            break;
                    }
                }
            }

            // Delete finished
            std::erase_if(queue, [](SoundRequest x) { return x.finished; });
        }
        lock.unlock();
    }
    quit_executed = true;
}

void SoftSynth::Volume(int64_t channel, double volume) {
    if (tones.contains(channel)) {
        tones[channel]->setVolume(volume * 100.0);
    } else {
        instruments[channel]->setVolume(volume * 100.0);
    }
}

void SoftSynth::PlayNote(int64_t channel, double pitch, double duration) {
    lock.lock();
    if (tones.contains(channel)) {
        SoundRequest sr{SoundType::Note, channel, pitch, duration, std::chrono::steady_clock::now()};
        queue.push_back(std::move(sr));
    } else if (tones_custom.contains(channel)) {
        SoundRequest sr{SoundType::NoteCustom, channel, pitch, duration, std::chrono::steady_clock::now()};
        queue.push_back(std::move(sr));
    } else if (instruments_custom.contains(channel)) {
        SoundRequest sr{SoundType::InstrumentCustom, channel, pitch, duration, std::chrono::steady_clock::now()};
        queue.push_back(std::move(sr));
    } else {
        SoundRequest sr{SoundType::Instrument, channel, pitch, duration, std::chrono::steady_clock::now()};
        queue.push_back(std::move(sr));
    }
    lock.unlock();
}

int64_t SoftSynth::CreateTone(std::string definition) {
    lock.lock();
    auto index = tone_index++;
    auto tt = std::make_shared<ToneCustom>(&SoftSynth::GetCustomToneValue);
    tt->index = index;
    tones_custom.insert(std::make_pair(index, tt));
    synth->addSoundGenerator(tones_custom[index].get());

    // Build definition
    std::istringstream iss(definition);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

    Definition d;
    if (results[0] == "Si")
        d.type = WaveType::Sine;
    else if (results[0] == "Sq")
        d.type = WaveType::Square;
    else if (results[0] == "St")
        d.type = WaveType::SawTooth;
    else if (results[0] == "Tr")
        d.type = WaveType::Triangle;

    // Now process all parameters
    for (auto i = 1; i < results.size(); i++) {
        Definition dd;

        auto ss = results[i];
        dd.multiplier = std::stod(ss);

        i++;
        ss = results[i];
        if (ss == "Si")
            dd.type = WaveType::Sine;
        else if (ss == "No")
            dd.type = WaveType::Noise;
        else if (ss == "Sq")
            dd.type = WaveType::Square;
        else if (ss == "St")
            dd.type = WaveType::SawTooth;
        else if (ss == "Tr")
            dd.type = WaveType::Triangle;

        i++;
        ss = results[i];
        dd.frequency = std::stod(ss);

        d.defs.push_back(std::move(dd));
    }

    tones_custom_def.insert(std::make_pair(index, std::move(d)));
    lock.unlock();
    return index;
}

size_t SoftSynth::Envelope(int64_t channel, double attack, double sustain, double attack_time, double decay_time, double release_time, bool sustainable) {
    lock.lock();

    auto index = tone_index++;
    ADSREnvelope envelope(attack, sustain, attack_time, decay_time, release_time, sustainable);
    if (tones.contains(channel)) {
        auto tt = tones.find(channel)->second.get()->GetmWave();
        auto ii = std::make_shared<PolyphonicInstrument>(tt, envelope);
        instruments.insert(std::make_pair(index, ii));
        synth->addSoundGenerator(ii.get());
    } else if (tones_custom.contains(channel)) {
        auto tt = tones_custom.find(channel)->second.get()->GetmWave();
        auto ii = std::make_shared<PolyphonicInstrumentCustom>(tt, envelope);
        ii.get()->index = channel;
        instruments_custom.insert(std::make_pair(index, ii));
        synth->addSoundGenerator(ii.get());
    } else {
        assert(0);
    }

    lock.unlock();
    return index;
}

double SoftSynth::GetCustomToneValue(double frequency, double time, size_t index) {
    auto def = &tones_custom_def.find(index)->second;

    double cc = 1;
    for (auto i = 0; i < def->defs.size(); i++) {
        auto d = &def->defs[i];
        switch (d->type) {
            case WaveType::Noise:
                cc *= d->multiplier * frequency * Waveforms::noise();
                break;
            case WaveType::Square:
                cc *= d->multiplier * frequency * Waveforms::square(d->frequency, time);
                break;
            case WaveType::Triangle:
                cc *= d->multiplier * frequency * Waveforms::triangle(d->frequency, time);
                break;
            case WaveType::Sine:
                cc *= d->multiplier * frequency * Waveforms::sine(d->frequency, time);
                break;
            case WaveType::SawTooth:
                cc *= d->multiplier * frequency * Waveforms::sawtooth(d->frequency, time);
                break;
        }
    }

    switch (def->type) {
        case WaveType::Square:
            return Waveforms::square(frequency, time, cc);
        case WaveType::Triangle:
            return Waveforms::triangle(frequency, time, cc);
        case WaveType::Sine:
            return Waveforms::sine(frequency, time, cc);
        case WaveType::SawTooth:
            return Waveforms::sawtooth(frequency, time, cc);
        default:
            return 0.0;
    }
}

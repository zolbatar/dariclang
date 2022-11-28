#pragma once

#include <memory>
#include <thread>
#include <map>
#include <vector>
#include <mutex>
#include <chrono>

#include "VSSynth.h"
#include "generators/ToneCustom.h"
#include "generators/PolyphonicInstrumentCustom.h"

using namespace VSSynth;
using namespace Generators;

enum class SoundType
{
    Note,
    NoteCustom,
    Instrument,
    InstrumentCustom
};

enum class WaveType
{
    Noise,
    Sine,
    Square,
    Triangle,
    SawTooth
};

struct Definition
{
    WaveType type;
    std::vector<Definition> defs;
    double multiplier;
    double frequency;
};

struct SoundRequest
{
    SoundType type;
    int64_t channel;
    double pitch;
    double duration;
    std::chrono::steady_clock::time_point t1;
    bool playing = false;
    bool finished = false;
};

class SoftSynth
{
public:
    SoftSynth();
    ~SoftSynth();

    void Clear();
    void Volume(int64_t channel, double volume);
    void PlayNote(int64_t channel, double pitch, double duration);
    size_t Envelope(int64_t tone, double attack, double sustain, double attack_time, double decay_time, double release_time, bool sustainable);
    void Thread();
    int64_t CreateTone(std::string definition);

private:
    size_t tone_index = 128;
    std::atomic_bool quit_requested = false;
    std::atomic_bool quit_executed = false;
    std::mutex lock;
    std::unique_ptr<Synthesizer> synth = nullptr;
    std::vector<SoundRequest> queue;
    std::map<size_t, std::shared_ptr<Tone>> tones;
    std::map<size_t, std::shared_ptr<ToneCustom>> tones_custom;
    std::map<size_t, std::shared_ptr<Instrument>> instruments;
    std::map<size_t, std::shared_ptr<InstrumentCustom>> instruments_custom;
    static std::map<size_t, Definition> tones_custom_def;

    static double GetCustomToneValue(double frequency, double time, size_t index);
};

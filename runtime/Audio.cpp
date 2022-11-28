#include <memory>
#include <iostream>
#include <vector>
#include "Types.h"
#include "Sound/SoftSynth.h"

struct Audio {
    Uint32 wavLength;
    Uint8 *wavBuffer;
};

extern std::shared_ptr<SoftSynth> soft_synth;
SDL_AudioDeviceID deviceId;
SDL_AudioSpec wavSpec;
std::vector<Audio> samples;

extern "C" T_I audio_init() {
    deviceId = SDL_OpenAudioDevice(NULL, 0, &wavSpec, NULL, 0);
}

extern "C" T_I audio_loadwav(T_S filename) {
    Audio audio;
    SDL_LoadWAV(filename, &wavSpec, &audio.wavBuffer, &audio.wavLength);
    samples.push_back(std::move(audio));
    return samples.size() - 1;
}

extern "C" void audio_play(T_I index) {
    int success = SDL_QueueAudio(deviceId, samples[index].wavBuffer, samples[index].wavLength);
    if (success) {
        std::cout << "SDL audio playback failed. SDL Error: " << SDL_GetError() << std::endl;
    }
    SDL_PauseAudioDevice(deviceId, 0);
}

extern "C" void audio_volume(T_I channel, T_F volume) {
    soft_synth->Volume(channel, volume);
}

extern "C" void audio_sound(T_I channel, T_F pitch, T_F duration) {
    soft_synth->PlayNote(channel, pitch, duration);
}

extern "C" T_I audio_tone(T_S definition) {
    return soft_synth->CreateTone(definition);
}

extern "C" T_I audio_envelope(T_I tone, T_F attack, T_F sustain, T_F attack_time, T_F decay_time, T_F release_time, T_I sustainable) {
    return soft_synth->Envelope(tone, attack, sustain, attack_time, decay_time, release_time, sustainable);
}

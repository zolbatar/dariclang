#include <memory>
#include <iostream>
#include <vector>
#include "Types.h"
#include "Sound/SoftSynth.h"
#include "SDL_mixer.h"

struct Audio {
    Uint32 wavLength;
    Uint8 *wavBuffer;
};

extern std::shared_ptr<SoftSynth> soft_synth;
std::vector<Mix_Chunk *> samples;

extern "C" void audio_init() {
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        SDL_Log("Couldn't initialize SDL: %s\n", SDL_GetError());
        exit(1);
    }

    int audio_rate = MIX_DEFAULT_FREQUENCY;
    Uint16 audio_format = MIX_DEFAULT_FORMAT;
    int audio_channels = MIX_DEFAULT_CHANNELS;
    if (Mix_OpenAudio(audio_rate, audio_format, audio_channels, 4096) < 0) {
        SDL_Log("Couldn't open audio: %s\n", SDL_GetError());
        exit(1);
    } else {
        Mix_QuerySpec(&audio_rate, &audio_format, &audio_channels);
        printf("Opened audio at %d Hz %d bit%s %s with %d channels\n", audio_rate,
               (audio_format & 0xFF),
               (SDL_AUDIO_ISFLOAT(audio_format) ? " (float)" : ""),
               (audio_channels > 2) ? "surround" :
               (audio_channels > 1) ? "stereo" : "mono", audio_channels);
    }
}

extern "C" T_I audio_loadwav(T_S filename) {
    auto audio = Mix_LoadWAV(filename);
    if (audio == nullptr) {
        printf("Can't load audio file '%s'\n", filename);
        exit(1);
    }
    samples.push_back(audio);
    return samples.size() - 1;
}

extern "C" void audio_play(T_I channel, T_I index) {
    Mix_PlayChannel(channel, samples[index], false);
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

extern "C" T_I
audio_envelope(T_I tone, T_F attack, T_F sustain, T_F attack_time, T_F decay_time, T_F release_time, T_I sustainable) {
    return soft_synth->Envelope(tone, attack, sustain, attack_time, decay_time, release_time, sustainable);
}


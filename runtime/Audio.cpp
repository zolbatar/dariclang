#include <memory>
#include <thread>
#include <iostream>
#include <vector>
#include "Types.h"
#include "SDL.h"
#include "SDL_mixer.h"
#include "fluidsynth.h"

struct Audio {
    Uint32 wavLength;
    Uint8 *wavBuffer;
};

std::vector<Mix_Chunk *> samples;
std::vector<Mix_Music *> music;

//static fluid_settings_t *settings;
//static fluid_synth_t *synth;
//static fluid_audio_driver_t *adriver;

extern "C" DLLEXTERN void audio_init() {
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
/*        printf("Opened audio at %d Hz %d bit%s %s with %d channels\n", audio_rate,
               (audio_format & 0xFF),
               (SDL_AUDIO_ISFLOAT(audio_format) ? " (float)" : ""),
               (audio_channels > 2) ? "surround" :
               (audio_channels > 1) ? "stereo" : "mono", audio_channels);*/
    }
    Mix_AllocateChannels(64);

    // Fluidsynth
/*    std::cout << "Initialising FluidSynth" << std::endl;
    settings = new_fluid_settings();
    synth = new_fluid_synth(settings);
    fluid_settings_setstr(settings, "audio.driver", "sdl2");
    adriver = new_fluid_audio_driver(settings, synth);
    std::cout << "Audio initialisation complete" << std::endl;*/
}

extern "C" DLLEXTERN void audio_loadsoundfont(T_S font) {
    //fluid_synth_sfload(synth, font, true);
    if (Mix_SetSoundFonts(font) == 0) {
        printf("Can't open Soundfont file\n");
        exit(1);
    }
    printf("Soundfont: %s\n", Mix_GetSoundFonts());
}

void audio_shutdown() {
//    delete_fluid_synth(synth);
//    delete_fluid_settings(settings);
}

extern "C" DLLEXTERN T_I audio_loadwav(T_S filename) {
    auto audio = Mix_LoadWAV(filename);
    if (audio == nullptr) {
        printf("Can't load audio file '%s'\n", filename);
        printf("Reason: [%s].\n", Mix_GetError());
        exit(1);
    }
    samples.push_back(audio);
    return samples.size() - 1;
}

extern "C" DLLEXTERN T_I audio_loadmus(T_S filename) {
    auto audio = Mix_LoadMUS(filename);
    if (audio == nullptr) {
        printf("Can't load music file '%s'\n", filename);
        printf("Reason: [%s].\n", Mix_GetError());
        exit(1);
    }
    music.push_back(audio);
    return music.size() - 1;
}

extern "C" DLLEXTERN void audio_play(T_I channel, T_I index) {
    Mix_PlayChannel(channel, samples[index], false);
}

extern "C" DLLEXTERN void audio_playmusic(T_I index, T_I loops) {
    if (Mix_PlayMusic(music[index], loops) != 0) {
        printf("Can't play music file\n");
        exit(1);
    }
}

extern "C" DLLEXTERN void audio_stopmusic(T_I ms) {
    Mix_FadeOutMusic(ms);
}

extern "C" DLLEXTERN void music_volume(T_F volume) {
    Mix_VolumeMusic(volume * 128);
}

extern "C" DLLEXTERN void audio_volume(T_I channel, T_F volume) {
    Mix_Volume(channel, volume * 128);
}

/*extern "C" DLLEXTERN void audio_bank(T_I channel, T_I bank, T_I preset) {
    fluid_synth_bank_select(synth, channel, bank);
    fluid_synth_program_change(synth, channel, preset);
}

extern "C" DLLEXTERN void audio_noteon(T_I channel, T_I pitch, T_I velocity) {
    fluid_synth_noteon(synth, channel, 40, 127);
}

extern "C" DLLEXTERN void audio_noteoff(T_I channel, T_I pitch) {
    fluid_synth_noteoff(synth, channel, 40);
}*/

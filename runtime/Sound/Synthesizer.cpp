#include <iostream>
#include "SoftSynth.h"
#include "Synthesizer.h"

namespace VSSynth {
    void fillBuffer(void *userData, Uint8 *buffer, int length) {
        Sint16 *sampleBuffer = (Sint16 *) buffer;
        SynthData *synthData = (SynthData *) userData;
        double sampleDeltaTime = synthData->sampleDeltaTime;

        // Write samples to audio buffer
        int numToWrite = length / (sizeof(Sint16) * 2);
        for (int sample = 0; sample < numToWrite; sample++) {
            Sint16 sampleValue = 0;

            *(synthData->time) += sampleDeltaTime;
            for (auto it = synthData->soundGenerators.begin(); it != synthData->soundGenerators.end(); ++it) {
                sampleValue += (Sint16)((*it)->sample(*(synthData->time)) * (*it)->getAmplitude());
            }

            for (auto it = synthData->middleware.begin(); it != synthData->middleware.end(); it++) {
                sampleValue = (*it)->processSample(sampleValue, *(synthData->time));
            }

            *sampleBuffer++ = sampleValue; // Left channel value
            *sampleBuffer++ = sampleValue; // Right channel value
        }
    }

    Synthesizer::Synthesizer(unsigned int samplingRate, unsigned int numFrames)
            : mSamplingRate(samplingRate), mNumFrames(numFrames) {
        mSynthData.sampleDeltaTime = 1.0 / (double) mSamplingRate;
        mSynthData.time = &mTime;
    }

    Synthesizer::~Synthesizer() {
    }

    void Synthesizer::addSoundGenerator(SoundGenerator *soundGenerator) {
        mSynthData.soundGenerators.push_back(soundGenerator);
    }

    void Synthesizer::addMiddleware(SynthMiddleware *middleware) {
        mSynthData.middleware.push_back(middleware);
    }

    void Synthesizer::open() {
        mTime = 0;

        SDL_AudioSpec obtained = {};
        SDL_AudioSpec requested = {};
        requested.freq = mSamplingRate;
        requested.samples = mSamplingRate / mNumFrames;
        requested.format = AUDIO_S16;
        requested.channels = 2;
        requested.userdata = &mSynthData;
        requested.callback = &fillBuffer;

        if (SDL_Init(SDL_INIT_AUDIO) < 0) {
            std::cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << std::endl;
        }

        mDeviceID = SDL_OpenAudioDevice(nullptr, 0, &requested, &obtained, 0);
        if (mDeviceID == 0) {
            std::cout << "SDL audio initialization failed. SDL Error: " << SDL_GetError() << std::endl;
        }
    }

    void Synthesizer::close() {
        SDL_CloseAudioDevice(mDeviceID);
    }

    void Synthesizer::unpause() {
        SDL_PauseAudioDevice(mDeviceID, 0);
    }

    void Synthesizer::pause() {
        SDL_PauseAudioDevice(mDeviceID, 1);
    }

}; // namespace VSSynth
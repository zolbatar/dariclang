#pragma once

#include "../SoundGenerator.h"

#include <functional>
#include <mutex>
#include <vector>

namespace VSSynth
{
    namespace Generators
    {

        /**
         * @brief Generates a given tone at multiple frequencies.
         */
        class ToneCustom : public SoundGenerator
        {
        public:
            /**
             * @brief Construct a new Tone object
             * 
             * @param wave : soundwave to output
             */
            ToneCustom(const std::function<double(double, double, size_t)> wave);
            virtual ~ToneCustom();

            double sample(double time);

            /**
             * @brief Plays the waveform at the given frequency
             * 
             * @param frequency 
             */
            void playNote(double frequency);

            /**
             * @brief Stops playing the waveform at the given frequency
             * 
             * @param frequency 
             */
            void stopNote(double frequency);

            size_t index;

            std::function<double(double, double, size_t)> GetmWave() { return mWave; }

        private:
            std::mutex mNoteLock;
            std::vector<double> mNotes;

            std::function<double(double, double, size_t)> mWave;
        };

    } // namespace Generators
};    // namespace VSSynth
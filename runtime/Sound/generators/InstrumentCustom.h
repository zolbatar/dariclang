#pragma once

#include <functional>

#include "../utils/Envelope.h"
#include "../SoundGenerator.h"

namespace VSSynth
{
    namespace Generators
    {
        /**
         * @brief Device capable of playing multiple notes with an ADSR envelope 
         */
        class InstrumentCustom : public SoundGenerator
        {
        public:
            InstrumentCustom(std::function<double(double, double, size_t)>
            wave);

            virtual ~InstrumentCustom();

            /**
             * @brief Samples the instrument at the given time
             * 
             * @param time
             * @return double 
             */
            virtual double sample(double time) = 0;

            /**
             * @brief Holds the given note
             * 
             * @param frequency - the note
             */
            virtual void holdNote(double frequency) = 0;
            /**
             * @brief Releases the given note
             * 
             * @param frequency - the note
             */
            virtual void releaseNote(double frequency) = 0;

        protected:
            std::function<double(double, double, size_t)> mWave;
        };
    } // namespace Generators
} // namespace VSSynth
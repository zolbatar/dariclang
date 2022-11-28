#include "ToneCustom.h"

namespace VSSynth
{
    namespace Generators
    {

        ToneCustom::ToneCustom(const std::function<double(double, double, size_t)> wave)
                : mWave(wave)
        {
        }

        ToneCustom::~ToneCustom()
        {
        }

        double ToneCustom::sample(double time)
        {
            double sample = 0;

            // Trylock since we don't want the thread that samples to block
            if (mNoteLock.try_lock()) {
                for (auto it = mNotes.begin(); it != mNotes.end(); it++) {
                    sample += mWave(*it, time, index);
                }
                mNoteLock.unlock();
            }
            return sample;
        }

        void ToneCustom::playNote(double frequency)
        {
            mNoteLock.lock();
            auto it = std::find(mNotes.begin(), mNotes.end(), frequency);
            if (it == mNotes.end()) {
                mNotes.push_back(frequency);
            }
            mNoteLock.unlock();
        }

        void ToneCustom::stopNote(double frequency)
        {
            mNoteLock.lock();
            auto it = std::find(mNotes.begin(), mNotes.end(), frequency);
            if (it != mNotes.end()) {
                mNotes.erase(it);
            }
            mNoteLock.unlock();
        }

    }; // namespace Generators
} // namespace VSSynth
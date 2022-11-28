#include "PolyphonicInstrumentCustom.h"

#include <algorithm>

namespace VSSynth {
    namespace Generators {

        PolyphonicInstrumentCustom::PolyphonicInstrumentCustom(
                std::function<double(double, double, size_t)> wave,
                const ADSREnvelope &adsr)
                : InstrumentCustom(wave), mADSR(adsr), mPrevSample(0) {
        }

        PolyphonicInstrumentCustom::~PolyphonicInstrumentCustom() {
        }

        double PolyphonicInstrumentCustom::sample(double time) {
            double delta = time - mPrevSample;
            mPrevSample = time;

            double sample = 0;
            if (mEnvLock.try_lock()) {
                for (auto it = mEnvelopes.begin(); it != mEnvelopes.end(); it++) {
                    it->second.update(delta);
                    sample += mWave(it->first, time, index) * it->second.getAmplitude();
                }
                mEnvLock.unlock();
            }
            return sample;
        }

        void PolyphonicInstrumentCustom::holdNote(double frequency) {
            mEnvLock.lock();
            auto it = std::find_if(mEnvelopes.begin(), mEnvelopes.end(),
                                   [frequency](std::pair<double, Envelope> a) { return a.first == frequency; });
            if (it == mEnvelopes.end()) {
                mEnvelopes.push_back({frequency, Envelope(mADSR)});
                mEnvelopes.back().second.hold();
            } else {
                it->second.hold();
            }
            mEnvLock.unlock();
        }

        void PolyphonicInstrumentCustom::releaseNote(double frequency) {
            mEnvLock.lock();
            auto it = std::find_if(mEnvelopes.begin(), mEnvelopes.end(),
                                   [frequency](std::pair<double, Envelope> a) { return a.first == frequency; });
            it->second.release();
            mEnvLock.unlock();
        }
    } // namespace Generators
} // namespace VSSynth
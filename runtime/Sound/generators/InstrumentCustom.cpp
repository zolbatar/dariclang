#include "InstrumentCustom.h"

#include <algorithm>

namespace VSSynth {
    namespace Generators {

        InstrumentCustom::InstrumentCustom(
                std::function<double(double, double, size_t)> wave)
                : mWave(wave) {
        }

        InstrumentCustom::~InstrumentCustom() {
        }

    } // namespace Generators
} // namespace VSSynth
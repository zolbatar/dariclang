#include <cmath>
#include "Types.h"

#ifndef M_PI
#define M_PI    3.14159265358979323846264338327950288   /**< pi */
#endif

extern "C" T_F pi() {
    return M_PI;
}

extern "C" T_F my_atan(T_F v) {
    return std::atan(v);
}

extern "C" T_F deg(T_F v) {
    return (v * 180.0) / M_PI;
}

extern "C" T_F rad(T_F v) {
    return (v * M_PI) / 180.0;
}

extern "C" T_I sgn(T_F v1) {
    int64_t r = 0;
    if (v1 < 0) {
        r = -1;
    } else if (v1 > 0) {
        r = 1;
    }
    return r;
}

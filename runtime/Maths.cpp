#include <cmath>

#ifndef M_PI
#define M_PI    3.14159265358979323846264338327950288   /**< pi */
#endif

extern "C" double pi() {
    return M_PI;
}

extern "C" double deg(double v) {
    return (v * 180.0) / M_PI;
}

extern "C" double rad(double v) {
    return (v * M_PI) / 180.0;
}

extern "C" int64_t sgn(double v1) {
    int64_t r = 0;
    if (v1 < 0) {
        r = -1;
    } else if (v1 > 0) {
        r = 1;
    }
    return r;
}

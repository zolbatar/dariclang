#include <random>
#include <iostream>
#include "Types.h"

std::default_random_engine re;

extern "C" T_I rndi(T_I upper_bound) {
    int lower_bound = 0;
    std::uniform_int_distribution<int> unif(lower_bound, upper_bound);
    auto r = unif(re);
    return r;
}

extern "C" T_F rndf(T_F upper_bound) {
    double lower_bound = 0.0;
    std::uniform_real_distribution<double> unif(lower_bound, upper_bound);
    return unif(re);
}

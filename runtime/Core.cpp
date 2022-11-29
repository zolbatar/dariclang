#include <iostream>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include "Types.h"

extern "C" void daric_end() {
    exit(0);
}

extern "C" void __sleep(double time) {
    long t = time * 1000.0;
    std::this_thread::sleep_for(std::chrono::milliseconds(t));
}

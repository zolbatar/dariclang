#include <iostream>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include "Types.h"
#include "UI/UISDL.h"

extern std::atomic_bool done;

extern "C" DLLEXTERN void daric_end() {
    std::cout << "Program terminated" << std::endl;
    done.store(true);
    while (1);
}

extern "C" DLLEXTERN void __sleep(double time) {
    long t = time * 1000.0;
    std::this_thread::sleep_for(std::chrono::milliseconds(t));
}

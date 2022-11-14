#include <iostream>
#include <stdlib.h>

extern "C" void daric_end() {
    std::cout << "END - program terminated" << std::endl;
    exit(0);
}
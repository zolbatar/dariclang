#include <iostream>
#include <stdlib.h>

extern "C" void daric_end() {
    std::cout << "Yeah!!" << std::endl;
    exit(0);
}
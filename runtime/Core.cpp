#include <iostream>
#include <stdlib.h>
#include "Types.h"

extern "C" void daric_end() {
    std::cout << "Yeah!!" << std::endl;
    exit(0);
}
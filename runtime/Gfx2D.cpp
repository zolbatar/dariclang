#include <iostream>
#include "Types.h"
#include "UI/UISDL.h"

extern UISDL ui;
extern std::atomic_bool start_ui;

extern "C" void gfx2d_mode(T_I w, T_I h) {
    std::cout << w << h << std::endl;
    start_ui = true;
}

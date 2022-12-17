#include "Types.h"
#include "Input/Input.h"

extern Input input;

extern "C" T_S Input() {
    auto s = input.InputLine();
    auto m = (char *) malloc(s.length() + 1);
    strcpy(m, s.c_str());
    return m;
}
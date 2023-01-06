#include "Types.h"
#include "Input/Input.h"

extern Input input;

extern "C" void gfx_uicheck();
extern "C" T_I string_to_int(T_S v);
extern "C" T_F string_to_float(T_S v);

extern "C" DLLEXTERN T_S InputString() {
    gfx_uicheck();
    auto s = input.InputLine();
    auto m = (char *) malloc(s.length() + 1);
    strcpy(m, s.c_str());
    return m;
}

extern "C" DLLEXTERN T_I InputInt() {
    gfx_uicheck();
    auto s = input.InputLine();
    return string_to_int(s.c_str());
}

extern "C" DLLEXTERN T_F InputFloat() {
    gfx_uicheck();
    auto s = input.InputLine();
    return string_to_float(s.c_str());
}

extern "C" DLLEXTERN T_B InputByte() {
    gfx_uicheck();
    auto s = input.InputLine();
    return string_to_int(s.c_str());
}
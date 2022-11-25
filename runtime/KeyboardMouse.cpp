#include "Types.h"
#include "Input/Input.h"

extern Input input;

extern "C" T_I kbm_waitkey(T_I timeout) {
    auto v = input.Inkey(timeout);
    return v;
}

extern "C" T_S kbm_waitkeys(T_I timeout) {
    auto v = input.Inkeys(timeout);
    auto m = (char *) malloc(v.length() + 1);
    strcpy(m, v.c_str());
    return m;
}

extern "C" T_I kbm_keydown(T_I key) {
    auto v = input.Inkey(-key - 1);
    return v;
}

extern "C" T_I kbm_escape_pressed() {
    return input.IsEscapePressed();
}

extern "C" T_I kbm_get() {
    auto v = input.Get();
    return v;
}

extern "C" T_S kbm_gets() {
    std::string v = input.GetString();
    auto m = (char *) malloc(v.length() + 1);
    strcpy(m, v.c_str());
    return m;
}

extern "C" T_I kbm_mousex() {
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return x;
}

extern "C" T_I kbm_mousey() {
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return y;
}

extern "C" T_I kbm_mousestate() {
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return state;
}
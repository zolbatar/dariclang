#include "Types.h"
#include "Input/Input.h"
#include <iostream>

extern Input input;
extern std::atomic_bool ui_started;

extern "C" void gfx_uicheck();

extern "C" void kbm_clear() {
    gfx_uicheck();
    input.Clear();
}

extern "C" T_I kbm_waitkey(T_I timeout) {
    gfx_uicheck();
    auto v = input.Waitkey(timeout);
    return v;
}

extern "C" T_S kbm_waitkeys(T_I timeout) {
    gfx_uicheck();
    auto v = input.Waitkeys(timeout);
    auto m = (char *) malloc(v.length() + 1);
    strcpy(m, v.c_str());
    return m;
}

extern "C" T_I kbm_keydown(T_I key) {
    gfx_uicheck();
    auto v = input.CheckKey(key);
    return v;
}

extern "C" T_I kbm_escape_pressed() {
    if (!ui_started)
        return false;
    return input.IsEscapePressed();
}

extern "C" T_I kbm_get() {
    gfx_uicheck();
    auto v = input.Get();
    return v;
}

extern "C" T_S kbm_gets() {
    gfx_uicheck();
    std::string v = input.GetString();
    auto m = (char *) malloc(v.length() + 1);
    strcpy(m, v.c_str());
    return m;
}

extern "C" T_I kbm_mousex() {
    gfx_uicheck();
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return x;
}

extern "C" T_I kbm_mousey() {
    gfx_uicheck();
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return y;
}

extern "C" T_I kbm_mousestate() {
    gfx_uicheck();
    int x, y, state;
    input.Mouse(&x, &y, &state);
    return state;
}
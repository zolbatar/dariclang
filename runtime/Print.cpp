#include "Types.h"
#include "UI/UISDL.h"

extern Console console;
extern std::atomic_bool ui_started;

extern "C" void PrintInteger(T_I v) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, "%lld", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintFloat(T_F v) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, "%f", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintByte(T_B v) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, "%d", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintString(T_S v) {
    if (ui_started)
        console.WriteString(v);
}

extern "C" void PrintIntegerFormat(T_I v, const char *f) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintFloatFormat(T_F v, const char *f) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintByteFormat(T_B v, const char *f) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintStringFormat(const char *v, const char *f) {
    if (ui_started) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintNewline() {
    if (ui_started)
        console.WriteString("\n");
}

/* Sys variants */
extern "C" void PrintInteger_sys(T_I v) {
    printf("%lld", v);
}

extern "C" void PrintFloat_sys(T_F v) {
    printf("%f", v);
}

extern "C" void PrintByte_sys(T_B v) {
    printf("%d", v);
}

extern "C" void PrintString_sys(T_S v) {
    printf("%s", v);
}

extern "C" void PrintIntegerFormat_sys(T_I v, const char *f) {
    printf(f, v);
}

extern "C" void PrintFloatFormat_sys(T_F v, const char *f) {
    printf(f, v);
}

extern "C" void PrintByteFormat_sys(T_B v, const char *f) {
    printf(f, v);
}

extern "C" void PrintStringFormat_sys(const char *v, const char *f) {
    printf(f, v);
}

extern "C" void PrintNewline_sys() {
    printf("\n");
}
#include "Types.h"
#include "UI/UISDL.h"

extern Console console;
extern std::atomic_bool ui_started;

extern "C" DLLEXTERN void PrintInteger(T_I v) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, "%lld", v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintFloat(T_F v) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, "%f", v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintByte(T_B v) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, "%d", v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintString(T_S v) {
    if (ui_started.load())
        console.WriteString(v);
}

extern "C" DLLEXTERN void PrintIntegerFormat(T_I v, const char *f) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintFloatFormat(T_F v, const char *f) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintByteFormat(T_B v, const char *f) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintStringFormat(const char *v, const char *f) {
    if (ui_started.load()) {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" DLLEXTERN void PrintNewline() {
    if (ui_started.load())
        console.WriteString("\n");
}

/* Sys variants */
extern "C" DLLEXTERN void PrintInteger_sys(T_I v) {
    printf("%lld", v);
}

extern "C" DLLEXTERN void PrintFloat_sys(T_F v) {
    printf("%f", v);
}

extern "C" DLLEXTERN void PrintByte_sys(T_B v) {
    printf("%d", v);
}

extern "C" DLLEXTERN void PrintString_sys(T_S v) {
    printf("%s", v);
}

extern "C" DLLEXTERN void PrintIntegerFormat_sys(T_I v, const char *f) {
    printf(f, v);
}

extern "C" DLLEXTERN void PrintFloatFormat_sys(T_F v, const char *f) {
    printf(f, v);
}

extern "C" DLLEXTERN void PrintByteFormat_sys(T_B v, const char *f) {
    printf(f, v);
}

extern "C" DLLEXTERN void PrintStringFormat_sys(const char *v, const char *f) {
    printf(f, v);
}

extern "C" DLLEXTERN void PrintNewline_sys() {
    printf("\n");
}
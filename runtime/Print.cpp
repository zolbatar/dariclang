#include "Types.h"
#include "UI/UISDL.h"

extern Console console;
extern bool ui_started;

extern "C" void PrintInteger(T_I v) {
    if (!ui_started) {
        printf("%lld", v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, "%lld", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintFloat(T_F v) {
    if (!ui_started) {
        printf("%f", v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, "%f", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintByte(T_B v) {
    if (!ui_started) {
        printf("%d", v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, "%d", v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintString(T_S v) {
    if (!ui_started)
        printf("%s", v);
    else
        console.WriteString(v);
}

extern "C" void PrintIntegerFormat(T_I v, const char *f) {
    if (!ui_started) {
        printf(f, v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintFloatFormat(T_F v, const char *f) {
    if (!ui_started) {
        printf(f, v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintByteFormat(T_B v, const char *f) {
    if (!ui_started) {
        printf(f, v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintStringFormat(const char *v, const char *f) {
    if (!ui_started) {
        printf(f, v);
    } else {
        char buffer[256];
        snprintf(buffer, 256, f, v);
        console.WriteString(buffer);
    }
}

extern "C" void PrintNewline() {
    if (!ui_started)
        printf("\n");
    else
        console.WriteString("\n");
}
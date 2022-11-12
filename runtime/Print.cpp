#include <iostream>
#include "Types.h"

extern "C" void PrintInteger(T_I v) {
    printf("%lld", v);
}

extern "C" void PrintFloat(T_F v) {
    printf("%f", v);
}

extern "C" void PrintByte(T_B v) {
    printf("%d", v);
}

extern "C" void PrintString(T_S v) {
    printf("%s", v);
}

extern "C" void PrintIntegerFormat(T_I v, const char *f) {
    printf(f, v);
}

extern "C" void PrintFloatFormat(T_F v, const char *f) {
    printf(f, v);
}

extern "C" void PrintByteFormat(T_B v, const char *f) {
    printf(f, v);
}

extern "C" void PrintStringFormat(const char *v, const char *f) {
    printf(f, v);
}

extern "C" void PrintNewline() {
    std::cout << std::endl;
}
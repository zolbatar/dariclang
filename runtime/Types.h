#pragma once
#include <cstdint>

typedef int64_t T_I;
typedef double T_F;
typedef const char *T_S;
typedef uint8_t T_B;

#ifdef _WIN64
#define DLLEXTERN __declspec(dllexport)
#else
#define DLLEXTERN
#endif

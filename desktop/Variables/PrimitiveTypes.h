#pragma once

typedef int64_t T_I;
typedef double T_F;
typedef const char *T_S;
typedef uint8_t T_B;

enum class Scope {
    UNKNOWN,
    LOCAL,
    GLOBAL,
};

enum class Primitive {
    NONE,
    INT,
    FLOAT,
    STRING,
    BYTE
};

struct TypeOrStruct {
    bool is_struct = false;
    Primitive type;
    std::string name;
};



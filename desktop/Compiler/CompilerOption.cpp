#include "Compiler.h"

void Compiler::TokenOptionBase(ParserToken &t) {
    if (t.iv == 0) {
        option_base = false;
    } else if (t.iv == 1) {
        option_base = true;
    }
}


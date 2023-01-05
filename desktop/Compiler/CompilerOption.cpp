#include "Compiler.h"

void Compiler::TokenOptionBase(ParserToken &t) {
    if (t.literal.iv == 0) {
        option_base = false;
    } else if (t.literal.iv == 1) {
        option_base = true;
    }
}


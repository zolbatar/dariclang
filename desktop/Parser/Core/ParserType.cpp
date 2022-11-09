#include "../Parser.h"

std::any Parser::visitType(DaricParser::TypeContext *context) {
    if (context->INT()) {
        return Type::Int();
    } else if (context->FLOAT()) {
        return Type::Float();
    } else if (context->STRING()) {
        return Type::String();
    } else if (context->BYTE()) {
        return Type::Byte();
    }
    RaiseException("Unknown type", context);
    return NULL;
}

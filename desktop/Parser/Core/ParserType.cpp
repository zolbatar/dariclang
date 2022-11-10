#include "../Parser.h"

std::any Parser::visitType(DaricParser::TypeContext *context) {
    if (context->INT()) {
        return Primitive::INT;
    } else if (context->FLOAT()) {
        return Primitive::FLOAT;
    } else if (context->STRING()) {
        return Primitive::STRING;
    } else if (context->BYTE()) {
        return Primitive::BYTE;
    }
    RaiseException("Unknown type", context);
    return NULL;
}

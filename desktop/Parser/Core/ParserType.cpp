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

std::any Parser::visitTypeOrStruct(DaricParser::TypeOrStructContext *context) {
    if (context->INT()) {
        return TypeOrStruct{.type =Primitive::INT};
    } else if (context->FLOAT()) {
        return TypeOrStruct{.type =Primitive::FLOAT};
    } else if (context->STRING()) {
        return TypeOrStruct{.type =Primitive::STRING};
    } else if (context->BYTE()) {
        return TypeOrStruct{.type =Primitive::BYTE};
    } else {
        return TypeOrStruct{.is_struct = true, .name = context->IDENTIFIER()->getText()};
    }
}


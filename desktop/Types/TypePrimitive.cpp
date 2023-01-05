#include "TypePrimitive.h"

TypePrimitive::TypePrimitive(PrimitiveClass type, Scope scope) {
    this->clazz = SignatureClass::Primitive;
    this->primitive_type = type;
    this->scope = scope;
}

TypePrimitive::TypePrimitive(DaricParser::TypeSignatureSingleContext *context, Scope scope) {
    if (context->COLON()) {
        if (context->INT()) {
        }
    } else {
        // No type, assume INT
        signatures.emplace(
                context->IDENTIFIER()->getText(),
                std::make_shared<TypePrimitive>(TypePrimitive(PrimitiveClass::INT, scope)));
    }
}

bool TypePrimitive::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypePrimitive &>(other);
    if (ct.GetPrimitiveType() != this->primitive_type)
        return false;
    return true;
}

bool TypePrimitive::Matches(DaricParser::TypeSignatureSingleContext *context) {
    if (context->COLON()) {
        // Type is defined
        if (context->INT()) {
        }
    } else {
        // No type, assume INT
    }

    return false;
}

PrimitiveClass TypePrimitive::GetPrimitiveType() {
    return primitive_type;
}

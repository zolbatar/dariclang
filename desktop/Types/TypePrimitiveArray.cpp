#include "TypePrimitiveArray.h"

TypePrimitiveArray::TypePrimitiveArray(PrimitiveClass type, size_t num_dimensions, Scope scope)
        : TypePrimitive(type, scope) {
    this->clazz = SignatureClass::PrimitiveArray;
    this->num_dimensions = num_dimensions;
}

bool TypePrimitiveArray::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypePrimitive &>(other);
    if (ct.GetPrimitiveType() != this->primitive_type)
        return false;
    return true;
}

bool TypePrimitiveArray::Matches(DaricParser::TypeSignatureArrayContext *context) {
    return false;
}

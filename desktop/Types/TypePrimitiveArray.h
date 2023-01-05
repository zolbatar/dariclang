#pragma once

#include "TypePrimitive.h"

class TypePrimitiveArray : public TypePrimitive {
public:
    TypePrimitiveArray(PrimitiveClass type, size_t num_dimensions, Scope scope);
    bool operator==(TypeSignature &other) override;
    bool Matches(DaricParser::TypeSignatureArrayContext *context);
protected:
    size_t num_dimensions;
};
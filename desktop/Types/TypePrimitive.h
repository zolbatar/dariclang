#pragma once

#include "TypeSignature.h"

class TypePrimitive : public TypeSignature {
public:
    TypePrimitive(PrimitiveClass type, Scope scope);
    TypePrimitive(DaricParser::TypeSignatureSingleContext *context, Scope scope);
    bool operator==(TypeSignature &other) override;
    bool Matches(DaricParser::TypeSignatureSingleContext *context);
    PrimitiveClass GetPrimitiveType();
protected:
    PrimitiveClass primitive_type;
};
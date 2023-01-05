#pragma once

#include "TypeSignature.h"

class TypePrimitive : public TypeSignature {
public:
    TypePrimitive(Primitive type, std::string name, Scope scope);
    static std::shared_ptr<TypeSignature> Create(Scope scope, std::string name, Primitive *type);
    bool operator==(TypeSignature &other) override;
    bool Matches(Primitive *type);
protected:
    Primitive primitive_type;
};
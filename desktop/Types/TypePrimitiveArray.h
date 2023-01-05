#pragma once

#include "TypePrimitive.h"

class TypePrimitiveArray : public TypePrimitive {
public:
    TypePrimitiveArray(Primitive type, std::string name, Scope scope, std::list<ParserToken> expressions);
    static std::shared_ptr<TypeSignature> Create(Scope scope, std::string name, Primitive *type, std::list<ParserToken> expressions);
    bool operator==(TypeSignature &other) override;
    bool Matches(Primitive *type, std::list<ParserToken> &expressions);
protected:
    std::list<ParserToken> expressions;
    size_t num_dimensions;
};
#include "TypePrimitive.h"

TypePrimitive::TypePrimitive(Primitive type, std::string name, Scope scope) {
    this->clazz = SignatureClass::Primitive;
    this->primitive_type = type;
    this->scope = scope;
    this->name = name;
}

std::shared_ptr<TypeSignature> TypePrimitive::Create(Scope scope, std::string name, Primitive *type) {
    std::shared_ptr<TypePrimitive> v = nullptr;
    if (type) {
        v = std::make_shared<TypePrimitive>(TypePrimitive(*type, name, scope));
    } else {
        // No type, assume INT
        v = std::make_shared<TypePrimitive>(TypePrimitive(Primitive::INT, name, scope));
    }
    signatures_by_index.push_back(v);
    signatures.emplace(name, v);
    return v;
}

bool TypePrimitive::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypePrimitive &>(other);
    if (ct.primitive_type != this->primitive_type)
        return false;
    return true;
}

bool TypePrimitive::Matches(Primitive *type) {
    if (type) {
        return this->primitive_type == *type;
    } else {
        // No type, assume INT
        if (this->primitive_type == Primitive::INT)
            return true;
    }

    return false;
}

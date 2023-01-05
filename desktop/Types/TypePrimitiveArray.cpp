#include "TypePrimitiveArray.h"

TypePrimitiveArray::TypePrimitiveArray(Primitive type, std::string name, Scope scope, std::list<ParserToken> expressions)
        : TypePrimitive(type, name, scope) {
    this->clazz = SignatureClass::PrimitiveArray;
    this->num_dimensions = expressions.size();
    this->expressions = expressions;
}

std::shared_ptr<TypeSignature> TypePrimitiveArray::Create(Scope scope, std::string name, Primitive *type, std::list<ParserToken> expressions) {
    std::shared_ptr<TypePrimitiveArray> v = nullptr;

    if (type) {
        v = std::make_shared<TypePrimitiveArray>(TypePrimitiveArray(*type, name, scope, expressions));
    } else {
        // No type, assume INT
        v = std::make_shared<TypePrimitiveArray>(TypePrimitiveArray(Primitive::INT, name, scope, expressions));
    }
    signatures_by_index.push_back(v);
    signatures.emplace(name, v);
    return v;
}

bool TypePrimitiveArray::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypePrimitiveArray &>(other);
    if (ct.primitive_type != this->primitive_type)
        return false;
    if (ct.num_dimensions != this->num_dimensions)
        return false;
    return true;
}

bool TypePrimitiveArray::Matches(Primitive *type, std::list<ParserToken> &expressions) {
    return false;
}

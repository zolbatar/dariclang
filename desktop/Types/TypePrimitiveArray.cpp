#include "TypePrimitiveArray.h"

TypePrimitiveArray::TypePrimitiveArray(SourceFileData &state,
                                       Primitive type,
                                       std::string name,
                                       Scope scope,
                                       std::list<ParserToken> expressions)
        : TypePrimitive(state, type, name, scope) {
    this->clazz = SignatureClass::PrimitiveArray;
    this->num_dimensions = expressions.size();
    this->expressions = expressions;
}

std::shared_ptr<TypeSignature> TypePrimitiveArray::Create(SourceFileData &state,
                                                          Scope scope,
                                                          std::string name,
                                                          Primitive type,
                                                          std::list<ParserToken> expressions) {
    std::shared_ptr<TypePrimitiveArray> v = std::make_shared<TypePrimitiveArray>(TypePrimitiveArray(state, type, name, scope, expressions));
    signatures_by_index.push_back(v);
    signatures.emplace(name, v);
    return v;
}

std::shared_ptr<TypeSignature> TypePrimitiveArray::CreateLink(SourceFileData &state,
                                                              std::list<ParserToken> expressions) {
    std::shared_ptr<TypePrimitiveArray> v = std::make_shared<TypePrimitiveArray>(TypePrimitiveArray(state, primitive_type, name, scope, expressions));
    signatures_by_index.push_back(v);
    signatures.emplace(name + GetLatestInstanceIndex(), v);
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

bool TypePrimitiveArray::Matches(Primitive type, std::list<ParserToken> &expressions) {
    if (expressions.size() != num_dimensions)
        return false;
    if (type == Primitive::NONE)
        return true;
    return this->primitive_type == type;
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypePrimitiveArray::FindInstanceArray(
        std::string name,
        Primitive type,
        std::list<ParserToken> &expressions) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::PrimitiveArray)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    // Now specific class matching
    auto ct = std::dynamic_pointer_cast<TypePrimitiveArray>(sig->second);
    if (ct.get()->Matches(type, expressions)) {
        return std::make_tuple(FindResult::OK, sig->second);
    }

    return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

void TypePrimitiveArray::Create(SignatureCall &call) {

    // Create
    for (auto &s: GetExpressions()) {
        auto vt = call.exprcompile(s);
        if (vt.type != Primitive::INT) {
            RaiseException("For arrays, dimensions need to be integers", s);
        }
        values.push_back(vt);
    }

    switch (scope) {
        case Scope::GLOBAL: {
            if (!call.llvm.GetGlobalArrayDimensions(name))
                CreateGlobalDimensions(call, primitive_type);
        }
        case Scope::LOCAL: {
            if (!call.llvm.GetLocalArrayDimensions(name))
                CreateLocalDimensions(call, primitive_type);
        }
    }
    created = true;
}

ValueType TypePrimitiveArray::Get(SignatureCall &call) {
    ValueType vt;
    vt.type = primitive_type;
    vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(primitive_type),
                                   scope == Scope::GLOBAL ? GlobalIndex(call) : LocalIndex(call));
    return vt;
}

void TypePrimitiveArray::Set(SignatureCall &call, ValueType value) {
    assert(value.type == primitive_type);
    call.ir->CreateStore(value.value, scope == Scope::GLOBAL ? GlobalIndex(call) : LocalIndex(call));
}

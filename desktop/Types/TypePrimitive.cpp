#include "TypePrimitive.h"

TypePrimitive::TypePrimitive(SourceFileData &state, Primitive type, std::string name, Scope scope) : TypeSignature(state) {
    this->index = index_ptr++;
    this->clazz = SignatureClass::Primitive;
    this->primitive_type = type;
    this->scope = scope;
    this->name = name;
}

std::shared_ptr<TypeSignature> TypePrimitive::Create(SourceFileData &state, Scope scope, std::string name, Primitive type) {
    std::shared_ptr<TypePrimitive> v = std::make_shared<TypePrimitive>(TypePrimitive(state, type, name, scope));
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

bool TypePrimitive::Matches(Primitive type) {
    if (type == Primitive::NONE)
        return true;
    return this->primitive_type == type;
}

Primitive TypePrimitive::GetPrimitiveType(SignatureCall &call) {
    return primitive_type;
}

void TypePrimitive::SetPrimitiveType(Primitive primitive_type) {
    this->primitive_type = primitive_type;
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypePrimitive::FindInstanceSingle(
        std::string name,
        Primitive type) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::Primitive)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    // Now specific class matching
    auto ct = std::dynamic_pointer_cast<TypePrimitive>(sig->second);
    if (ct.get()->Matches(type)) {
        return std::make_tuple(FindResult::OK, sig->second);
    }

    return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

void TypePrimitive::SetAsConstant() {
    constant = true;
}

void TypePrimitive::Create(SignatureCall &call) {
    if (!constant) {
        switch (scope) {
            case Scope::LOCAL:
                call.llvm.CreateLocal(name, primitive_type, call.ir, is_ref);
                break;
            case Scope::GLOBAL:
                call.llvm.CreateGlobal(name, primitive_type, call.llvm.GetDefaultForType(primitive_type, call.ir));
                break;
        }
    } else {
        assert(scope == Scope::GLOBAL);
        switch (primitive_type) {
            case Primitive::BYTE:
                call.llvm.CreateConstant(name,
                                         primitive_type,
                                         call.llvm.CreateConstantInt(primitive_type, call.token.literal.iv));
                break;
            case Primitive::INT:
                call.llvm.CreateConstant(name,
                                         primitive_type,
                                         call.llvm.CreateConstantInt(primitive_type, call.token.literal.iv));
                break;
            case Primitive::FLOAT:
                call.llvm.CreateConstant(name,
                                         primitive_type,
                                         call.llvm.CreateConstantFloat(primitive_type, call.token.literal.fv));
                break;
            case Primitive::STRING:
                call.llvm.CreateConstant(name,
                                         primitive_type,
                                         call.llvm.CreateConstantString(call.ir_implicit,
                                                                        call.func_implicit,
                                                                        primitive_type,
                                                                        call.token.literal.sv.c_str(),
                                                                        name));
                break;
            default:
                assert(0);
        }
    }
    created = true;
}

ValueType TypePrimitive::Get(SignatureCall &call) {
    ValueType vt;
    vt.value = nullptr;
    if (scope == Scope::GLOBAL) {
        vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(call.llvm.globals_type[name]), call.llvm.globals[name]);
        vt.type = call.llvm.globals_type[name];
    } else {
        vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(call.llvm.locals_type[name]), call.llvm.locals[name]);
        vt.type = call.llvm.locals_type[name];
    }
    assert(vt.type == primitive_type);
    return vt;
}

void TypePrimitive::Set(SignatureCall &call, ValueType value) {
    // Do conversion
    call.llvm.AutoConversion(call.ir, value, primitive_type);
    if (value.type != primitive_type) {
        TypeError(call.token);
    }

    if (!constant) {
        assert(value.type == primitive_type);
        switch (scope) {
            case Scope::GLOBAL:
                call.ir->CreateStore(value.value, call.llvm.globals[name]);
                break;
            case Scope::LOCAL:
                call.ir->CreateStore(value.value, call.llvm.locals[name]);
                break;
        }
    } else {
        RaiseException("Can't change the value of constants", call.token);
    }
}

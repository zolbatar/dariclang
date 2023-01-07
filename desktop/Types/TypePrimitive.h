#pragma once

#include "TypeSignature.h"

class TypePrimitive : public TypeSignature {
public:
    TypePrimitive(SourceFileData &state, Primitive type, std::string name, Scope scope);
    static std::shared_ptr<TypeSignature> Create(SourceFileData &state, Scope scope, std::string name, Primitive type);
    bool operator==(TypeSignature &other) override;
    bool Matches(Primitive type);
    Primitive GetPrimitiveType(SignatureCall &call) override;
    llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) override {
        if (!is_ref) {
            return call.llvm.TypeConversion(primitive_type);
        } else {
            return llvm::PointerType::get(call.llvm.TypeConversion(primitive_type), 0);
        }
    };
    void SetPrimitiveType(Primitive primitive_type);
    void Create(SignatureCall &call) override;
    void CreateConstant(SignatureCall &call);
    ValueType Get(SignatureCall &call) override;
    void Set(SignatureCall &call, ValueType value) override;
    void SetAsConstant();
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceSingle(
            std::string name,
            Primitive type);
protected:
    Primitive primitive_type;
    bool constant = false;
};
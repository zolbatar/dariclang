#pragma once

#include "TypePrimitive.h"

class TypePrimitiveArray : public TypePrimitive {
public:
    TypePrimitiveArray(SourceFileData &state,
                       Primitive type,
                       std::string name,
                       Scope scope,
                       std::list<ParserToken> expressions);
    static std::shared_ptr<TypeSignature> Create(SourceFileData &state,
                                                 Scope scope,
                                                 std::string name,
                                                 Primitive type,
                                                 std::list<ParserToken> expressions);
    std::shared_ptr<TypeSignature> CreateLink(SourceFileData &state,
                                              std::list<ParserToken> expressions);
    bool operator==(TypeSignature &other) override;
    bool Matches(Primitive type, std::list<ParserToken> &expressions);
    void Create(SignatureCall &call) override;
    llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) override {
        if (!is_ref) {
            return call.llvm.TypeConversion(primitive_type);
        } else {
            return llvm::PointerType::get(call.llvm.TypeConversion(primitive_type), 0);
        }
    };
    ValueType Get(SignatureCall &call) override;
    void Set(SignatureCall &call, ValueType value) override;
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceArray(
            std::string name,
            Primitive type,
            std::list<ParserToken> &expressions);
    void CreateLocalDimensions(SignatureCall &call, Primitive primitive_type);
    void CreateGlobalDimensions(SignatureCall &call, Primitive primitive_type);
};
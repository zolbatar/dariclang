#pragma once

#include "TypeSignature.h"

class TypeRecord : public TypeSignature {
public:
    TypeRecord(SourceFileData &state,
               std::string name,
               std::string struct_name,
               std::list<ParserToken> initialisers,
               Scope scope);
    static std::shared_ptr<TypeSignature> Create(SourceFileData &state,
                                                 Scope scope,
                                                 std::string name,
                                                 std::string struct_name,
                                                 std::list<ParserToken> initialisers);
    std::shared_ptr<TypeSignature> CreateLink(SourceFileData &state,
                                              std::string field);
    bool operator==(TypeSignature &other) override;
    bool Matches(std::string struct_name);
    Primitive GetPrimitiveType(SignatureCall &call) override;
    void Create(SignatureCall &call) override;
    ValueType Get(SignatureCall &call) override;
    bool HasField(std::string field);
    llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) override {
        auto ss = call.llvm.GetStruct(struct_name);
        if (ss == nullptr)
            return nullptr;
        return llvm::PointerType::get(ss, 0);
    };
    void Set(SignatureCall &call, ValueType value) override;
    void SetField(std::string field);
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordSingle(
            std::string name,
            std::string struct_name);
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordSingle(
            std::string name);
protected:
    std::string struct_name;
    std::string field_name;

    StructInfo *GetStructInfo();
};
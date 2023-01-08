#pragma once

#include "TypeSignature.h"
#include "TypeRecord.h"

class TypeRecordArray : public TypeRecord {
public:
    TypeRecordArray(SourceFileData &state,
                    std::string name,
                    std::string struct_name,
                    std::list<ParserToken> expressions,
                    Scope scope);
    static std::shared_ptr<TypeSignature> Create(SourceFileData &state,
                                                 Scope scope,
                                                 std::string name,
                                                 std::string struct_name,
                                                 std::list<ParserToken> expressions);
    std::shared_ptr<TypeSignature> CreateLink(SourceFileData &state,
                                              std::string field);
    bool operator==(TypeSignature &other) override;
    bool Matches(std::string struct_name,
                 std::list<ParserToken> &expressions);
    void Create(SignatureCall &call) override;
    ValueType Get(SignatureCall &call) override;
    llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) override {
        auto ss = call.llvm.GetStruct(struct_name);
        if (ss == nullptr)
            return nullptr;
        return llvm::PointerType::get(ss, 0);
    };
    void Set(SignatureCall &call, ValueType value) override;
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordArray(
            std::string name,
            std::string struct_name,
            std::list<ParserToken> &expressions);
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordArray(
            std::string name,
            std::list<ParserToken> &expressions);
    void CreateLocalDimensions(SignatureCall &call, llvm::StructType *type2);
    void CreateGlobalDimensions(SignatureCall &call, llvm::StructType *type2);
};
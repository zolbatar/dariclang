#pragma once

#include <utility>
#include "../Exception/Exception.h"
#include "../Parser/ParserToken.h"
#include "../Variables/Shared.h"
#include "../LLVM/CompilerLLVM.h"
#include "Instance.h"

struct StructSearch {
    StructMember *member;
    std::string struct_name;
    size_t index;
};

class Reference {
public:
    Reference(SharedState &state, std::string name);
    static Reference *Create(SharedState &state, std::string name);
    static Reference *Get(size_t index);

    // Get/set state
    std::string GetName() { return name; }
    [[nodiscard]] size_t GetRef() const { return index; }
    InstanceType GetInstanceType() { return instance_type; }
    void SetDataType(Primitive data_type) { this->data_type = data_type; }
    Primitive GetDataType() { return data_type; }
    void SetStructName(std::string name) { struct_name = name; }
    std::string GetStructName() { return struct_name; }
    Scope GetScope() { return instance->GetScope(); }
    void SetInstanceType(InstanceType instance_type) { this->instance_type = instance_type; }
    void SetLLVMStructType(llvm::StructType *type) { this->llvm_struct_type = type; }
    Instance *GetInstance() { return instance; }

    // Value
    void SetValue(ValueType vt,
                  const std::vector<ValueType> &indices_val,
                  CompilerLLVM &llvm,
                  llvm::IRBuilder<> *ir,
                  ParserToken &token);
    ValueType GetValue(const std::vector<ValueType> &indices_val,
                       CompilerLLVM &llvm,
                       llvm::IRBuilder<> *ir,
                       ParserToken &token);

    // Find instance
    bool InstanceExists();
    bool FindInstance();

    // Create
    void CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope);

    // Array
    void SetAsArray(size_t size);
    void AddIndexRef(ParserToken &&token);
    [[nodiscard]] size_t IndicesCount() const;
    std::vector<ParserToken> &GetIndices();

    // Fields
    StructSearch FindFieldInStruct(ParserToken &token, CompilerLLVM &llvm);
    void SetAsStruct();
    std::string &GetFields() { return fields; }
    void SetFields(std::string fields) {
        this->fields = std::move(fields);
    }

    static void ClearStatic() {
        references.clear();
        index_ptr = 0;
    }

private:
    SharedState &state;
    llvm::Value *LocalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    static std::vector<Reference> references;

    static void RaiseException(std::string msg, ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, msg);
    }

    // Link to instance (used during compilation)
    Instance *instance = nullptr;

    // Individual
    llvm::StructType *llvm_struct_type;
    Primitive data_type;
    InstanceType instance_type = InstanceType::PRIMITIVE;
    std::vector<ParserToken> indices;
    std::string fields;
    std::string name;
    std::string struct_name;
    size_t index;
    static size_t index_ptr;
    size_t no_indices = 0;
};
#pragma once

#include "../Parser/ParserToken.h"
#include "../LLVM/CompilerLLVM.h"
#include "Instance.h"

class Reference {
public:
    // Init
    Reference(std::string name) {
        this->name = name;
        this->index = index_ptr++;
    }
    static Reference *Create(std::string name);
    static Reference *Get(size_t index);

    // Get/set state
    std::string GetName() { return name; }
    size_t GetRef() { return index; }
    InstanceType GetInstanceType() { return instance_type; }
    void SetDataType(Primitive data_type) { this->data_type = data_type; }
    Primitive GetDataType() { return data_type; }
    void SetStructName(std::string name) { struct_name = name; }
    std::string GetStructName() { return struct_name; }

    // Value
    void SetValue(ValueType vt, std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    ValueType GetValue(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);

    // Find instance
    bool InstanceExists();
    bool FindInstance();

    // Create
    void CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope);

    // Array
    void SetAsArray(size_t size);
    void AddIndexRef(ParserToken &&token);
    size_t IndicesCount() { return no_indices; }
    std::vector<ParserToken> &GetIndices();

private:
    llvm::Value *LocalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    static std::vector<Reference> references;

    // Link to instance (used during compilation)
    Instance *instance = nullptr;

    // Individual
    Primitive data_type;
    InstanceType instance_type = InstanceType::SIMPLE;
    std::vector<ParserToken> indices;
    std::string name;
    std::string struct_name;
    size_t index;
    static size_t index_ptr;
    size_t no_indices = 0;
};
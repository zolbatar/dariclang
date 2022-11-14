#pragma once

#include <unordered_map>
#include <string>
#include "../LLVM/CompilerLLVM.h"
#include "PrimitiveTypes.h"

enum class InstanceType {
    PRIMITIVE,
    ARRAY,
    STRUCT,
    STRUCT_ARRAY
};

class Instance {
public:
    static Instance *StructInstance(const std::string &name,
                                    const std::string &struct_name,
                                    llvm::StructType *struct_type,
                                    Scope scope,
                                    CompilerLLVM &llvm,
                                    llvm::IRBuilder<> *ir);
    static Instance *StructInstanceArray(const std::string &name,
                                         const std::string &struct_name,
                                         llvm::StructType *struct_type,
                                         Scope scope,
                                         size_t no_indices,
                                         CompilerLLVM &llvm,
                                         llvm::IRBuilder<> *ir);
    static Instance *ConstantInstance(std::string name,
                                      Primitive data_type,
                                      Scope scope,
                                      CompilerLLVM &llvm,
                                      llvm::IRBuilder<> *ir);
    static Instance *SimpleInstance(std::string name,
                                    Primitive data_type,
                                    Scope scope,
                                    CompilerLLVM &llvm,
                                    llvm::IRBuilder<> *ir);
    static Instance *ArrayInstance(std::string name,
                                   Primitive data_type,
                                   Scope scope,
                                   size_t no_indices,
                                   CompilerLLVM &llvm,
                                   llvm::IRBuilder<> *ir);
    static void ClearLocals(CompilerLLVM &llvm);
    static bool Exists(std::string name);
    static Instance *FindInstance(std::string name);

    // Get
    Scope &GetScope() { return scope; }
    Primitive GetDataType() { return type; }
    InstanceType &GetInstanceType() { return instance_type; }
    size_t IndicesCount() { return no_indices; }

    // Value
    void SetSimpleValue(llvm::Value *v, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    void SetArrayValue(llvm::Value *v, llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    ValueType GetSimpleValue(CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    ValueType GetArrayValue(llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    void SetStructValue(llvm::Value *v, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);

    static void ClearStatic() {
        locals.clear();
        globals.clear();
    }

private:
    static std::unordered_map<std::string, Instance> locals;
    static std::unordered_map<std::string, Instance> globals;
    std::string name;
    InstanceType instance_type = InstanceType::PRIMITIVE;
    llvm::StructType *struct_type;
    Primitive type = Primitive::NONE;
    Scope scope = Scope::UNKNOWN;
    size_t no_indices = 0;
};

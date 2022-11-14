#pragma once

#include "Instance.h"

class InstanceRecord : public Instance {
public:
    static std::shared_ptr<Instance> Build(const std::string &name,
                                           const std::string &struct_name,
                                           llvm::StructType *struct_type,
                                           Scope scope,
                                           CompilerLLVM &llvm,
                                           llvm::IRBuilder<> *ir);
    InstanceRecord(const std::string &name,
                   const std::string &struct_name,
                   llvm::StructType *struct_type,
                   Scope scope,
                   CompilerLLVM &llvm,
                   llvm::IRBuilder<> *ir);

    size_t IndicesCount() override { return 0; }
    std::string& GetStructName() override { return struct_name; }
    InstanceType GetInstanceType() override { return InstanceType::RECORD; }
    Primitive GetType() override { return Primitive::NONE; }
    llvm::StructType *GetStructType() override { return struct_type; };

    void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
    void Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    std::string struct_name;
    llvm::StructType *struct_type;
};
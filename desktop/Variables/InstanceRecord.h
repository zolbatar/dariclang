#pragma once

#include "Instance.h"

class InstanceRecord : public Instance {
public:
    static std::shared_ptr<Instance> Build(const std::string &name,
                                           const std::string &struct_name,
                                           llvm::StructType *struct_type,
                                           Scope scope,
                                           CompilerLLVM &llvm,
                                           llvm::IRBuilder<> *ir,
                                           bool is_ref);
    InstanceRecord(const std::string &name,
                   const std::string &struct_name,
                   llvm::StructType *struct_type,
                   Scope scope,
                   CompilerLLVM &llvm,
                   llvm::IRBuilder<> *ir,
                   bool is_ref);

    size_t IndicesCount() override { return 0; }
    InstanceType GetInstanceType() override { return InstanceType::RECORD; }

    void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
    bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    llvm::StructType *struct_type;
};
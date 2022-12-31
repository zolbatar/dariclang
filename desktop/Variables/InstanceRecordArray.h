#pragma once

#include "Instance.h"

class InstanceRecordArray : public Instance {
public:
    static std::shared_ptr<Instance> Build(const std::string &name,
                                           const std::string &struct_name,
                                           llvm::StructType *struct_type,
                                           Scope scope,
                                           size_t no_indices,
                                           CompilerLLVM &llvm,
                                           llvm::IRBuilder<> *ir);
    InstanceRecordArray(const std::string &name,
                        const std::string &struct_name,
                        llvm::StructType *struct_type,
                        Scope scope,
                        size_t no_indices,
                        CompilerLLVM &llvm,
                        llvm::IRBuilder<> *ir);

    size_t IndicesCount() override { return no_indices; }
    InstanceType GetInstanceType() override { return InstanceType::RECORD_ARRAY; }

    void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
    bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    size_t no_indices;
    llvm::StructType *struct_type;
};
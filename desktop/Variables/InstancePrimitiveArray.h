#pragma once

#include "Instance.h"

class InstancePrimitiveArray : public Instance {
public:
    static std::shared_ptr<Instance> Build(const std::string &name,
                                           Primitive data_type,
                                           Scope scope,
                                           size_t no_indices,
                                           CompilerLLVM &llvm,
                                           llvm::IRBuilder<> *ir);
    InstancePrimitiveArray(const std::string &name,
                           Primitive type,
                           Scope scope,
                           size_t no_indices,
                           CompilerLLVM &llvm,
                           llvm::IRBuilder<> *ir);

    size_t IndicesCount() override { return no_indices; }
    Primitive GetType() override { return type; }
    InstanceType GetInstanceType() override { return InstanceType::ARRAY; }
    std::string GetStructName() override { return ""; }

    void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
    bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    Primitive type = Primitive::NONE;
    size_t no_indices;
};
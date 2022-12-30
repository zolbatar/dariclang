#pragma once

#include "Instance.h"

class InstanceSet : public Instance {
public:
    static std::shared_ptr<Instance> Build(const std::string &name,
                                           Primitive data_type,
                                           Scope scope,
                                           CompilerLLVM &llvm,
                                           llvm::Function *func,
                                           llvm::IRBuilder<> *ir,
                                           Primitive default_return_type,
                                           bool is_ref);
    InstanceSet(const std::string &name,
                Primitive type,
                Scope scope,
                CompilerLLVM &llvm,
                llvm::IRBuilder<> *ir,
                bool is_ref);

    size_t IndicesCount() override { return 0; }
    Primitive GetType() override { return type; }
    InstanceType GetInstanceType() override { return InstanceType::SET; }
    std::string &GetStructName() override {
        assert(0);
        return name;
    }
    void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
    bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    Primitive type = Primitive::NONE;
};
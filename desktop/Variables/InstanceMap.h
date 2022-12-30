#pragma once

#include "Instance.h"

class InstanceMap : public Instance {
public:
	static std::shared_ptr<Instance> Build(const std::string &name,
                                           const std::string &struct_name,
										   Primitive data_type,
										   Primitive data_type_val,
										   llvm::StructType *llvm_struct_type_val,
										   Scope scope,
										   CompilerLLVM &llvm,
										   llvm::Function *func,
										   llvm::IRBuilder<> *ir,
										   Primitive default_return_type,
										   bool is_ref);
	InstanceMap(const std::string &name,
                const std::string &struct_name,
				Primitive type,
				Scope scope,
				CompilerLLVM &llvm,
				llvm::IRBuilder<> *ir,
				bool is_ref);

	size_t IndicesCount() override { return 0; }
	Primitive GetType() override { return type; }
	InstanceType GetInstanceType() override { return InstanceType::MAP; }
    std::string GetStructName() override { return struct_name; }
	void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
	bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
private:
    std::string struct_name;
	Primitive type = Primitive::NONE;
};
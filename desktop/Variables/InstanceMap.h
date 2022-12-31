#pragma once

#include "Instance.h"

class InstanceMap : public Instance {
public:
	static std::shared_ptr<Instance> Build(const std::string &name,
										   const std::string &struct_name,
										   Primitive data_type,
										   Primitive data_type_val,
										   llvm::StructType *llvm_struct_type_val,
										   std::string struct_name_val,
										   Scope scope,
										   CompilerLLVM &llvm,
										   llvm::Function *func,
										   llvm::IRBuilder<> *ir,
										   Primitive default_return_type,
										   bool is_ref);
	InstanceMap(const std::string &name,
				const std::string &struct_name,
				const std::string struct_name_val,
				Primitive data_type_val,
				Primitive type,
				Scope scope,
				CompilerLLVM &llvm,
				llvm::IRBuilder<> *ir,
				bool is_ref);

	size_t IndicesCount() override { return 0; }
	InstanceType GetInstanceType() override { return InstanceType::MAP; }
	void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
	bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
};
#pragma once

#include "Instance.h"

class InstancePrimitive : public Instance {
public:
	static std::shared_ptr<Instance> Build(const std::string &name,
										   Primitive data_type,
										   Scope scope,
										   CompilerLLVM &llvm,
										   llvm::IRBuilder<> *ir,
										   bool is_ref);
	InstancePrimitive(const std::string &name,
					  Primitive type,
					  Scope scope,
					  CompilerLLVM &llvm,
					  llvm::IRBuilder<> *ir,
					  bool is_ref);

	size_t IndicesCount() override { return 0; }
	InstanceType GetInstanceType() override { return InstanceType::PRIMITIVE; }
	void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
	bool Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) override;
};
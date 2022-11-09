#pragma once
#include <unordered_map>
#include <string>
#include "../LLVM/CompilerLLVM.h"
#include "Types.h"

enum class InstanceType
{
	SIMPLE,
	ARRAY
};

enum class Scope
{
	UNKNOWN,
	LOCAL,
	GLOBAL,
};

class Instance
{
public:
	static Instance *ConstantInstance(std::string name,
									  Type data_type,
									  Scope scope,
									  CompilerLLVM &llvm,
									  llvm::IRBuilder<> *ir);
	static Instance *SimpleInstance(std::string name,
									Type data_type,
									Scope scope,
									CompilerLLVM &llvm,
									llvm::IRBuilder<> *ir);
	static Instance *ArrayInstance(std::string name,
								   Type data_type,
								   Scope scope,
								   size_t no_indices,
								   CompilerLLVM &llvm,
								   llvm::IRBuilder<> *ir);
	static void ClearLocals(CompilerLLVM &llvm);
	static bool Exists(std::string name);
	static Instance *FindInstance(std::string name);

	// Get
	Scope &GetScope() { return scope; }
	Type &GetDataType() { return type; }
	InstanceType &GetInstanceType() { return instance_type; }
	size_t IndicesCount() { return no_indices; }

	// Value
	void SetSimpleValue(llvm::Value *v, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
	void SetArrayValue(llvm::Value *v, llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
	ValueType GetSimpleValue(CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
	ValueType GetArrayValue(llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);

private:
	static std::unordered_map<std::string, Instance> locals;
	static std::unordered_map<std::string, Instance> globals;
	std::string name;
	InstanceType instance_type = InstanceType::SIMPLE;
	Type type = Type::None();
	Scope scope = Scope::UNKNOWN;
	size_t no_indices = 0;
};

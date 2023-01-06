#include "InstanceConstant.h"

std::shared_ptr<Instance> InstanceConstant::Build(const std::string &name,
												  Primitive data_type,
												  Scope scope,
												  CompilerLLVM &llvm,
												  llvm::IRBuilder<> *ir) {
	switch (scope) {
	case Scope::LOCAL:
		locals.insert(std::make_pair(name, std::make_shared<InstanceConstant>(name, data_type, scope, llvm, ir)));
		return locals.find(name)->second;
	case Scope::GLOBAL:
		globals.insert(std::make_pair(name, std::make_shared<InstanceConstant>(name, data_type, scope, llvm, ir)));
		return globals.find(name)->second;
	default:
		assert(0);
	}
}

InstanceConstant::InstanceConstant(const std::string &name,
								   Primitive type,
								   Scope scope,
								   CompilerLLVM &llvm,
								   llvm::IRBuilder<> *ir) {
	this->name = name;
	this->scope = scope;
	this->type = type;
}

void InstanceConstant::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	//vt = llvm.GetVariableValue(ir, name, type);
}



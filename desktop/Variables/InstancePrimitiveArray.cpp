#include "InstancePrimitiveArray.h"

std::shared_ptr<Instance> InstancePrimitiveArray::Build(const std::string &name,
														Primitive data_type,
														Scope scope,
														size_t no_indices,
														CompilerLLVM &llvm,
														llvm::IRBuilder<> *ir) {
	switch (scope) {
	case Scope::LOCAL:
//		llvm.locals_isref[name] = false;
		locals.insert(std::make_pair(name, std::make_shared<InstancePrimitiveArray>(name, data_type, scope, no_indices, llvm, ir)));
		return locals.find(name)->second;
	case Scope::GLOBAL:
		globals.insert(std::make_pair(name, std::make_shared<InstancePrimitiveArray>(name, data_type, scope, no_indices, llvm, ir)));
		return globals.find(name)->second;
	default:
		assert(0);
	}
}

InstancePrimitiveArray::InstancePrimitiveArray(const std::string &name,
											   Primitive type,
											   Scope scope,
											   size_t no_indices,
											   CompilerLLVM &llvm,
											   llvm::IRBuilder<> *ir) : no_indices(no_indices) {
	this->name = name;
	this->scope = scope;
	this->type = type;
}

bool InstancePrimitiveArray::Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	ir->CreateStore(v, idx);
	return true;
}

void InstancePrimitiveArray::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	vt.type = GetType();
	vt.value = ir->CreateLoad(llvm.TypeConversion(GetType()), idx);
}

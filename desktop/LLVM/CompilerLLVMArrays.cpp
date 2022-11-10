#include "CompilerLLVM.h"

llvm::GlobalVariable *CompilerLLVM::GetGlobalArrayDimensions(std::string name) {
	return globals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::GetLocalArrayDimensions(std::string name) {
	return locals_array_dimensions[name];
}

llvm::GlobalVariable *CompilerLLVM::SetGlobalArray(std::string name,
												   llvm::ArrayType *typ,
												   llvm::Constant *init,
												   size_t sz,
												   llvm::ArrayType *size_v,
												   Primitive type) {
	globals_array_dimensions[name] = new llvm::GlobalVariable(*Module,
															  typ,
															  false,
															  llvm::GlobalVariable::ExternalLinkage,
															  init,
															  name + "_dimensions");
	globals_type.insert(std::make_pair(name, type));
	globals_array_num_dimensions[name] = sz;

	// Actual array data
	globals[name] = new llvm::GlobalVariable(*Module,
											 size_v,
											 false,
											 llvm::GlobalValue::ExternalLinkage,
											 llvm::ConstantAggregateZero::get(size_v),
											 name);

	return globals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::SetLocalArray(std::string name,
											  llvm::IRBuilder<> *ir,
											  size_t sz,
											  Primitive type) {
	locals_array_dimensions[name] = ir->CreateAlloca(TypeInt,
													 llvm::ConstantInt::get(TypeInt, sz),
													 name + "_dimensions");
	locals_type.insert(std::make_pair(name, type));
	locals_array_num_dimensions[name] = sz;
	return locals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::SetLocalArrayAllocate(std::string name,
													  llvm::IRBuilder<> *ir,
													  llvm::Value *sz,
													  Primitive type) {
	locals[name] = ir->CreateAlloca(TypeConversion(type), sz, name);
	return locals[name];
}

#include <iostream>
#include "CompilerLLVM.h"

void CompilerLLVM::CreateConstant(std::string name, Primitive type, llvm::Constant *val) {
	globals[name] = new llvm::GlobalVariable(*Module,
											 TypeConversion(type),
											 true,
											 llvm::GlobalValue::ExternalLinkage,
											 val,
											 name);

	globals_type[name] = type;
}

void CompilerLLVM::CreateGlobal(std::string name, Primitive type, llvm::Constant *val) {
	assert(!globals.contains(name));
	//std::cout << "Creating global '" << name << "'\n";
	globals[name] = new llvm::GlobalVariable(*Module,
											 TypeConversion(type),
											 false,
											 llvm::GlobalValue::ExternalLinkage,
											 val,
											 name);

	globals_type[name] = type;
}

void CompilerLLVM::CreateLocal(std::string name, Primitive type, llvm::IRBuilder<> *ir) {
	assert(!locals.contains(name));
//	std::cout << "Creating local '" << name << "'\n";
	locals[name] = ir->CreateAlloca(TypeConversion(type), nullptr, name);
	locals_type[name] = type;
}

void CompilerLLVM::StoreGlobal(std::string name, llvm::IRBuilder<> *ir, llvm::Value *val) {
	assert(globals.contains(name));
	ir->CreateStore(val, globals[name]);
}

void CompilerLLVM::StoreLocal(std::string name, llvm::IRBuilder<> *ir, llvm::Value *val) {
	assert(locals.contains(name));
	ir->CreateStore(val, locals[name]);
}

llvm::Constant *CompilerLLVM::GetDefaultForType(Primitive type, llvm::IRBuilder<> *ir) {
	switch (type) {
		case Primitive::INT:
			return llvm::ConstantInt::get(TypeInt, 0);
		case Primitive::FLOAT:
			return llvm::ConstantFP::get(TypeFloat, 0.0);
		case Primitive::STRING:
			return ir->CreateGlobalStringPtr("");
		case Primitive::BYTE:
			return llvm::ConstantInt::get(TypeByte, 0);
		default:
			assert(0);
	}
	return nullptr;
}

ValueType CompilerLLVM::GetVariableValue(llvm::IRBuilder<> *ir, std::string name, Primitive type) {
	ValueType vt;
	vt.value = nullptr;
	if (globals.contains(name)) {
		// Search globals first
		vt.value = ir->CreateLoad(TypeConversion(globals_type[name]), globals[name]);
		vt.type = globals_type[name];
	}
	else if (locals.contains(name)) {
		// Search locals
		vt.value = ir->CreateLoad(TypeConversion(locals_type[name]), locals[name]);
		vt.type = locals_type[name];
	}
	return vt;
//	assert(0);
}

void CompilerLLVM::ClearLocals() {
	locals.clear();
	locals_type.clear();
	locals_array_dimensions.clear();
	locals_array_num_dimensions.clear();
}

llvm::GlobalVariable *CompilerLLVM::GetGlobal(std::string name) {
	return globals[name];
}

llvm::AllocaInst *CompilerLLVM::GetLocal(std::string name) {
	return locals[name];
}


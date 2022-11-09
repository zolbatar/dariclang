#include "CompilerLLVM.h"

llvm::Type *CompilerLLVM::TypeConversion(Type &type) {
	switch (type.GetType()) {
		case Primitive::INT:
			return TypeInt;
		case Primitive::FLOAT:
			return TypeFloat;
		case Primitive::STRING:
			return TypeString;
		case Primitive::BYTE:
			return TypeByte;
		case Primitive::NONE:
			return TypeNone;
	}
}

llvm::Constant *CompilerLLVM::CreateConstantInt(Type &type, T_I v) {
	return llvm::ConstantInt::get(TypeConversion(type), v);
}

llvm::Constant *CompilerLLVM::CreateConstantFloat(Type &type, T_F v) {
	return llvm::ConstantFP::get(TypeConversion(type), v);
}

llvm::Constant *CompilerLLVM::CreateConstantString(llvm::IRBuilder<> *ir, llvm::Function *func,
												   Type &type, T_S v, std::string identifier) {
	return ir->CreateGlobalString(v, identifier.size() > 0 ? identifier + " ## Initial" : "");
}

void CompilerLLVM::AutoConversion(llvm::IRBuilder<> *ir, ValueType &value_type, Type &type) {
	if (value_type.type == type) {
		// Do nothing
	}
	else if (value_type.type.GetType() == Primitive::INT && type.GetType() == Primitive::FLOAT) {
		value_type.value = ir->CreateSIToFP(value_type.value, TypeConversion(type));
	}
	else if (value_type.type.GetType() == Primitive::FLOAT && type.GetType() == Primitive::INT) {
		value_type.value = ir->CreateFPToSI(value_type.value, TypeConversion(type));
	}
	else if (value_type.type.GetType() == Primitive::INT && type.GetType() == Primitive::BYTE) {
		value_type.value = ir->CreateTrunc(value_type.value, TypeConversion(type));
	}
	else if (value_type.type.GetType() == Primitive::STRING && type.GetType() == Primitive::INT) {
		value_type.value = ir->CreateCall(Module->getFunction("string_to_int"), {value_type.value});
	}
	else if (value_type.type.GetType() == Primitive::STRING && type.GetType() == Primitive::FLOAT) {
		value_type.value = ir->CreateCall(Module->getFunction("string_to_float"), {value_type.value});
	}
	else if (value_type.type.GetType() == Primitive::FLOAT && type.GetType() == Primitive::STRING) {
		value_type.value = ir->CreateCall(Module->getFunction("float_to_string"), {value_type.value});
	}
	else if (value_type.type.GetType() == Primitive::INT && type.GetType() == Primitive::STRING) {
		value_type.value = ir->CreateCall(Module->getFunction("int_to_string"), {value_type.value});
	}
	else {
		assert(0);
	}
	value_type.type = type;
}

void CompilerLLVM::AutoConversion2Way(llvm::IRBuilder<> *ir, ValueType &value_type1, ValueType &value_type2) {
	if (value_type1.type == value_type2.type) {
		// Do nothing
	}
	else if (value_type1.type.GetType() == Primitive::INT && value_type2.type.GetType() == Primitive::FLOAT) {
		value_type1.value = ir->CreateSIToFP(value_type1.value, TypeConversion(value_type2.type));
		value_type1.type = value_type2.type;
	}
	else if (value_type2.type.GetType() == Primitive::INT && value_type1.type.GetType() == Primitive::FLOAT) {
		value_type2.value = ir->CreateSIToFP(value_type2.value, TypeConversion(value_type1.type));
		value_type2.type = value_type2.type;
	}
	else {
		assert(0);
	}
}

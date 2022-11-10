#include "CompilerLLVM.h"

ValueType CompilerLLVM::BooleanOR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = t1.type;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateOr(t1.value, t2.value);
			break;
		default:
			assert(0);
	}
	return vt;
}

ValueType CompilerLLVM::BooleanAND(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = t1.type;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateAnd(t1.value, t2.value);
			break;
		default:
			assert(0);
	}
	return vt;
}

ValueType CompilerLLVM::BooleanEOR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = t1.type;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateXor(t1.value, t2.value);
			break;
		default:
			assert(0);
	}
	return vt;
}

ValueType CompilerLLVM::BooleanNOT(llvm::IRBuilder<> *ir, ValueType &t1) {
	ValueType vt;
	vt.type = t1.type;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpEQ(t1.value, llvm::ConstantInt::get(TypeInt, 0), "NOT");
			vt.value = ir->CreateSExt(vt.value, TypeConversion(t1.type));
			break;
		default:
			assert(0);
	}
	return vt;
}

ValueType CompilerLLVM::BooleanCOMPLEMENT(llvm::IRBuilder<> *ir, ValueType &t1) {
	ValueType vt;
	vt.type = t1.type;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateNot(t1.value);
			break;
		default:
			assert(0);
	}
	return vt;
}


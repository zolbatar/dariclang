#include "CompilerLLVM.h"

ValueType CompilerLLVM::ComparisonEQ(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpEQ(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpOEQ(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpEQ(r, llvm::ConstantInt::get(TypeInt, 0), "=");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

ValueType CompilerLLVM::ComparisonNE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpNE(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpONE(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpNE(r, llvm::ConstantInt::get(TypeInt, 0), "<>");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

ValueType CompilerLLVM::ComparisonLE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpSLE(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpOLE(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpSLE(r, llvm::ConstantInt::get(TypeInt, 0), "<=");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

ValueType CompilerLLVM::ComparisonLT(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpSLT(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpOLT(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpSLT(r, llvm::ConstantInt::get(TypeInt, 0), "<");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

ValueType CompilerLLVM::ComparisonGE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpSGE(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpOGE(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpSGE(r, llvm::ConstantInt::get(TypeInt, 0), ">=");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

ValueType CompilerLLVM::ComparisonGT(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2) {
	AutoConversion2Way(ir, t1, t2);
	ValueType vt;
	vt.type = Primitive::INT;
	switch (t1.type) {
		case Primitive::INT:
		case Primitive::BYTE:
			vt.value = ir->CreateICmpSGT(t1.value, t2.value);
			break;
		case Primitive::FLOAT:
			vt.value = ir->CreateFCmpOGT(t1.value, t2.value);
			break;
		case Primitive::STRING: {
			auto fun = Module->getFunction("String_Compare");
			auto r = ir->CreateCall(fun, {t1.value, t2.value});
			vt.value = ir->CreateICmpSGT(r, llvm::ConstantInt::get(TypeInt, 0), ">");
			break;
		}
		default:
			assert(0);
	}
	vt.value = ir->CreateSExt(vt.value, TypeConversion(vt.type));;
	return vt;
}

#include "Compiler.h"

void Compiler::CreateLocalDimensions(Reference *var, Primitive type1, llvm::Type *type2) {
	std::list<llvm::Value *> indices;
	for (auto &s : var->GetIndices()) {
		auto vt = CompileExpression(s);
		if (vt.type != Primitive::INT) {
			RaiseException("For local arrays, dimensions need to be integers", s);
		}
		indices.push_back(vt.value);
	}

	// Store dimensions (list of dimensions)
	auto la = llvm.CreateLocalArrayStage1(var->GetName(), GetIR(), var->IndicesCount(), Primitive::INT);
	llvm::Value *size = llvm::ConstantInt::get(llvm.TypeInt, 1);
	size_t i = 0;
	for (auto &iv : indices) {
		size = GetIR()->CreateMul(size, iv);
		auto ptr = GetIR()->CreateGEP(llvm.TypeInt, la, {llvm::ConstantInt::get(llvm.TypeInt, i)});
		GetIR()->CreateStore(size, ptr);
		i++;
	}

	// Create array
	llvm.CreateLocalArrayStage2(var->GetName(), GetIR(), size, type2);
}

void Compiler::CreateGlobalDimensions(Reference *var, Primitive type1, llvm::Type *type2) {

	// Check indices are integers
	std::vector<unsigned> indices;
	for (auto &s : var->GetIndices()) {
		if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
			// All dimensions need to be literals
			RaiseException("For global arrays, dimensions need to be literal integers", s);
		}
		indices.push_back(s.literal.iv);
	}

	size_t size = 1;
	auto typ = llvm::ArrayType::get(llvm.TypeInt, indices.size());
	std::vector<llvm::Constant *> values;
	for (auto &iv : indices) {
		size *= iv;
		values.push_back(llvm::ConstantInt::get(llvm.TypeInt, size));
	}
	auto init = llvm::ConstantArray::get(typ, values);
	auto size_v = llvm::ArrayType::get(type2, size);
	llvm.CreateGlobalArray(var->GetName(), typ, init, indices.size(), size_v, type1);
}

void Compiler::TokenDim(ParserToken &t) {
	auto var = Reference::Get(t.reference);

	if (procedure == nullptr) {
		if (t.scope != Scope::GLOBAL)
			return;
		CreateGlobalDimensions(var, var->GetDataType(), llvm.TypeConversion(var->GetDataType()));
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::GLOBAL, false);
	} else {
		if (t.scope != Scope::LOCAL)
			return;
		CreateLocalDimensions(var, var->GetDataType(), llvm.TypeConversion(var->GetDataType()));
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::LOCAL, false);
	}
}

std::vector<ValueType> Compiler::ProcessIndices(Reference *ref, ParserToken &t) {
	std::vector<ValueType> values;
	for (auto &s : ref->GetIndices()) {
		values.push_back(CompileExpression(s));
	}

	for (auto &v : values) {
		if (v.type != Primitive::INT) {
			RaiseException("Indices must be integers", t);
		}
	}
	return values;
}

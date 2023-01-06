#include "Compiler.h"

void Compiler::GCLocals() {
	// Local vars
	for (auto &l : Instance::locals) {
		auto var = llvm.locals[l.first];
		if (l.second->GetInstanceType() == InstanceType::PRIMITIVE && l.second->GetType() == Primitive::STRING) {
			llvm.ClearPermString(GetIR()->CreateLoad(llvm.TypeString, var), GetIR());
		} else if (l.second->GetInstanceType() == InstanceType::RECORD) {
			// Is this a record?
			auto idx = state.GetStructIndex(l.second->GetStructName());
			auto str = state.GetStruct(idx);

			// Any string fields?
			int i = 0;
			for (auto &f : str->fields) {
				if (f.type == Primitive::STRING) {
					auto gep = GetIR()->CreateStructGEP(l.second->GetStructType(), var, i);
					llvm.ClearPermString(GetIR()->CreateLoad(llvm.TypeString, gep), GetIR());
				}
				i++;
			}
		}
	}

	// Local collections
	llvm.GCCollections(GetIR());
}

void Compiler::GenericVariable(ParserToken &token, Scope scope) {
	auto signature = TypeSignature::Get(token.signature).get();
	auto value_type = CompileExpression(token.children[0]);
	auto call = BuildTypeCall(token);

	// If no type, try and auto-guess it from the expression
	if (signature->GetClass() == SignatureClass::Primitive) {
		if (signature->GetPrimitiveType(call) == Primitive::NONE) {
			auto ct = dynamic_cast<TypePrimitive *>(signature);
			ct->SetPrimitiveType(value_type.type);
		}
	}

	// Create if necessary
	if (!signature->IsCreated()) {
		signature->Create(call);
	}

	// Do conversion
	llvm.AutoConversion(GetIR(), value_type, signature->GetPrimitiveType(call));
	if (value_type.type != signature->GetPrimitiveType(call)) {
		TypeError(token);
	}

	// String? Release previous value
	if (value_type.type == Primitive::STRING) {
		llvm.ClearPermString(signature->Get(call).value, GetIR());
		llvm.MakePermString(value_type.value, GetIR());
	}

	// And finally save the value
	signature->Set(call, value_type);

	// Clear temp?
	if (strip_strings) {
		strip_strings = false;
		llvm.ClearTempStrings(GetIR());
	}
}

void Compiler::TokenGlobal(ParserToken &token) {
	if (token.scope != Scope::GLOBAL)
		return;
	GenericVariable(token, Scope::GLOBAL);
}

void Compiler::TokenLocal(ParserToken &token) {
	if (token.scope != Scope::LOCAL)
		return;
	GenericVariable(token, Scope::LOCAL);
}

void Compiler::TokenConst(ParserToken &token) {
	auto signature = TypeSignature::Get(token.signature).get();
	auto call = BuildTypeCall(token);

	// Set data type
	auto ct = dynamic_cast<TypePrimitive *>(signature);
	ct->SetAsConstant();
	if (ct->GetPrimitiveType(call) == Primitive::NONE) {
		ct->SetPrimitiveType(token.children[0].data_type);
		token.literal = token.children[0].literal;
	}

	// Create
	if (!signature->IsCreated()) {
		signature->Create(call);
	}
}

void Compiler::TokenSwap(ParserToken &t) {

	// Get variables
	auto var1 = Reference::Get(t.children[0].reference);
	if (!var1->InstanceExists())
		VariableNotFound(t, var1->GetName());
	if (!var1->FindInstance())
		VariableError(t, var1->GetName());
	auto var2 = Reference::Get(t.children[1].reference);
	if (!var2->InstanceExists())
		VariableNotFound(t, var1->GetName());
	if (!var2->FindInstance())
		VariableError(t, var2->GetName());

	if (var1->GetDataType() != var2->GetDataType()) {
		RaiseException("Types must be the same for SWAP", t);
	}

	auto v1 = var1->GetValue(option_base, ProcessIndices(var1, t), llvm, GetIR(), t);
	auto v2 = var2->GetValue(option_base, ProcessIndices(var2, t), llvm, GetIR(), t);
	var1->SetValue(option_base, v2, ProcessIndices(var1, t), llvm, GetIR(), t);
	var2->SetValue(option_base, v1, ProcessIndices(var2, t), llvm, GetIR(), t);
}

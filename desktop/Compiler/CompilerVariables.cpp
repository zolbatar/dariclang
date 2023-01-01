#include "Compiler.h"

void Compiler::ClearLocals() {
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
	llvm.ClearLocals();
	Instance::locals.clear();

	// Local collections
	llvm.ClearCollections(GetIR());
}

void Compiler::GenericVariable(ParserToken &token, Scope scope) {
	for (auto &s : token.children) {
		auto ref = Reference::Get(s.reference);
		auto value_type = CompileExpression(s.children[0]);

		// If no type, try and auto-guess it from the expression
		if (ref->GetDataType() == Primitive::NONE) {
			ref->SetDataType(value_type.type);
		}

		// If it's a primitive type, we create the variable if we need to
		if (ref->GetInstanceType() == InstanceType::PRIMITIVE) {
			if (!ref->InstanceExists()) {
				ref->CreateInstance(llvm, GetFunction(), return_type, GetPreIR(), scope, false);
			}
		}

		// Does it exist?
		if (!ref->FindInstance()) {
			RaiseException("Variable error, does it exist?", s);
		}

		// Get type
		Primitive type = Primitive::NONE;
		switch (ref->GetInstanceType()) {
		case InstanceType::PRIMITIVE:
		case InstanceType::ARRAY:
			type = ref->GetDataType();
			break;
		case InstanceType::RECORD:
		case InstanceType::RECORD_ARRAY: {
			auto ss = ref->FindFieldInStruct(token, llvm);
			type = ss.member->type;
			break;
		}
		default:
			assert(0);
		}

		// Do conversion
		llvm.AutoConversion(GetIR(), value_type, type);
		if (value_type.type != type) {
			TypeError(token);
		}

		// String? Release previous value
		if (value_type.type == Primitive::STRING) {
			llvm.ClearPermString(ref->GetValue(option_base, ProcessIndices(ref, s), llvm, GetIR(), token).value, GetIR());
			llvm.MakePermString(value_type.value, GetIR());
		}

		// And finally save the value
		ref->SetValue(option_base, value_type, ProcessIndices(ref, s), llvm, GetIR(), token);
	}

	// String?

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
	for (auto &s : token.children) {
		InstanceConstant::Build(s.identifier, s.data_type, Scope::GLOBAL, llvm, GetIR());
		switch (s.data_type) {
		case Primitive::INT:
			llvm.CreateConstant(s.identifier, s.data_type, llvm.CreateConstantInt(s.data_type, s.iv));
			break;
		case Primitive::FLOAT:
			llvm.CreateConstant(s.identifier, s.data_type, llvm.CreateConstantFloat(s.data_type, s.fv));
			break;
		case Primitive::STRING:
			llvm.CreateConstant(s.identifier,
								s.data_type,
								llvm.CreateConstantString(GetIRImplicit(),
														  GetFunctionImplicit(),
														  s.data_type,
														  s.sv.c_str(),
														  token.identifier));
			break;
		default:
			TypeError(token);
		}
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

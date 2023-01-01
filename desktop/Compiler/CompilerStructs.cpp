#include "Compiler.h"

void Compiler::TokenStruct(ParserToken &t) {
	auto _struct = state.GetStruct(t.reference);
	if (llvm.CreateStruct(t.identifier, _struct->fields) == nullptr)
		RaiseException("Error creating record", t);
}

void Compiler::TokenStructInstance(ParserToken &t) {
	auto ref = Reference::Get(t.reference);

	if (procedure == nullptr) {
		if (t.scope != Scope::GLOBAL)
			return;
	} else {
		if (t.scope != Scope::LOCAL)
			return;
	}

	// Do we have this struct?
	if (!state.StructExists(ref->GetStructName()))
		RecordNotFound(t, ref->GetStructName());

	// So fetch the struct info from LLVM and the parser
	auto struct_index = state.GetStructIndex(ref->GetStructName());
	auto si = state.GetStruct(struct_index);

	// Start creating an instance
	if (Instance::Exists(ref->GetName())) {
		VariableAlreadyExists(t, ref->GetName());
	}

	ref->CreateInstance(llvm, GetFunction(), return_type, GetPreIR(), t.scope, false);
	auto instance = ref->GetInstance();

	// Init to defaults
/*	size_t idx = 0;
	for (auto &f : si->fields) {
		switch (f.type) {
			case Primitive::INT:
			case Primitive::BYTE:
				instance->Set(llvm::ConstantInt::get(llvm.TypeConversion(f.type), 0), nullptr, idx, llvm, GetIR());
				break;
			case Primitive::FLOAT:
				instance->Set(llvm::ConstantFP::get(llvm.TypeFloat, 0.0), nullptr, idx, llvm, GetIR());
				break;
			case Primitive::STRING: {
				auto v = GetIR()->CreateGlobalStringPtr("");
				instance->Set(v, nullptr, idx, llvm, GetIR());
				break;
			}
		}
		idx++;
	}*/

	// Initialise any fields?
	for (auto &init : t.children) {
		// Is this a valid field?
		bool found = false;
		for (size_t i = 0; i < si->fields.size(); i++) {
			if (si->fields[i].name == init.identifier) {
				auto value = CompileExpression(init);
				llvm.AutoConversion(GetIR(), value, si->fields[i].type);
				instance->Set(value.value, nullptr, i, llvm, GetIR());
				found = true;

				// If string, make sure we don't collect it
				if (value.type == Primitive::STRING) {
					llvm.MakePermString(value.value, GetIR());
				}
			}
		}
		if (!found)
			RaiseException("Field '" + init.identifier + "' not found in record '" + ref->GetStructName() + "'", t);
	}
}

void Compiler::TokenStructArray(ParserToken &t) {
	auto var = Reference::Get(t.reference);

	// Do we have this struct?
	if (!state.StructExists(var->GetStructName()))
		RecordNotFound(t, var->GetStructName());

	// So fetch the struct info from LLVM and the parser
	auto llvm_struct = llvm.GetStruct(var->GetStructName());

	if (procedure == nullptr) {
		if (t.scope != Scope::GLOBAL)
			return;
		CreateGlobalDimensions(var, Primitive::NONE, llvm_struct);
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::GLOBAL, false);
	} else {
		if (t.scope != Scope::LOCAL)
			return;
		CreateLocalDimensions(var, Primitive::NONE, llvm_struct);
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::LOCAL, false);
	}
}
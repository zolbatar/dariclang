#include "Compiler.h"

void Compiler::TokenContainer(ParserToken &t) {
	auto var = Reference::Get(t.reference);

	if (var->GetDataType() == Primitive::NONE) {
		if (!state.StructExists(var->GetStructName()))
			RecordNotFound(t, var->GetStructName());
	}

	if (procedure == nullptr) {
		if (t.scope != Scope::GLOBAL)
			return;
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::GLOBAL, false);
	} else {
		if (t.scope != Scope::LOCAL)
			return;
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::LOCAL, false);
	}
}


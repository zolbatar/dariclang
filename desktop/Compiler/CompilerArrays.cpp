#include "Compiler.h"

void Compiler::TokenDim(ParserToken &t) {
	auto signature = TypeSignature::Get(t.signature).get();
	auto call = BuildTypeCall(t);
	signature->Create(call);
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

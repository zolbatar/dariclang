#include "Compiler.h"

void Compiler::TokenDim(ParserToken &t) {
	auto signature = TypeSignature::Get(t.signature).get();
	auto call = BuildTypeCall(t);

	// Create
	auto ct = dynamic_cast<TypePrimitiveArray *>(signature);
	std::vector<ValueType> indices;
	for (auto &s : ct->GetExpressions()) {
		auto vt = CompileExpression(s);
		if (vt.type != Primitive::INT) {
			RaiseException("For arrays, dimensions need to be integers", s);
		}
		indices.push_back(vt);
	}
	ct->SetValues(indices);
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

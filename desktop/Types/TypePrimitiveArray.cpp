#include "TypePrimitiveArray.h"

TypePrimitiveArray::TypePrimitiveArray(Primitive type, std::string name, Scope scope, std::list<ParserToken> expressions)
	: TypePrimitive(type, name, scope) {
	this->clazz = SignatureClass::PrimitiveArray;
	this->num_dimensions = expressions.size();
	this->expressions = expressions;
}

std::shared_ptr<TypeSignature> TypePrimitiveArray::Create(Scope scope, std::string name, Primitive type, std::list<ParserToken> expressions) {
	std::shared_ptr<TypePrimitiveArray> v = std::make_shared<TypePrimitiveArray>(TypePrimitiveArray(type, name, scope, expressions));
	signatures_by_index.push_back(v);
	signatures.emplace(name, v);
	return v;
}

bool TypePrimitiveArray::operator==(TypeSignature &other) {
	if (other.GetClass() != this->clazz)
		return false;
	auto ct = dynamic_cast<TypePrimitiveArray &>(other);
	if (ct.primitive_type != this->primitive_type)
		return false;
	if (ct.num_dimensions != this->num_dimensions)
		return false;
	return true;
}

bool TypePrimitiveArray::Matches(Primitive type, std::list<ParserToken> &expressions) {
	if (expressions.size() != num_dimensions)
		return false;
	if (type == Primitive::NONE)
		return true;
	return this->primitive_type == type;
}

void TypePrimitiveArray::Create(SignatureCall &call) {
	switch (scope) {
		case Scope::GLOBAL: {
			CreateGlobalDimensions(call, primitive_type);
			call.llvm.locals_isref[name] = false;
		}
		case Scope::LOCAL: {
			CreateLocalDimensions(call, primitive_type);
		}
	}
	created = true;
}

ValueType TypePrimitiveArray::Get(SignatureCall &call) {
	ValueType vt;
	vt.type = primitive_type;
	vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(primitive_type),
								   scope == Scope::GLOBAL ? GlobalIndex(call) : LocalIndex(call));
	return vt;
}

void TypePrimitiveArray::Set(SignatureCall &call, ValueType value) {
	assert(value.type == primitive_type);
	call.ir->CreateStore(value.value, scope == Scope::GLOBAL ? GlobalIndex(call) : LocalIndex(call));
}

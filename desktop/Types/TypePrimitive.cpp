#include "TypePrimitive.h"

TypePrimitive::TypePrimitive(Primitive type, std::string name, Scope scope) {
	this->index = index_ptr++;
	this->clazz = SignatureClass::Primitive;
	this->primitive_type = type;
	this->scope = scope;
	this->name = name;
}

std::shared_ptr<TypeSignature> TypePrimitive::Create(Scope scope, std::string name, Primitive type) {
	std::shared_ptr<TypePrimitive> v = std::make_shared<TypePrimitive>(TypePrimitive(Primitive::NONE, name, scope));
	signatures_by_index.push_back(v);
	signatures.emplace(name, v);
	return v;
}

bool TypePrimitive::operator==(TypeSignature &other) {
	if (other.GetClass() != this->clazz)
		return false;
	auto ct = dynamic_cast<TypePrimitive &>(other);
	if (ct.primitive_type != this->primitive_type)
		return false;
	return true;
}

bool TypePrimitive::Matches(Primitive type) {
	return this->primitive_type == type;
}

Primitive TypePrimitive::GetPrimitiveType() {
	return primitive_type;
}

void TypePrimitive::SetPrimitiveType(Primitive primitive_type) {
	this->primitive_type = primitive_type;
}

void TypePrimitive::Create(SignatureCall &call) {
	switch (scope) {
		case Scope::LOCAL:
			call.llvm.CreateLocal(name, primitive_type, call.ir, is_ref);
			break;
		case Scope::GLOBAL:
			call.llvm.CreateGlobal(name, primitive_type, call.llvm.GetDefaultForType(primitive_type, call.ir));
			break;
	}
	created = true;
}

ValueType TypePrimitive::Get(SignatureCall &call) {
	auto vt = call.llvm.GetVariableValue(call.ir, name, primitive_type);
	assert(vt.type == primitive_type);
	return vt;
}

void TypePrimitive::Set(SignatureCall &call, ValueType value) {
	assert(value.type == primitive_type);
	switch (scope) {
		case Scope::GLOBAL:
			call.llvm.StoreGlobal(name, call.ir, value.value);
			break;
		case Scope::LOCAL:
			call.llvm.StoreLocal(name, call.ir, value.value);
			break;
	}
}

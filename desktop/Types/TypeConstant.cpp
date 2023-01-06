#include "TypeConstant.h"

TypeConstant::TypeConstant(Primitive type, std::string name, Scope scope) {
	this->index = index_ptr++;
	this->clazz = SignatureClass::Constant;
	this->primitive_type = type;
	this->scope = scope;
	this->name = name;
}

std::shared_ptr<TypeSignature> TypeConstant::Create(Scope scope, std::string name, Primitive type) {
	std::shared_ptr<TypeConstant> v = std::make_shared<TypeConstant>(TypeConstant(Primitive::NONE, name, scope));
	signatures_by_index.push_back(v);
	signatures.emplace(name, v);
	return v;
}

bool TypeConstant::operator==(TypeSignature &other) {
	if (other.GetClass() != this->clazz)
		return false;
	auto ct = dynamic_cast<TypeConstant &>(other);
	if (ct.primitive_type != this->primitive_type)
		return false;
	return true;
}

bool TypeConstant::Matches(Primitive type) {
	return this->primitive_type == type;
}

Primitive TypeConstant::GetPrimitiveType() {
	return primitive_type;
}

void TypeConstant::SetPrimitiveType(Primitive primitive_type) {
	this->primitive_type = primitive_type;
}

void TypeConstant::Create(SignatureCall &call) {
	assert(scope == Scope::GLOBAL);

	switch (primitive_type) {
		case Primitive::NONE:
			assert(0);
		case Primitive::BYTE:
			call.llvm.CreateConstant(name,
									 primitive_type,
									 call.llvm.CreateConstantInt(primitive_type, call.token.literal.iv));
			break;
		case Primitive::INT:
			call.llvm.CreateConstant(name,
									 primitive_type,
									 call.llvm.CreateConstantInt(primitive_type, call.token.literal.iv));
			break;
		case Primitive::FLOAT:
			call.llvm.CreateConstant(name,
									 primitive_type,
									 call.llvm.CreateConstantFloat(primitive_type, call.token.literal.fv));
			break;
		case Primitive::STRING:
			call.llvm.CreateConstant(name,
									 primitive_type,
									 call.llvm.CreateConstantString(call.ir_implicit,
																	call.func_implicit,
																	primitive_type,
																	call.token.literal.sv.c_str(),
																	name));
			break;
	}
	created = true;
}

ValueType TypeConstant::Get(SignatureCall &call) {
	auto vt = call.llvm.GetVariableValue(call.ir, name, primitive_type);
	assert(vt.type == primitive_type);
	return vt;
}

void TypeConstant::Set(SignatureCall &call, ValueType value) {
	RaiseException("Can't change the value of constants", call.token);
}

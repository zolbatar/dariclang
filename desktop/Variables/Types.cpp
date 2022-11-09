#include "Types.h"

std::unordered_map<std::string, Type> Type::types;

void Type::InitTypes() {
}

Type::Type() {
}

bool Type::operator==(const Type &a) const {
	return this->core_type == a.core_type;
}

Type Type::None() {
	Type t;
	t.core_type = Primitive::NONE;
	return t;
}

Type Type::Int() {
	Type t;
	t.core_type = Primitive::INT;
	return t;
}

Type Type::Float() {
	Type t;
	t.core_type = Primitive::FLOAT;
	return t;
}

Type Type::String() {
	Type t;
	t.core_type = Primitive::STRING;
	return t;
}

Type Type::Byte() {
	Type t;
	t.core_type = Primitive::BYTE;
	return t;
}

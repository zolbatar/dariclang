#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "PrimitiveTypes.h"

class Type
{
public:
	static void InitTypes();
	Type();
	bool operator==(const Type &a) const;
	Primitive GetType() { return core_type; }

	static Type None();
	static Type Int();
	static Type Float();
	static Type String();
	static Type Byte();

private:
	Primitive core_type = Primitive::NONE;
	bool is_custom = false;
	static std::unordered_map<std::string, Type> types;
};

void InitTypes();

struct StructInfo
{
	std::vector<std::string> fields;
	std::vector<Type> types;
};

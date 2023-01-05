#pragma once

#include "TypeSignature.h"

class TypePrimitive : public TypeSignature {
public:
	TypePrimitive(Primitive type, std::string name, Scope scope);
	static std::shared_ptr<TypeSignature> Create(Scope scope, std::string name, Primitive type);
	bool operator==(TypeSignature &other) override;
	bool Matches(Primitive type);
	Primitive GetPrimitiveType() override;
	void SetPrimitiveType(Primitive primitive_type);
	void Create(SignatureCall &call) override;
	ValueType Get(SignatureCall &call) override;
	void Set(SignatureCall &call, ValueType value) override;
protected:
	Primitive primitive_type;
};
#pragma once

#include <memory>
#include <list>
#include <tuple>
#include "../Variables/PrimitiveTypes.h"
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/ParserToken.h"

enum class FindResult {
	OK,
	NOT_FOUND,
	INCORRECT_CLASS,
	NO_MATCH,
};

enum class SignatureClass {
	Primitive,
	PrimitiveArray,
	Record,
	RecordArray
};

struct SignatureCall {
	CompilerLLVM &llvm;
	llvm::Function *func;
	Primitive default_return_type;
	llvm::IRBuilder<> *ir;
	bool option_base;
	ParserToken &token;
};

class TypeSignature {
public:
	virtual ~TypeSignature() = default;
	SignatureClass GetClass() { return clazz; }
	size_t GetIndex() { return index; }
	bool IsCreated() { return created; }
	static std::shared_ptr<TypeSignature> Get(size_t index) { return signatures_by_index[index]; }

	// Check two signatures are identical
	virtual bool operator==(TypeSignature &) = 0;

	// Managing instances of this type
	static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceSingle(
		std::string name,
		Primitive type);
	static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceArray(
		std::string name,
		Primitive type,
		std::list<ParserToken> &expressions);

	// Creating, setting and getting
	virtual Primitive GetPrimitiveType() = 0;
	virtual void Create(SignatureCall &call) = 0;
	virtual ValueType Get(SignatureCall &call) = 0;
	virtual void Set(SignatureCall &call, ValueType value) = 0;
protected:
	std::string name;
	SignatureClass clazz;
	Scope scope;
	bool created = false;
	bool is_ref = false;

	static std::map<std::string, std::shared_ptr<TypeSignature>> signatures;
	static std::vector<std::shared_ptr<TypeSignature>> signatures_by_index;
	size_t index;
	static size_t index_ptr;
};


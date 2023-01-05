#pragma once

#include <memory>
#include <list>
#include <tuple>
#include "../Variables/PrimitiveTypes.h"
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/ParserToken.h"
#include "../Exception/Exception.h"

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

	static void RaiseException(std::string msg, ParserToken &t) {
		throw CustomException(ExceptionType::COMPILER, t.file.filename, t.file.line, t.file.char_position, msg);
	}

	// Indices
	std::list<ParserToken> &GetExpressions();
	void SetValues(std::vector<llvm::Value *> values);

	// Clear locals at end of procedure
	static void ClearLocals();
protected:
	void CreateLocalDimensions(SignatureCall &call, Primitive primitive_type);
	void CreateGlobalDimensions(SignatureCall &call, Primitive primitive_type);
	llvm::Value *LocalIndex(SignatureCall &call);
	llvm::Value *GlobalIndexPtr(SignatureCall &call);
	llvm::Value *GlobalIndex(SignatureCall &call);

	std::string name;
	SignatureClass clazz;
	Scope scope;
	bool created = false;
	bool is_ref = false;
	size_t index;
	std::list<ParserToken> expressions;
	std::vector<llvm::Value *> values;
	size_t num_dimensions;

	static std::map<std::string, std::shared_ptr<TypeSignature>> signatures;
	static std::vector<std::shared_ptr<TypeSignature>> signatures_by_index;
	static size_t index_ptr;
};


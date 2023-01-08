#pragma once

#include <memory>
#include <list>
#include <tuple>
#include <functional>
#include <utility>
#include "PrimitiveTypes.h"
#include "../Exception/Exception.h"
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
	llvm::Function *func_implicit;
	Primitive default_return_type;
	llvm::IRBuilder<> *ir;
	llvm::IRBuilder<> *ir_implicit;
	bool option_base;
	ParserToken &token;
	std::function<ValueType(ParserToken &t)> exprcompile;
};

class TypeSignature {
public:

	// Constructor/Destructor
	explicit TypeSignature(SourceFileData &state) : state(state) {}
	virtual ~TypeSignature() = default;

	// Get base stuff
	SignatureClass GetClass() { return clazz; }
	size_t GetIndex() { return index; }
	bool IsCreated() { return created; };
	Scope GetScope() { return scope; }
	std::string GetName() { return name; }

	// These need implementing for each type
	virtual bool operator==(TypeSignature &) = 0;
	virtual void Create(SignatureCall &call) = 0;
	virtual void GarbageCollect(SignatureCall &call) = 0;
	virtual llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) = 0;
	virtual ValueType Get(SignatureCall &call) = 0;
	virtual Primitive GetPrimitiveType(SignatureCall &call) = 0;
	virtual void Set(SignatureCall &call, ValueType value) = 0;

	// Static, shared stuff
	static std::shared_ptr<TypeSignature> Get(size_t index) { return signatures_by_index[index]; }
	static std::shared_ptr<TypeSignature> GetByName(const std::string &name);
	static void ClearStatic();
	static void ClearLocals();
	static void GCLocals(SignatureCall &call);
	llvm::Value *CreateCall(std::string func_name, llvm::ArrayRef<llvm::Value *> vals, SignatureCall &call) {
		return call.llvm.CreateCall(std::move(func_name), call.ir, call.func, vals, scope == Scope::LOCAL, call.default_return_type);
	}
protected:
	std::list<ParserToken> &GetExpressions();
	static std::string GetLatestInstanceIndex();
	llvm::Value *LocalIndex(SignatureCall &call);
	llvm::Value *GlobalIndexPtr(SignatureCall &call);
	llvm::Value *GlobalIndex(SignatureCall &call);

	SourceFileData &state;
	std::string name;
	SignatureClass clazz;
	Scope scope;
	bool created = false;
	bool is_ref = false;
	size_t index;
	std::list<ParserToken> expressions;
	std::vector<ValueType> values;
	size_t num_dimensions;

	static std::map<std::string, std::shared_ptr<TypeSignature>> signatures;
	static std::vector<std::shared_ptr<TypeSignature>> signatures_by_index;
	static size_t index_ptr;
	static size_t instance_ptr;
};


#pragma once

#include <memory>
#include <list>
#include <tuple>
#include <functional>
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
    Constant,
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
    TypeSignature(SourceFileData &state) : state(state) {}
    virtual ~TypeSignature() = default;
    SignatureClass GetClass() { return clazz; }
    size_t GetIndex() { return index; }
    bool IsCreated() { return created; };
    Scope GetScope() { return scope; }
    std::string GetName() { return name; }
    static std::shared_ptr<TypeSignature> Get(size_t index) { return signatures_by_index[index]; }
    static std::shared_ptr<TypeSignature> GetByName(std::string name);
    virtual llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) = 0;

    // Check two signatures are identical
    virtual bool operator==(TypeSignature &) = 0;

    // Creating, setting and getting
    virtual Primitive GetPrimitiveType(SignatureCall &call) = 0;
    virtual void Create(SignatureCall &call) = 0;
    virtual ValueType Get(SignatureCall &call) = 0;
    virtual void Set(SignatureCall &call, ValueType value) = 0;

    static void RaiseException(std::string msg, ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.file.filename, t.file.line, t.file.char_position, msg);
    }

    static void TypeError(ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.file.filename, t.file.line, t.file.char_position, "Type error");
    }

    // Indices
    std::list<ParserToken> &GetExpressions();
//	void SetValues(std::vector<ValueType> values);

    llvm::Value *CreateCall(std::string func_name, llvm::ArrayRef<llvm::Value *> vals, SignatureCall &call) {
        return call.llvm.CreateCall(func_name, call.ir, call.func, vals, scope == Scope::LOCAL, call.default_return_type);
    }

    // Clear locals at end of procedure
    static void ClearLocals();
protected:
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


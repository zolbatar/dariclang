#pragma once

#include <map>
#include <vector>
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/Parser.h"
#include "CompilerOptions.h"

class FuncParameter {
public:
	FuncParameter(Reference *ref, bool is_ref) : ref(ref), is_ref(is_ref) {}

	std::string GetName() { return ref->GetName(); }
	Reference *GetReference() { return ref; }
	bool IsRef() { return is_ref; }
	llvm::Type *GetLLVMType(CompilerLLVM &llvm) { return ref->GetLLVMType(is_ref, llvm); }

	bool ConvertToOutputValue(ValueType &vt, llvm::IRBuilder<> *ir, CompilerLLVM &llvm) {
		llvm.AutoConversion(ir, vt, ref->GetDataType());
		return vt.type == ref->GetDataType();
	}

private:
	Reference *ref;
	bool is_ref = false;
};

class LibraryFuncParameter {
public:
	LibraryFuncParameter(Primitive data_type, bool is_ref) : data_type(data_type), is_ref(is_ref) {}
	bool IsRef() { return is_ref; }

	bool ConvertToOutputValue(ValueType &vt, llvm::IRBuilder<> *ir, CompilerLLVM &llvm) {
		llvm.AutoConversion(ir, vt, data_type);
		return vt.type == data_type;
	}
private:
	Primitive data_type;
	bool is_ref = false;
};

struct Func {
	llvm::Function *func;
	Primitive return_type;
	std::vector<FuncParameter> parameters;
};

struct LibraryFunc {
	void *func;
	std::string func_name;
	Primitive return_Type;
	std::vector<LibraryFuncParameter> parameters;
};

class Compiler {
public:
	Compiler(SourceFileData &state, std::list<Parser> &parsers, CompilerOptions options)
		: state(state), options(options), parsers(parsers) {
	}

	bool Compile();
	void Run();
	void CreateExecutable();

private:
	CompilerOptions options;
	SourceFileData &state;
	std::list<Parser> parsers;
	bool compiling_main_file = true;
	bool strip_strings = false;
	CompilerLLVM llvm;
	llvm::Function *implicit = nullptr;
	llvm::IRBuilder<> *implicit_ir;
	llvm::Function *procedure = nullptr;
	Primitive return_type;
	llvm::IRBuilder<> *procedure_ir;
	std::unordered_map<std::string, Func> procedures;
	bool option_base = false;

	llvm::Value *CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals);
	void SetupLibrary();
	void AddLibraryCall(std::string name, std::string func, Primitive ret, std::string parameters);
	std::unordered_map<std::string, LibraryFunc> library;

	std::string GetScratchName(size_t line);
	size_t scratch_index = 0;
	llvm::Function *GetFunction() {
		return procedure != nullptr ? procedure : implicit;
	}
	llvm::IRBuilder<> *GetIR() {
		return procedure != nullptr ? procedure_ir : implicit_ir;
	}
	llvm::Function *GetFunctionImplicit() {
		return implicit;
	}
	llvm::IRBuilder<> *GetIRImplicit() {
		return implicit_ir;
	}

	ValueType CompileExpression(ParserToken &t);
	void GenericVariable(ParserToken &token, Scope scope);
	void CreateGlobalDimensions(Reference *var, Primitive type1, llvm::Type *type2);
	void CreateLocalDimensions(Reference *var, Primitive type1, llvm::Type *type2);
	void Constants();
	void CreateConstant(const std::string &name, Primitive type, llvm::Constant *val);
	void CreateLookaheadProc(ParserToken &t);
	void CompileStatements(std::vector<ParserToken> &statements);
	void TokenCall(ParserToken &token);
	void TokenEnd(ParserToken &token);
	void TokenGlobal(ParserToken &token);
	void TokenIf(ParserToken &token);
	void TokenLocal(ParserToken &token);
	void TokenProcedure(ParserToken &t);
	void TokenPrint(ParserToken &t);
	void TokenReturn(ParserToken &t);
	void TokenConst(ParserToken &t);
	void TokenSwap(ParserToken &t);
	void TokenDim(ParserToken &t);
	void TokenStruct(ParserToken &t);
	void TokenStructInstance(ParserToken &t);
	void TokenStructArray(ParserToken &t);
	void TokenRepeat(ParserToken &t);
	void TokenWhile(ParserToken &t);
	void TokenFor(ParserToken &t);
	void TokenCase(ParserToken &t);
	void TokenRead(ParserToken &t);
	void TokenRestore(ParserToken &t);
	void TokenOptionBase(ParserToken &t);

	std::vector<ValueType> ProcessIndices(Reference *ref, ParserToken &t);
	llvm::BasicBlock *CreateBB(std::string block_name, ParserToken &token);
	llvm::BasicBlock *CreateAndInsertBB(std::string block_name, bool branch, ParserToken &token);
	void AddBB(llvm::BasicBlock *bb);
	void RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2);
	void DefaultReturn(Primitive t, ParserToken &token);

	static void TypeError(ParserToken &token);
	static void RaiseException(std::string msg, ParserToken &t) {
		throw CustomException(ExceptionType::COMPILER, t.filename, t.line, t.char_position, msg);
	}
	static void SyntaxError(ParserToken &t) {
		throw CustomException(ExceptionType::COMPILER, t.filename, t.line, t.char_position, "Syntax error");
	}
	static void VariableNotFound(ParserToken &t, std::string name) {
		throw CustomException(ExceptionType::COMPILER,
							  t.filename,
							  t.line,
							  t.char_position,
							  "Variable '" + name + "' not found");
	}
	static void VariableError(ParserToken &t, std::string name) {
		throw CustomException(ExceptionType::COMPILER,
							  t.filename,
							  t.line,
							  t.char_position,
							  "Variable error with '" + name + "'");
	}
	static void RecordNotFound(ParserToken &t, std::string name) {
		throw CustomException(ExceptionType::COMPILER,
							  t.filename,
							  t.line,
							  t.char_position,
							  "Record '" + name + "' not found");
	}

	static void VariableAlreadyExists(ParserToken &t, std::string name) {
		throw CustomException(ExceptionType::COMPILER,
							  t.filename,
							  t.line,
							  t.char_position,
							  "Variable '" + name + "' already defined");
	}

	static void ProcedureNotFound(ParserToken &t, std::string name) {
		throw CustomException(ExceptionType::COMPILER, t.filename,
							  t.line, t.char_position, "Procedure '" + name + "' not found");
	}
};

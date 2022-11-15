#pragma once
#include <map>
#include <vector>
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/Parser.h"
#include "CompilerOptions.h"

struct Func {
    llvm::Function *func;
    Primitive return_type;
    std::vector<Primitive> parameters;
    std::vector<llvm::Type *> llvm_parameters;
    std::vector<std::string> parameter_names;
};

class Compiler {
public:
    Compiler(SharedState &state, Parser *parser, CompilerOptions options) :
            state(state), options(options), parser(parser) {}
    bool Compile();
    void Run();
    void CreateExecutable();

private:
    CompilerOptions options;
    SharedState &state;
    Parser *parser;
    bool strip_strings = false;
    CompilerLLVM llvm;
    llvm::Function *implicit = nullptr;
    llvm::IRBuilder<> *implicit_ir;
    llvm::Function *procedure = nullptr;
    Primitive return_type;
    llvm::IRBuilder<> *procedure_ir;
    std::unordered_map<std::string, Func> procedures;
    llvm::Value *CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals);

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

    std::vector<ValueType> ProcessIndices(Reference *ref, ParserToken &t);

    llvm::BasicBlock *CreateAndInsertBB(std::string block_name, bool add_branch, ParserToken &token);
    void RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2);
    void DefaultReturn(Primitive t, ParserToken &token);

    static void TypeError(ParserToken &token);
    static void RaiseException(std::string msg, ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, msg);
    }
    static void SyntaxError(ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, "Syntax error");
    }
    static void VariableNotFound(ParserToken &t, std::string name) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, "Variable '" + name + "' not found");
    }
    static void VariableAlreadyExists(ParserToken &t, std::string name) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position,
                              "Variable '" + name + "' already defined");
    }
    static void ProcedureNotFound(ParserToken &t, std::string name) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, "Procedure '" + name + "' not found");
    }
};

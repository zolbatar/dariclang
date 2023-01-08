#pragma once

#include <map>
#include <vector>
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/Parser.h"
#include "CompilerOptions.h"
#include "../Types/Type.h"
#include "FuncParameter.h"

class LibraryFuncParameter {
public:
    LibraryFuncParameter(Primitive data_type, bool is_ref) : data_type(data_type), is_ref(is_ref) {}
    bool IsRef() { return is_ref; }
    Primitive GetType() { return data_type; }

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
            : options(options), state(state), parsers(parsers) {
    }

    static void SetupLibrary();
    bool Compile();
    void Run();
    std::string CreateExecutable();

private:
    CompilerOptions options;
    SourceFileData &state;
    std::list<Parser> parsers;
    bool compiling_main_file = true;
    bool strip_strings = false;
    CompilerLLVM llvm;
    llvm::Function *implicit = nullptr;
    llvm::IRBuilder<> *implicit_ir;
    llvm::IRBuilder<> *implicit_pre_ir;
    llvm::Function *procedure = nullptr;
    Primitive return_type = Primitive::NONE;
    llvm::IRBuilder<> *procedure_ir;
    llvm::IRBuilder<> *procedure_pre_ir;
    std::unordered_map<std::string, Func> procedures;
    bool option_base = false;

    llvm::Value *CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals);
    void SetupLibraryLLVM();
    static void AddLibraryCall(std::string name, std::string func, Primitive ret, std::string parameters);
    static std::unordered_map<std::string, LibraryFunc> library;

    SignatureCall BuildTypeCall(ParserToken &token) {
        SignatureCall sc{
                .llvm = llvm,
                .func = GetFunction(),
                .func_implicit = GetFunctionImplicit(),
                .default_return_type = return_type,
                .ir = GetIR(),
                .ir_implicit = GetIRImplicit(),
                .option_base = option_base,
                .token = token,
                .exprcompile = [&](ParserToken &t) {
                    return this->CompileExpression(t);
                },
        };
        return sc;
    }

    std::string GetScratchName(size_t line);
    size_t scratch_index = 0;
    llvm::Function *GetFunction() {
        return procedure != nullptr ? procedure : implicit;
    }
    llvm::IRBuilder<> *GetIR() {
        return procedure != nullptr ? procedure_ir : implicit_ir;
    }
    llvm::IRBuilder<> *GetPreIR() {
        return procedure != nullptr ? procedure_pre_ir : implicit_pre_ir;
    }
    llvm::Function *GetFunctionImplicit() {
        return implicit;
    }
    llvm::IRBuilder<> *GetIRImplicit() {
        return implicit_ir;
    }

    llvm::Value *IntToBitConditional(llvm::Value *value);
    ValueType CompileExpression(ParserToken &t);
    void GenericVariable(ParserToken &token, Scope scope);
    void CreateLookaheadProc(ParserToken &t);
    void CompileStatements(std::vector<ParserToken> &statements);
    void TokenCall(ParserToken &token);
    void TokenEnd(ParserToken &token);
    void TokenGlobal(ParserToken &token);
    void TokenIf(ParserToken &token);
    void TokenLocal(ParserToken &token);
    void TokenProcedure(ParserToken &t);
    void TokenPrint(ParserToken &t);
    void TokenPrintSys(ParserToken &t);
    void TokenReturn(ParserToken &t);
    void TokenConst(ParserToken &t);
    void TokenSwap(ParserToken &t);
    void TokenDim(ParserToken &t);
    void TokenContainer(ParserToken &t);
    void TokenStruct(ParserToken &t);
    void TokenRepeat(ParserToken &t);
    void TokenWhile(ParserToken &t);
    void TokenFor(ParserToken &t);
    void TokenCase(ParserToken &t);
    void TokenRead(ParserToken &t);
    void TokenRestore(ParserToken &t);
    void TokenOptionBase(ParserToken &t);
    void TokenInput(ParserToken &t);
    void TokenPlace(ParserToken &t);
    void TokenFetch(ParserToken &t);
    void TokenClear(ParserToken &t);

    llvm::BasicBlock *CreateBB(std::string block_name, ParserToken &token);
    llvm::BasicBlock *CreateAndInsertBB(std::string block_name, bool branch, ParserToken &token);
    void AddBB(llvm::BasicBlock *bb);
    void RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2);
    void DefaultReturn(Primitive t, ParserToken &token);
};

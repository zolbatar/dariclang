#include <iostream>
#include <iomanip>
#include <utility>
#include "Compiler.h"
#include "llvm/Bitcode/BitcodeWriter.h"

bool Compiler::Compile() {

    auto t1 = std::chrono::steady_clock::now();
    std::cout << "Compiling..." << std::endl;
    switch (options.target) {
        case CompileTarget::EXE:
            std::cout << "Target: Standalone executable" << std::endl;
            break;
        case CompileTarget::JIT:
            std::cout << "Target: JIT runtime" << std::endl;
            break;
        case CompileTarget::INTERACTIVE:
            std::cout << "Target: Interactive" << std::endl;
            break;
    }

//    try {
    llvm.SetupProfile(options, parser->GetModule());

    // Lookahead
    auto n = Primitive::NONE;
    implicit = llvm.CreateFunc("Implicit", llvm.TypeConversion(n), {});
    implicit_ir = llvm.CreateBuilder("Implicit Builder", implicit);
    for (auto &token: parser->GetStatements()) {
        switch (token.type) {
            case ParserTokenType::PROCEDURE:
                CreateLookaheadProc(token);
                break;
            default:
                // Do nothing
                break;
        }
    }

    CompileStatements(parser->GetStatements());
    implicit_ir->CreateRetVoid();
/*    }
    catch (CustomException &ex) {
        ex.OutputToStdout();
        return false;
    }*/
    auto t2 = std::chrono::steady_clock::now();
    double time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    time_span /= 1000000.0;
    std::cout << "Compilation took " << std::setprecision(2) << time_span << " seconds" <<  std::endl;
    return true;
}

void Compiler::CompileStatements(std::vector<ParserToken> &statements) {
    for (auto &token: statements) {
//		std::cout << "Line: " << token.line << std::endl;
        switch (token.type) {
            case ParserTokenType::PARAMETER:
                break;
            case ParserTokenType::STRUCT:
                TokenStruct(token);
                break;
            case ParserTokenType::STRUCT_INSTANCE:
                TokenStructInstance(token);
                break;
            case ParserTokenType::STRUCT_DIM:
                TokenStructArray(token);
                break;
            case ParserTokenType::DIM:
                TokenDim(token);
                break;
            case ParserTokenType::CALL:
                TokenCall(token);
                break;
            case ParserTokenType::END:
                TokenEnd(token);
                break;
            case ParserTokenType::IF:
                TokenIf(token);
                break;
            case ParserTokenType::PROCEDURE:
                TokenProcedure(token);
                break;
            case ParserTokenType::PRINT:
            case ParserTokenType::PRINTFORMAT:
                TokenPrint(token);
                break;
            case ParserTokenType::RETURN:
                TokenReturn(token);
                break;
            case ParserTokenType::GLOBAL:
                TokenGlobal(token);
                break;
            case ParserTokenType::LOCAL:
                TokenLocal(token);
                break;
            case ParserTokenType::CONSTANT:
                TokenConst(token);
                break;
            case ParserTokenType::SWAP:
                TokenSwap(token);
                break;
            default:
                assert(0);
        }

        // Clear temp?
        if (strip_strings) {
            strip_strings = false;
            llvm.ClearTempStrings(GetIR());
        }
    }
}

void Compiler::CreateExecutable() {
    llvm.CreateExecutable(options.output_filename);
}

void Compiler::Run() {
    llvm.Run();
}

llvm::BasicBlock *Compiler::CreateAndInsertBB(std::string block_name, bool add_branch, ParserToken &token) {
    return llvm.CreateAndInsertBB(std::move(block_name), add_branch, token.line, GetFunction(), GetIR());
}

void Compiler::RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2) {
    llvm.RetBrCheckSplit(bb1, bb2, GetIR());
}

void Compiler::TokenEnd(ParserToken &token) {
    auto t = Primitive::INT;
    if (!options.use_exit_as_end) {
        llvm.StoreGlobal("~QuitRequested", GetIR(), llvm.CreateConstantInt(t, 1));
        auto block = CreateAndInsertBB("END", true, token);
        GetIR()->CreateRetVoid();
        CreateAndInsertBB("END end", false, token);
    } else {
        CreateCall("daric_end", {});
    }
}

void Compiler::DefaultReturn(Primitive t, ParserToken &token) {
    switch (t) {
        case Primitive::NONE:
            GetIR()->CreateRetVoid();
            break;
        case Primitive::INT:
            GetIR()->CreateRet(llvm::ConstantInt::get(llvm.TypeInt, 0));
            break;
        case Primitive::FLOAT:
            GetIR()->CreateRet(llvm::ConstantFP::get(llvm.TypeFloat, 0.0));
            break;
        case Primitive::STRING:
            GetIR()->CreateRet(GetIR()->CreateGlobalStringPtr(""));
            break;
        default:
            TypeError(token);
    }
}

void Compiler::TypeError(ParserToken &token) {
    RaiseException("Type error", token);
}

llvm::Value *Compiler::CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals) {
    return llvm.CreateCall(name, GetIR(), GetFunction(), vals);
}

#include <iostream>
#include "Compiler.h"

bool Compiler::Compile(Parser *parser, bool optimise, bool allow_end) {
    try {
        llvm.SetupProfile(optimise, allow_end, parser->GetModule());
        this->parser = parser;
        this->allow_end = allow_end;

        // Lookahead
        auto n = Primitive::NONE;
        implicit = llvm.CreateFunc("Implicit", llvm.TypeConversion(n), {});
        implicit_ir = llvm.CreateBuilder("Implicit Builder", implicit);
        for (auto &token: parser->GetStatements()) {
            switch (token.type) {
                case ParserTokenType::GLOBAL:
                    TokenGlobal(token);
                    break;
                case ParserTokenType::MODULE:
                    // This is the namespace, set up elsewhere
                    break;
                case ParserTokenType::PROCEDURE:
                    CreateLookaheadProc(token);
                    break;
                case ParserTokenType::DIM_GLOBAL:
                    TokenDim(token);
                    break;
                case ParserTokenType::STRUCT:
                    TokenStruct(token);
                    break;
                case ParserTokenType::STRUCT_INSTANCE_GLOBAL:
                    TokenStructGlobal(token);
                    break;
                default:
                    // Do nothing
                    break;
            }
        }

        // Real compile
        CompileStatements(parser->GetStatements());
        implicit_ir->CreateRetVoid();
        return true;
    }
    catch (CustomException &ex) {
        ex.OutputToStdout();
        return false;
    }
}

void Compiler::CompileStatements(std::vector<ParserToken> &statements) {
    for (auto &token: statements) {
//		std::cout << "Line: " << token.line << std::endl;
        switch (token.type) {
            case ParserTokenType::PARAMETER:
            case ParserTokenType::GLOBAL:
            case ParserTokenType::MODULE:
            case ParserTokenType::DIM_GLOBAL:
            case ParserTokenType::STRUCT:
            case ParserTokenType::STRUCT_INSTANCE_GLOBAL:
                // Handled in first pass
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
            case ParserTokenType::LOCAL:
                TokenLocal(token);
                break;
            case ParserTokenType::CONSTANT:
                TokenConst(token);
                break;
            case ParserTokenType::SWAP:
                TokenSwap(token);
                break;
            case ParserTokenType::DIM_LOCAL:
                TokenDim(token);
                break;
            case ParserTokenType::STRUCT_INSTANCE_LOCAL:
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

void Compiler::Run() {
    llvm.Run();
}

llvm::BasicBlock *Compiler::CreateAndInsertBB(std::string block_name, bool add_branch, ParserToken &token) {
    return llvm.CreateAndInsertBB(block_name, add_branch, token.line, GetFunction(), GetIR());
}

void Compiler::RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2) {
    llvm.RetBrCheckSplit(bb1, bb2, GetIR());
}

void Compiler::TokenEnd(ParserToken &token) {
    auto t = Primitive::INT;
    if (allow_end) {
        llvm.StoreGlobal("~QuitRequested", GetIR(), llvm.CreateConstantInt(t, 1));
        auto block = CreateAndInsertBB("END", true, token);
        GetIR()->CreateRetVoid();
        CreateAndInsertBB("END end", false, token);
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

#include <iostream>
#include <iomanip>
#include <utility>
#include "Compiler.h"
#include "llvm/Bitcode/BitcodeWriter.h"

#define CATCH_ERRORS 1
//#define PERF 1

bool Compiler::Compile() {
	auto t1 = std::chrono::steady_clock::now();
	switch (options.target) {
	case CompileTarget::EXE:std::cout << "Target: Standalone executable (via object file)" << std::endl;
		break;
	case CompileTarget::JIT:std::cout << "Target: JIT runtime" << std::endl;
		break;
	case CompileTarget::INTERACTIVE:std::cout << "Target: Interactive" << std::endl;
		break;
	}

#ifdef CATCH_ERRORS
	try {
#endif
		llvm.SetupProfile(options, parser->GetModule(), state);

		// Library
		SetupLibrary();
		Constants();

		// Setup implicit
		auto n = Primitive::NONE;
		implicit = llvm.CreateFunc("Implicit", llvm.TypeConversion(n), {});
		implicit_ir = llvm.CreateBuilder("Implicit Builder", implicit);

		// Looahead
		for (auto &token : parser->GetStatements()) {
			switch (token.type) {
			case ParserTokenType::PROCEDURE:CreateLookaheadProc(token);
				break;
			case ParserTokenType::STRUCT:TokenStruct(token);
				break;
			default:
				// Do nothing
				break;
			}
		}

		CompileStatements(parser->GetStatements());
		implicit_ir->CreateRetVoid();
#ifdef CATCH_ERRORS
	}
	catch (CustomException &ex) {
		ex.OutputToStdout();
		return false;
	}
#endif
#ifdef PERF
	auto t2 = std::chrono::steady_clock::now();
	double time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
	time_span /= 1000000.0;
	std::cout << "Compilation took " << std::setprecision(2) << time_span << " seconds" <<  std::endl;
#endif
	return true;
}

void Compiler::CompileAdditional() {
	this->option_base = false;
}

void Compiler::CompileStatements(std::vector<ParserToken> &statements) {
	for (auto &token : statements) {
		//std::cout << "Line: " << token.line << std::endl;
		switch (token.type) {
		case ParserTokenType::IMPORT: break;
		case ParserTokenType::NONE:
		case ParserTokenType::PARAMETER:
		case ParserTokenType::PARAMETER_REF:
		case ParserTokenType::STRUCT:break;
		case ParserTokenType::STRUCT_INSTANCE:TokenStructInstance(token);
			break;
		case ParserTokenType::STRUCT_DIM:TokenStructArray(token);
			break;
		case ParserTokenType::DIM:TokenDim(token);
			break;
		case ParserTokenType::CALL:TokenCall(token);
			break;
		case ParserTokenType::END:TokenEnd(token);
			break;
		case ParserTokenType::IF:TokenIf(token);
			break;
		case ParserTokenType::PROCEDURE:TokenProcedure(token);
			break;
		case ParserTokenType::PRINT:
		case ParserTokenType::PRINTFORMAT:TokenPrint(token);
			break;
		case ParserTokenType::RETURN:TokenReturn(token);
			break;
		case ParserTokenType::GLOBAL:TokenGlobal(token);
			break;
		case ParserTokenType::LOCAL:TokenLocal(token);
			break;
		case ParserTokenType::CONSTANT:TokenConst(token);
			break;
		case ParserTokenType::SWAP:TokenSwap(token);
			break;
		case ParserTokenType::REPEAT:TokenRepeat(token);
			break;
		case ParserTokenType::WHILE:TokenWhile(token);
			break;
		case ParserTokenType::FOR:TokenFor(token);
			break;
		case ParserTokenType::CASE:TokenCase(token);
			break;
		case ParserTokenType::READ:TokenRead(token);
			break;
		case ParserTokenType::RESTORE:TokenRestore(token);
			break;
		case ParserTokenType::OPTIONBASE:TokenOptionBase(token);
			break;
		default:assert(0);
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

llvm::BasicBlock *Compiler::CreateBB(std::string block_name, ParserToken &token) {
	return llvm.CreateBB(block_name, token.line);
}

void Compiler::AddBB(llvm::BasicBlock *bb) {
//    GetIR()->SetInsertPoint(bb);
	llvm.AddBB(bb, GetFunction(), GetIR());
}

llvm::BasicBlock *Compiler::CreateAndInsertBB(std::string block_name, bool branch, ParserToken &token) {
	return llvm.CreateAndInsertBB(std::move(block_name), branch, token.line, GetFunction(), GetIR());
}

void Compiler::RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2) {
	llvm.RetBrCheckSplit(bb1, bb2, GetIR());
}

void Compiler::TokenEnd(ParserToken &token) {
	if (!options.use_exit_as_end) {
		llvm.StoreGlobal("~QuitRequested", GetIR(), llvm.CreateConstantInt(Primitive::INT, 1));
		GetIR()->CreateRetVoid();
		CreateAndInsertBB("Post set quit requested", false, token);
	} else {
		CreateCall("daric_end", {});
	}
}

void Compiler::DefaultReturn(Primitive t, ParserToken &token) {
	switch (t) {
	case Primitive::NONE:GetIR()->CreateRetVoid();
		break;
	case Primitive::INT:GetIR()->CreateRet(llvm::ConstantInt::get(llvm.TypeInt, 0));
		break;
	case Primitive::FLOAT:GetIR()->CreateRet(llvm::ConstantFP::get(llvm.TypeFloat, 0.0));
		break;
	case Primitive::STRING:GetIR()->CreateRet(GetIR()->CreateGlobalStringPtr(""));
		break;
	default:TypeError(token);
	}
}

void Compiler::TypeError(ParserToken &token) {
	RaiseException("Type error", token);
}

llvm::Value *Compiler::CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals) {
	return llvm.CreateCall(name, GetIR(), GetFunction(), vals, procedures.contains(name), return_type);
}

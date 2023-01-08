#include <iostream>
#include <iomanip>
#include <utility>
#include "Compiler.h"
#include "llvm/Bitcode/BitcodeWriter.h"

extern std::list<CaughtException> errors;

#define CATCH_ERRORS 1
//#define PERF 1

bool Compiler::Compile() {
#ifdef PERF
	auto t1 = std::chrono::steady_clock::now();
#endif
	switch (options.target) {
		case CompileTarget::EXE:
			std::cout << "Target: Standalone executable (via object file)" << std::endl;
			break;
		case CompileTarget::JIT:
			std::cout << "Target: JIT runtime" << std::endl;
			break;
		case CompileTarget::INTERACTIVE:
			std::cout << "Target: Interactive" << std::endl;
			break;
	}

#ifdef CATCH_ERRORS
	try {
#endif
		llvm.SetupProfile(options, "Daric", state);

		// Library
		SetupLibraryLLVM();

		// Setup implicit
		auto n = Primitive::NONE;
		implicit = llvm.CreateFunc("Implicit", llvm.TypeConversion(n), {});
		implicit_pre_ir = llvm.CreateBuilder("Implicit Pre-Builder", implicit);
		implicit_ir = llvm.CreateBuilder("Implicit Builder", implicit);
		auto bb = implicit_ir->GetInsertBlock();

		// Looahead (across all files)
		for (auto &p : parsers) {
			for (auto &token : p.GetStatements()) {
				switch (token.type) {
					case ParserTokenType::PROCEDURE:
						CreateLookaheadProc(token);
						break;
					case ParserTokenType::STRUCT:
						TokenStruct(token);
						break;
					default:
						// Do nothing
						break;
				}
			}
		}

		// Do actual compile
		auto idx = 0;
		for (auto &p : parsers) {
			compiling_main_file = static_cast<size_t>(idx) == parsers.size() - 1;
			this->option_base = false;
			CompileStatements(p.GetStatements());
			idx++;
		}

		// Finish up the implicit function
		implicit_pre_ir->CreateBr(bb);
		implicit_ir->CreateRetVoid();
#ifdef CATCH_ERRORS
	}
	catch (CustomException &ex) {
		if (this->options.target == CompileTarget::INTERACTIVE) {
			errors.emplace_back(CaughtException{
				.filename = ex.filename,
				.line_number = ex.line_number,
				.char_position =ex.char_position,
				.error = ex.error
			});
		} else {
			ex.OutputToStdout();
		}
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

void Compiler::CompileStatements(std::vector<ParserToken> &statements) {
	for (auto &token : statements) {
		//std::cout << "Line: " << token.file.line << std::endl;
		switch (token.type) {
			case ParserTokenType::IMPORT:
			case ParserTokenType::NONE:
			case ParserTokenType::PARAMETER:
			case ParserTokenType::PARAMETER_REF:
			case ParserTokenType::STRUCT:
				break;
			case ParserTokenType::DIM:
				TokenDim(token);
				break;
			case ParserTokenType::CONTAINER:
				TokenContainer(token);
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
			case ParserTokenType::PRINTSYS:
			case ParserTokenType::PRINTSYSFORMAT:
				TokenPrintSys(token);
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
			case ParserTokenType::REPEAT:
				TokenRepeat(token);
				break;
			case ParserTokenType::WHILE:
				TokenWhile(token);
				break;
			case ParserTokenType::FOR:
				TokenFor(token);
				break;
			case ParserTokenType::CASE:
				TokenCase(token);
				break;
			case ParserTokenType::READ:
				TokenRead(token);
				break;
			case ParserTokenType::RESTORE:
				TokenRestore(token);
				break;
			case ParserTokenType::OPTIONBASE:
				TokenOptionBase(token);
				break;
			case ParserTokenType::INPUT:
				TokenInput(token);
				break;
			case ParserTokenType::FETCH:
				TokenFetch(token);
				break;
			case ParserTokenType::PLACE:
				TokenPlace(token);
				break;
			case ParserTokenType::CLEAR:
				TokenClear(token);
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

std::string Compiler::CreateExecutable() {
	return llvm.CreateExecutable(options.output_filename);
}

void Compiler::Run() {
	llvm.Run();
}

llvm::BasicBlock *Compiler::CreateBB(std::string block_name, ParserToken &token) {
	return llvm.CreateBB(block_name, token.file.line);
}

void Compiler::AddBB(llvm::BasicBlock *bb) {
//    GetIR()->SetInsertPoint(bb);
	llvm.AddBB(bb, GetFunction(), GetIR());
}

llvm::BasicBlock *Compiler::CreateAndInsertBB(std::string block_name, bool branch, ParserToken &token) {
	return llvm.CreateAndInsertBB(std::move(block_name), branch, token.file.line, GetFunction(), GetIR());
}

void Compiler::RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2) {
	llvm.RetBrCheckSplit(bb1, bb2, GetIR());
}

void Compiler::TokenEnd(ParserToken &token) {
	if (!options.use_exit_as_end) {
		GetIR()->CreateStore(llvm::ConstantInt::get(llvm.TypeBit, 1), llvm.GetGlobal("~QuitRequested"));
		DefaultReturn(return_type, token);
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

llvm::Value *Compiler::CreateCall(std::string name, llvm::ArrayRef<llvm::Value *> vals) {
	return llvm.CreateCall(name, GetIR(), GetFunction(), vals, procedures.contains(name), return_type);
}

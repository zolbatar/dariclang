#include <iostream>
#include "CompilerLLVM.h"

llvm::Value *CompilerLLVM::CreateCall(std::string &name,
                                      llvm::IRBuilder<> *ir,
                                      llvm::Function *this_func,
                                      llvm::ArrayRef<llvm::Value *> vals,
                                      bool user_function,
                                      Primitive default_return_type) {
    auto func = Module->getFunction(name);
    if (!func)
        return nullptr;

    // Check for escape as the end of EVERY call
    if (!options.use_exit_as_end) {
        // We need to check for END at the end of every DEF call
        if (user_function) {
            auto quit = ir->CreateLoad(TypeBit, globals["~QuitRequested"]);
            auto block = ir->GetInsertBlock();
            auto block_quit = llvm::BasicBlock::Create(Module->getContext(), "END Quit", this_func);
            auto block_cont = llvm::BasicBlock::Create(Module->getContext(), "END Continue", this_func);
            ir->SetInsertPoint(block);
            ir->CreateCondBr(quit, block_quit, block_cont);
            ir->SetInsertPoint(block_quit);
            DefaultReturn(default_return_type, ir);
            ir->SetInsertPoint(block_cont);
            return ir->CreateCall(func, vals);
        } else {
            auto key = ir->CreateCall(Module->getFunction("kbm_escape_pressed"));
            auto quit1 = ir->CreateLoad(TypeBit, globals["~QuitRequested"]);
            auto quit = ir->CreateOr(quit1, key);
            auto block = ir->GetInsertBlock();
            auto block_quit = llvm::BasicBlock::Create(Module->getContext(), "END Quit", this_func);
            auto block_cont = llvm::BasicBlock::Create(Module->getContext(), "END Continue", this_func);
            ir->SetInsertPoint(block);
            ir->CreateCondBr(quit, block_quit, block_cont);
            ir->SetInsertPoint(block_quit);
            DefaultReturn(default_return_type, ir);
            ir->SetInsertPoint(block_cont);
            return ir->CreateCall(func, vals);
        }
    } else {
        return ir->CreateCall(func, vals);
    }
}

void CompilerLLVM::DefaultReturn(Primitive t, llvm::IRBuilder<> *ir) {
    switch (t) {
        case Primitive::NONE:
            ir->CreateRetVoid();
            break;
        case Primitive::INT:
            ir->CreateRet(llvm::ConstantInt::get(TypeInt, 0));
            break;
        case Primitive::FLOAT:
            ir->CreateRet(llvm::ConstantFP::get(TypeFloat, 0.0));
            break;
        case Primitive::STRING:
            ir->CreateRet(ir->CreateGlobalStringPtr(""));
            break;
        default:
            assert(0);
    }
}

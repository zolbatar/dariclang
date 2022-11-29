#include <iostream>
#include "CompilerLLVM.h"

llvm::Value *CompilerLLVM::CreateCall(std::string &name,
                                      llvm::IRBuilder<> *ir,
                                      llvm::Function *this_func,
                                      llvm::ArrayRef<llvm::Value *> vals,
                                      bool user_function) {
    auto func = Module->getFunction(name);
    if (!func)
        return nullptr;

    // Check for escape as the end of EVERY call
    auto v = ir->CreateCall(func, vals);
    if (!options.use_exit_as_end) {
        // We need to check for END at the end of every DEF call
        if (user_function) {
            auto quit = ir->CreateLoad(TypeInt, globals["~QuitRequested"]);
            auto test = ir->CreateICmpEQ(quit, llvm::ConstantInt::get(TypeInt, 1));
            auto block = ir->GetInsertBlock();
            auto block_quit = llvm::BasicBlock::Create(Module->getContext(), "END Quit", this_func);
            auto block_cont = llvm::BasicBlock::Create(Module->getContext(), "END Continue", this_func);
            ir->SetInsertPoint(block);
            ir->CreateCondBr(test, block_quit, block_cont);
            ir->SetInsertPoint(block_quit);
            ir->CreateRetVoid();
            ir->SetInsertPoint(block_cont);
            return v;
        } else {
            auto key = ir->CreateCall(Module->getFunction("kbm_escape_pressed"));
            auto quit1 = ir->CreateLoad(TypeInt, globals["~QuitRequested"]);
            auto quit = ir->CreateOr(quit1, key);
            auto test = ir->CreateICmpEQ(quit, llvm::ConstantInt::get(TypeInt, 1));
            auto block = ir->GetInsertBlock();
            auto block_quit = llvm::BasicBlock::Create(Module->getContext(), "END Quit", this_func);
            auto block_cont = llvm::BasicBlock::Create(Module->getContext(), "END Continue", this_func);
            ir->SetInsertPoint(block);
            ir->CreateCondBr(test, block_quit, block_cont);
            ir->SetInsertPoint(block_quit);
            ir->CreateRetVoid();
            ir->SetInsertPoint(block_cont);
            return v;
        }
    } else {
        return v;
    }
}

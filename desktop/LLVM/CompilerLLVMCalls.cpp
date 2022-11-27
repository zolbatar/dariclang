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

    // We need to check for END at the end of every DEF call
    if (!options.use_exit_as_end && user_function) {
        auto v = ir->CreateCall(func, vals);
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
        return ir->CreateCall(func, vals);
    }
}

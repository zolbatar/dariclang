#include <iostream>
#include "CompilerLLVM.h"

llvm::BasicBlock *CompilerLLVM::CreateAndInsertBB(std::string block_name, bool add_branch,
                                                  size_t line_number,
                                                  llvm::Function *func,
                                                  llvm::IRBuilder<> *builder) {
    auto ln = std::to_string(line_number);
    auto block = llvm::BasicBlock::Create(Module->getContext(), block_name + " (" + ln + ")", func);

    // Previous?
    if (add_branch) {
        builder->CreateBr(block);
        builder->SetInsertPoint(block);
    }

    return block;
}

void CompilerLLVM::RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2, llvm::IRBuilder<> *builder) {
    auto last = bb1->getTerminator();
//    builder->SetInsertPoint(bb1);
    if (last == NULL) {
        builder->CreateBr(bb2);
        return;
    }
    auto lastOpcode = last->getOpcodeName();
    std::string lo = lastOpcode;
    if (lo.compare("ret") != 0) {
        builder->CreateBr(bb2);
    }
}

#include <iostream>
#include "CompilerLLVM.h"

llvm::BasicBlock *CompilerLLVM::CreateBB(std::string block_name, size_t line_number) {
    auto ln = std::to_string(line_number);
    auto block = llvm::BasicBlock::Create(Module->getContext(), block_name + " (" + ln + ")");
    return block;
}

llvm::BasicBlock *CompilerLLVM::CreateAndInsertBB(std::string block_name,
                                                  bool branch,
                                                  size_t line_number,
                                                  llvm::Function *func,
                                                  llvm::IRBuilder<> *builder) {
    auto ln = std::to_string(line_number);
    auto block = llvm::BasicBlock::Create(Module->getContext(), block_name + " (" + ln + ")", func);
    if (branch) {
        builder->CreateBr(block);
        builder->SetInsertPoint(block);
    }
    return block;
}

void CompilerLLVM::AddBB(llvm::BasicBlock *bc, llvm::Function *func, llvm::IRBuilder<> *builder) {
    func->getBasicBlockList().push_back(bc);
    builder->SetInsertPoint(bc);
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

bool CompilerLLVM::CheckReturn(llvm::IRBuilder<> *builder) {
    auto last = builder->GetInsertBlock()->getTerminator();
    if (last == NULL) {
        return false;
    }
    auto lastOpcode = last->getOpcodeName();
    std::string lo = lastOpcode;
    if (lo.compare("ret") == 0) {
        return true;
    }
    return false;
}

#pragma once

#include <memory>
#include <unordered_map>
#include "llvm/IR/IRBuilder.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"

extern "C" void Strings_Clear();
extern "C" void Strings_Summary();

class JIT {
public:
    JIT(std::unique_ptr<llvm::Module> module, std::unique_ptr<llvm::LLVMContext> context, llvm::Triple TheTriple)
            : module(std::move(module)), context(std::move(context)), TheTriple(TheTriple) {
    }

    void run();

private:
    std::unique_ptr<llvm::Module> module = nullptr;
    std::unique_ptr<llvm::LLVMContext> context = nullptr;
    llvm::Triple TheTriple;
};
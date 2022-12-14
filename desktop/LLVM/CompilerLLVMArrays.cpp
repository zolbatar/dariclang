#include "CompilerLLVM.h"

llvm::GlobalVariable *CompilerLLVM::GetGlobalArrayDimensions(std::string name) {
    return globals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::GetLocalArrayDimensions(std::string name) {
    return locals_array_dimensions[name];
}

llvm::GlobalVariable *CompilerLLVM::CreateGlobalArray(std::string name,
                                                      llvm::ArrayType *typ,
                                                      llvm::Constant *init,
                                                      size_t sz,
                                                      llvm::ArrayType *size_v,
                                                      Primitive type) {
    globals_array_dimensions[name] = new llvm::GlobalVariable(*Module,
                                                              typ,
                                                              false,
                                                              GetLinkage(),
                                                              init,
                                                              name + "_dimensions");
    globals_type.insert(std::make_pair(name, type));
    globals_array_num_dimensions[name] = sz;

    // Actual array data
    globals[name] = new llvm::GlobalVariable(*Module,
                                             size_v,
                                             false,
                                             GetLinkage(),
                                             llvm::ConstantAggregateZero::get(size_v),
                                             name);

    return globals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::CreateLocalArrayStage1(std::string name,
                                                       llvm::IRBuilder<> *ir,
                                                       size_t sz,
                                                       Primitive type) {
    locals_array_dimensions[name] = ir->CreateAlloca(TypeInt,
                                                     llvm::ConstantInt::get(TypeInt, sz),
                                                     name + "_dimensions");
    locals_type.insert(std::make_pair(name, type));
    locals_array_num_dimensions[name] = sz;
    return locals_array_dimensions[name];
}

llvm::AllocaInst *CompilerLLVM::CreateLocalArrayStage2(std::string name,
                                                       llvm::IRBuilder<> *ir,
                                                       llvm::Value *sz,
                                                       llvm::Type *type) {
    locals[name] = ir->CreateAlloca(type, sz, name);
    return locals[name];
}

llvm::Value *CompilerLLVM::GetArraySize(std::string name, llvm::IRBuilder<> *ir) {
    if (globals_array_dimensions.contains(name)) {
        auto ptr = ir->CreateGEP(TypeInt,
                                 globals_array_dimensions[name],
                                 {llvm::ConstantInt::get(TypeInt, globals_array_num_dimensions[name] - 1)});
        return ir->CreateLoad(TypeInt, ptr);
    } else if (locals_array_dimensions.contains(name)) {
        auto ptr = ir->CreateGEP(TypeInt,
                                 locals_array_dimensions[name],
                                 {llvm::ConstantInt::get(TypeInt, locals_array_num_dimensions[name] - 1)});
        return ir->CreateLoad(TypeInt, ptr);
    }
    return nullptr;
}

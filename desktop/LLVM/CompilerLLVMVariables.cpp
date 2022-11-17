#include <iostream>
#include "CompilerLLVM.h"

void CompilerLLVM::CreateConstant(const std::string &name, Primitive type, llvm::Constant *val) {
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeConversion(type),
                                             true,
                                             GetLinkage(),
                                             val,
                                             name);

    globals_type[name] = type;
}

void CompilerLLVM::CreateGlobal(const std::string &name, Primitive type, llvm::Constant *val) {
    assert(!globals.contains(name));
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeConversion(type),
                                             false,
                                             GetLinkage(),
                                             val,
                                             name);

    globals_type[name] = type;
}

void CompilerLLVM::CreateLocal(const std::string &name, Primitive type, llvm::IRBuilder<> *ir) {
    assert(!locals.contains(name));
    locals[name] = ir->CreateAlloca(TypeConversion(type), nullptr, name);
    locals_type[name] = type;
}


void CompilerLLVM::StoreGlobal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val) {
    assert(globals.contains(name));
    ir->CreateStore(val, globals[name]);
}

void CompilerLLVM::StoreLocal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val) {
    assert(locals.contains(name));
    ir->CreateStore(val, locals[name]);
}

llvm::Constant *CompilerLLVM::GetDefaultForType(Primitive type, llvm::IRBuilder<> *ir) const {
    switch (type) {
        case Primitive::INT:
            return llvm::ConstantInt::get(TypeInt, 0);
        case Primitive::FLOAT:
            return llvm::ConstantFP::get(TypeFloat, 0.0);
        case Primitive::STRING:
            return ir->CreateGlobalStringPtr("");
        case Primitive::BYTE:
            return llvm::ConstantInt::get(TypeByte, 0);
        default:
            assert(0);
    }
    return nullptr;
}

ValueType CompilerLLVM::GetVariableValue(llvm::IRBuilder<> *ir, const std::string &name, Primitive type) {
    ValueType vt{};
    vt.value = nullptr;
    if (globals.contains(name)) {
        // Search globals first
        vt.value = ir->CreateLoad(TypeConversion(globals_type[name]), globals[name]);
        vt.type = globals_type[name];
    } else if (locals.contains(name)) {
        // Search locals
        vt.value = ir->CreateLoad(TypeConversion(locals_type[name]), locals[name]);
        vt.type = locals_type[name];
    }
    return vt;
}

void CompilerLLVM::ClearLocals() {
    locals.clear();
    locals_type.clear();
    local_structs.clear();
    locals_array_dimensions.clear();
    locals_array_num_dimensions.clear();
}

llvm::GlobalVariable *CompilerLLVM::GetGlobal(const std::string &name) {
    return globals[name];
}

llvm::AllocaInst *CompilerLLVM::GetLocal(const std::string &name) {
    return locals[name];
}


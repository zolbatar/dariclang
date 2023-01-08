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
//	std::cout << "Creating global:" << name << std::endl;
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeConversion(type),
                                             false,
                                             GetLinkage(),
                                             val,
                                             name);

    globals_type[name] = type;
}

void CompilerLLVM::CreateGlobalVoid(const std::string &name) {
    assert(!globals.contains(name));
//	std::cout << "Creating global:" << name << std::endl;
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeVoid,
                                             false,
                                             GetLinkage(),
                                             llvm::ConstantExpr::getIntToPtr(llvm::ConstantInt::get(TypeInt, 0), TypeVoid),
                                             name);

    globals_type[name] = Primitive::NONE;
}

void CompilerLLVM::CreateLocalVoid(const std::string &name, llvm::IRBuilder<> *ir) {
    assert(!locals.contains(name));
    locals[name] = ir->CreateAlloca(TypeVoid, nullptr, name);
//    locals_isref[name] = false;
    locals_type[name] = Primitive::NONE;
}

void CompilerLLVM::CreateLocal(const std::string &name, Primitive type, llvm::IRBuilder<> *ir, bool is_ref) {
    assert(!locals.contains(name));
    if (is_ref) {
        auto pt = llvm::PointerType::get(TypeConversion(type), 0);
        locals[name] = ir->CreateAlloca(pt, nullptr, name);
//        locals_isref[name] = true;
    } else {
        locals[name] = ir->CreateAlloca(TypeConversion(type), nullptr, name);
        //      locals_isref[name] = false;
    }
    locals_type[name] = type;
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

void CompilerLLVM::ClearLocals() {
    locals.clear();
    locals_type.clear();
    locals_array_dimensions.clear();
    locals_array_num_dimensions.clear();
}

llvm::GlobalVariable *CompilerLLVM::GetGlobal(const std::string &name) {
    return globals[name];
}

llvm::AllocaInst *CompilerLLVM::GetLocal(const std::string &name) {
    return locals[name];
}




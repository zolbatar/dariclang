#include <iostream>
#include "CompilerLLVM.h"

void CompilerLLVM::CreateConstant(const std::string &name, Primitive type, llvm::Constant *val) {
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeConversion(type),
                                             true,
                                             llvm::GlobalValue::ExternalLinkage,
                                             val,
                                             name);

    globals_type[name] = type;
}

void CompilerLLVM::CreateGlobal(const std::string &name, Primitive type, llvm::Constant *val) {
    assert(!globals.contains(name));
    globals[name] = new llvm::GlobalVariable(*Module,
                                             TypeConversion(type),
                                             false,
                                             llvm::GlobalValue::ExternalLinkage,
                                             val,
                                             name);

    globals_type[name] = type;
}

void CompilerLLVM::CreateLocal(const std::string &name, Primitive type, llvm::IRBuilder<> *ir) {
    assert(!locals.contains(name));
    locals[name] = ir->CreateAlloca(TypeConversion(type), nullptr, name);
    locals_type[name] = type;
}

void CompilerLLVM::CreateGlobalStruct(const std::string &name,
                                      llvm::StructType *type,
                                      llvm::Constant *val,
                                      const std::string &struct_name) {
    assert(!globals.contains(name));
    globals[name] = new llvm::GlobalVariable(*Module,
                                             type,
                                             false,
                                             llvm::GlobalValue::ExternalLinkage,
                                             val,
                                             name);
    global_structs.insert(std::make_pair(name, struct_name));
}

void CompilerLLVM::CreateLocalStruct(const std::string &name,
                                     llvm::StructType *type,
                                     llvm::IRBuilder<> *ir,
                                     const std::string &struct_name) {
    assert(!locals.contains(name));
    locals[name] = ir->CreateAlloca(type, nullptr, name);
    local_structs.insert(std::make_pair(name, struct_name));
}

bool CompilerLLVM::IsVariableStruct(const std::string& name) {
    if (globals.contains(name)) {
        return global_structs.contains(name);
    } else if (locals.contains(name)) {
        return local_structs.contains(name);
    } else {
        return false;
    }
}

std::string &CompilerLLVM::GetStructForVariable(const std::string& name) {
    if (globals.contains(name)) {
        return global_structs.find(name)->second;
    } else if (locals.contains(name)) {
        return local_structs.find(name)->second;
    }
}

void CompilerLLVM::StoreStructGlobal(const std::string &name,
                                     llvm::IRBuilder<> *ir,
                                     llvm::Value *val,
                                     size_t field_index,
                                     llvm::StructType *struct_type) {
    assert(globals.contains(name));
    auto gep = ir->CreateStructGEP(struct_type, globals[name], field_index);
    ir->CreateStore(val, gep);
}

void CompilerLLVM::StoreStructLocal(const std::string &name,
                                    llvm::IRBuilder<> *ir,
                                    llvm::Value *val,
                                    size_t field_index,
                                    llvm::StructType *struct_type) {
    assert(locals.contains(name));
    auto gep = ir->CreateStructGEP(struct_type, locals[name], field_index);
    ir->CreateStore(val, gep);
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


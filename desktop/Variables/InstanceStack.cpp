#include "InstanceStack.h"

std::shared_ptr<Instance> InstanceStack::Build(const std::string &name,
                                               Primitive data_type,
                                               llvm::StructType *llvm_struct_type,
                                               Scope scope,
                                               CompilerLLVM &llvm,
                                               llvm::Function *func,
                                               llvm::IRBuilder<> *ir,
                                               Primitive default_return_type,
                                               bool is_ref) {
    llvm::Constant *size;
    if (data_type != Primitive::NONE) {
        size = llvm::ConstantInt::get(
                llvm.TypeInt,
                llvm.dl->getTypeAllocSize(llvm.TypeConversion(data_type)));
    } else {
        size = llvm::ConstantInt::get(
                llvm.TypeInt,
                llvm.dl->getTypeAllocSize(llvm_struct_type));
    }
    auto create = llvm.CreateCall("stack_init", ir, func, {size}, scope == Scope::LOCAL, default_return_type);
    switch (scope) {
        case Scope::LOCAL: {
            llvm.CreateLocalVoid(name, ir);
            llvm.StoreLocal(name, ir, create);
            locals.insert(std::make_pair(name, std::make_shared<InstanceStack>(name, data_type, scope, llvm, ir, is_ref)));
            return locals.find(name)->second;
        }
        case Scope::GLOBAL: {
            llvm.CreateGlobalVoid(name);
            llvm.StoreGlobal(name, ir, create);
            globals.insert(std::make_pair(name, std::make_shared<InstanceStack>(name, data_type, scope, llvm, ir, is_ref)));
            return globals.find(name)->second;
        }
        default:
            assert(0);
    }
}

InstanceStack::InstanceStack(const std::string &name,
                             Primitive type,
                             Scope scope,
                             CompilerLLVM &llvm,
                             llvm::IRBuilder<> *ir,
                             bool is_ref) : type(type) {
    this->name = name;
    this->scope = scope;
    this->is_ref = is_ref;
}

bool InstanceStack::Set(llvm::Value *v,
                        llvm::Value *idx,
                        size_t field_index,
                        CompilerLLVM &llvm,
                        llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::GLOBAL:
            llvm.StoreGlobal(name, ir, v);
            break;
        case Scope::LOCAL:
            llvm.StoreLocal(name, ir, v);
            break;
        default:
            assert(0);
    }
    return true;
}

void InstanceStack::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    vt = llvm.GetVariableValue(ir, name, type);
}
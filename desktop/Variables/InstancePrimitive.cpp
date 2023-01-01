#include "InstancePrimitive.h"

std::shared_ptr<Instance> InstancePrimitive::Build(const std::string &name,
                                                   Primitive data_type,
                                                   Scope scope,
                                                   CompilerLLVM &llvm,
                                                   llvm::IRBuilder<> *ir,
                                                   bool is_ref) {
    switch (scope) {
        case Scope::LOCAL:
            llvm.CreateLocal(name, data_type, ir, is_ref);
            locals.insert(std::make_pair(name, std::make_shared<InstancePrimitive>(name, data_type, scope, llvm, ir, is_ref)));
            return locals.find(name)->second;
        case Scope::GLOBAL:
            llvm.CreateGlobal(name, data_type, llvm.GetDefaultForType(data_type, ir));
            globals.insert(std::make_pair(name, std::make_shared<InstancePrimitive>(name, data_type, scope, llvm, ir, is_ref)));
            return globals.find(name)->second;
        default:
            assert(0);
    }
}

InstancePrimitive::InstancePrimitive(const std::string &name,
                                     Primitive type,
                                     Scope scope,
                                     CompilerLLVM &llvm,
                                     llvm::IRBuilder<> *ir,
                                     bool is_ref) {
    this->name = name;
    this->scope = scope;
    this->is_ref = is_ref;
    this->type = type;
}

bool InstancePrimitive::Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
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

void InstancePrimitive::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    vt = llvm.GetVariableValue(ir, name, type);
}

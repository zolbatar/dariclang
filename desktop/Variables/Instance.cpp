#include "Instance.h"

std::unordered_map<std::string, Instance> Instance::locals;
std::unordered_map<std::string, Instance> Instance::globals;

Instance *Instance::StructInstance(const std::string &name,
                                   const std::string &struct_name,
                                   llvm::StructType *struct_type,
                                   Scope scope,
                                   CompilerLLVM &llvm,
                                   llvm::IRBuilder<> *ir) {
    Instance i;
    i.struct_type = struct_type;
    i.name = name;
    i.instance_type = InstanceType::STRUCT;
    i.scope = scope;
    switch (i.scope) {
        case Scope::LOCAL:
            llvm.CreateLocalStruct(name, struct_type, ir, struct_name);
            locals.insert(std::make_pair(name, std::move(i)));
            return &locals.find(name)->second;
        case Scope::GLOBAL:
            llvm.CreateGlobalStruct(name, struct_type, llvm::ConstantAggregateZero::get(struct_type), struct_name);
            globals.insert(std::make_pair(name, std::move(i)));
            return &globals.find(name)->second;
        case Scope::UNKNOWN:
            assert(0);
    }
    return nullptr;
}

Instance *Instance::ConstantInstance(std::string name,
                                     Primitive data_type,
                                     Scope scope,
                                     CompilerLLVM &llvm,
                                     llvm::IRBuilder<> *ir) {
    Instance i;
    i.type = data_type;
    i.name = name;
    i.instance_type = InstanceType::PRIMITIVE;
    i.scope = scope;
    switch (i.scope) {
        case Scope::LOCAL:
            locals.insert(std::make_pair(name, std::move(i)));
            return &locals.find(name)->second;
        case Scope::GLOBAL:
            globals.insert(std::make_pair(name, std::move(i)));
            return &globals.find(name)->second;
        default:
            assert(0);
    }
    return nullptr;
}

Instance *Instance::SimpleInstance(std::string name,
                                   Primitive data_type,
                                   Scope scope,
                                   CompilerLLVM &llvm,
                                   llvm::IRBuilder<> *ir) {
    Instance i;
    i.type = data_type;
    i.name = name;
    i.instance_type = InstanceType::PRIMITIVE;
    i.scope = scope;
    switch (i.scope) {
        case Scope::LOCAL:
            llvm.CreateLocal(name, data_type, ir);
            locals.insert(std::make_pair(name, std::move(i)));
            return &locals.find(name)->second;
        case Scope::GLOBAL:
            llvm.CreateGlobal(name, data_type, llvm.GetDefaultForType(data_type, ir));
            globals.insert(std::make_pair(name, std::move(i)));
            return &globals.find(name)->second;
        case Scope::UNKNOWN:
            assert(0);
    }
    return nullptr;
}

Instance *Instance::ArrayInstance(std::string name,
                                  Primitive data_type,
                                  Scope scope,
                                  size_t no_indices,
                                  CompilerLLVM &llvm,
                                  llvm::IRBuilder<> *ir) {
    Instance i;
    i.type = data_type;
    i.name = name;
    i.instance_type = InstanceType::ARRAY;
    i.scope = scope;
    i.no_indices = no_indices;
    switch (i.scope) {
        case Scope::LOCAL:
            locals.insert(std::make_pair(name, std::move(i)));
            return &locals.find(name)->second;
        case Scope::GLOBAL:
            globals.insert(std::make_pair(name, std::move(i)));
            return &globals.find(name)->second;
        case Scope::UNKNOWN:
            assert(0);
    }
    return nullptr;
}

void Instance::ClearLocals(CompilerLLVM &llvm) {
    llvm.ClearLocals();
    locals.clear();
}

bool Instance::Exists(std::string name) {
    if (locals.contains(name))
        return true;
    if (globals.contains(name))
        return true;
    return false;
}

Instance *Instance::FindInstance(std::string name) {
    if (locals.contains(name))
        return &locals.find(name)->second;
    return &globals.find(name)->second;
}

void Instance::SetSimpleValue(llvm::Value *v, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
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
}

void Instance::SetArrayValue(llvm::Value *v, llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    ir->CreateStore(v, idx);
}

ValueType Instance::GetSimpleValue(CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    return llvm.GetVariableValue(ir, name, type);
}

ValueType Instance::GetArrayValue(llvm::Value *idx, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    ValueType vt;
    vt.type = type;
    vt.value = ir->CreateLoad(llvm.TypeConversion(type), idx);
    return vt;
}

void Instance::SetStructValue(llvm::Value *v, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::GLOBAL:
            llvm.StoreStructGlobal(name, ir, v, field_index, struct_type);
            break;
        case Scope::LOCAL:
            llvm.StoreStructLocal(name, ir, v, field_index, struct_type);
            break;
        default:
            assert(0);
    }
}



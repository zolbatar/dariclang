#include "InstanceRecordArray.h"

std::shared_ptr<Instance> InstanceRecordArray::Build(const std::string &name,
                                                     const std::string &struct_name,
                                                     llvm::StructType *struct_type,
                                                     Scope scope,
                                                     size_t no_indices,
                                                     CompilerLLVM &llvm,
                                                     llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::LOCAL:
            llvm.local_structs.insert(std::make_pair(name, struct_name));
            locals.insert(std::make_pair(name, std::make_shared<InstanceRecordArray>(name, struct_name, struct_type, scope, no_indices, llvm, ir)));
            return locals.find(name)->second;
        case Scope::GLOBAL:
            llvm.global_structs.insert(std::make_pair(name, struct_name));
            globals.insert(std::make_pair(name, std::make_shared<InstanceRecordArray>(name, struct_name, struct_type, scope, no_indices, llvm, ir)));
            return globals.find(name)->second;
        default:
            assert(0);
    }
}

InstanceRecordArray::InstanceRecordArray(const std::string &name,
                                         const std::string &struct_name,
                                         llvm::StructType *struct_type,
                                         Scope scope,
                                         size_t no_indices,
                                         CompilerLLVM &llvm,
                                         llvm::IRBuilder<> *ir) : struct_name(struct_name),
                                                                  struct_type(struct_type),
                                                                  no_indices(no_indices) {
    this->name = name;
    this->scope = scope;
}

void InstanceRecordArray::Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    llvm::Value *gep;
    if (scope == Scope::LOCAL) {
        gep = ir->CreateStructGEP(struct_type, idx, field_index);
    } else {
        gep = ir->CreateStructGEP(struct_type, idx, field_index);
    }
    ir->CreateStore(v, gep);
}

void InstanceRecordArray::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    llvm::Value *gep;
    if (scope == Scope::LOCAL) {
        gep = ir->CreateStructGEP(struct_type, idx, field_index);
    } else {
        gep = ir->CreateStructGEP(struct_type, idx, field_index);
    }
    vt.value = ir->CreateLoad(llvm.TypeConversion(vt.type), gep);
}

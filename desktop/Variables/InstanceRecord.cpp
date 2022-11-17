#include "InstanceRecord.h"


std::shared_ptr<Instance> InstanceRecord::Build(const std::string &name,
                                                const std::string &struct_name,
                                                llvm::StructType *struct_type,
                                                Scope scope,
                                                CompilerLLVM &llvm,
                                                llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::LOCAL: {
            assert(!locals.contains(name));
            llvm.locals[name] = ir->CreateAlloca(struct_type, nullptr, name);
            llvm.local_structs.insert(std::make_pair(name, struct_name));
            locals.insert(std::make_pair(name, std::make_shared<InstanceRecord>(name, struct_name, struct_type, scope, llvm, ir)));
            return locals.find(name)->second;
        }
        case Scope::GLOBAL: {
            assert(!globals.contains(name));
            llvm.globals[name] = new llvm::GlobalVariable(*llvm.Module,
                                                          struct_type,
                                                          false,
                                                          llvm.GetLinkage(),
                                                          llvm::ConstantAggregateZero::get(struct_type),
                                                          name);
            llvm.global_structs.insert(std::make_pair(name, struct_name));
            globals.insert(std::make_pair(name, std::make_shared<InstanceRecord>(name, struct_name, struct_type, scope, llvm, ir)));
            return globals.find(name)->second;
        }
        default:
            assert(0);
    }
}

InstanceRecord::InstanceRecord(const std::string &name,
                               const std::string &struct_name,
                               llvm::StructType *struct_type,
                               Scope scope,
                               CompilerLLVM &llvm,
                               llvm::IRBuilder<> *ir) : struct_name(struct_name),
                                                        struct_type(struct_type) {
    this->name = name;
    this->scope = scope;
}

void InstanceRecord::Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::GLOBAL: {
            assert(globals.contains(name));
            auto gep = ir->CreateStructGEP(struct_type, llvm.GetGlobal(name), field_index);
            ir->CreateStore(v, gep);
            break;
        }
        case Scope::LOCAL: {
            assert(locals.contains(name));
            auto gep = ir->CreateStructGEP(struct_type, llvm.GetLocal(name), field_index);
            ir->CreateStore(v, gep);
            break;
        }
        default:
            assert(0);
    }
}

void InstanceRecord::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::LOCAL: {
            assert(locals.contains(name));
            auto gep = ir->CreateStructGEP(struct_type, llvm.GetLocal(name), field_index);
            vt.value = ir->CreateLoad(llvm.TypeConversion(vt.type), gep);
            break;
        }
        case Scope::GLOBAL: {
            assert(globals.contains(name));
            auto gep = ir->CreateStructGEP(struct_type, llvm.GetGlobal(name), field_index);
            vt.value = ir->CreateLoad(llvm.TypeConversion(vt.type), gep);
            break;
        }
        default:
            assert(0);
    }
}


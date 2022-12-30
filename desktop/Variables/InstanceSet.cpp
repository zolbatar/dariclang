#include "InstanceSet.h"

extern int set_comp_byte(T_B a, T_B b);
extern int set_comp_int(T_I a, T_I b);
extern int set_comp_float(T_F a, T_F b);
extern int set_comp_string(T_S a, T_S b);

std::shared_ptr<Instance> InstanceSet::Build(const std::string &name,
                                             Primitive data_type,
                                             Scope scope,
                                             CompilerLLVM &llvm,
                                             llvm::Function *func,
                                             llvm::IRBuilder<> *ir,
                                             Primitive default_return_type,
                                             bool is_ref) {
    void *comp = NULL;
    llvm::Constant *size = llvm::ConstantInt::get(
            llvm.TypeInt,
            llvm.dl->getTypeAllocSize(llvm.TypeConversion(data_type)));
    switch (data_type) {
        case Primitive::BYTE:
            comp = (void *) &set_comp_byte;
            break;
        case Primitive::INT:
            comp = (void *) &set_comp_int;
            break;
        case Primitive::FLOAT:
            comp = (void *) &set_comp_float;
            break;
        case Primitive::STRING:
            comp = (void *) &set_comp_string;
            break;
        case Primitive::NONE:
            assert(0);
    }
    auto cc = llvm::ConstantInt::get(llvm.TypeInt, (int64_t) comp);
    auto ca = llvm::ConstantExpr::getIntToPtr(cc, llvm.TypeVoid);
    auto create = llvm.CreateCall("set_init", ir, func,
                                  {size, ca},
                                  scope == Scope::LOCAL, default_return_type);
    switch (scope) {
        case Scope::LOCAL: {
            llvm.CreateLocalVoid(name, ir);
            llvm.StoreLocal(name, ir, create);
            CollectionAssign ca;
            ca.type = CollectionType::Set;
            ca.alloc = create;
            llvm.local_collections.push_back(std::move(ca));
            locals.insert(std::make_pair(name, std::make_shared<InstanceSet>(name, data_type, scope, llvm, ir, is_ref)));
            return locals.find(name)->second;
        }
        case Scope::GLOBAL: {
            llvm.CreateGlobalVoid(name);
            llvm.StoreGlobal(name, ir, create);
            globals.insert(std::make_pair(name, std::make_shared<InstanceSet>(name, data_type, scope, llvm, ir, is_ref)));
            return globals.find(name)->second;
        }
        default:
            assert(0);
    }
}

InstanceSet::InstanceSet(const std::string &name,
                         Primitive type,
                         Scope scope,
                         CompilerLLVM &llvm,
                         llvm::IRBuilder<> *ir,
                         bool is_ref) : type(type) {
    this->name = name;
    this->scope = scope;
    this->is_ref = is_ref;
}

bool InstanceSet::Set(llvm::Value *v,
                      llvm::Value *idx,
                      size_t field_index,
                      CompilerLLVM &llvm,
                      llvm::IRBuilder<> *ir) {
    assert(0);
    return true;
}

void InstanceSet::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    switch (scope) {
        case Scope::GLOBAL:
            vt.value = ir->CreateLoad(llvm.TypeVoid, llvm.GetGlobal(GetName()));
            break;
        case Scope::LOCAL:
            vt.value = ir->CreateLoad(llvm.TypeVoid, llvm.GetLocal(GetName()));
            break;
    }
}

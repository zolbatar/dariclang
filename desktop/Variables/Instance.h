#pragma once

#include <unordered_map>
#include <string>
#include "../LLVM/CompilerLLVM.h"
#include "PrimitiveTypes.h"

enum class InstanceType {
    PRIMITIVE,
    ARRAY,
    RECORD,
    RECORD_ARRAY
};

class Instance {
public:
    static void ClearLocals(CompilerLLVM &llvm);
    static bool Exists(std::string name);
    static std::shared_ptr<Instance> FindInstance(std::string name);

    // Scope, name and type
    Scope GetScope() { return scope; }
    virtual InstanceType GetInstanceType() = 0;
    std::string &GetName() { return name; }
    virtual size_t IndicesCount() = 0;
    virtual Primitive GetType() = 0;
    virtual std::string &GetStructName() = 0;
    virtual llvm::StructType *GetStructType() = 0;

    // Get/set stuff
    virtual void Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) = 0;
    virtual void Set(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) = 0;

    static void ClearStatic() {
        locals.clear();
        globals.clear();
    }

protected:
    std::string name;
    Scope scope;

    static std::unordered_map<std::string, std::shared_ptr<Instance>> locals;
    static std::unordered_map<std::string, std::shared_ptr<Instance>> globals;

private:
    InstanceType instance_type = InstanceType::PRIMITIVE;
    llvm::StructType *struct_type;
};

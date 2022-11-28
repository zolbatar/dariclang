#pragma once

#include <utility>
#include "../Exception/Exception.h"
#include "../Parser/ParserToken.h"
#include "../Variables/Shared.h"
#include "../LLVM/CompilerLLVM.h"
#include "Instance.h"
#include "InstanceConstant.h"
#include "InstancePrimitive.h"
#include "InstancePrimitiveArray.h"
#include "InstanceRecord.h"
#include "InstanceRecordArray.h"

struct StructSearch {
    StructMember *member;
    std::string struct_name;
    size_t index;
};

class Reference {
public:
    Reference(SharedState &state, std::string name);
    static Reference *Create(SharedState &state, std::string name);
    static Reference *Get(size_t index);

    // Get/set state
    std::string GetName() { return name; }
    [[nodiscard]] size_t GetRef() const { return index; }
    InstanceType GetInstanceType() { return instance_type; }
    void SetDataType(Primitive _data_type) { data_type = _data_type; }
    Primitive GetDataType() { return data_type; }
    void SetStructName(std::string _name) { struct_name = std::move(_name); }
    std::string GetStructName() { return struct_name; }
    void SetLLVMStructType(llvm::StructType *type) { this->llvm_struct_type = type; }
    std::shared_ptr<Instance> GetInstance() { return instance; }

    // Value
    void SetValue(bool option_base, ValueType vt,
                  const std::vector<ValueType> &indices_val,
                  CompilerLLVM &llvm,
                  llvm::IRBuilder<> *ir,
                  ParserToken &token);
    ValueType GetValue(bool option_base, const std::vector<ValueType> &indices_val,
                       CompilerLLVM &llvm,
                       llvm::IRBuilder<> *ir,
                       ParserToken &token);
    llvm::Value *GetPointer(bool option_base, const std::vector<ValueType> &indices_val,
                            CompilerLLVM &llvm,
                            llvm::IRBuilder<> *ir,
                            ParserToken &token);

    // Find instance
    bool InstanceExists();
    bool FindInstance();
    bool FindInstanceUnknownInstanceType();

    // Create
    void CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope, bool is_ref);

    // Func parameters mostly
    llvm::Type *GetLLVMType(bool is_ref, CompilerLLVM &llvm) {
        switch (GetInstanceType()) {
            case InstanceType::PRIMITIVE:
                if (!is_ref) {
                    return llvm.TypeConversion(GetDataType());
                } else {
                    return llvm::PointerType::get(llvm.TypeConversion(GetDataType()), 0);
                }
            case InstanceType::RECORD: {
                auto ss = llvm.GetStruct(struct_name);
                if (ss == nullptr)
                    return nullptr;
                return llvm::PointerType::get(ss, 0);
            }
            default:
                assert(0);
                return nullptr;
        }
    }

    // Array
    void SetAsArray();
    void AddIndexRef(ParserToken &&token);
    [[nodiscard]] size_t IndicesCount() const;
    std::vector<ParserToken> &GetIndices();

    // Fields
    StructSearch FindFieldInStruct(ParserToken &token, CompilerLLVM &llvm);
    void SetAsStruct();
    void SetAsStructArray();
    std::string &GetFields() { return fields; }
    void SetFields(std::string _fields) { fields = std::move(_fields); }

    static void ClearStatic() {
        references.clear();
        index_ptr = 0;
    }

private:
    SharedState &state;
    llvm::Value *LocalIndex(bool option_base, std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndexPtr(bool option_base, std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndex(bool option_base, std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir);
    static std::unordered_map<size_t, Reference> references;

    static void RaiseException(std::string msg, ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.line, t.char_position, std::move(msg));
    }

    // Link to instance (used during compilation)
    std::shared_ptr<Instance> instance = nullptr;

    // Individual
    llvm::StructType *llvm_struct_type;
    Primitive data_type;
    InstanceType instance_type = InstanceType::PRIMITIVE;
    std::vector<ParserToken> indices;
    std::string fields;
    std::string name;
    std::string struct_name;
    size_t index;
    static size_t index_ptr;
};
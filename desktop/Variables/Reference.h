#pragma once

#include <utility>
#include "../Exception/Exception.h"
#include "../Parser/ParserToken.h"
#include "../Shared/Shared.h"
#include "../LLVM/CompilerLLVM.h"
#include "Instance.h"
#include "InstanceConstant.h"
#include "InstancePrimitive.h"
#include "InstancePrimitiveArray.h"
#include "InstanceRecord.h"
#include "InstanceRecordArray.h"
#include "InstanceList.h"
#include "InstanceVector.h"
#include "InstanceSet.h"
#include "InstanceMap.h"
#include "InstanceQueue.h"
#include "InstanceStack.h"

struct StructSearch {
    StructMember *member;
    std::string struct_name;
    size_t index;
};

class Reference {
public:
    Reference(SourceFileData &state, std::string name);
    static Reference *Create(SourceFileData &state, std::string name);
    static Reference *Get(size_t index);

    void CopyFrom(Reference *ref) {
        this->struct_name_val = ref->struct_name_val;
        this->struct_name = ref->struct_name;
        this->data_type = ref->data_type;
        if (!this->struct_name.empty()) {
            this->instance_type = InstanceType::RECORD;
        }
    }

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

    // Maps
    std::string GetStructNameVal() { return struct_name_val; }
    void SetDataTypeVal(Primitive _data_type) { data_type_val = _data_type; }
    Primitive GetDataTypeVal() { return data_type_val; }
    void SetStructNameVal(std::string _name) { struct_name_val = std::move(_name); }
    void SetLLVMStructTypeVal(llvm::StructType *type) { this->llvm_struct_type_val = type; }

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
    void CreateInstance(CompilerLLVM &llvm,
                        llvm::Function *func,
                        Primitive default_return_type,
                        llvm::IRBuilder<> *ir,
                        Scope scope,
                        bool is_ref);

    // Func parameters mostly
    llvm::Type *GetLLVMType(bool is_ref, CompilerLLVM &llvm);

    // Collections
    void SetAsList();
    void SetAsVector();
    void SetAsSet();
    void SetAsMap();
    void SetAsQueue();
    void SetAsStack();

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
    SourceFileData &state;
    llvm::Value *LocalIndex(bool option_base,
                            std::vector<ValueType> indices_val,
                            CompilerLLVM &llvm,
                            llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndexPtr(bool option_base,
                                std::vector<ValueType> indices_val,
                                CompilerLLVM &llvm,
                                llvm::IRBuilder<> *ir);
    llvm::Value *GlobalIndex(bool option_base,
                             std::vector<ValueType> indices_val,
                             CompilerLLVM &llvm,
                             llvm::IRBuilder<> *ir);
    static std::unordered_map<size_t, Reference> references;

    static void RaiseException(std::string msg, ParserToken &t) {
        throw CustomException(ExceptionType::COMPILER, t.file.filename, t.file.line, t.file.char_position, std::move(msg));
    }

    // Link to instance (used during compilation)
    std::shared_ptr<Instance> instance = nullptr;

    // Individual
    llvm::StructType *llvm_struct_type = nullptr;
    Primitive data_type = Primitive::NONE;
    llvm::StructType *llvm_struct_type_val;
    Primitive data_type_val = Primitive::NONE;
    InstanceType instance_type = InstanceType::PRIMITIVE;
    std::vector<ParserToken> indices;
    std::string fields;
    std::string name;
    std::string struct_name;
    std::string struct_name_val;
    size_t index;
    static size_t index_ptr;
};
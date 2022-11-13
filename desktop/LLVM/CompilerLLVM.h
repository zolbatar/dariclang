#pragma once

#include <unordered_map>
#include <memory>
#include <map>
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/IRBuilder.h"
#include "../Variables/PrimitiveTypes.h"
#include "../Variables/Shared.h"

struct ValueType {
    llvm::Value *value;
    Primitive type;
};

struct FuncBuilder {
    llvm::Function *func;
    llvm::IRBuilder<> *builder;
};

class CompilerLLVM {
public:
    CompilerLLVM();
    void SetupProfile(bool optimise, bool allow_end, bool run, std::string module);
    llvm::Function *CreateFunc(std::string name, llvm::Type *ret, llvm::ArrayRef<llvm::Type *> parameters);
    llvm::IRBuilder<> *CreateBuilder(std::string name, llvm::Function *func);
    void AddTempString(llvm::Value *v, llvm::IRBuilder<> *ir);
    void ClearTempStrings(llvm::IRBuilder<> *ir);

    // Blocks
    llvm::BasicBlock *CreateAndInsertBB(std::string block_name, bool add_branch, size_t line_number,
                                        llvm::Function *func,
                                        llvm::IRBuilder<> *builder);
    void RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2, llvm::IRBuilder<> *builder);

    // Variables and values
    llvm::GlobalVariable *GetGlobal(const std::string &name);
    llvm::AllocaInst *GetLocal(const std::string &name);
    llvm::Constant *GetDefaultForType(Primitive type, llvm::IRBuilder<> *ir) const;

    // Structs
    llvm::StructType *CreateStruct(std::string name, std::vector<StructMember> &types);
    llvm::StructType *GetStruct(std::string name);
    void StoreStructGlobal(const std::string &name,
                           llvm::IRBuilder<> *ir,
                           llvm::Value *val,
                           size_t field_index,
                           llvm::StructType *struct_type);
    void StoreStructLocal(const std::string &name,
                          llvm::IRBuilder<> *ir,
                          llvm::Value *val,
                          size_t field_index,
                          llvm::StructType *struct_type);
    llvm::Value *GetStructGlobal(const std::string &name,
                                 llvm::IRBuilder<> *ir,
                                 size_t field_index,
                                 llvm::StructType *struct_type,
                                 llvm::Type *type);
    llvm::Value *GetStructLocal(const std::string &name,
                                llvm::IRBuilder<> *ir,
                                size_t field_index,
                                llvm::StructType *struct_type,
                                llvm::Type *type);

    // Core store/load
    void CreateConstant(const std::string &name, Primitive type, llvm::Constant *val);
    void CreateGlobal(const std::string &name, Primitive type, llvm::Constant *val);
    void CreateLocal(const std::string &name, Primitive type, llvm::IRBuilder<> *ir);
    void CreateGlobalStruct(const std::string &name, llvm::StructType *type, llvm::Constant *val,
                            const std::string &struct_name);
    void CreateLocalStruct(const std::string &name, llvm::StructType *type, llvm::IRBuilder<> *ir,
                           const std::string &struct_name);
    bool IsVariableStruct(const std::string &name);
    std::string &GetStructForVariable(const std::string &name);
    void StoreGlobal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val);
    void StoreLocal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val);
    llvm::Constant *CreateConstantInt(Primitive type, T_I v);
    llvm::Constant *CreateConstantFloat(Primitive type, T_F v);
    llvm::Constant *CreateConstantString(llvm::IRBuilder<> *ir, llvm::Function *func,
                                         Primitive type, T_S v, std::string identifier);
    ValueType GetVariableValue(llvm::IRBuilder<> *ir, const std::string &name, Primitive type);
    void ClearLocals();

    // Arrays
    llvm::GlobalVariable *SetGlobalArray(
            std::string name,
            llvm::ArrayType *typ,
            llvm::Constant *init,
            size_t sz,
            llvm::ArrayType *size_v,
            Primitive type);
    llvm::AllocaInst *SetLocalArray(
            std::string name,
            llvm::IRBuilder<> *ir,
            size_t sz,
            Primitive type);
    llvm::GlobalVariable *GetGlobalArrayDimensions(std::string name);
    llvm::AllocaInst *SetLocalArrayAllocate(std::string name,
                                            llvm::IRBuilder<> *ir,
                                            llvm::Value *sz,
                                            llvm::Type *type);
    llvm::AllocaInst *GetLocalArrayDimensions(std::string name);

    // Conversion
    llvm::Type *TypeConversion(Primitive type);
    void AutoConversion(llvm::IRBuilder<> *ir, ValueType &value_type, Primitive type);
    void AutoConversion2Way(llvm::IRBuilder<> *ir, ValueType &value_type1, ValueType &value_type2);

    // Calls
    llvm::Value *CreateCall(std::string &name,
                            llvm::IRBuilder<> *ir,
                            llvm::Function *this_func,
                            llvm::ArrayRef<llvm::Value *> vals);

    // Maths
    ValueType MathsAdd(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsMinus(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsMultiply(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsDivide(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsHat(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);

    // Maths functions
    ValueType MathsMOD(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsDIV(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsABS(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsSQR(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsLN(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsLOG(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsEXP(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsPI(llvm::IRBuilder<> *ir);
    ValueType MathsRAD(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsDEG(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsFLOOR(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsROUND(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsSGN(llvm::IRBuilder<> *ir, ValueType &t1);

    // Trigonometry
    ValueType MathsSIN(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsCOS(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsTAN(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsASN(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsACS(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType MathsATN(llvm::IRBuilder<> *ir, ValueType &t1);

    // Bit shifting
    ValueType MathsSHL(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType MathsSHR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);

    // Comparison
    ValueType ComparisonEQ(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType ComparisonNE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType ComparisonLE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType ComparisonLT(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType ComparisonGE(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType ComparisonGT(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);

    // Boolean
    ValueType BooleanOR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType BooleanAND(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType BooleanEOR(llvm::IRBuilder<> *ir, ValueType &t1, ValueType &t2);
    ValueType BooleanNOT(llvm::IRBuilder<> *ir, ValueType &t1);
    ValueType BooleanCOMPLEMENT(llvm::IRBuilder<> *ir, ValueType &t1);

    void Run();
    void CreateExecutable(std::string output_filename);

    llvm::Type *TypeNone = nullptr;
    llvm::Type *TypeBit = nullptr;
    llvm::Type *TypeInt = nullptr;
    llvm::Type *TypeFloat = nullptr;
    llvm::Type *TypeString = nullptr;
    llvm::Type *TypeByte = nullptr;
    std::unique_ptr<llvm::Module> Module = nullptr;
private:
    void AddOptPasses(llvm::legacy::PassManagerBase &passes, llvm::legacy::FunctionPassManager &fnPasses);
    void OptimiseModule();

    bool run;
    bool optimise;
    bool allow_end;

    std::unique_ptr<llvm::LLVMContext> Context = nullptr;
    std::unique_ptr<llvm::TargetMachine> Target = nullptr;

    std::unordered_map<std::string, std::string> global_structs;
    std::unordered_map<std::string, std::string> local_structs;
    std::unordered_map<std::string, llvm::GlobalVariable *> globals;
    std::unordered_map<std::string, llvm::AllocaInst *> locals;
    std::unordered_map<std::string, Primitive> globals_type;
    std::unordered_map<std::string, Primitive> locals_type;
    std::unordered_map<std::string, llvm::StructType *> structs;
    std::map<std::string, unsigned> locals_array_num_dimensions;
    std::map<std::string, unsigned> globals_array_num_dimensions;
    std::map<std::string, llvm::AllocaInst *> locals_array_dimensions;
    std::map<std::string, llvm::GlobalVariable *> globals_array_dimensions;
};

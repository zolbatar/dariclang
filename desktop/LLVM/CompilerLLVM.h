#pragma once

#include <unordered_map>
#include <memory>
#include <map>
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/IRBuilder.h"
#include "../Variables/PrimitiveTypes.h"
#include "../Shared/Shared.h"
#include "../Compiler/CompilerOptions.h"
#include "llvm/Transforms/Utils/BuildLibCalls.h"

enum class CollectionType {
	List,
	Vector,
	Set,
	Map,
	Queue,
	Stack
};

struct CollectionAssign {
	CollectionType type;
	llvm::Value *alloc;
};

struct ValueType {
	llvm::Value *value;
	Primitive type;
};

class CompilerLLVM {
public:
	CompilerLLVM();
	void SetupProfile(const CompilerOptions &options, std::string mod, SourceFileData &state);
	llvm::Function *CreateFunc(std::string name, llvm::Type *ret, llvm::ArrayRef<llvm::Type *> parameters);
	llvm::IRBuilder<> *CreateBuilder(std::string name, llvm::Function *func);
	void AddTempString(llvm::Value *v, llvm::IRBuilder<> *ir);
	void MakePermString(llvm::Value *v, llvm::IRBuilder<> *ir);
	void AddPermString(llvm::Value *v, llvm::IRBuilder<> *ir);
	void ClearPermString(llvm::Value *v, llvm::IRBuilder<> *ir);
	void ClearTempStrings(llvm::IRBuilder<> *ir);
	static llvm::GlobalVariable::LinkageTypes GetLinkage() { return llvm::GlobalVariable::InternalLinkage; }

	// Blocks
	llvm::BasicBlock *CreateBB(std::string block_name, size_t line_number);
	llvm::BasicBlock *CreateAndInsertBB(std::string block_name,
										bool branch,
										size_t line_number,
										llvm::Function *func,
										llvm::IRBuilder<> *builder);
	void AddBB(llvm::BasicBlock *bc, llvm::Function *func, llvm::IRBuilder<> *builder);
	void RetBrCheckSplit(llvm::BasicBlock *bb1, llvm::BasicBlock *bb2, llvm::IRBuilder<> *builder);
	bool CheckReturn(llvm::IRBuilder<> *builder);
	void DefaultReturn(Primitive t, llvm::IRBuilder<> *ir);

	// Variables and values
	llvm::GlobalVariable *GetGlobal(const std::string &name);
	llvm::AllocaInst *GetLocal(const std::string &name);
	llvm::Constant *GetDefaultForType(Primitive type, llvm::IRBuilder<> *ir) const;

	// Structs
	llvm::StructType *CreateStruct(std::string name, std::vector<StructMember> &types);
	llvm::StructType *GetStruct(std::string name);

	// Core store/load
	void CreateConstant(const std::string &name, Primitive type, llvm::Constant *val);
	void CreateGlobal(const std::string &name, Primitive type, llvm::Constant *val);
	void CreateGlobalVoid(const std::string &name);
	void CreateLocal(const std::string &name, Primitive type, llvm::IRBuilder<> *ir, bool is_ref);
	void CreateLocalVoid(const std::string &name, llvm::IRBuilder<> *ir);
	void StoreGlobal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val);
	void StoreLocal(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val);
	void StoreLocalPointer(const std::string &name, llvm::IRBuilder<> *ir, llvm::Value *val);
	llvm::Constant *CreateConstantInt(Primitive type, T_I v);
	llvm::Constant *CreateConstantFloat(Primitive type, T_F v);
	llvm::Constant *CreateConstantString(llvm::IRBuilder<> *ir, llvm::Function *func,
										 Primitive type, T_S v, std::string identifier);
	ValueType GetVariableValue(llvm::IRBuilder<> *ir, const std::string &name, Primitive type);
	void ClearLocals();

	// Arrays
	llvm::GlobalVariable *CreateGlobalArray(
		std::string name,
		llvm::ArrayType *typ,
		llvm::Constant *init,
		size_t sz,
		llvm::ArrayType *size_v,
		Primitive type);
	llvm::AllocaInst *CreateLocalArrayStage1(
		std::string name,
		llvm::IRBuilder<> *ir,
		size_t sz,
		Primitive type);
	llvm::GlobalVariable *GetGlobalArrayDimensions(std::string name);
	llvm::AllocaInst *CreateLocalArrayStage2(std::string name,
											 llvm::IRBuilder<> *ir,
											 llvm::Value *sz,
											 llvm::Type *type);
	llvm::AllocaInst *GetLocalArrayDimensions(std::string name);
	llvm::Value *GetArraySize(std::string name, llvm::IRBuilder<> *ir);

	// Conversion
	llvm::Type *TypeConversion(Primitive type);
	void AutoConversion(llvm::IRBuilder<> *ir, ValueType &value_type, Primitive type);
	void AutoConversion2Way(llvm::IRBuilder<> *ir, ValueType &value_type1, ValueType &value_type2);

	// Calls
	llvm::Value *CreateCall(std::string name,
							llvm::IRBuilder<> *ir,
							llvm::Function *this_func,
							llvm::ArrayRef<llvm::Value *> vals,
							bool user_function, Primitive default_return_type);

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
	std::string CreateExecutable(std::string output_filename);

	llvm::Type *TypeNone = nullptr;
	llvm::Type *TypeBit = nullptr;
	llvm::Type *TypeInt = nullptr;
	llvm::Type *TypeFloat = nullptr;
	llvm::Type *TypeString = nullptr;
	llvm::Type *TypeByte = nullptr;
	llvm::Type *TypeVoid = nullptr;

	std::unique_ptr<llvm::LLVMContext> Context = nullptr;
	std::unique_ptr<llvm::TargetMachine> Target = nullptr;
	std::unique_ptr<llvm::Module> Module = nullptr;
	std::unique_ptr<llvm::DataLayout> dl = nullptr;

	std::unordered_map<std::string, std::string> global_structs;
	std::unordered_map<std::string, std::string> local_structs;
	std::unordered_map<std::string, llvm::GlobalVariable *> globals;
	std::unordered_map<std::string, llvm::AllocaInst *> locals;
	std::unordered_map<std::string, bool> locals_isref;
	std::unordered_map<std::string, Primitive> globals_type;
	std::unordered_map<std::string, Primitive> locals_type;

	std::vector<CollectionAssign> local_collections;
	void GCCollections(llvm::IRBuilder<> *ir);
private:
	void SetupLibrary();
	void BuildData(SourceFileData &state);
	void AddOptPasses(llvm::legacy::PassManagerBase &passes, llvm::legacy::FunctionPassManager &fnPasses);
	void CreateLLVMPasses();
	CompilerOptions options;
	llvm::Triple TheTriple;

	std::unordered_map<std::string, llvm::StructType *> structs;
	std::unordered_map<std::string, unsigned> locals_array_num_dimensions;
	std::unordered_map<std::string, unsigned> globals_array_num_dimensions;
	std::unordered_map<std::string, llvm::AllocaInst *> locals_array_dimensions;
	std::unordered_map<std::string, llvm::GlobalVariable *> globals_array_dimensions;
};

#include "InstanceMap.h"

extern int set_comp_byte(T_B a, T_B b);
extern int set_comp_int(T_I a, T_I b);
extern int set_comp_float(T_F a, T_F b);
extern int set_comp_string(T_S a, T_S b);

std::shared_ptr<Instance> InstanceMap::Build(const std::string &name,
											 Primitive data_type,
											 Primitive data_type_val,
											 llvm::StructType *llvm_struct_type_val,
											 Scope scope,
											 CompilerLLVM &llvm,
											 llvm::Function *func,
											 llvm::IRBuilder<> *ir,
											 Primitive default_return_type,
											 bool is_ref) {
	// Key
	llvm::Constant *size = llvm::ConstantInt::get(
		llvm.TypeInt,
		llvm.dl->getTypeAllocSize(llvm.TypeConversion(data_type)));

	// Val
	llvm::Constant *size_val;
	if (data_type_val != Primitive::NONE) {
		size_val = llvm::ConstantInt::get(
			llvm.TypeInt,
			llvm.dl->getTypeAllocSize(llvm.TypeConversion(data_type_val)));
	} else {
		size_val = llvm::ConstantInt::get(
			llvm.TypeInt,
			llvm.dl->getTypeAllocSize(llvm_struct_type_val));
	}

	// Comparator
	void *comp = NULL;
	switch (data_type) {
	case Primitive::BYTE:
		comp = (void *)&set_comp_byte;
		break;
	case Primitive::INT:
		comp = (void *)&set_comp_int;
		break;
	case Primitive::FLOAT:
		comp = (void *)&set_comp_float;
		break;
	case Primitive::STRING:
		comp = (void *)&set_comp_string;
		break;
	case Primitive::NONE:
		assert(0);
	}
	auto cc = llvm::ConstantInt::get(llvm.TypeInt, (int64_t)comp);
	auto ca = llvm::ConstantExpr::getIntToPtr(cc, llvm.TypeVoid);
	auto create = llvm.CreateCall("map_init", ir, func,
								  {size, size_val, ca},
								  scope == Scope::LOCAL, default_return_type);
	switch (scope) {
	case Scope::LOCAL: {
		llvm.CreateLocalVoid(name, ir);
		llvm.StoreLocal(name, ir, create);
		locals.insert(std::make_pair(name, std::make_shared<InstanceMap>(name, data_type, scope, llvm, ir, is_ref)));
		return locals.find(name)->second;
	}
	case Scope::GLOBAL: {
		llvm.CreateGlobalVoid(name);
		llvm.StoreGlobal(name, ir, create);
		globals.insert(std::make_pair(name, std::make_shared<InstanceMap>(name, data_type, scope, llvm, ir, is_ref)));
		return globals.find(name)->second;
	}
	default:
		assert(0);
	}
}

InstanceMap::InstanceMap(const std::string &name,
						 Primitive type,
						 Scope scope,
						 CompilerLLVM &llvm,
						 llvm::IRBuilder<> *ir,
						 bool is_ref) : type(type) {
	this->name = name;
	this->scope = scope;
	this->is_ref = is_ref;
}

bool InstanceMap::Set(llvm::Value *v,
					  llvm::Value *idx,
					  size_t field_index,
					  CompilerLLVM &llvm,
					  llvm::IRBuilder<> *ir) {
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

void InstanceMap::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	vt = llvm.GetVariableValue(ir, name, type);
}

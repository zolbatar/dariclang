#include "InstanceList.h"

std::shared_ptr<Instance> InstanceList::Build(const std::string &name,
											  const std::string &struct_name,
											  Primitive data_type,
											  llvm::StructType *llvm_struct_type,
											  Scope scope,
											  CompilerLLVM &llvm,
											  llvm::Function *func,
											  llvm::IRBuilder<> *ir,
											  Primitive default_return_type,
											  bool is_ref) {
	llvm::Constant *size;
	if (data_type != Primitive::NONE) {
		size = llvm::ConstantInt::get(
			llvm.TypeInt,
			llvm.dl->getTypeAllocSize(llvm.TypeConversion(data_type)));
	} else {
		size = llvm::ConstantInt::get(
			llvm.TypeInt,
			llvm.dl->getTypeAllocSize(llvm_struct_type));
	}
	auto create = llvm.CreateCall("list_init", ir, func, {size}, scope == Scope::LOCAL, default_return_type);
	switch (scope) {
	case Scope::LOCAL: {
		llvm.CreateLocalVoid(name, ir);
		llvm.StoreLocal(name, ir, create);
		CollectionAssign ca;
		ca.type = CollectionType::List;
		ca.alloc = create;
		llvm.local_collections.push_back(std::move(ca));
		locals.insert(std::make_pair(name, std::make_shared<InstanceList>(name, struct_name, data_type, scope, llvm, ir, is_ref)));
		return locals.find(name)->second;
	}
	case Scope::GLOBAL: {
		llvm.CreateGlobalVoid(name);
		llvm.StoreGlobal(name, ir, create);
		globals.insert(std::make_pair(name, std::make_shared<InstanceList>(name, struct_name, data_type, scope, llvm, ir, is_ref)));
		return globals.find(name)->second;
	}
	default:
		assert(0);
	}
}

InstanceList::InstanceList(const std::string &name,
						   const std::string &struct_name,
						   Primitive type,
						   Scope scope,
						   CompilerLLVM &llvm,
						   llvm::IRBuilder<> *ir,
						   bool is_ref) {
	this->name = name;
	this->struct_name = struct_name;
	this->scope = scope;
	this->is_ref = is_ref;
	this->type = type;
}

bool InstanceList::Set(llvm::Value *v,
					   llvm::Value *idx,
					   size_t field_index,
					   CompilerLLVM &llvm,
					   llvm::IRBuilder<> *ir) {
	assert(0);
	return true;
}

void InstanceList::Get(ValueType &vt, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	switch (scope) {
	case Scope::GLOBAL:
		vt.value = ir->CreateLoad(llvm.TypeVoid, llvm.GetGlobal(GetName()));
		break;
	case Scope::LOCAL:
		vt.value = ir->CreateLoad(llvm.TypeVoid, llvm.GetLocal(GetName()));
		break;
	}
}

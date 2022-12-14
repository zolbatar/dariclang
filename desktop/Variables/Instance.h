#pragma once

#include <unordered_map>
#include <string>
#include "../LLVM/CompilerLLVM.h"
#include "PrimitiveTypes.h"

enum class InstanceType {
	PRIMITIVE,
	ARRAY,
	RECORD,
	RECORD_ARRAY,
	LIST,
	VECTOR,
	MAP,
	SET,
	STACK,
	QUEUE
};

class Instance {
public:
	virtual ~Instance() = default;
	static bool Exists(std::string name);
	static std::shared_ptr<Instance> FindInstance(std::string name);

	// Scope, name and type
	Primitive GetDataType() { return data_type_val; }
	Scope GetScope() { return scope; }
	virtual InstanceType GetInstanceType() = 0;
	std::string &GetName() { return name; }
	virtual size_t IndicesCount() = 0;
	std::string GetStructName() { return struct_name; }
	std::string GetStructNameVal() { return struct_name_val; }
	bool IsRef() { return is_ref; }
	Primitive GetType() { return type; }
	llvm::StructType *GetStructType() { return struct_type; }

	// Get/set stuff
	virtual void Get(ValueType &vt,
					 llvm::Value *idx,
					 size_t field_index,
					 CompilerLLVM &llvm,
					 llvm::IRBuilder<> *ir) = 0;
	virtual bool Set(llvm::Value *v,
					 llvm::Value *idx,
					 size_t field_index,
					 CompilerLLVM &llvm,
					 llvm::IRBuilder<> *ir) = 0;
	void SetPointer(llvm::Value *v, llvm::Value *idx, size_t field_index, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
		switch (scope) {
		case Scope::GLOBAL:
			llvm.StoreGlobal(name, ir, v);
			break;
		case Scope::LOCAL:
			llvm.StoreLocalPointer(name, ir, v);
			break;
		default:
			assert(0);
		}
	}

	static void ClearStatic() {
		locals.clear();
		globals.clear();
	}

	static std::unordered_map<std::string, std::shared_ptr<Instance>> locals;
	static std::unordered_map<std::string, std::shared_ptr<Instance>> globals;
protected:
	std::string name;
	Scope scope;
	bool is_ref;
	Primitive data_type_val = Primitive::NONE;
	std::string struct_name;
	std::string struct_name_val;
	Primitive type = Primitive::NONE;
	llvm::StructType *struct_type = nullptr;
};

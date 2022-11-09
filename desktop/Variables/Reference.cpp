#include "Reference.h"

std::vector<Reference> Reference::references;
size_t Reference::index_ptr = 0;

Reference *Reference::Create(std::string name) {
	references.emplace_back(Reference(name));
	auto r = &references.back();
	return r;
}

Reference *Reference::Get(size_t index) {
	return &references[index];
}

void Reference::SetAsArray(size_t size) {
	instance_type = InstanceType::ARRAY;
	no_indices = size;
}

void Reference::AddIndexRef(ParserToken &&token) {
	indices.push_back(token);
}

bool Reference::InstanceExists() {
	return Instance::Exists(name);
}

bool Reference::FindInstance() {
	instance = Instance::FindInstance(name);
	this->data_type = instance->GetDataType();

	// Validate
	if (instance->GetInstanceType() != instance_type) return false;
	if (instance->IndicesCount() != no_indices) return false;

	return true;
}

void Reference::CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope) {
	switch (instance_type) {
		case InstanceType::SIMPLE:
			instance = Instance::SimpleInstance(name, data_type, scope, llvm, ir);
			break;
		case InstanceType::ARRAY:
			instance = Instance::ArrayInstance(name, data_type, scope, no_indices, llvm, ir);
			break;
		default:
			assert(0);
	}
}

void Reference::SetValue(ValueType vt, std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	switch (instance_type) {
		case InstanceType::SIMPLE:
			instance->SetSimpleValue(vt.value, llvm, ir);
			break;
		case InstanceType::ARRAY:
			instance->SetArrayValue(vt.value, instance->GetScope() == Scope::GLOBAL
											  ? GlobalIndex(indices_val, llvm, ir)
											  : LocalIndex(indices_val, llvm, ir),
									llvm, ir);
			break;
		default:
			assert(0);
	}
}

ValueType Reference::GetValue(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	switch (instance_type) {
		case InstanceType::SIMPLE:
			return instance->GetSimpleValue(llvm, ir);
		case InstanceType::ARRAY:
			return instance->GetArrayValue(instance->GetScope() == Scope::GLOBAL
										   ? GlobalIndex(indices_val, llvm, ir)
										   : LocalIndex(indices_val, llvm, ir),
										   llvm, ir);
		default:
			assert(0);
	}
}

llvm::Value *Reference::LocalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	auto index = indices_val[0].value;
	auto glob_v = llvm.GetLocal(name);
	auto glob = llvm.GetLocalArrayDimensions(name);
	for (auto i = 0; i < indices_val.size() - 1; i++) {
		// Get array entry from dimensions
		auto ptr = ir->CreateGEP(llvm.TypeInt,
								 glob,
								 {llvm::ConstantInt::get(llvm.TypeInt, i)});
		auto size = ir->CreateLoad(llvm.TypeInt, ptr);

		// Now multiply this dimension and add to the current index
		auto m = ir->CreateMul(size, indices_val[i + 1].value);
		index = ir->CreateAdd(index, m);
	}
	return ir->CreateGEP(glob_v->getAllocatedType(), glob_v, {index});
}

llvm::Value *Reference::GlobalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
	auto index = indices_val[0].value;
	auto glob_v = llvm.GetGlobal(name);
	auto glob = llvm.GetGlobalArrayDimensions(name);
	for (auto i = 0; i < indices_val.size() - 1; i++) {
		// Get array entry from dimensions
		auto ptr = ir->CreateGEP(llvm.TypeInt,
								 glob,
								 {llvm::ConstantInt::get(llvm.TypeInt, i)});
		auto size = ir->CreateLoad(llvm.TypeInt, ptr);

		// Now multiply this dimension and add to the current index
		auto m = ir->CreateMul(size, indices_val[i + 1].value);
		index = ir->CreateAdd(index, m);
	}
	return ir->CreateGEP(glob_v->getValueType(), glob_v, {llvm::ConstantInt::get(llvm.TypeInt, 0), index});
}

std::vector<ParserToken> &Reference::GetIndices() {
	return indices;
}



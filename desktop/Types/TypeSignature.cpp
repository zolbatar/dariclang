#include "../Variables/PrimitiveTypes.h"
#include "TypePrimitive.h"
#include "TypePrimitiveArray.h"
#include "TypeSignature.h"

size_t TypeSignature::index_ptr = 0;
std::map<std::string, std::shared_ptr<TypeSignature>> TypeSignature::signatures;
std::vector<std::shared_ptr<TypeSignature>> TypeSignature::signatures_by_index;

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeSignature::FindInstanceSingle(
	std::string name,
	Primitive type) {

	// Find by name
	auto sig = signatures.find(name);
	if (sig == signatures.end())
		return std::make_tuple(FindResult::NOT_FOUND, nullptr);

	// Ensure is correct class
	if (sig->second.get()->clazz != SignatureClass::Primitive)
		return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

	// Now specific class matching
	auto ct = std::dynamic_pointer_cast<TypePrimitive>(sig->second);
	if (ct.get()->Matches(type)) {
		return std::make_tuple(FindResult::OK, sig->second);
	}

	return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

void TypeSignature::ClearLocals() {
	std::list<std::string> to_remove;
	for (auto &k : signatures) {
		if (k.second->scope == Scope::LOCAL) {
			to_remove.push_back(k.first);
		}
	}
	for (auto tr : to_remove) {
		signatures.erase(tr);
	}
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeSignature::FindInstanceArray(
	std::string name,
	Primitive type,
	std::list<ParserToken> &expressions) {

	// Find by name
	auto sig = signatures.find(name);
	if (sig == signatures.end())
		return std::make_tuple(FindResult::NOT_FOUND, nullptr);

	// Ensure is correct class
	if (sig->second.get()->clazz != SignatureClass::PrimitiveArray)
		return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

	// Now specific class matching
	auto ct = std::dynamic_pointer_cast<TypePrimitiveArray>(sig->second);
	if (ct.get()->Matches(type, expressions)) {
		return std::make_tuple(FindResult::OK, sig->second);
	}

	return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

void TypeSignature::CreateLocalDimensions(SignatureCall &call, Primitive primitive_type) {

	// Store dimensions (list of dimensions)
	auto la = call.llvm.CreateLocalArrayStage1(name, call.ir, values.size(), Primitive::INT);
	llvm::Value *size = llvm::ConstantInt::get(call.llvm.TypeInt, 1);
	size_t i = 0;
	for (auto &iv : values) {
		size = call.ir->CreateMul(size, iv);
		auto ptr = call.ir->CreateGEP(call.llvm.TypeInt, la, {llvm::ConstantInt::get(call.llvm.TypeInt, i)});
		call.ir->CreateStore(size, ptr);
		i++;
	}

	// Create array
	call.llvm.CreateLocalArrayStage2(name, call.ir, size, call.llvm.TypeConversion(primitive_type));
}

void TypeSignature::CreateGlobalDimensions(SignatureCall &call, Primitive primitive_type) {

	// Check indices are integers
	std::vector<unsigned> indices;
	for (auto &s : expressions) {
		if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
			// All dimensions need to be literals
			RaiseException("For global arrays, dimensions need to be literal integers", s);
		}
		indices.push_back(s.literal.iv);
	}

	size_t size = 1;
	auto typ = llvm::ArrayType::get(call.llvm.TypeInt, indices.size());
	std::vector<llvm::Constant *> values;
	for (auto &iv : indices) {
		size *= iv;
		values.push_back(llvm::ConstantInt::get(call.llvm.TypeInt, size));
	}
	auto init = llvm::ConstantArray::get(typ, values);
	auto size_v = llvm::ArrayType::get(call.llvm.TypeConversion(primitive_type), size);
	call.llvm.CreateGlobalArray(name, typ, init, indices.size(), size_v, primitive_type);
}

std::list<ParserToken> &TypeSignature::GetExpressions() {
	return expressions;
}

void TypeSignature::SetValues(std::vector<llvm::Value *> values) {
	this->values = values;
}

llvm::Value *TypeSignature::LocalIndex(SignatureCall &call) {
	auto index = values[0];
	if (call.option_base)
		index = call.ir->CreateSub(index, llvm::ConstantInt::get(call.llvm.TypeInt, 1));
	auto glob_v = call.llvm.GetLocal(name);
	auto glob = call.llvm.GetLocalArrayDimensions(name);
	for (size_t i = 0; i < num_dimensions - 1; i++) {
		// Get array entry from dimensions
		auto ptr = call.ir->CreateGEP(call.llvm.TypeInt,
									  glob,
									  {llvm::ConstantInt::get(call.llvm.TypeInt, i)});
		auto size = call.ir->CreateLoad(call.llvm.TypeInt, ptr);

		// 0 or 1 base index
		auto value = values[i + 1];
		if (call.option_base)
			value = call.ir->CreateSub(value, llvm::ConstantInt::get(call.llvm.TypeInt, 1));

		// Now multiply this dimension and add to the current index
		auto m = call.ir->CreateMul(size, value);
		index = call.ir->CreateAdd(index, m);
	}
	return call.ir->CreateGEP(glob_v->getAllocatedType(), glob_v, {index});
}

llvm::Value *TypeSignature::GlobalIndexPtr(SignatureCall &call) {
	auto index = values[0];
	if (call.option_base)
		index = call.ir->CreateSub(index, llvm::ConstantInt::get(call.llvm.TypeInt, 1));
	auto glob = call.llvm.GetGlobalArrayDimensions(name);
	for (size_t i = 0; i < num_dimensions - 1; i++) {

		// Get array entry from dimensions
		auto size_v = llvm::ArrayType::get(call.llvm.TypeInt, num_dimensions);
		auto ptr = call.ir->CreateGEP(size_v, glob, {llvm::ConstantInt::get(call.llvm.TypeInt, 0), llvm::ConstantInt::get(call.llvm.TypeInt, i)});
		auto size = call.ir->CreateLoad(call.llvm.TypeInt, ptr);

		// 0 or 1 base index
		auto value = values[i + 1];
		if (call.option_base)
			value = call.ir->CreateSub(value, llvm::ConstantInt::get(call.llvm.TypeInt, 1));

		// Now multiply this dimension and add to the current index
		auto m = call.ir->CreateMul(size, value);
		index = call.ir->CreateAdd(index, m);
	}
	return index;
}

llvm::Value *TypeSignature::GlobalIndex(SignatureCall &call) {
	auto glob_v = call.llvm.GetGlobal(name);
	auto index = GlobalIndexPtr(call);
	return call.ir->CreateGEP(glob_v->getValueType(), glob_v, {llvm::ConstantInt::get(call.llvm.TypeInt, 0), index});
}


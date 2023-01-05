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

#include "../Variables/PrimitiveTypes.h"
#include "TypePrimitive.h"
#include "TypeSignature.h"

std::map<std::string, std::shared_ptr<TypeSignature>> TypeSignature::signatures;

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeSignature::FindInstance(DaricParser::TypeSignatureSingleContext *context) {
    auto name = context->IDENTIFIER()->getText();

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->clazz != SignatureClass::Primitive)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    // Now specific class matching
    auto ct = std::dynamic_pointer_cast<TypePrimitive>(sig->second);
    if (ct.get()->Matches(context)) {
        return std::make_tuple(FindResult::OK, sig->second);
    }

    return std::make_tuple(FindResult::NO_MATCH, nullptr);
}


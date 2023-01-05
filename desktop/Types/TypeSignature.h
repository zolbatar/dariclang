#pragma once

#include <memory>
#include <list>
#include <tuple>
#include "../Variables/PrimitiveTypes.h"
#include "../LLVM/CompilerLLVM.h"
#include "../Parser/ParserToken.h"

enum class FindResult {
    OK,
    NOT_FOUND,
    INCORRECT_CLASS,
    NO_MATCH,
};

enum class SignatureClass {
    Primitive,
    PrimitiveArray
};

class TypeSignature {
public:
    virtual ~TypeSignature() = default;
    SignatureClass GetClass() { return clazz; }
    size_t GetIndex() { return index; }

    // Check two signatures are identical
    virtual bool operator==(TypeSignature &) = 0;

    // Managing instances of this type
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceSingle(
            std::string name,
            Primitive *type);
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstanceArray(
            std::string name,
            Primitive *type,
            std::list<ParserToken> &expressions);

    // Passing around
    //llvm::Value *GetValue();

    // Standard primitive types
/*    static std::shared_ptr<TypeSignature> PrimitiveInt;
    static std::shared_ptr<TypeSignature> PrimitiveFloat;
    static std::shared_ptr<TypeSignature> PrimitiveString;*/

protected:
    std::string name;
    SignatureClass clazz;
    Scope scope;

    static std::map<std::string, std::shared_ptr<TypeSignature>> signatures;
    static std::vector<std::shared_ptr<TypeSignature>> signatures_by_index;
    size_t index;
    static size_t index_ptr;
};


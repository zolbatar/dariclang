#pragma once

#include <memory>
#include <list>
#include <tuple>
#include "../Variables/PrimitiveTypes.h"
#include "../Grammar/DaricParser.h"
#include "../LLVM/CompilerLLVM.h"

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

enum class PrimitiveClass {
    UNKNOWN,
    INT,
    FLOAT,
    STRING,
    BYTE
};


class TypeSignature {
public:
    virtual ~TypeSignature() = default;
    SignatureClass GetClass() { return clazz; }

    // Check two signatures are identical
    virtual bool operator==(TypeSignature &) = 0;

    // Managing instances of this type
    static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindInstance(DaricParser::TypeSignatureSingleContext *context);

    // Passing around
    //llvm::Value *GetValue();

    // Standard primitive types
/*    static std::shared_ptr<TypeSignature> PrimitiveInt;
    static std::shared_ptr<TypeSignature> PrimitiveFloat;
    static std::shared_ptr<TypeSignature> PrimitiveString;*/

protected:
    static std::map<std::string, std::shared_ptr<TypeSignature>> signatures;
    SignatureClass clazz;
    Scope scope;
};


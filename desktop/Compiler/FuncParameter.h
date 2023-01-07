#pragma once

#include <map>
#include <vector>
#include "../LLVM/CompilerLLVM.h"
#include "CompilerOptions.h"
#include "../Types/Type.h"

class FuncParameter {
public:
    FuncParameter(std::shared_ptr<TypeSignature> signature, bool is_ref) : signature(signature), is_ref(is_ref) {}

    std::string GetName() { return signature->GetName(); }
    std::shared_ptr<TypeSignature> GetSignature() { return signature; }
    bool IsRef() { return is_ref; }
    llvm::Type *GetLLVMType(SignatureCall &call) {
        return signature->GetLLVMType(is_ref, call);
    }

    bool ConvertToOutputValue(ValueType &vt, SignatureCall &call) {
        call.llvm.AutoConversion(call.ir, vt, signature->GetPrimitiveType(call));
        return vt.type == signature->GetPrimitiveType(call);
    }

private:
    std::shared_ptr<TypeSignature> signature;
    bool is_ref = false;
};


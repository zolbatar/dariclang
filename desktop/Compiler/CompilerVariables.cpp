#include "Compiler.h"

void Compiler::GenericVariable(ParserToken &token, Scope scope) {
    auto signature = TypeSignature::Get(token.signature).get();
    auto value_type = CompileExpression(token.children[0]);
    auto call = BuildTypeCall(token);

    // If no type, try and auto-guess it from the expression
    if (signature->GetClass() == SignatureClass::Primitive) {
        if (signature->GetPrimitiveType(call) == Primitive::NONE) {
            auto ct = dynamic_cast<TypePrimitive *>(signature);
            ct->SetPrimitiveType(value_type.type);
        }
    }

    // Create if necessary
    if (!signature->IsCreated()) {
        signature->Create(call);
    }

    // Do conversion
    llvm.AutoConversion(GetIR(), value_type, signature->GetPrimitiveType(call));
    if (value_type.type != signature->GetPrimitiveType(call)) {
        TypeError(token);
    }

    // String? Release previous value
    if (value_type.type == Primitive::STRING) {
        llvm.ClearPermString(signature->Get(call).value, GetIR());
        llvm.MakePermString(value_type.value, GetIR());
    }

    // And finally save the value
    signature->Set(call, value_type);

    // Clear temp?
    if (strip_strings) {
        strip_strings = false;
        llvm.ClearTempStrings(GetIR());
    }
}

void Compiler::TokenGlobal(ParserToken &token) {
    if (token.scope != Scope::GLOBAL)
        return;
    GenericVariable(token, Scope::GLOBAL);
}

void Compiler::TokenLocal(ParserToken &token) {
    if (token.scope != Scope::LOCAL)
        return;
    GenericVariable(token, Scope::LOCAL);
}

void Compiler::TokenConst(ParserToken &token) {
    auto signature = TypeSignature::Get(token.signature).get();
    auto call = BuildTypeCall(token);

    // Create
    if (!signature->IsCreated()) {
        signature->Create(call);
    }
}

void Compiler::TokenSwap(ParserToken &t) {
    auto call = BuildTypeCall(t);

    // Get variables
    auto signature1 = TypeSignature::Get(t.children[0].signature).get();
    auto signature2 = TypeSignature::Get(t.children[1].signature).get();

    if (signature1->GetPrimitiveType(call) != signature2->GetPrimitiveType(call)) {
        RaiseException("Types must be the same for SWAP", t);
    }
    auto v1 = signature1->Get(call);
    auto v2 = signature2->Get(call);
    signature1->Set(call, v2);
    signature2->Set(call, v1);
}

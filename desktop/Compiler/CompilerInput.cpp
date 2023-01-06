#include "Compiler.h"

void Compiler::TokenInput(ParserToken &t) {
    auto signature = TypeSignature::Get(t.signature).get();
    auto call = BuildTypeCall(t);

    // Create if necessary
    if (!signature->IsCreated()) {
        signature->Create(call);
    }

    // Get value
    ValueType vt;
    vt.type = signature->GetPrimitiveType();
    switch (signature->GetPrimitiveType()) {
        default:
            assert(0);
        case Primitive::INT:
            vt.value = CreateCall("InputInt", {});
            break;
        case Primitive::BYTE:
            vt.value = CreateCall("InputByte", {});
            break;
        case Primitive::FLOAT:
            vt.value = CreateCall("InputFloat", {});
            break;
        case Primitive::STRING:
            vt.value = CreateCall("InputString", {});
            break;
    }
    signature->Set(call, vt);
}

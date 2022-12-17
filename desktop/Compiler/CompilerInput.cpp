#include "Compiler.h"

void Compiler::TokenInput(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    // Does it exist?
    if (!ref->InstanceExists()) {
        ref->CreateInstance(llvm, GetPreIR(), t.scope, false);
    }
    ref->FindInstance();

    // Get value
    ValueType vt;
    vt.type = Primitive::STRING;
    vt.value = CreateCall("Input", {});

    // Save value
    ref->SetValue(option_base, vt, ProcessIndices(ref, t), llvm, GetIR(), t);
}

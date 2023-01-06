#include "Compiler.h"

void Compiler::TokenStruct(ParserToken &t) {
    auto _struct = state.GetStruct(t.signature);
    if (llvm.CreateStruct(t.identifier, _struct->fields) == nullptr)
        RaiseException("Error creating record", t);
}

void Compiler::TokenStructInstance(ParserToken &t) {
    auto signature = TypeSignature::Get(t.signature).get();
    auto call = BuildTypeCall(t);
	signature->Create(call);
}

void Compiler::TokenStructArray(ParserToken &t) {
/*    auto var = Reference::Get(t.reference);

    // Do we have this struct?
    if (!state.StructExists(var->GetStructName()))
        RecordNotFound(t, var->GetStructName());

    // So fetch the struct info from LLVM and the parser
    auto llvm_struct = llvm.GetStruct(var->GetStructName());

    if (procedure == nullptr) {
        if (t.scope != Scope::GLOBAL)
            return;
        CreateGlobalDimensions(var, Primitive::NONE, llvm_struct);
        var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::GLOBAL, false);
    } else {
        if (t.scope != Scope::LOCAL)
            return;
        CreateLocalDimensions(var, Primitive::NONE, llvm_struct);
        var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::LOCAL, false);
    }*/
}
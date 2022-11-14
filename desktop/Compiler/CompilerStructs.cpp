#include "Compiler.h"

void Compiler::TokenStruct(ParserToken &t) {
    auto _struct = state.GetStruct(t.reference);
    if (llvm.CreateStruct(t.identifier, _struct->fields) == nullptr)
        RaiseException("Error creating record", t);
}

void Compiler::TokenStructInstance(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    if (procedure == nullptr) {
        if (t.scope != Scope::GLOBAL) return;
    } else {
        if (t.scope != Scope::LOCAL) return;
    }

    // Do we have this struct?
    if (!state.StructExists(ref->GetStructName()))
        RaiseException("Record '" + ref->GetStructName() + "' not found", t);

    // So fetch the struct info from LLVM and the parser
    auto struct_index = state.GetStructIndex(ref->GetStructName());
    auto si = state.GetStruct(struct_index);
    auto llvm_struct = llvm.GetStruct(ref->GetStructName());

    // Start creating an instance
    if (Instance::Exists(ref->GetName())) {
        VariableAlreadyExists(t, ref->GetName());
    }

    ref->SetLLVMStructType(llvm_struct);
    ref->CreateInstance(llvm, GetIR(), t.scope);
    auto instance = ref->GetInstance();

    // Initialise any fields?
    for (auto &init: t.children) {
        // Is this a valid field?
        bool found = false;
        for (auto i = 0; i < si->fields.size(); i++) {
            if (si->fields[i].name == init.identifier) {
                auto value = CompileExpression(init);
                llvm.AutoConversion(GetIR(), value, si->fields[i].type);
                instance->Set(value.value, nullptr, i, llvm, GetIR());
                found = true;
            }
        }
        if (!found)
            RaiseException("Field '" + init.identifier + "' not found in record '" + ref->GetStructName() + "'", t);
    }
}

void Compiler::TokenStructArray(ParserToken &t) {
    auto var = Reference::Get(t.reference);

    // Do we have this struct?
    if (!state.StructExists(var->GetStructName()))
        RaiseException("Record '" + var->GetStructName() + "' not found", t);

    // So fetch the struct info from LLVM and the parser
    auto llvm_struct = llvm.GetStruct(var->GetStructName());

    if (procedure == nullptr) {
        if (t.scope != Scope::GLOBAL) return;
        CreateGlobalDimensions(var, Primitive::NONE, llvm_struct);
        var->CreateInstance(llvm, GetIR(), Scope::GLOBAL);
    } else {
        if (t.scope != Scope::LOCAL) return;
        CreateLocalDimensions(var, Primitive::NONE, llvm_struct);
        var->CreateInstance(llvm, GetIR(), Scope::LOCAL);
    }
}
#include "Compiler.h"

void Compiler::TokenStruct(ParserToken &t) {
    auto _struct = parser->GetStruct(t.reference);
    if (llvm.CreateStruct(t.identifier, _struct->fields) == nullptr)
        RaiseException("Error creating record", t);
}

void Compiler::TokenStructGlobal(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    // Do we have this struct?
    if (!parser->StructExists(ref->GetStructName()))
        RaiseException("Record '" + ref->GetStructName() + "' not found", t);

    // So fetch the struct info from LLVM and the parser
    auto struct_index = parser->GetStructIndex(ref->GetStructName());
    auto si = parser->GetStruct(struct_index);
    auto llvm_struct = llvm.GetStruct(ref->GetStructName());

    // Start creating an instance
    if (Instance::Exists(ref->GetName())) {
        VariableAlreadyExists(t, ref->GetName());
    }
    auto instance = Instance::StructInstance(ref->GetName(),
                                             ref->GetStructName(),
                                             llvm_struct,
                                             Scope::GLOBAL,
                                             llvm,
                                             GetIR());

    // Initialise any fields?
    auto i = 0;
    for (auto &init: t.children) {
        auto value = CompileExpression(init);
        llvm.AutoConversion(GetIR(), value, si->fields[i].type);
        instance->SetStructValue(value.value, i, llvm, GetIR());
        i++;
    }
}

void Compiler::TokenStructLocal(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    // Do we have this struct?
    if (!parser->StructExists(ref->GetStructName()))
        RaiseException("Struct '" + ref->GetStructName() + "' not found", t);

    // So fetch the struct info from LLVM and the parser
    auto struct_index = parser->GetStructIndex(ref->GetStructName());
    auto si = parser->GetStruct(struct_index);
    auto llvm_struct = llvm.GetStruct(ref->GetStructName());

    // Start creating an instance
    if (Instance::Exists(ref->GetName())) {
        VariableAlreadyExists(t, ref->GetName());
    }
    auto instance = Instance::StructInstance(ref->GetName(),
                                             ref->GetStructName(),
                                             llvm_struct,
                                             Scope::LOCAL,
                                             llvm,
                                             GetIR());

    // Initialise any fields?
    auto i = 0;
    for (auto &init: t.children) {
        auto value = CompileExpression(init);
        llvm.AutoConversion(GetIR(), value, si->fields[i].type);
        instance->SetStructValue(value.value, i, llvm, GetIR());
        i++;
    }
}

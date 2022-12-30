#include "Compiler.h"

void Compiler::TokenSet(ParserToken &t) {}

void Compiler::TokenPush(ParserToken &t) {
    auto ref = Reference::Get(t.reference);
    if (!ref->InstanceExists())
        VariableNotFound(t, ref->GetName());
    if (!ref->FindInstanceUnknownInstanceType()) {
        VariableError(t, ref->GetName());
    }

    // Value
    ValueType value_type;
    Reference *ref_in = Reference::Get(t.children[0].reference);
    if (!ref_in->InstanceExists())
        VariableNotFound(t, ref->GetName());
    if (!ref_in->FindInstanceUnknownInstanceType()) {
        VariableError(t, ref->GetName());
    }

    // Correct type?
    if (ref_in->GetStructName() != ref->GetStructName()) {
        TypeError(t);
    }

    // Get address of struct (or variable)
    value_type.value = ref_in->GetPointer(option_base, {}, llvm, GetIR());
    switch (ref_in->GetInstanceType()) {
        case InstanceType::ARRAY:
        case InstanceType::RECORD_ARRAY:
            break;
        default:
            switch (ref_in->GetInstance()->GetScope()) {
                case Scope::GLOBAL:
                    value_type.value = llvm.GetGlobal(ref_in->GetName());
                    break;
                case Scope::LOCAL:
                    value_type.value = llvm.GetLocal(ref_in->GetName());
                    break;
            }
    }

    // Get collection var
    ValueType vt_var;
    ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

    // Right type?
    switch (ref->GetInstanceType()) {
        case InstanceType::VECTOR:
            CreateCall("vector_add_last", {vt_var.value, value_type.value});
            break;
        case InstanceType::LIST:
            CreateCall("list_add_last", {vt_var.value, value_type.value});
            break;
        case InstanceType::QUEUE:
            CreateCall("queue_push", {vt_var.value, value_type.value});
            break;
        case InstanceType::STACK:
            CreateCall("stack_push", {vt_var.value, value_type.value});
            break;
        default:
            TypeError(t);
    }
}

void Compiler::TokenPop(ParserToken &t) {
    auto ref = Reference::Get(t.reference);
    if (!ref->InstanceExists())
        VariableNotFound(t, ref->GetName());
    if (!ref->FindInstanceUnknownInstanceType()) {
        VariableError(t, ref->GetName());
    }

    // Value
    ValueType value_type;
    Reference *ref_in = Reference::Get(t.children[0].reference);
    if (!ref_in->InstanceExists())
        VariableNotFound(t, ref->GetName());
    if (!ref_in->FindInstanceUnknownInstanceType()) {
        VariableError(t, ref->GetName());
    }

    // Correct type?
    if (ref_in->GetDataType() != ref->GetDataType() || ref_in->GetStructName() != ref->GetStructName()) {
        TypeError(t);
    }

    // Get address of struct (or variable)
    switch (ref_in->GetInstance()->GetScope()) {
        case Scope::GLOBAL:
            value_type.value = llvm.GetGlobal(ref_in->GetName());
            break;
        case Scope::LOCAL:
            value_type.value = llvm.GetLocal(ref_in->GetName());
            break;
    }

    // Get collection var
    ValueType vt_var;
    ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

    // Right type?
    switch (ref->GetInstanceType()) {
        case InstanceType::VECTOR:
            CreateCall("vector_get_last", {value_type.value, vt_var.value});
            CreateCall("vector_remove_last", {vt_var.value});
            break;
        case InstanceType::LIST:
            CreateCall("list_get_last", {value_type.value, vt_var.value});
            CreateCall("list_remove_last", {vt_var.value});
            break;
        case InstanceType::QUEUE:
            CreateCall("queue_pop", {value_type.value, vt_var.value});
            break;
        case InstanceType::STACK:
            CreateCall("stack_pop", {value_type.value, vt_var.value});
            break;
        default:
            TypeError(t);
    }
}

void Compiler::TokenClear(ParserToken &t) {}

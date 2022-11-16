#include "Compiler.h"

void Compiler::GenericVariable(ParserToken &token, Scope scope) {
    for (auto &s: token.children) {
        auto ref = Reference::Get(s.reference);
        auto value_type = CompileExpression(s.children[0]);

        // If it's a primitive type, we create the variable if we need to
        if (ref->GetInstanceType() == InstanceType::PRIMITIVE) {
            if (!ref->InstanceExists()) {
                ref->CreateInstance(llvm, GetIR(), scope);
            }
        }

        // Does it exist?
        if (!ref->FindInstance()) {
            RaiseException("Variable error, does it exist?", s);
        }

        // Get type
        Primitive type = Primitive::NONE;
        switch (ref->GetInstanceType()) {
            case InstanceType::PRIMITIVE:
            case InstanceType::ARRAY:
                type = ref->GetDataType();
                break;
            case InstanceType::RECORD:
            case InstanceType::RECORD_ARRAY: {
                auto ss = ref->FindFieldInStruct(token, llvm);
                type = ss.member->type;
                break;
            }
        }

        // Do conversion
        llvm.AutoConversion(GetIR(), value_type, type);
        if (value_type.type != type) {
            TypeError(token);
        }

        // String? Release previous value
        if (value_type.type == Primitive::STRING) {
            llvm.ClearPermString(ref->GetValue(ProcessIndices(ref, s), llvm, GetIR(), token).value, GetIR());
        }

        // And finally save the value
        ref->SetValue(value_type, ProcessIndices(ref, s), llvm, GetIR(), token);
    }

    // String?

    // Clear temp?
    if (strip_strings) {
        strip_strings = false;
        llvm.ClearTempStrings(GetIR());
    }
}

void Compiler::TokenGlobal(ParserToken &token) {
    if (token.scope != Scope::GLOBAL) return;
    if (token.line == 20)
        int a = 1;
    GenericVariable(token, Scope::GLOBAL);
}

void Compiler::TokenLocal(ParserToken &token) {
    if (token.scope != Scope::LOCAL) return;
    GenericVariable(token, Scope::LOCAL);
}

void Compiler::TokenConst(ParserToken &token) {
    for (auto &s: token.children) {
        InstanceConstant::Build(token.identifier, s.data_type, Scope::GLOBAL, llvm, GetIR());
        switch (s.data_type) {
            case Primitive::INT:
                llvm.CreateConstant(token.identifier, s.data_type, llvm.CreateConstantInt(s.data_type, s.iv));
                break;
            case Primitive::FLOAT:
                llvm.CreateConstant(token.identifier, s.data_type, llvm.CreateConstantFloat(s.data_type, s.fv));
                break;
            case Primitive::STRING:
                llvm.CreateConstant(token.identifier,
                                    s.data_type,
                                    llvm.CreateConstantString(GetIRImplicit(),
                                                              GetFunctionImplicit(),
                                                              s.data_type,
                                                              s.sv.c_str(),
                                                              token.identifier));
                break;
            default:
                TypeError(token);
        }
    }
}

void Compiler::TokenSwap(ParserToken &t) {

    // Get variables
    auto var1 = Reference::Get(t.children[0].reference);
    if (!var1->InstanceExists())
        VariableNotFound(t, var1->GetName());
    if (!var1->FindInstance())
        RaiseException("Variable error", t);
    auto var2 = Reference::Get(t.children[1].reference);
    if (!var2->InstanceExists())
        VariableNotFound(t, var1->GetName());
    if (!var2->FindInstance())
        RaiseException("Variable error", t);

    if (var1->GetDataType() != var2->GetDataType()) {
        RaiseException("Types must be the same for SWAP", t);
    }

    auto v1 = var1->GetValue(ProcessIndices(var1, t), llvm, GetIR(), t);
    auto v2 = var2->GetValue(ProcessIndices(var2, t), llvm, GetIR(), t);
    var1->SetValue(v2, ProcessIndices(var1, t), llvm, GetIR(), t);
    var2->SetValue(v1, ProcessIndices(var2, t), llvm, GetIR(), t);
}

void Compiler::CreateLocalDimensions(Reference *var, Primitive type1, llvm::Type *type2) {
    std::list<llvm::Value *> indices;
    for (auto &s: var->GetIndices()) {
        auto vt = CompileExpression(s);
        if (vt.type != Primitive::INT) {
            RaiseException("For local arrays, dimensions need to be integers", s);
        }
        indices.push_back(vt.value);
    }

    // Store dimensions (list of dimensions)
    auto la = llvm.CreateLocalArrayStage1(var->GetName(), GetIR(), var->IndicesCount(), type1);
    llvm::Value *size = llvm::ConstantInt::get(llvm.TypeInt, 1);
    size_t i = 0;
    for (auto &iv: indices) {
        size = GetIR()->CreateMul(size, iv);
        auto ptr = GetIR()->CreateGEP(type2, la, {llvm::ConstantInt::get(llvm.TypeInt, i)});
        GetIR()->CreateStore(size, ptr);
        i++;
    }

    // Create array
    llvm.CreateLocalArrayStage2(var->GetName(), GetIR(), size, type2);
}

void Compiler::CreateGlobalDimensions(Reference *var, Primitive type1, llvm::Type *type2) {

    // Check indices are integers
    std::vector<unsigned> indices;
    for (auto &s: var->GetIndices()) {
        if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
            // All dimensions need to be literals
            RaiseException("For global arrays, dimensions need to be literal integers", s);
        }
        indices.push_back(s.iv);
    }

    size_t size = 1;
    auto typ = llvm::ArrayType::get(llvm.TypeInt, indices.size());
    std::vector<llvm::Constant *> values;
    for (auto &iv: indices) {
        size *= iv;
        values.push_back(llvm::ConstantInt::get(llvm.TypeInt, size));
    }
    auto init = llvm::ConstantArray::get(typ, values);
    auto size_v = llvm::ArrayType::get(type2, size);
    llvm.CreateGlobalArray(var->GetName(), typ, init, indices.size(), size_v, type1);
}

void Compiler::TokenDim(ParserToken &t) {
    auto var = Reference::Get(t.reference);

    if (procedure == nullptr) {
        if (t.scope != Scope::GLOBAL) return;
        CreateGlobalDimensions(var, var->GetDataType(), llvm.TypeConversion(var->GetDataType()));
        var->CreateInstance(llvm, GetIR(), Scope::GLOBAL);
    } else {
        if (t.scope != Scope::LOCAL) return;
        CreateLocalDimensions(var, var->GetDataType(), llvm.TypeConversion(var->GetDataType()));
        var->CreateInstance(llvm, GetIR(), Scope::LOCAL);
    }
}

std::vector<ValueType> Compiler::ProcessIndices(Reference *ref, ParserToken &t) {
    std::vector<ValueType> values;
    for (auto &s: ref->GetIndices()) {
        values.push_back(CompileExpression(s));
    }

    for (auto &v: values) {
        if (v.type != Primitive::INT) {
            RaiseException("Indices must be integers", t);
        }
    }
    return values;
}

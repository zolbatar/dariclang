#include "Compiler.h"
#include "../JIT/String.h"

void Compiler::TokenGlobal(ParserToken &token) {
    for (auto &s: token.children) {

        // Create, find and validate
        auto ref = Reference::Get(s.reference);
        if (!ref->InstanceExists()) {
            if (ref->GetInstanceType() == InstanceType::ARRAY)
                RaiseException("Array '" + ref->GetName() + "'not defined", s);
            ref->CreateInstance(llvm, GetIR(), Scope::GLOBAL);
        } else {
            if (!ref->FindInstance()) {
                RaiseException("Variable error", s);
            }
        }

        auto value_type = CompileExpression(s.children[0]);
        llvm.AutoConversion(GetIR(), value_type, ref->GetDataType());
        if (value_type.type != ref->GetDataType()) {
            TypeError(token);
        }
        ref->SetValue(value_type, ProcessIndices(ref, s), llvm, GetIR());
    }
}

void Compiler::TokenLocal(ParserToken &token) {
    for (auto &s: token.children) {

        // Create, find and validate
        auto ref = Reference::Get(s.reference);
        if (!ref->InstanceExists()) {
            if (ref->GetInstanceType() == InstanceType::ARRAY)
                RaiseException("Array '" + ref->GetName() + "'not defined", s);
            ref->CreateInstance(llvm, GetIR(), Scope::LOCAL);
        } else {
            if (!ref->FindInstance()) {
                RaiseException("Variable error", s);
            }
        }

        auto value_type = CompileExpression(s.children[0]);
        llvm.AutoConversion(GetIR(), value_type, ref->GetDataType());
        if (value_type.type != ref->GetDataType()) {
            TypeError(token);
        }
        ref->SetValue(value_type, ProcessIndices(ref, s), llvm, GetIR());
    }
}

void Compiler::TokenConst(ParserToken &token) {
    for (auto &s: token.children) {
        Instance::ConstantInstance(token.identifier, s.data_type, Scope::GLOBAL, llvm, GetIR());
        switch (s.data_type) {
            case Primitive::INT:
                llvm.CreateConstant(token.identifier, s.data_type, llvm.CreateConstantInt(s.data_type, s.iv));
                break;
            case Primitive::FLOAT:
                llvm.CreateConstant(token.identifier, s.data_type, llvm.CreateConstantFloat(s.data_type, s.fv));
                break;
            case Primitive::STRING:
                llvm.CreateConstant(token.identifier, s.data_type,
                                    llvm.CreateConstantString(GetIRImplicit(),
                                                              GetFunctionImplicit(),
                                                              s.data_type, s.sv.c_str(), token.identifier));
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

    auto v1 = var1->GetValue(ProcessIndices(var1, t), llvm, GetIR());
    auto v2 = var2->GetValue(ProcessIndices(var2, t), llvm, GetIR());
    var1->SetValue(v2, ProcessIndices(var1, t), llvm, GetIR());
    var2->SetValue(v1, ProcessIndices(var2, t), llvm, GetIR());
}

void Compiler::TokenDim(ParserToken &t) {
    auto var = Reference::Get(t.reference);

    if (procedure == nullptr) {

        // Check indices are integers
        std::vector<unsigned> indices;
        for (auto &s: var->GetIndices()) {
            if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
                // All dimensions need to be literals
                RaiseException("For global arrays, dimensions need to be literal integers", s);
            }
            indices.push_back(s.iv);
        }

        // Create dimensions data array
        size_t size = 1;
        auto typ = llvm::ArrayType::get(llvm.TypeInt, indices.size());
        std::vector<llvm::Constant *> values;
        for (auto &iv: indices) {
            size *= iv;
            values.push_back(llvm::ConstantInt::get(llvm.TypeInt, size));
        }
        auto init = llvm::ConstantArray::get(typ, values);

        // Create arrays
        auto size_v = llvm::ArrayType::get(llvm.TypeConversion(var->GetDataType()), size);
        llvm.SetGlobalArray(var->GetName(), typ, init, indices.size(), size_v, var->GetDataType());
        var->CreateInstance(llvm, GetIR(), Scope::GLOBAL);
    } else {
        std::list<llvm::Value *> indices;
        for (auto &s: var->GetIndices()) {
            auto vt = CompileExpression(s);
            if (vt.type != Primitive::INT) {
                RaiseException("For local arrays, dimensions need to be integers", s);
            }
            indices.push_back(vt.value);
        }

        // Store dimensions (list of dimensions)
        auto typ = llvm::ArrayType::get(llvm.TypeInt, var->IndicesCount());
        auto la = llvm.SetLocalArray(var->GetName(), GetIR(), var->IndicesCount(), var->GetDataType());
        llvm::Value *size = llvm::ConstantInt::get(llvm.TypeInt, 1);
        size_t i = 0;
        for (auto &iv: indices) {
            size = GetIR()->CreateMul(size, iv);
            auto ptr = GetIR()->CreateGEP(llvm.TypeConversion(var->GetDataType()),
                                          la,
                                          {llvm::ConstantInt::get(llvm.TypeInt, i)});
            GetIR()->CreateStore(size, ptr);
            i++;
        }

        // Create array dimensions (list of dimensions)
        llvm.SetLocalArrayAllocate(var->GetName(), GetIR(), size, var->GetDataType());
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

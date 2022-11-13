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
    auto i = 0;
    for (auto &init: t.children) {
        auto value = CompileExpression(init);
        llvm.AutoConversion(GetIR(), value, si->fields[i].type);
        instance->SetStructValue(value.value, i, llvm, GetIR());
        i++;
    }
}

void Compiler::TokenStructArray(ParserToken &t) {
    auto var = Reference::Get(t.reference);

    // So fetch the struct info from LLVM and the parser
    auto struct_index = state.GetStructIndex(var->GetStructName());
    auto si = state.GetStruct(struct_index);
    auto llvm_struct = llvm.GetStruct(var->GetStructName());

    if (procedure == nullptr) {
        if (t.scope != Scope::GLOBAL) return;

        // Check indices are integers
        std::vector<unsigned> indices;
        for (auto &s: var->GetIndices()) {
            if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
                // All dimensions need to be literals
                RaiseException("For global record arrays, dimensions need to be literal integers", s);
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

        // Create array
        auto size_v = llvm::ArrayType::get(llvm_struct, size);
        llvm.SetGlobalArray(var->GetName(), typ, init, indices.size(), size_v, Primitive::NONE);
        var->CreateInstance(llvm, GetIR(), Scope::GLOBAL);
    } else {
        if (t.scope != Scope::LOCAL) return;

        std::list<llvm::Value *> indices;
        for (auto &s: var->GetIndices()) {
            auto vt = CompileExpression(s);
            if (vt.type != Primitive::INT) {
                RaiseException("For local record arrays, dimensions need to be integers", s);
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

        // Create array
        llvm.SetLocalArrayAllocate(var->GetName(), GetIR(), size, llvm_struct);
        var->CreateInstance(llvm, GetIR(), Scope::LOCAL);
    }
}
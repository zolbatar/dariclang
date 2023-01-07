#include "Compiler.h"

void Compiler::TokenRead(ParserToken &t) {
    auto signature = TypeSignature::Get(t.signature).get();
    auto call = BuildTypeCall(t);

    if (signature->GetPrimitiveType(call) == Primitive::NONE) {
        auto ct = dynamic_cast<TypePrimitive *>(signature);
        ct->SetPrimitiveType(Primitive::INT);
    } else if (signature->GetPrimitiveType(call) != Primitive::INT) {
        RaiseException("Only integers are supported for DATA statements", t);
    }

    // Create if necessary
    if (!signature->IsCreated()) {
        signature->Create(call);
    }

    // Get value
    ValueType vt;
    auto index = GetIR()->CreateLoad(llvm.TypeInt, llvm.GetGlobal("~DATAPtr"));
    auto data = llvm.GetGlobal("~DATA");
    auto ptr = GetIR()->CreateGEP(data->getValueType(), data, {llvm::ConstantInt::get(llvm.TypeInt, 0), index});
    vt.value = GetIR()->CreateLoad(llvm.TypeInt, ptr);

    // And set variable
    vt.type = Primitive::INT;
    signature->Set(call, vt);

    // Increment pointer
    auto vv = GetIR()->CreateAdd(index, llvm::ConstantInt::get(llvm.TypeInt, 1));
    GetIR()->CreateStore(vv, llvm.GetGlobal("~DATAPtr"));
}

void Compiler::TokenRestore(ParserToken &t) {
    auto ff = state.FindDataLabel(t.literal.sv);
    if (ff == state.DataLabelEnd()) {
        RaiseException("Unable to find DATALABEL '" + t.literal.sv + "'", t);
    }
    auto index = ff->second;
    auto vv = llvm::ConstantInt::get(llvm.TypeInt, index);
    GetIR()->CreateStore(vv, llvm.GetGlobal("~DATAPtr"));
}


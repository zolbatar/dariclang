#include "Compiler.h"

void Compiler::TokenRead(ParserToken &t) {

    // Children are the variables
    for (auto &s: t.children) {
        auto ref = Reference::Get(s.reference);

        // Does it exist?
        if (!ref->InstanceExists()) {
            ref->CreateInstance(llvm, GetFunction(), return_type, GetPreIR(), t.scope, false);
        }
        ref->FindInstance();

        // Get value
        ValueType vt;
        auto index = GetIR()->CreateLoad(llvm.TypeInt, llvm.GetGlobal("~DATAPtr"));
        auto data = llvm.GetGlobal("~DATA");
        auto ptr = GetIR()->CreateGEP(data->getValueType(), data, {llvm::ConstantInt::get(llvm.TypeInt, 0), index});
        vt.value = GetIR()->CreateLoad(llvm.TypeInt, ptr);

        // And set variable
        vt.type = Primitive::INT;
        ref->SetValue(option_base, vt, ProcessIndices(ref, t), llvm, GetIR(), t);

        // Increment pointer
        auto vv = GetIR()->CreateAdd(index, llvm::ConstantInt::get(llvm.TypeInt, 1));
        GetIR()->CreateStore(vv, llvm.GetGlobal("~DATAPtr"));
    }
}

void Compiler::TokenRestore(ParserToken &t) {
    auto ff =state.FindDataLabel(t.literal.sv);
    if (ff == state.DataLabelEnd()) {
        RaiseException("Unable to find DATALABEL '" + t.literal.sv + "'", t);
    }
    auto index = ff->second;
    auto vv = llvm::ConstantInt::get(llvm.TypeInt, index);
    GetIR()->CreateStore(vv, llvm.GetGlobal("~DATAPtr"));
}


#include "Compiler.h"

void Compiler::TokenStruct(ParserToken &t) {
    auto _struct = parser->GetStruct(t.reference);
    if (llvm.CreateStruct(t.identifier, _struct.types) == nullptr)
        RaiseException("Error creating struct", t);
}

void Compiler::TokenStructGlobal(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    // Do we have this struct?
    auto _struct = llvm.GetStruct(ref->GetStructName());
    if (_struct == nullptr)
        RaiseException("Struct '" + ref->GetStructName() + "' not defined", t);
}

void Compiler::TokenStructLocal(ParserToken &t) {

}

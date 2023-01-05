#include "../Parser.h"
#include "../../Types/Type.h"

std::any Parser::visitTypeSignature(DaricParser::TypeSignatureContext *context) {
    return visitChildren(context);
}

std::any Parser::visitTypeSignatureSingle(DaricParser::TypeSignatureSingleContext *context) {
    auto ts = TypeSignature::FindInstance(context);
    if (ts == nullptr) {
        TypePrimitive tp(context, GetScope());
    }
    assert(0);
}

std::any Parser::visitTypeSignatureArray(DaricParser::TypeSignatureArrayContext *context) {
/*    auto sig = TypePrimitiveArray::FindSignature(context);
    if (!sig) {
        size_t num_dimensions = context->expression().size();
        TypePrimitiveArray t(PrimitiveClass::UNKNOWN, num_dimensions);
        sig = TypePrimitiveArray::FindSignature(context);
    }
    return sig;*/
    assert(0);
}

std::any Parser::visitTypeSignatureRecord(DaricParser::TypeSignatureRecordContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureRecordArray(DaricParser::TypeSignatureRecordArrayContext *context) {
    assert(0);
}

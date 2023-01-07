#include "../Parser.h"
#include "../../Types/Type.h"

std::any Parser::visitConst(DaricParser::ConstContext *context) {
    if (current_procedure) {
        RaiseException("CONST not allowed inside procedures", context);
    }
    ParserToken ps = CreateToken(context, ParserTokenType::CONSTANT);
    auto signature =std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature()));
    ps.signature = signature.get()->GetIndex();
    auto literal = std::any_cast<ParserToken>(visit(context->literal()));
    auto ct = dynamic_cast<TypePrimitive *>(signature.get());
    ct->SetPrimitiveType(literal.data_type);
    ct->SetAsConstant();
    ps.literal = literal.literal;
    return ps;
}

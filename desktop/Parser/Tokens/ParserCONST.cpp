#include "../Parser.h"
#include "../../Types/Type.h"

std::any Parser::visitConst(DaricParser::ConstContext *context) {
    if (current_procedure) {
        RaiseException("CONST not allowed inside procedures", context);
    }
    ParserToken ps = CreateToken(context, ParserTokenType::CONSTANT);
    ps.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature())).get()->GetIndex();
    ps.children.push_back(std::any_cast<ParserToken>(visit(context->literal())));
    return ps;
}

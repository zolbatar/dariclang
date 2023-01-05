#include "../Parser.h"
#include "../../Types/Type.h"

std::any Parser::visitAssign(DaricParser::AssignContext *context) {
    ParserToken ps = CreateToken(context, current_procedure ? ParserTokenType::LOCAL : ParserTokenType::GLOBAL);
    ps.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature())).get()->GetIndex();
    ps.children.push_back(std::any_cast<ParserToken>(visit(context->expression())));
    return ps;
}



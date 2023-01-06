#include "../Parser.h"

std::any Parser::visitInput(DaricParser::InputContext *context) {
    auto ps = CreateToken(context, ParserTokenType::INPUT);
    auto signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature())).get();
    ps.signature = signature->GetIndex();
    return ps;
}

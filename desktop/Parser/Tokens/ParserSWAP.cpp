#include "../Parser.h"

std::any Parser::visitSwap(DaricParser::SwapContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::SWAP);
    {
        ParserToken ps = CreateToken(context, ParserTokenType::VARIABLE);
        ps.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature(0))).get()->GetIndex();
        ps.children.push_back(std::move(ps));
    }
    {
        ParserToken ps = CreateToken(context, ParserTokenType::VARIABLE);
        ps.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature(1))).get()->GetIndex();
        ps.children.push_back(std::move(ps));
    }
    return ps;
}

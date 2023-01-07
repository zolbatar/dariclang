#include "../Parser.h"

std::any Parser::visitSwap(DaricParser::SwapContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::SWAP);
    {
        ParserToken psa = CreateToken(context, ParserTokenType::VARIABLE);
        psa.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature(0))).get()->GetIndex();
        ps.children.push_back(std::move(psa));
    }
    {
        ParserToken psa = CreateToken(context, ParserTokenType::VARIABLE);
        psa.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature(1))).get()->GetIndex();
        ps.children.push_back(std::move(psa));
    }
    return ps;
}

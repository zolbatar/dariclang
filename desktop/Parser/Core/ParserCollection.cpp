#include "../Parser.h"

std::any Parser::visitClear(DaricParser::ClearContext *context) {
    auto ps = CreateToken(context, ParserTokenType::CLEAR);
    if (context->expression()) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression()));
        ps.children.push_back(std::move(pse));
    }
    ps.identifier = context->IDENTIFIER()->getText();
    return ps;
}

std::any Parser::visitPop(DaricParser::PopContext *context) {
    auto ps = CreateToken(context, ParserTokenType::POP);
    auto r = std::any_cast<Reference *>(visit(context->variable()));
    ps.reference = r->GetRef();
    ps.identifier = context->IDENTIFIER()->getText();
    return ps;
}

std::any Parser::visitPush(DaricParser::PushContext *context) {
    auto ps = CreateToken(context, ParserTokenType::PUSH);
    auto pse = std::any_cast<ParserToken>(visit(context->expression()));
    ps.children.push_back(std::move(pse));
    ps.identifier = context->IDENTIFIER()->getText();
    return ps;
}

std::any Parser::visitSet(DaricParser::SetContext *context) {
    auto ps = CreateToken(context, ParserTokenType::SET);
    auto pse1 = std::any_cast<ParserToken>(visit(context->expression(0)));
    ps.children.push_back(std::move(pse1));
    auto pse2 = std::any_cast<ParserToken>(visit(context->expression(1)));
    ps.children.push_back(std::move(pse2));
    ps.identifier = context->IDENTIFIER()->getText();
    return ps;
}

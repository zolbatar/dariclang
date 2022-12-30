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
    auto r = std::any_cast<Reference *>(visit(context->variable(1)));
    ps.reference = r->GetRef();

    // To variable
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto r2 = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = r2->GetRef();
    ps.children.push_back(std::move(pse));

    return ps;
}

std::any Parser::visitPush(DaricParser::PushContext *context) {
    auto ps = CreateToken(context, ParserTokenType::PUSH);

    // Source variable
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = rs->GetRef();
    ps.children.push_back(std::move(pse));

    // Destination
    auto r = std::any_cast<Reference *>(visit(context->variable(1)));
    ps.reference = r->GetRef();

    return ps;
}

std::any Parser::visitSet(DaricParser::SetContext *context) {
    auto ps = CreateToken(context, ParserTokenType::SET);
    auto pse1 = std::any_cast<ParserToken>(visit(context->expression(0)));
    ps.children.push_back(std::move(pse1));
    auto pse2 = std::any_cast<ParserToken>(visit(context->expression(1)));
    ps.children.push_back(std::move(pse2));
    return ps;
}

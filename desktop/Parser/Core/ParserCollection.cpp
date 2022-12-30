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
    if (!r->GetIndices().empty())
        RaiseException("Indices not allowed with POP", context);
    ps.reference = r->GetRef();

    // To variable
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto r2 = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = r2->GetRef();
    ps.children.push_back(std::move(pse));

    return ps;
}

std::any Parser::visitPush(DaricParser::PushContext *context) {
    // Source variable
    auto ps = CreateToken(context, ParserTokenType::PUSH);
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = rs->GetRef();
    ps.children.push_back(std::move(pse));

    // Destination
    auto r = std::any_cast<Reference *>(visit(context->variable(1)));
    if (!r->GetIndices().empty())
        RaiseException("Indices not allowed with PUSH", context);
    ps.reference = r->GetRef();

    return ps;
}

std::any Parser::visitSet(DaricParser::SetContext *context) {
    // Source variable
    auto ps = CreateToken(context, ParserTokenType::PLACE);
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = rs->GetRef();
    ps.children.push_back(std::move(pse));

    // Destination
    auto r = std::any_cast<Reference *>(visit(context->variable(1)));
    if (r->GetIndices().size() != 1)
        RaiseException("PLACE needs a single index", context);
    ps.reference = r->GetRef();

    return ps;
}

std::any Parser::visitGet(DaricParser::GetContext *context) {
    // Destination variable
    auto ps = CreateToken(context, ParserTokenType::FETCH);
    auto pse = CreateToken(context, ParserTokenType::VARIABLE);
    auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
    pse.reference = rs->GetRef();
    ps.children.push_back(std::move(pse));

    // Source
    auto r = std::any_cast<Reference *>(visit(context->variable(1)));
    if (r->GetIndices().size() != 1)
        RaiseException("PLACE needs a single index", context);
    ps.reference = r->GetRef();

    return ps;
}


std::any Parser::visitCassign(DaricParser::CassignContext *context) {
}


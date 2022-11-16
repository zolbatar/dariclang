#include "../Parser.h"

std::any Parser::visitCase(DaricParser::CaseContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::CASE);

    // Save expression
    auto from = std::any_cast<ParserToken>(visit(context->expression()));
    ps.children.push_back(from);

    // Now do all WHENs
    for (auto i = 0; i < context->when().size(); i++) {
        auto when = std::any_cast<ParserToken>(visit(context->when(i)));
        ps.children.push_back(when);
    }

    // Otherwise?
    if (context->OTHERWISE()) {
        ParserToken ps_cond = CreateToken(context, ParserTokenType::OTHERWISE);
        auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
        std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
        ps.children.push_back(std::move(ps_cond));
    }

    return ps;
}

std::any Parser::visitWhen(DaricParser::WhenContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::WHEN);

    // Statements
    ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
    auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
    std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
    ps.children.push_back(std::move(ps_cond));

    // And expressions to match
    for (auto i = 0; i < context->expression().size(); i++) {
        auto when = std::any_cast<ParserToken>(visit(context->expression(i)));
        ps.children.push_back(when);
    }

    return ps;
}


#include "../Parser.h"

std::any Parser::visitRepeat(DaricParser::RepeatContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::REPEAT);

    // Condition
    {
        auto pse = std::any_cast<ParserToken>(visit(context->expression()));
        ps.children.push_back(std::move(pse));
    }

    // Statements
    {
        ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
        auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
        std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
        ps.children.push_back(std::move(ps_cond));
    }

    return ps;
}

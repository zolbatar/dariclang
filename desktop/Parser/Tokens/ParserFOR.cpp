#include "../Parser.h"

std::any Parser::visitFor(DaricParser::ForContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::FOR);

    // Statements
    {
        ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
        auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
        std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
        ps.children.push_back(std::move(ps_cond));
    }

    // From, to and step values (where exists)
    auto from = std::any_cast<ParserToken>(visit(context->expression(0)));
    ps.children.push_back(from);
    auto to = std::any_cast<ParserToken>(visit(context->expression(1)));
    ps.children.push_back(to);
    if (context->expression().size() == 3) {
        auto step = std::any_cast<ParserToken>(visit(context->expression(2)));
        ps.children.push_back(step);
    }

    // Find the loop variable
    auto signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature())).get();
    ps.signature = signature->GetIndex();

    return ps;
}


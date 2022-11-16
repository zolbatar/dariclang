#include "../Parser.h"

std::any Parser::visitStatements(DaricParser::StatementsContext *context) {
    auto this_statements = std::vector<ParserToken>();
    for (int i = 0; i < context->statement().size(); i++) {
        auto ps = std::any_cast<ParserToken>(visit(context->statement(i)));
        if (ps.type != ParserTokenType::COMMENT)
            this_statements.push_back(std::move(ps));
    }
    return this_statements;
}

std::any Parser::visitStatementsl(DaricParser::StatementslContext *context) {
    auto this_statements = std::vector<ParserToken>();
    for (int i = 0; i < context->statement().size(); i++) {
        auto ps = std::any_cast<ParserToken>(visit(context->statement(i)));
        if (ps.type != ParserTokenType::COMMENT)
            this_statements.push_back(std::move(ps));
    }
    return this_statements;
}

std::any Parser::visitStatement(DaricParser::StatementContext *context) {
    if (context->COMMENT()) {
        ParserToken comment = CreateToken(context);
        comment.type = ParserTokenType::COMMENT;
        return comment;
    }
    if (context->call()) {
        return std::any_cast<ParserToken>(visit(context->call()));
    }
    if (context->end()) {
        return std::any_cast<ParserToken>(visit(context->end()));
    }
    if (context->assign()) {
        return std::any_cast<ParserToken>(visit(context->assign()));
    }
    if (context->if_()) {
        return std::any_cast<ParserToken>(visit(context->if_()));
    }
    if (context->ifml()) {
        return std::any_cast<ParserToken>(visit(context->ifml()));
    }
    if (context->module()) {
        return std::any_cast<ParserToken>(visit(context->module()));
    }
    if (context->print()) {
        return std::any_cast<ParserToken>(visit(context->print()));
    }
    if (context->procedure()) {
        return std::any_cast<ParserToken>(visit(context->procedure()));
    }
    if (context->return_()) {
        return std::any_cast<ParserToken>(visit(context->return_()));
    }
    if (context->const_()) {
        return std::any_cast<ParserToken>(visit(context->const_()));
    }
    if (context->swap()) {
        return std::any_cast<ParserToken>(visit(context->swap()));
    }
    if (context->dim()) {
        return std::any_cast<ParserToken>(visit(context->dim()));
    }
    if (context->struct_()) {
        return std::any_cast<ParserToken>(visit(context->struct_()));
    }
    if (context->structInstance()) {
        return std::any_cast<ParserToken>(visit(context->structInstance()));
    }
    if (context->structDim()) {
        return std::any_cast<ParserToken>(visit(context->structDim()));
    }
    if (context->repeat()) {
        return std::any_cast<ParserToken>(visit(context->repeat()));
    }
    if (context->while_()) {
        return std::any_cast<ParserToken>(visit(context->while_()));
    }
    if (context->while_()) {
        return std::any_cast<ParserToken>(visit(context->while_()));
    }
    if (context->for_()) {
        return std::any_cast<ParserToken>(visit(context->for_()));
    }
    if (context->case_()) {
        return std::any_cast<ParserToken>(visit(context->case_()));
    }
    assert(0);
    return NULL;
}


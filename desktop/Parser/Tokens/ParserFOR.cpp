#include "../Parser.h"

std::any Parser::visitFor(DaricParser::ForContext *context) {

    // From, to and step values (where exists)
    auto from = std::any_cast<ParserToken>(visit(context->expression(0)));
    auto to = std::any_cast<ParserToken>(visit(context->expression(1)));
    bool has_step = context->expression().size() == 3;
    ParserToken step;
    if (has_step)
        step = std::any_cast<ParserToken>(visit(context->expression(2)));

    int a = 1;
}

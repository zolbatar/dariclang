#include "../Parser.h"

std::any Parser::visitConst(DaricParser::ConstContext *context) {
    Primitive assignment_type;
    if (context->type()) {
        assignment_type = std::any_cast<Primitive>(visit(context->type()));
    } else {
        assignment_type = Primitive::INT;
    }
    if (current_procedure) {
        RaiseException("CONST not allowed inside procedures", context);
    }
    ParserToken ps = CreateToken(context, ParserTokenType::CONSTANT);
    for (int i = 0; i < context->IDENTIFIER().size(); i++) {
        auto assign = std::any_cast<ParserToken>(visit(context->literal(i)));
        ps.identifier = context->IDENTIFIER(i)->getText();
        ps.children.push_back(std::move(assign));
    }
    return ps;
}

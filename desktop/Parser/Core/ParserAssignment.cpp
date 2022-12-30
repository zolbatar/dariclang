#include "../Parser.h"

//static Primitive assignment_type;

std::any Parser::visitAssign(DaricParser::AssignContext *context) {
    Primitive assignment_type = Primitive::NONE;
    if (context->type()) {
        assignment_type = std::any_cast<Primitive>(visit(context->type()));
    }

    // Assignment
    ParserToken psc = CreateToken(context);
    psc.type = ParserTokenType::ASSIGNMENT;
    auto r = std::any_cast<Reference *>(visit(context->variable()));
    psc.reference = r->GetRef();
    r->SetDataType(assignment_type);
    // Do we have an expression (i.e. initial value?)
    if (context->expression()) {
        auto exp = std::any_cast<ParserToken>(visit(context->expression()));
        psc.children.push_back(exp);
    }

    if (!current_procedure) {
        ParserToken ps = CreateToken(context, ParserTokenType::GLOBAL);
        ps.children.push_back(std::move(psc));
        return ps;
    } else {
        ParserToken ps = CreateToken(context, ParserTokenType::LOCAL);
        ps.children.push_back(std::move(psc));
        return ps;
    }
}



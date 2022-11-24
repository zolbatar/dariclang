#include "../Parser.h"

std::any Parser::visitProcedure(DaricParser::ProcedureContext *context) {
    auto name = context->IDENTIFIER()->getText();
    procedures.insert(std::make_pair(name, Procedure(name)));
    current_procedure = &procedures.find(name)->second;
    ParserToken ps = CreateToken(context);
    ps.identifier = name;
    ps.type = ParserTokenType::PROCEDURE;
    if (!context->type()) {
        ps.data_type = Primitive::NONE;
    } else {
        ps.data_type = std::any_cast<Primitive>(visit(context->type()));
    }

    // Parameters
    for (auto i = 0; i < context->parameter().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->parameter(i)));
        ps.children.push_back(std::move(psp));
    }

    // Code
    auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
    std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps.children));
    current_procedure = nullptr;
    return ps;
}

std::any Parser::visitParameter(DaricParser::ParameterContext *context) {
    ParserToken ps = CreateToken(context);
	auto r = Reference::Create(state, context->IDENTIFIER()->getText());
	ps.reference = r->GetRef();
    if (context->REF()) {
        ps.type = ParserTokenType::PARAMETER_REF;
    } else {
        ps.type = ParserTokenType::PARAMETER;
    }
    if (context->type()) {
		r->SetDataType(std::any_cast<Primitive>(visit(context->type())));
    } else {
        r->SetDataType(Primitive::INT);
    }
    return ps;
}

std::any Parser::visitCall(DaricParser::CallContext *context) {
    auto name = context->IDENTIFIER()->getText();
    ParserToken ps = CreateToken(context);
    ps.identifier = name;
    ps.type = ParserTokenType::CALL;

    // Parameters
    for (auto i = 0; i < context->expression().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
        ps.children.push_back(std::move(psp));
    }

    return ps;
}

std::any Parser::visitReturn(DaricParser::ReturnContext *context) {
    if (!current_procedure) {
        RaiseException("RETURN only valid inside a procedure", context);
    }
    ParserToken ps = CreateToken(context);
    ps.type = ParserTokenType::RETURN;
    if (context->expression()) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression()));
        ps.children.push_back(std::move(pse));
    }
    return ps;
}

#include "../Parser.h"

std::any Parser::visitProcedure(DaricParser::ProcedureContext *context) {
    auto name = context->IDENTIFIER()->getText();
    procedures.insert(std::make_pair(name, Procedure(name)));
    current_procedure = &procedures.find(name)->second;
    ParserToken ps = CreateToken(context, ParserTokenType::PROCEDURE);
    ps.identifier = name;
    if (!context->type()) {
        ps.data_type = Primitive::NONE;
    } else {
        ps.data_type = std::any_cast<Primitive>(visit(context->type()));
    }

    // Parameters
    ParserToken ps_pars = CreateToken(context, ParserTokenType::NONE);
    for (size_t i = 0; i < context->parameter().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->parameter(i)));
        ps_pars.children.push_back(std::move(psp));
    }
    ps.children.push_back(std::move(ps_pars));

    // Code
    ParserToken ps_code = CreateToken(context, ParserTokenType::NONE);
    ps_code.children = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
    ps.children.push_back(std::move(ps_code));
    TypeSignature::ClearLocals();
    current_procedure = nullptr;
    return ps;
}

std::any Parser::visitParameter(DaricParser::ParameterContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::PARAMETER);

    // Get type
    Primitive typ = Primitive::NONE;
    if (context->type()) {
        typ = std::any_cast<Primitive>(visit(context->type()));
    } else if (!context->type() && context->IDENTIFIER().size() == 1) {
        // Default type
        typ = Primitive::INT;
    } else {
        assert(0);
    }

    ps.signature = TypePrimitive::Create(state, Scope::LOCAL, context->IDENTIFIER(0)->getText(), typ)->GetIndex();
    return ps;
}

std::any Parser::visitCall(DaricParser::CallContext *context) {
    auto name = context->IDENTIFIER()->getText();
    ParserToken ps = CreateToken(context);
    ps.identifier = name;
    ps.type = ParserTokenType::CALL;

    // Parameters
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
        ps.children.push_back(std::move(psp));
    }

    return ps;
}

std::any Parser::visitReturn(DaricParser::ReturnContext *context) {
    if (!current_procedure) {
        RaiseException("RETURN only valid inside a procedure", context, GetFilename());
    }
    ParserToken ps = CreateToken(context);
    ps.type = ParserTokenType::RETURN;
    if (context->expression()) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression()));
        ps.children.push_back(std::move(pse));
    }
    return ps;
}

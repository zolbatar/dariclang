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
    current_procedure = nullptr;
    return ps;
}

std::any Parser::visitParameter(DaricParser::ParameterContext *context) {
    ParserToken ps = CreateToken(context);
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());
    ps.reference = r->GetRef();
    ps.type = ParserTokenType::PARAMETER;
    if (context->SOPEN() && !context->REF()) {
        RaiseException("Arrays parameters need to be marked ByRef", context);
    }

    if (context->type()) {
        // Type defined
        r->SetDataType(std::any_cast<Primitive>(visit(context->type())));

        // Array of this type
        if (context->SOPEN()) {
            ps.type = ParserTokenType::PARAMETER_ARRAY;
            r->SetAsArray();
        }
    } else if (!context->type() && context->IDENTIFIER().size() == 1) {
        // Default type
        r->SetDataType(Primitive::INT);

        // Trying to do array?
        if (context->SOPEN()) {
            RaiseException("Need to define type for arrays", context);
        }

    } else {
        if (!context->REF())
            RaiseException("Record parameters need to be marked ByRef", context);
        r->SetStructName(context->IDENTIFIER(1)->getText());
        ps.type = ParserTokenType::PARAMETER_REF;
        r->SetAsStruct();
    }
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

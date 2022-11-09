#include "../Parser.h"

std::any Parser::visitProcedure(DaricParser::ProcedureContext *context) {
	auto name = context->IDENTIFIER()->getText();
	procedures.insert(std::make_pair(name, Procedure(name)));
	current_procedure = &procedures.find(name)->second;
	ParserToken ps = CreateToken(context);
	ps.identifier = name;
	ps.type = ParserTokenType::PROCEDURE;
	if (!context->type()) {
		ps.data_type = Type::None();
	}
	else {
		ps.data_type = std::any_cast<Type>(visit(context->type()));
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
	ps.type = ParserTokenType::PARAMETER;
	ps.identifier = context->IDENTIFIER()->getText();
	if (context->type()) {
		ps.data_type = std::any_cast<Type>(visit(context->type()));
	} else {
		ps.data_type = Type::Int();
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

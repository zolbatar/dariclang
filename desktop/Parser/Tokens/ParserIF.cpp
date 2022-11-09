#include "../Parser.h"

std::any Parser::visitIf(DaricParser::IfContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::IF);

	// Condition
	{
		auto pse = std::any_cast<ParserToken>(visit(context->expression()));
		ps.children.push_back(std::move(pse));
	}

	// Then
	{
		ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
		auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statementsl(0)));
		std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
		ps.children.push_back(std::move(ps_cond));
	}

	// Else?
	if (context->statementsl().size() == 2) {
		ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
		auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statementsl(1)));
		std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
		ps.children.push_back(std::move(ps_cond));
	}

	return ps;
}

std::any Parser::visitIfml(DaricParser::IfmlContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::IF);

	// Condition
	{
		ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
		ps_cond.children.push_back(std::any_cast<ParserToken>(visit(context->expression())));
		ps.children.push_back(std::move(ps_cond));
	}

	// Then
	{
		ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
		auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements(0)));
		std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
		ps.children.push_back(std::move(ps_cond));
	}

	// Else?
	if (context->statements().size() == 2) {
		ParserToken ps_cond = CreateToken(context, ParserTokenType::BRANCH);
		auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements(1)));
		std::move(this_statements.begin(), this_statements.end(), std::back_inserter(ps_cond.children));
		ps.children.push_back(std::move(ps_cond));
	}

	return ps;
}

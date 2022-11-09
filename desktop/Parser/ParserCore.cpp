#include <iostream>
#include "Parser.h"

std::any Parser::visitProgram(DaricParser::ProgramContext *context) {
	auto this_statements = std::any_cast<std::vector<ParserToken>>(visit(context->statements()));
	std::move(this_statements.begin(), this_statements.end(), std::back_inserter(statements));
	return NULL;
}

std::any Parser::visitSeparator(DaricParser::SeparatorContext *context) {
	return NULL;
}

std::any Parser::visitEnd(DaricParser::EndContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::END);
	return ps;
}


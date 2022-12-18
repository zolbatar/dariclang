#include <iostream>
#include "../Library/StringLib.h"
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

std::any Parser::visitOption(DaricParser::OptionContext *context) {
	auto p1 = std::string(context->IDENTIFIER(0)->getText());
	toupper(p1);

	if (p1 == "BASE" || p1 == "Base") {
		ParserToken ps = CreateToken(context, ParserTokenType::OPTIONBASE);
		ps.iv = std::any_cast<ParserToken>(visit(context->integerLiteral())).iv;
		if (ps.iv != 0 && ps.iv != 1) {
			RaiseException("Unknown OPTION BASE value", context);
		}
		return ps;
	} else {
		RaiseException("Unknown OPTION", context);
	}
    return nullptr;
}


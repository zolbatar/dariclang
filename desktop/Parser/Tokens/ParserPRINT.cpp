#include "../Parser.h"

std::any Parser::visitPrint(DaricParser::PrintContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::PRINT);
	if (context->format) {
		ps.type = ParserTokenType::PRINTFORMAT;
		auto pse = std::any_cast<ParserToken>(visit(context->format));
		ps.children.push_back(std::move(pse));
	}
	if (context->value) {
		auto pse = std::any_cast<ParserToken>(visit(context->value));
		ps.children.push_back(std::move(pse));
		if (!context->SEMICOLON()) {
			ps.children.emplace_back(CreateToken(context, ParserTokenType::NEWLINE));
		}
	}
	return ps;
}


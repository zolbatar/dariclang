#include "../Parser.h"

std::any Parser::visitModule(DaricParser::ModuleContext *context) {
	this->module = context->IDENTIFIER()->getText();
	ParserToken ps = CreateToken(context, ParserTokenType::MODULE);
	ps.identifier = context->IDENTIFIER()->getText();
	return ps;
}


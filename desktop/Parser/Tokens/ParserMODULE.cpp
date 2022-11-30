#include "../Parser.h"

std::any Parser::visitImportlib(DaricParser::ImportlibContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::IMPORT);
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));
	ps.identifier = value.identifier;
	return ps;
}


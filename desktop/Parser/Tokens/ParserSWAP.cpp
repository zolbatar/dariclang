#include "../Parser.h"

std::any Parser::visitSwap(DaricParser::SwapContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::SWAP);
	{
		ParserToken psc = CreateToken(context, ParserTokenType::VARIABLE);
		auto r = std::any_cast<Reference *>(visit(context->variable(0)));
		psc.reference = r->GetRef();
		ps.children.push_back(std::move(psc));
	}
	{
		ParserToken psc = CreateToken(context, ParserTokenType::VARIABLE);
		auto r = std::any_cast<Reference *>(visit(context->variable(1)));
		psc.reference = r->GetRef();
		ps.children.push_back(std::move(psc));
	}
	return ps;
}

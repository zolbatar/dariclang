#include "../Parser.h"

std::any Parser::visitClear(DaricParser::ClearContext *context) {
	auto ps = CreateToken(context, ParserTokenType::CLEAR);
	auto r = std::any_cast<Reference *>(visit(context->variable()));
	ps.reference = r->GetRef();
	return ps;
}

std::any Parser::visitSet(DaricParser::SetContext *context) {
	auto ps = CreateToken(context, ParserTokenType::PLACE);
	auto pse = CreateToken(context, ParserTokenType::VARIABLE);
	auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
	pse.reference = rs->GetRef();
	ps.children.push_back(std::move(pse));
	auto r = std::any_cast<Reference *>(visit(context->variable(1)));
	ps.reference = r->GetRef();
	return ps;
}

std::any Parser::visitGet(DaricParser::GetContext *context) {
	auto ps = CreateToken(context, ParserTokenType::FETCH);
	auto pse = CreateToken(context, ParserTokenType::VARIABLE);
	auto rs = std::any_cast<Reference *>(visit(context->variable(0)));
	pse.reference = rs->GetRef();
	ps.children.push_back(std::move(pse));
	auto r = std::any_cast<Reference *>(visit(context->variable(1)));
	ps.reference = r->GetRef();
	return ps;
}

std::any Parser::visitCassign(DaricParser::CassignContext *context) {
}


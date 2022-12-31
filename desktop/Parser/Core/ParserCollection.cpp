#include "../Parser.h"

std::any Parser::visitClear(DaricParser::ClearContext *context) {
	auto ps = CreateToken(context, ParserTokenType::CLEAR);
	auto r = std::any_cast<Reference *>(visit(context->variable()));
	ps.reference = r->GetRef();
	return ps;
}

std::any Parser::visitSet(DaricParser::SetContext *context) {
	auto ps = CreateToken(context, ParserTokenType::PLACE);
	auto r = std::any_cast<Reference *>(visit(context->coll));
	ps.reference = r->GetRef();

	// Collection
	if (context->in) {
		auto pse = CreateToken(context, ParserTokenType::VARIABLE);
		auto rs = std::any_cast<Reference *>(visit(context->in));
		pse.reference = rs->GetRef();
		ps.children.push_back(std::move(pse));
	} else {
		auto pse = std::any_cast<ParserToken>(visit(context->expression()));
		ps.children.push_back(std::move(pse));
	}
	return ps;
}

std::any Parser::visitGet(DaricParser::GetContext *context) {
	// Collection
	auto ps = CreateToken(context, ParserTokenType::FETCH);
	auto r = std::any_cast<Reference *>(visit(context->coll));
	ps.reference = r->GetRef();

	// Variable out
	auto pse = CreateToken(context, ParserTokenType::VARIABLE);
	auto rs = std::any_cast<Reference *>(visit(context->in));
	pse.reference = rs->GetRef();
	ps.children.push_back(std::move(pse));
	return ps;
}

std::any Parser::visitCassign(DaricParser::CassignContext *context) {
}


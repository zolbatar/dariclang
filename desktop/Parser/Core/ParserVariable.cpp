#include "../Parser.h"

std::any Parser::visitVariable(DaricParser::VariableContext *context) {
	auto r = Reference::Create(context->IDENTIFIER()->getText());

	// Array?
	if (context->SOPEN()) {
		r->SetAsArray(context->expression().size());
		for (auto i = 0; i < context->expression().size(); i++) {
			r->AddIndexRef(std::any_cast<ParserToken>(visit(context->expression(i))));
		}
	}

	return r;
}

#include "../Parser.h"

std::any Parser::visitDim(DaricParser::DimContext *context) {
	ParserToken ps = CreateToken(context, current_procedure ? ParserTokenType::DIM_LOCAL : ParserTokenType::DIM_GLOBAL);
	auto r = Reference::Create(state, context->IDENTIFIER()->getText());
	r->SetDataType(std::any_cast<Primitive>(visit(context->type())));

	r->SetAsArray(context->expression().size());
	for (auto i = 0; i < context->expression().size(); i++) {
		auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
		r->GetIndices().push_back(std::move(pse));
	}

	ps.reference = r->GetRef();
	return ps;
}

#include "../Parser.h"

std::any Parser::visitDim(DaricParser::DimContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::DIM);
	ps.signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignatureArrayOrCollection())).get()->GetIndex();
	return ps;
}

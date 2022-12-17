#include "../Parser.h"

std::any Parser::visitInput(DaricParser::InputContext *context) {
    auto ps = CreateToken(context, ParserTokenType::INPUT);
    auto r = std::any_cast<Reference *>(visit(context->variable()));
    r->SetDataType(Primitive::STRING);
    ps.reference = r->GetRef();
    return ps;
}

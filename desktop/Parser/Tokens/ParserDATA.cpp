#include "../Parser.h"

std::any Parser::visitData(DaricParser::DataContext *context) {
    for (size_t i = 0; i < context->integerLiteral().size(); i++) {
        auto value = std::any_cast<ParserToken>(visit(context->integerLiteral(i)));
        state.AddDataValue(value.literal.iv);
    }
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitDataLabel(DaricParser::DataLabelContext *context) {
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));
    state.AddDataLabel(value.literal.sv);
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitRestore(DaricParser::RestoreContext *context) {
    auto ps = CreateToken(context, ParserTokenType::RESTORE);
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));
    ps.literal.sv = value.literal.sv;
    return ps;
}

std::any Parser::visitRead(DaricParser::ReadContext *context) {
    auto ps = CreateToken(context, ParserTokenType::READ);
    auto signature = std::any_cast<std::shared_ptr<TypeSignature>>(visit(context->typeSignature())).get();
    ps.signature = signature->GetIndex();
    return ps;
}

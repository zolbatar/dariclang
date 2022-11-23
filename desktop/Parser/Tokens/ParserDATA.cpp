#include "../Parser.h"

std::any Parser::visitData(DaricParser::DataContext *context) {
    for (auto i = 0; i < context->integerLiteral().size(); i++) {
        auto value = std::any_cast<ParserToken>(visit(context->integerLiteral(i)));
        state.data.push_back(value.iv);
    }
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitDataLabel(DaricParser::DataLabelContext *context) {
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));
    state.data_labels.insert(std::make_pair(value.sv, state.data.size()));
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitRestore(DaricParser::RestoreContext *context) {
    auto ps = CreateToken(context, ParserTokenType::RESTORE);
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));
    ps.sv = value.sv;
    return ps;
}

std::any Parser::visitRead(DaricParser::ReadContext *context) {
    auto ps = CreateToken(context, ParserTokenType::READ);
    for (auto i = 0; i < context->variable().size(); i++) {
        auto psc = CreateToken(context, ParserTokenType::READ);
        auto r = std::any_cast<Reference *>(visit(context->variable(i)));
        r->SetDataType(Primitive::INT);
        psc.reference = r->GetRef();
        ps.children.push_back(psc);
    }
    return ps;
}

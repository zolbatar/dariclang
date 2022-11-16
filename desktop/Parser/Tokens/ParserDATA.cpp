#include "../Parser.h"

std::any Parser::visitData(DaricParser::DataContext *context) {
    for (auto i = 0; i < context->INTEGERLITERAL().size(); i++) {
        auto value = std::any_cast<ParserToken>(visit(context->INTEGERLITERAL(i)));
        state.data.push_back(value.iv);
    }
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitDataLabel(DaricParser::DataLabelContext *context) {
    auto name = context->STRINGLITERAL()->getText();
    state.data_labels.insert(std::make_pair(name, state.data.size()));
    return CreateToken(context, ParserTokenType::NONE);
}

std::any Parser::visitRestore(DaricParser::RestoreContext *context) {
    auto ps = CreateToken(context, ParserTokenType::RESTORE);
    ps.identifier = context->STRINGLITERAL()->getText();
    return ps;
}

std::any Parser::visitRead(DaricParser::ReadContext *context) {
    auto ps = CreateToken(context, ParserTokenType::READ);
    for (auto i = 0; i < context->variable().size(); i++) {
        auto psc = CreateToken(context, ParserTokenType::READ);
        auto r = std::any_cast<Reference *>(visit(context->variable(i)));
        psc.reference = r->GetRef();
        ps.children.push_back(psc);
    }
    return ps;
}

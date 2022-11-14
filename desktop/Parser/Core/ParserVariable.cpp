#include <numeric>
#include "../Parser.h"

std::string join(std::vector<std::string> const &strings, std::string delim) {
    if (strings.empty()) {
        return std::string();
    }

    return std::accumulate(strings.begin() + 1, strings.end(), strings[0],
                           [&delim](std::string x, std::string y) {
                               return x + delim + y;
                           }
    );
}
std::any Parser::visitVariable(DaricParser::VariableContext *context) {
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());

    // Array?
    if (context->SOPEN()) {
        r->SetAsArray();
        for (auto i = 0; i < context->expression().size(); i++) {
            r->AddIndexRef(std::any_cast<ParserToken>(visit(context->expression(i))));
        }
    }

    // Dot strings, i.e. a struct?
    if (context->IDENTIFIER().size() > 1) {
        if (r->GetInstanceType() == InstanceType::ARRAY) {
            r->SetAsStructArray();
        } else {
            r->SetAsStruct();
        }
        std::vector<std::string> fields;
        for (auto i = 1; i < context->IDENTIFIER().size(); i++) {
            fields.push_back(context->IDENTIFIER(i)->getText());
        }
        auto ff = join(fields, ".");
        r->SetFields(ff);
    }

    return r;
}

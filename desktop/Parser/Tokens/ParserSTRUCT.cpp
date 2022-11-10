#include "../Parser.h"

std::any Parser::visitStruct(DaricParser::StructContext *context) {
    if (this->current_procedure != nullptr) {
        RaiseException("Structs can only be defined outside of a procedure", context);
    }

    ParserToken ps = CreateToken(context, ParserTokenType::STRUCT);
    ps.identifier = context->IDENTIFIER(0)->getText();

    if (struct_indexes.contains(ps.identifier)) {
        RaiseException("Struct '' already defined", context);
    }

    // Build members
    StructInfo ti;
    std::vector<llvm::Type *> members;
    for (int i = 1; i < context->IDENTIFIER().size(); i++) {
        ti.fields.push_back(context->IDENTIFIER(i)->getText());
        ti.types.push_back(std::any_cast<Primitive>(visit(context->type(i - 1))));
    }

    // Add to token
    structs.push_back(std::move(ti));
    ps.reference = index_ptr++;
    struct_indexes.insert(std::make_pair(ps.identifier, ps.reference));

    return ps;
}

std::any Parser::visitStructinstance(DaricParser::StructinstanceContext *context) {
    ParserToken ps = CreateToken(context, current_procedure
                                          ? ParserTokenType::STRUCT_INSTANCE_LOCAL
                                          : ParserTokenType::STRUCT_INSTANCE_GLOBAL);
    auto r = Reference::Create(context->IDENTIFIER(0)->getText());
    ps.reference = r->GetRef();
    r->SetStructName(context->IDENTIFIER(1)->getText());

    // Parameters
    for (auto i = 0; i < context->expression().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
        ps.children.push_back(std::move(psp));
    }

    return ps;
}


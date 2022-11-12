#include "../Parser.h"

struct StructField {
    std::string name;
    TypeOrStruct type;
};

std::any Parser::visitStruct(DaricParser::StructContext *context) {
    if (this->current_procedure != nullptr) {
        RaiseException("Structs can only be defined outside of a procedure", context);
    }

    ParserToken ps = CreateToken(context, ParserTokenType::STRUCT);
    ps.identifier = context->IDENTIFIER(0)->getText();

    if (state.StructExists(ps.identifier)) {
        RaiseException("Struct '' already defined", context);
    }

    // Build members
    std::vector<StructField> fields;
    for (int i = 1; i < context->IDENTIFIER().size(); i++) {
        StructField sf{
                .name = context->IDENTIFIER(i)->getText(),
                .type =std::any_cast<TypeOrStruct>(visit(context->typeOrStruct(i - 1)))
        };
        fields.push_back(std::move(sf));
    }

    // Now iteratively build up the actual field list
    StructInfo ti;
    for (auto f = fields.begin(); f != fields.end(); f++) {
        if (!f->type.is_struct) {
            StructMember sm;
            sm.type = f->type.type;
            sm.name = f->name;
            ti.fields.push_back(std::move(sm));
        } else {
            // Get child struct
            auto f2 = state.struct_indexes.find(f->type.name);
            if (f2 == state.struct_indexes.end())
                RaiseException("Struct '" + f->type.name + "' not found", context);
            auto child_struct = &state.structs[f2->second].fields;

            // Add child fields
            for (auto f3 = child_struct->begin(); f3 != child_struct->end(); f3++) {
                StructMember sm;
                sm.type = f3->type;
                sm.name = f->name + "." + f3->name;
                ti.fields.push_back(std::move(sm));
            }
        }
    }

    // Add to token
    state.structs.push_back(std::move(ti));
    ps.reference = state.index_ptr++;
    state.struct_indexes.insert(std::make_pair(ps.identifier, ps.reference));

    return ps;
}

std::any Parser::visitStructDim(DaricParser::StructDimContext *context) {
    ParserToken ps = CreateToken(context, current_procedure
                                          ? ParserTokenType::STRUCT_DIM_LOCAL
                                          : ParserTokenType::STRUCT_DIM_GLOBAL);
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());
    r->SetInstanceType(InstanceType::STRUCT_ARRAY);
    ps.reference = r->GetRef();
    r->SetStructName(context->IDENTIFIER(1)->getText());

    // Dimensions
    for (auto i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        r->GetIndices().push_back(std::move(pse));
    }
    return ps;
}

std::any Parser::visitStructInstance(DaricParser::StructInstanceContext *context) {
    ParserToken ps = CreateToken(context, current_procedure
                                          ? ParserTokenType::STRUCT_INSTANCE_LOCAL
                                          : ParserTokenType::STRUCT_INSTANCE_GLOBAL);
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());
    r->SetInstanceType(InstanceType::STRUCT);
    ps.reference = r->GetRef();
    r->SetStructName(context->IDENTIFIER(1)->getText());

    // Parameters
    for (auto i = 0; i < context->expression().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
        ps.children.push_back(std::move(psp));
    }

    return ps;
}


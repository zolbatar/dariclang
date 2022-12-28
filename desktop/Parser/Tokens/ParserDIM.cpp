#include "../Parser.h"

std::any Parser::visitDim(DaricParser::DimContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::DIM);
    auto r = Reference::Create(state, context->IDENTIFIER()->getText());

    if (context->type()) {
        r->SetDataType(std::any_cast<Primitive>(visit(context->type())));
        r->SetAsArray();
        for (size_t i = 0; i < context->expression().size(); i++) {
            auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
            r->GetIndices().push_back(std::move(pse));
        }
    } else if (context->LIST()) {
        auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
        r->SetAsList();
        if (!t.is_struct)
            r->SetDataType(t.type);
        else {
            r->SetAsStruct();
            r->SetStructName(t.name);
        }
    } else if (context->VECTOR()) {
        auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
        r->SetAsVector();
        if (!t.is_struct)
            r->SetDataType(t.type);
        else {
            r->SetAsStruct();
            r->SetStructName(t.name);
        }
    } else if (context->SET()) {
        r->SetAsSet();
        if (context->BYTE())
            r->SetDataType(Primitive::BYTE);
        else if (context->INT())
            r->SetDataType(Primitive::INT);
        else if (context->STRING())
            r->SetDataType(Primitive::STRING);
        else if (context->FLOAT())
            r->SetDataType(Primitive::FLOAT);
    } else if (context->MAP()) {
        r->SetAsMap();
        if (context->BYTE())
            r->SetDataType(Primitive::BYTE);
        else if (context->INT())
            r->SetDataType(Primitive::INT);
        else if (context->STRING())
            r->SetDataType(Primitive::STRING);
        else if (context->FLOAT())
            r->SetDataType(Primitive::FLOAT);
        auto pss = CreateToken(context, ParserTokenType::NONE);
        auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
        if (t.is_struct) {
            pss.type = ParserTokenType::STRUCT;
            pss.identifier = t.name;
        } else {
            pss.data_type = t.type;
        }
        pss.identifier = context->IDENTIFIER()->getText();
        ps.children.push_back(pss);
    } else if (context->QUEUE()) {
        auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
        r->SetAsQueue();
        if (!t.is_struct)
            r->SetDataType(t.type);
        else {
            r->SetAsStruct();
            r->SetStructName(t.name);
        }
    } else if (context->STACK()) {
        auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
        r->SetAsStack();
        if (!t.is_struct)
            r->SetDataType(t.type);
        else {
            r->SetAsStruct();
            r->SetStructName(t.name);
        }
    }
    ps.reference = r->GetRef();
    return ps;
}

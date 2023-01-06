#include "../Parser.h"
#include "../../Types/Type.h"
#include "../../../runtime/Library/StringLib.h"

std::any Parser::visitTypeSignature(DaricParser::TypeSignatureContext *context) {
    return visitChildren(context);
}

std::any Parser::visitTypeSignatureArrayOrCollection(DaricParser::TypeSignatureArrayOrCollectionContext *context) {
    return visitChildren(context);
}

std::any Parser::visitTypeSignatureSingle(DaricParser::TypeSignatureSingleContext *context) {

    // Context values
    auto name = context->IDENTIFIER()->getText();
    Primitive p_type = Primitive::NONE;
    if (context->type()) {
        p_type = std::any_cast<Primitive>(visit(context->type()));
    }

    auto ts = TypePrimitive::FindInstanceSingle(name, p_type);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::OK:
            return type;
        case FindResult::NOT_FOUND: {
            return TypePrimitive::Create(state, GetScope(), name, p_type);
        }
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureArray(DaricParser::TypeSignatureArrayContext *context) {
    // Context values
    auto name = context->IDENTIFIER()->getText();
    Primitive p_type = Primitive::NONE;
    if (context->type()) {
        p_type = std::any_cast<Primitive>(visit(context->type()));
    }
    std::list<ParserToken> expression;
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        expression.push_back(std::move(pse));
    }

    auto ts = TypePrimitiveArray::FindInstanceArray(name, p_type, expression);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::OK: {
            auto ct = dynamic_cast<TypePrimitiveArray *>(type.get());
            return ct->CreateLink(state, expression);
        }
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureArrayNew(DaricParser::TypeSignatureArrayNewContext *context) {
    // Context values
    auto name = context->IDENTIFIER()->getText();
    Primitive p_type = Primitive::NONE;
    if (context->type()) {
        p_type = std::any_cast<Primitive>(visit(context->type()));
    }
    std::list<ParserToken> expression;
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        expression.push_back(std::move(pse));
    }

    // Create
    auto ts = TypePrimitiveArray::FindInstanceArray(name, p_type, expression);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::NOT_FOUND:
            return TypePrimitiveArray::Create(state, GetScope(), name, p_type, expression);
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureRecord(DaricParser::TypeSignatureRecordContext *context) {
    // Context values
    auto name = context->IDENTIFIER(0)->getText();

    // Concatenate fields
    std::vector<std::string> fields;
    for (size_t i = 1; i < context->IDENTIFIER().size(); i++) {
        fields.push_back(context->IDENTIFIER(i)->getText());
    }
    auto ff = join(fields, ".");

    // Create
    auto ts = TypeRecord::FindRecordSingle(name);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::OK: {
            auto ct = dynamic_cast<TypeRecord *>(type.get());
            if (!ct->HasField(ff))
                RaiseException("Record does not contain field '" + ff + "'", context);
            return ct->CreateLink(state, ff);
        }
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureRecordNew(DaricParser::TypeSignatureRecordNewContext *context) {
    // Context values
    auto name = context->IDENTIFIER(0)->getText();
    auto struct_name = context->IDENTIFIER(1)->getText();
    std::list<ParserToken> initialisers;
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        pse.identifier = context->IDENTIFIER(i + 2)->getText();
        initialisers.push_back(std::move(pse));
    }

    // Do we have this struct?
    if (!state.StructExists(struct_name))
        RecordNotFound(struct_name, context);

    // Create
    auto ts = TypeRecord::FindRecordSingle(name, struct_name);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::NOT_FOUND:
            return TypeRecord::Create(state, GetScope(), name, struct_name, initialisers);
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureRecordArray(DaricParser::TypeSignatureRecordArrayContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureRecordArrayNew(DaricParser::TypeSignatureRecordArrayNewContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureList(DaricParser::TypeSignatureListContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureVector(DaricParser::TypeSignatureVectorContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureSet(DaricParser::TypeSignatureSetContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureMap(DaricParser::TypeSignatureMapContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureStack(DaricParser::TypeSignatureStackContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureQueue(DaricParser::TypeSignatureQueueContext *context) {
    assert(0);
}


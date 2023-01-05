#include "../Parser.h"
#include "../../Types/Type.h"

std::any Parser::visitTypeSignature(DaricParser::TypeSignatureContext *context) {
    return visitChildren(context);
}

std::any Parser::visitTypeSignatureSingle(DaricParser::TypeSignatureSingleContext *context) {

    // Context values
    auto name = context->IDENTIFIER()->getText();
    Primitive *p_type = nullptr;
    if (context->type()) {
        auto pr_type = std::any_cast<Primitive>(visit(context->type()));
        p_type = &pr_type;
    }

    auto ts = TypeSignature::FindInstanceSingle(name, p_type);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts).get();
    switch (result) {
        case FindResult::OK:
            return type;
        case FindResult::NOT_FOUND: {
            return TypePrimitive::Create(GetScope(), name, p_type);
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
    Primitive *p_type = nullptr;
    if (context->type()) {
        auto pr_type = std::any_cast<Primitive>(visit(context->type()));
        p_type = &pr_type;
    }
    std::list<ParserToken> expression;
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        expression.push_back(std::move(pse));
    }

    auto ts = TypeSignature::FindInstanceArray(name, p_type, expression);
    auto result = std::get<0>(ts);
    auto type = std::get<1>(ts);
    switch (result) {
        case FindResult::OK:
            return type;
        case FindResult::NOT_FOUND: {
            return TypePrimitiveArray::Create(GetScope(), name, p_type, expression);
        }
        default:
            VariableException(context);
            break;
    }

    return NULL;
}

std::any Parser::visitTypeSignatureRecord(DaricParser::TypeSignatureRecordContext *context) {
    assert(0);
}

std::any Parser::visitTypeSignatureRecordArray(DaricParser::TypeSignatureRecordArrayContext *context) {
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

std::any Parser::visitTypeSignatureArrayOrCollection(DaricParser::TypeSignatureArrayOrCollectionContext *context) {
    assert(0);
}

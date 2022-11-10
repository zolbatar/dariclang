#include "Parser.h"

std::any Parser::visitLiteral(DaricParser::LiteralContext *context) {
    return visitChildren(context);
}

std::any Parser::visitIntegerLiteral(DaricParser::IntegerLiteralContext *context) {
    int i = 0;
    if (context->INTEGERLITERAL() != nullptr) {
        auto v = context->INTEGERLITERAL()->getText();

        try {
            i = std::stoi(v, nullptr, 10);
        }
        catch (const std::invalid_argument &) {
            RaiseException("Invalid number", context);
        }
        if (context->MINUS() != nullptr) {
            i = -i;
        }
    } else if (context->HEXNUMBER() != nullptr) {
        auto v = context->HEXNUMBER()->getText();
        v.erase(0, 1);
        try {
            i = std::stoi(v, nullptr, 16);
        }
        catch (const std::invalid_argument &) {
            RaiseException("Invalid number", context);
        }
    } else if (context->BINARYNUMBER() != nullptr) {
        auto v = context->BINARYNUMBER()->getText();
        v.erase(0, 1);
        try {
            i = std::stoi(v, nullptr, 2);
        }
        catch (const std::invalid_argument &) {
            RaiseException("Invalid number", context);
        }
    }
    return ParserToken{ParserTokenType::LITERAL, Primitive::INT, "", i, 0, ""};
}

std::any Parser::visitFloatLiteral(DaricParser::FloatLiteralContext *context) {
    auto v = context->FLOATLITERAL()->getText();
    double i;
    try {
        i = std::stod(v);
    }
    catch (const std::invalid_argument &) {
        RaiseException("Invalid number", context);
    }
    if (context->MINUS() != nullptr) {
        i = -i;
    }
    return ParserToken{ParserTokenType::LITERAL, Primitive::FLOAT, "", 0, i, ""};
}

std::any Parser::visitStringLiteral(DaricParser::StringLiteralContext *context) {
    auto v = context->STRINGLITERAL()->getText();

    // Remove outer double quotes
    v.erase(0, 1);
    v.erase(v.length() - 1, 1);

    // Create global string reference
    return ParserToken{ParserTokenType::LITERAL, Primitive::STRING, "", 0, 0, v};
}

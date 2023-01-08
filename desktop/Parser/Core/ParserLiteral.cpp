#include "../Parser.h"

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
            RaiseException("Invalid number", context, GetFilename());
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
            RaiseException("Invalid number", context, GetFilename());
        }
    } else if (context->BINARYNUMBER() != nullptr) {
        auto v = context->BINARYNUMBER()->getText();
        v.erase(0, 1);
        try {
            i = std::stoi(v, nullptr, 2);
        }
        catch (const std::invalid_argument &) {
            RaiseException("Invalid number", context, GetFilename());
        }
    }
    return ParserToken{.type=ParserTokenType::LITERAL, .literal.iv= i, .data_type= Primitive::INT};
}

std::any Parser::visitFloatLiteral(DaricParser::FloatLiteralContext *context) {
    auto v = context->FLOATLITERAL()->getText();
    double i;
    try {
        i = std::stod(v);
    }
    catch (const std::invalid_argument &) {
        RaiseException("Invalid number", context, GetFilename());
    }
    if (context->MINUS() != nullptr) {
        i = -i;
    }
    return ParserToken{.type=ParserTokenType::LITERAL, .literal.fv= i, .data_type= Primitive::FLOAT};
}

std::any Parser::visitStringLiteral(DaricParser::StringLiteralContext *context) {
    auto v = context->STRINGLITERAL()->getText();

    // Remove outer double quotes
    v.erase(0, 1);
    v.erase(v.length() - 1, 1);

    // Create global string reference
    return ParserToken{.type=ParserTokenType::LITERAL, .literal.sv= v, .data_type= Primitive::STRING};
}

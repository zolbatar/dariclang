#pragma once

#include <iostream>
#include "../Grammar/DaricParser.h"
#include "../Exception/Exception.h"

class DaricErrorListener : public antlr4::BaseErrorListener {
    void syntaxError(antlr4::Recognizer *recognizer,
                     antlr4::Token *offendingSymbol,
                     size_t line,
                     size_t charPositionInLine,
                     const std::string &msg,
                     std::exception_ptr e) override {
        throw CustomException(ExceptionType::PARSER, line, charPositionInLine, msg);
    }
};
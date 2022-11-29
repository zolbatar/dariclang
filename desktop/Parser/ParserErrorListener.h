#pragma once

#include <iostream>
#include "../Grammar/DaricParser.h"
#include "../Exception/Exception.h"

const int line_length_scan = 1024;

class DaricErrorListener : public antlr4::BaseErrorListener {
    void syntaxError(antlr4::Recognizer *recognizer,
                     antlr4::Token *offendingSymbol,
                     size_t line,
                     size_t charPositionInLine,
                     const std::string &msg,
                     std::exception_ptr e) override {

        // Get some characters around the error position
        auto stream = offendingSymbol->getInputStream();
        size_t start = (int64_t) offendingSymbol->getStartIndex() - line_length_scan;
        if (start < 0) start = 0;
        size_t end = (int64_t) offendingSymbol->getStopIndex() + line_length_scan;
        if (end > stream->size()) end = stream->size() - 1;
        antlr4::misc::Interval interval(start, end);
        auto ee = stream->getText(interval);

        // Now scan for start of line
        int cc = 0;
        for (auto i = (offendingSymbol->getStartIndex() - start); i >= 0; i--) {
            if (ee[i] == '\n') {
                ee = ee.substr(i + 1);
                break;
            }
            cc++;
        }

        // Now scan for end of line
        for (auto i = 0; i < ee.size(); i++) {
            if (ee[i] == '\n') {
                ee = ee.substr(0, i);
                break;
            }
        }

        // Now show error place
        std::cout << ee << std::endl;
        for (auto i = 0; i < cc-1; i++)
            std::cout << " ";
        std::cout << "^" << std::endl;
        throw CustomException(ExceptionType::PARSER, line, charPositionInLine, "Parsing error");
    }
};
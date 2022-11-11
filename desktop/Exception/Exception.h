#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

enum class ExceptionType {
    PARSER,
    COMPILER,
    RUNTIME,
    END
};

class CustomException : public std::runtime_error {
public:
    CustomException(ExceptionType type,
                    size_t line_number,
                    size_t char_position,
                    std::string error) :
            std::runtime_error(error), type(type), error(error), line_number(line_number),
            char_position(char_position) {};

    const char *what() const throw() {
        return error.c_str();
    }

    void OutputToStdout() {
        std::string msg;
        switch (type) {
            case ExceptionType::PARSER:
                msg = "Parser error";
                break;
            case ExceptionType::COMPILER:
                msg = "Compiler error";
                break;
            case ExceptionType::RUNTIME:
                msg = "Runtime error";
                break;
            case ExceptionType::END:
                msg = "END error";
                break;
        }
        std::cout << "[" << msg << "] " << error << " at " << line_number << ":" << char_position << std::endl;
    };

    ExceptionType type;
    std::string error;
    size_t line_number;
    size_t char_position;
};

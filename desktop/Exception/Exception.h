#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include "../antlr4-runtime/antlr4-runtime.h"
#include "../Parser/ParserToken.h"

struct CaughtException {
	std::string filename;
	size_t line_number;
	size_t char_position;
	std::string error;
};

class CustomException : public std::runtime_error {
public:
	CustomException(std::string filename,
					size_t line_number,
					size_t char_position,
					std::string error) :
		std::runtime_error(error), error(error), filename(filename), line_number(line_number),
		char_position(char_position) {};

	const char *what() const throw() override {
		return error.c_str();
	}

	void OutputToStdout() {
		std::string msg;
		std::cout << "Error: [" << msg << "] " << error << " in '" << filename << "' at " << line_number << ":"
				  << char_position << std::endl;
	};

	std::string error;
	std::string filename;
	size_t line_number;
	size_t char_position;
};

void RaiseException(std::string msg, ParserToken &t);
void TypeError(ParserToken &t);
void SyntaxError(ParserToken &t);
void VariableNotFound(ParserToken &t, std::string name);
void VariableError(ParserToken &t, std::string name);
void RecordNotFound(ParserToken &t, std::string name);
void VariableAlreadyExists(ParserToken &t, std::string name);
void ProcedureNotFound(ParserToken &t, std::string name);
void RaiseException(std::string msg, antlr4::ParserRuleContext *context, std::string filename);
void VariableException(antlr4::ParserRuleContext *context, std::string filename);
void RecordNotFound(std::string name, antlr4::ParserRuleContext *context, std::string filename);
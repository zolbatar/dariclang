#pragma once
#include <string>

enum class ExceptionType {
	PARSER,
	COMPILER,
	RUNTIME
};

struct CaughtException {
	ExceptionType type;
	std::string filename;
	size_t line_number;
	size_t char_position;
	std::string error;
};

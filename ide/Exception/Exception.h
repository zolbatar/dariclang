#pragma once
#include <string>

struct CaughtException {
	std::string filename;
	size_t line_number;
	size_t char_position;
	std::string error;
};

#pragma once

#include <list>
#include <vector>
#include <memory>
#include <string>
#include "../Types/PrimitiveTypes.h"
#include "ParserTokenType.h"

struct ParserTokenFile {
	std::string filename;
	size_t line;
	uint16_t char_position;
};

struct ParserTokenLiteral {
	T_I iv;
	T_F fv;
	std::string sv;
};

struct ParserToken {
	ParserTokenType type;
	ParserTokenFile file;
	ParserTokenLiteral literal;
	std::string identifier;
	std::vector<ParserToken> children;
	Scope scope;
	size_t signature;
	Primitive data_type; // Return type
};

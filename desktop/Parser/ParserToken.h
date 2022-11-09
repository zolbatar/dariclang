#pragma once

#include <list>
#include <vector>
#include <string>
#include "../Variables/Types.h"
#include "ParserTokenType.h"

struct ParserToken
{
	ParserTokenType type;
	Type data_type;
	std::string identifier;
	T_I iv;
	T_F fv;
	std::string sv;
	std::vector<ParserToken> children;
	size_t line;
	uint16_t char_position;
	size_t reference;
};

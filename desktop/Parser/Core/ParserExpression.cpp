#include "../Parser.h"

std::any Parser::visitExpression(DaricParser::ExpressionContext *context) {
	// Single operator
	if (context->COMP() != NULL) {
		return SingleExpression(context, ParserTokenType::COMPLEMENT);
	}
	if (context->NOT() != NULL) {
		return SingleExpression(context, ParserTokenType::NOT);
	}
	if (context->TRUE() != NULL) {
		return CreateToken(context, ParserTokenType::TRUE);
	}
	if (context->FALSE() != NULL) {
		return CreateToken(context, ParserTokenType::FALSE);
	}

	// Maths
	if (context->HAT() != NULL) {
		return DoubleExpression(context, ParserTokenType::HAT);
	}
	if (context->DIVIDE() != NULL) {
		return DoubleExpression(context, ParserTokenType::DIVIDE);
	}
	if (context->MULTIPLY() != NULL) {
		return DoubleExpression(context, ParserTokenType::MULTIPLY);
	}
	if (context->DIV() != NULL) {
		return DoubleExpression(context, ParserTokenType::DIV);
	}
	if (context->MOD() != NULL) {
		return DoubleExpression(context, ParserTokenType::MOD);
	}
	if (context->PLUS() != NULL) {
		// Unary plus?
		if (context->expression().size() == 1) {
			return std::any_cast<ParserToken>(visit(context->expression(0)));
		}
		else {
			return DoubleExpression(context, ParserTokenType::ADD);
		}
	}
	if (context->MINUS() != NULL) {
		// Unary minus?
		if (context->expression().size() == 1) {
			ParserToken t = CreateToken(context, ParserTokenType::UNARYMINUS);
			auto v = std::any_cast<ParserToken>(visit(context->expression(0)));
			t.children.push_back(std::move(v));
			return t;
		}
		else {
			return DoubleExpression(context, ParserTokenType::MINUS);
		}
	}

	// Comparison
	if (context->EQ() != NULL) {
		return DoubleExpression(context, ParserTokenType::EQ);
	}
	if (context->NE() != NULL) {
		return DoubleExpression(context, ParserTokenType::NE);
	}
	if (context->GT() != NULL) {
		return DoubleExpression(context, ParserTokenType::GT);
	}
	if (context->GE() != NULL) {
		return DoubleExpression(context, ParserTokenType::GE);
	}
	if (context->LT() != NULL) {
		return DoubleExpression(context, ParserTokenType::LT);
	}
	if (context->LE() != NULL) {
		return DoubleExpression(context, ParserTokenType::LE);
	}

	// Boolean
	if (context->AND() != NULL) {
		return DoubleExpression(context, ParserTokenType::AND);
	}
	if (context->OR() != NULL) {
		return DoubleExpression(context, ParserTokenType::OR);
	}
	if (context->EOR() != NULL) {
		return DoubleExpression(context, ParserTokenType::EOR);
	}
	if (context->SHL() != NULL) {
		return DoubleExpression(context, ParserTokenType::SHL);
	}
	if (context->SHR() != NULL) {
		return DoubleExpression(context, ParserTokenType::SHR);
	}

	// Maths functions
	if (context->ABS() != NULL) {
		return SingleExpression(context, ParserTokenType::ABS);
	}
	if (context->ACS() != NULL) {
		return SingleExpression(context, ParserTokenType::ACS);
	}
	if (context->ASN() != NULL) {
		return SingleExpression(context, ParserTokenType::ASN);
	}
	if (context->ATN() != NULL) {
		return SingleExpression(context, ParserTokenType::ATN);
	}
	if (context->COS() != NULL) {
		return SingleExpression(context, ParserTokenType::COS);
	}
	if (context->DEG() != NULL) {
		return SingleExpression(context, ParserTokenType::DEG);
	}
	if (context->EXP() != NULL) {
		return SingleExpression(context, ParserTokenType::EXP);
	}
	if (context->FLOOR() != NULL) {
		return SingleExpression(context, ParserTokenType::FLOOR);
	}
	if (context->ROUND() != NULL) {
		return SingleExpression(context, ParserTokenType::ROUND);
	}
	if (context->LN() != NULL) {
		return SingleExpression(context, ParserTokenType::LN);
	}
	if (context->LOG() != NULL) {
		return SingleExpression(context, ParserTokenType::LOG);
	}
	if (context->PI() != NULL) {
		return CreateToken(context, ParserTokenType::PI);
	}
	if (context->RAD() != NULL) {
		return SingleExpression(context, ParserTokenType::RAD);
	}
	if (context->SGN() != NULL) {
		return SingleExpression(context, ParserTokenType::SGN);
	}
	if (context->SIN() != NULL) {
		return SingleExpression(context, ParserTokenType::SIN);
	}
	if (context->SQR() != NULL) {
		return SingleExpression(context, ParserTokenType::SQR);
	}
	if (context->TAN() != NULL) {
		return SingleExpression(context, ParserTokenType::TAN);
	}

    // Array
    if (context->SIZE() != NULL) {
        auto ps = CreateToken(context, ParserTokenType::SIZE);
        ps.identifier = context->IDENTIFIER()->getText();
        return ps;
    }

    // Chrono
	if (context->HPTIME() != NULL) {
		return CreateToken(context, ParserTokenType::HPTIME);
	}
	if (context->TIME() != NULL) {
		return CreateToken(context, ParserTokenType::TIME);
	}
	if (context->TIMES() != NULL) {
		return CreateToken(context, ParserTokenType::TIMES);
	}

	// Conversion
	if (context->INT() != NULL) {
		return SingleExpression(context, ParserTokenType::INT);
	}
	if (context->FLOAT() != NULL) {
		return SingleExpression(context, ParserTokenType::FLOAT);
	}
	if (context->STRING() != NULL) {
		if (context->expression().size() == 1) {
			return SingleExpression(context, ParserTokenType::STRING);
		}
		else {
			return DoubleExpression(context, ParserTokenType::STRING_WITH_FORMAT);
		}
	}

	// String functions
	if (context->ASC() != NULL) {
		return SingleExpression(context, ParserTokenType::ASC);
	}
	if (context->CHRS() != NULL) {
		return SingleExpression(context, ParserTokenType::CHRS);
	}
	if (context->INSTR() != NULL) {
		return TripleExpression(context, ParserTokenType::INSTR);
	}
	if (context->LEFTS() != NULL) {
		return DoubleExpression(context, ParserTokenType::LEFTS);
	}
	if (context->MIDS() != NULL) {
		return TripleExpression(context, ParserTokenType::MIDS);
	}
	if (context->RIGHTS() != NULL) {
		return DoubleExpression(context, ParserTokenType::RIGHTS);
	}
	if (context->LEN() != NULL) {
		return SingleExpression(context, ParserTokenType::LEN);
	}

	if (context->LPAREN() != NULL) {
		return visit(context->expression(0));
	}
	if (context->literal() != NULL) {
		return visit(context->literal());
	}
	if (context->variable() != NULL) {
		ParserToken t = CreateToken(context);
		t.type = ParserTokenType::VARIABLE;
		auto r = std::any_cast<Reference *>(visit(context->variable()));
		t.reference = r->GetRef();
		return t;
	}
	if (context->exprcall()) {
		return visit(context->exprcall());
	}

	assert(0);
	return NULL;
}

ParserToken Parser::SingleExpression(DaricParser::ExpressionContext *context, ParserTokenType type) {
	ParserToken t = CreateToken(context, type);
	auto e1 = std::any_cast<ParserToken>(visit(context->expression(0)));
	t.children.push_back(std::move(e1));
	return t;
}

ParserToken Parser::DoubleExpression(DaricParser::ExpressionContext *context, ParserTokenType type) {
	ParserToken t = CreateToken(context, type);
	auto e1 = std::any_cast<ParserToken>(visit(context->expression(0)));
	auto e2 = std::any_cast<ParserToken>(visit(context->expression(1)));
	t.children.push_back(std::move(e1));
	t.children.push_back(std::move(e2));
	return t;
}

ParserToken Parser::TripleExpression(DaricParser::ExpressionContext *context, ParserTokenType type) {
	ParserToken t = CreateToken(context, type);
	auto e1 = std::any_cast<ParserToken>(visit(context->expression(0)));
	auto e2 = std::any_cast<ParserToken>(visit(context->expression(1)));
	auto e3 = std::any_cast<ParserToken>(visit(context->expression(2)));
	t.children.push_back(std::move(e1));
	t.children.push_back(std::move(e2));
	t.children.push_back(std::move(e3));
	return t;
}

std::any Parser::visitExprcall(DaricParser::ExprcallContext *context) {
	auto name = context->IDENTIFIER()->getText();
	ParserToken ps = CreateToken(context);
	ps.identifier = name;
	ps.type = ParserTokenType::CALL;

	// Parameters
	for (auto i = 0; i < context->expression().size(); i++) {
		auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
		ps.children.push_back(std::move(psp));
	}

	return ps;
}


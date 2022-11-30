#pragma once
#include <string>

enum class ParserTokenType
{
    NONE,

	ABS,
	ACS,
	ADD,
	AND,
	ASSIGNMENT,
	ASC,
	ASN,
	ATN,
	BRANCH,
	CALL,
    CASE,
	CHRS,
	COMMENT,
	COMPLEMENT,
	CONSTANT,
	COS,
	DEG,
	DIM,
	DIV,
	DIVIDE,
	END,
	EOR,
	EQ,
	EXP,
	FALSE,
	FLOOR,
    FOR,
	HAT,
	INSTR,
	FLOAT,
	GLOBAL,
	GE,
	GT,
	HPTIME,
	IF,
	INT,
	LITERAL,
	LE,
	LEN,
	LEFTS,
	LN,
	LOCAL,
	LOG,
	LT,
    MAIN,
	MIDS,
	MINUS,
	MOD,
	IMPORT,
	MULTIPLY,
	NE,
	NEWLINE,
	NOT,
    OPTIONBASE,
	OR,
    OTHERWISE,
	PARAMETER,
    PARAMETER_REF,
	PI,
	PRINT,
	PRINTFORMAT,
	PROCEDURE,
	RAD,
    READ,
    REPEAT,
    RESTORE,
	RETURN,
	RIGHTS,
	ROUND,
	SIN,
    SIZE,
	SGN,
	SHL,
	SHR,
	STRING,
	STRING_WITH_FORMAT,
	STRUCT,
    STRUCT_INSTANCE,
    STRUCT_DIM,
	SQR,
	SWAP,
	TAN,
	TIME,
	TIMES,
	TRUE,
	UNARYMINUS,
	VARIABLE,
    WHEN,
    WHILE,
};
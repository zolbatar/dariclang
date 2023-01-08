#include "Exception.h"

void RaiseException(std::string msg, ParserToken &t) {
	throw CustomException(t.file.filename, t.file.line, t.file.char_position, std::move(msg));
}

void TypeError(ParserToken &t) {
	RaiseException("Type error", t);
}

void SyntaxError(ParserToken &t) {
	RaiseException("Syntax error", t);
}

void VariableNotFound(ParserToken &t, std::string name) {
	RaiseException("Variable '" + name + "' not found", t);
}

void VariableError(ParserToken &t, std::string name) {
	RaiseException("Variable error with '" + name + "'", t);
}

void RecordNotFound(ParserToken &t, std::string name) {
	RaiseException("Record '" + name + "' not found", t);
}

void VariableAlreadyExists(ParserToken &t, std::string name) {
	RaiseException("Variable '" + name + "' already defined", t);
}

void ProcedureNotFound(ParserToken &t, std::string name) {
	RaiseException("Procedure '" + name + "' not found", t);
}

void RaiseException(std::string msg, antlr4::ParserRuleContext *context, std::string filename) {
	throw CustomException(filename, context->getStart()->getLine(),
						  context->getStart()->getCharPositionInLine(), msg);
}

void VariableException(antlr4::ParserRuleContext *context, std::string filename) {
	RaiseException("Variable error", context, filename);
}

void RecordNotFound(std::string name, antlr4::ParserRuleContext *context, std::string filename) {
	RaiseException("Record '" + name + "' not found", context, filename);
}

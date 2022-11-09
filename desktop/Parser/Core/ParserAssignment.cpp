#include "../Parser.h"

static Type assignment_type;

std::any Parser::visitAssign(DaricParser::AssignContext *context) {
	if (context->type()) {
		assignment_type = std::any_cast<Type>(visit(context->type()));
	}
	else {
		assignment_type = Type::None();
	}

	if (!current_procedure) {
		ParserToken ps = CreateToken(context, ParserTokenType::GLOBAL);
		for (int i = 0; i < context->assignment().size(); i++) {
			auto assign = std::any_cast<ParserToken>(visit(context->assignment(i)));
			ps.children.push_back(std::move(assign));
		}
		return ps;
	}
	else {
		ParserToken ps = CreateToken(context, ParserTokenType::LOCAL);
		for (int i = 0; i < context->assignment().size(); i++) {
			auto assign = std::any_cast<ParserToken>(visit(context->assignment(i)));
			ps.children.push_back(std::move(assign));
		}
		return ps;
	}
}

std::any Parser::visitAssignment(DaricParser::AssignmentContext *context) {
	ParserToken psc = CreateToken(context);
	psc.type = ParserTokenType::ASSIGNMENT;
	auto r = std::any_cast<Reference *>(visit(context->variable()));
	psc.reference = r->GetRef();

	// We need to know a type OR have a value to assign to (so we can look up variable)
	// Without this procedure calls without parens look like variables
	if (assignment_type.GetType() == Primitive::NONE && context->EQ()) {
		assignment_type = Type::Int();
	}

	r->SetDataType(assignment_type);

	// Do we have an expression (i.e. initial value?)
	if (context->expression()) {
		auto exp = std::any_cast<ParserToken>(visit(context->expression()));
		psc.children.push_back(exp);
	}

	return psc;
}






#include "../Parser.h"

std::any Parser::visitDim(DaricParser::DimContext *context) {
	ParserToken ps = CreateToken(context, ParserTokenType::DIM);
	auto r = Reference::Create(state, context->IDENTIFIER()->getText());

	if (context->type()) {
		r->SetDataType(std::any_cast<Primitive>(visit(context->type())));
		r->SetAsArray();
		for (size_t i = 0; i < context->expression().size(); i++) {
			auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
			r->GetIndices().push_back(std::move(pse));
		}
	} else if (context->LIST()) {
		ps.type = ParserTokenType::CONTAINER;
		auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
		r->SetAsList();
		if (!t.is_struct)
			r->SetDataType(t.type);
		else {
			r->SetStructName(t.name);
			r->SetDataType(Primitive::NONE);
		}
	} else if (context->VECTOR()) {
		ps.type = ParserTokenType::CONTAINER;
		auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
		r->SetAsVector();
		if (!t.is_struct)
			r->SetDataType(t.type);
		else {
			r->SetStructName(t.name);
			r->SetDataType(Primitive::NONE);
		}
	} else if (context->SET()) {
		ps.type = ParserTokenType::CONTAINER;
		r->SetAsSet();
		if (context->BYTE())
			r->SetDataTypeVal(Primitive::BYTE);
		else if (context->INT())
			r->SetDataTypeVal(Primitive::INT);
		else if (context->STRING())
			r->SetDataTypeVal(Primitive::STRING);
		else if (context->FLOAT())
			r->SetDataTypeVal(Primitive::FLOAT);
	} else if (context->MAP()) {
		ps.type = ParserTokenType::CONTAINER;
		r->SetAsMap();
		if (context->BYTE())
			r->SetDataTypeVal(Primitive::BYTE);
		else if (context->INT())
			r->SetDataTypeVal(Primitive::INT);
		else if (context->STRING())
			r->SetDataTypeVal(Primitive::STRING);
		else if (context->FLOAT())
			r->SetDataTypeVal(Primitive::FLOAT);
		auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
		if (!t.is_struct)
			r->SetDataType(t.type);
		else {
			r->SetStructName(t.name);
			r->SetDataType(Primitive::NONE);
		}
	} else if (context->QUEUE()) {
		ps.type = ParserTokenType::CONTAINER;
		auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
		r->SetAsQueue();
		if (!t.is_struct)
			r->SetDataType(t.type);
		else {
			r->SetStructName(t.name);
			r->SetDataType(Primitive::NONE);
		}
	} else if (context->STACK()) {
		ps.type = ParserTokenType::CONTAINER;
		auto t = std::any_cast<TypeOrStruct>(visit(context->typeOrStruct()));
		r->SetAsStack();
		if (!t.is_struct)
			r->SetDataType(t.type);
		else {
			r->SetStructName(t.name);
			r->SetDataType(Primitive::NONE);
		}
	}
	ps.reference = r->GetRef();
	return ps;
}

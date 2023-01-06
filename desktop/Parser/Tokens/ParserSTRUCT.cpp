#include "../Parser.h"

struct StructField {
	std::string name;
	TypeOrStruct type;
};

std::any Parser::visitStruct(DaricParser::StructContext *context) {
	if (this->current_procedure != nullptr) {
		RaiseException("Record can only be defined outside of a procedure", context);
	}

	ParserToken ps = CreateToken(context, ParserTokenType::STRUCT);
	ps.identifier = context->IDENTIFIER(0)->getText();

	if (state.StructExists(ps.identifier)) {
		RaiseException("Record '" + ps.identifier + "' already defined", context);
	}

	// Build members
	std::vector<StructField> fields;
	for (size_t i = 1; i < context->IDENTIFIER().size(); i++) {
		StructField sf{
			.name = context->IDENTIFIER(i)->getText(),
			.type =std::any_cast<TypeOrStruct>(visit(context->typeOrStruct(i - 1)))
		};
		fields.push_back(std::move(sf));
	}

	// Now iteratively build up the actual field list
	StructInfo ti;
	for (auto &field : fields) {
		if (!field.type.is_struct) {
			StructMember sm;
			sm.type = field.type.type;
			sm.name = field.name;
			ti.fields.push_back(std::move(sm));
		} else {
			// Get child struct
			auto f2 = state.FindStructIndices(field.type.name);
			if (f2 == state.StructIndicesEnd())
				RaiseException("Struct '" + field.type.name + "' not found", context);
			auto child_struct = &state.GetStructInfo(f2->second).fields;

			// Add child fields
			for (auto &f3 : *child_struct) {
				StructMember sm;
				sm.type = f3.type;
				sm.name = field.name + "." + f3.name;
				ti.fields.push_back(std::move(sm));
			}
		}
	}

	// Now create a map to speed lookup
	size_t i = 0;
	for (auto &f : ti.fields) {
		ti.field_mappings.insert(std::make_pair(f.name, i));
		i++;
	}

	// Add to token
	ps.signature = state.GetNextRefIndex();
	state.AddStruct(ps.identifier, ti, ps.signature);

	return ps;
}

/*std::any Parser::visitStructDim(DaricParser::StructDimContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::STRUCT_DIM);
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());
    r->SetAsStructArray();
    ps.reference = r->GetRef();
    r->SetStructName(context->IDENTIFIER(1)->getText());

    // Dimensions
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto pse = std::any_cast<ParserToken>(visit(context->expression(i)));
        r->GetIndices().push_back(std::move(pse));
    }
    return ps;
}

std::any Parser::visitStructInstance(DaricParser::StructInstanceContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::STRUCT_INSTANCE);
    auto r = Reference::Create(state, context->IDENTIFIER(0)->getText());
    r->SetAsStruct();
    ps.reference = r->GetRef();
    r->SetStructName(context->IDENTIFIER(1)->getText());

    // Parameters
    for (size_t i = 0; i < context->expression().size(); i++) {
        auto psp = std::any_cast<ParserToken>(visit(context->expression(i)));
        psp.identifier = context->IDENTIFIER(i + 2)->getText();
        ps.children.push_back(std::move(psp));
    }

    return ps;
}
*/

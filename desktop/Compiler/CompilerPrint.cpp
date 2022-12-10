#include "Compiler.h"

void Compiler::TokenPrint(ParserToken &t) {
	bool new_line = false;
	if (t.children.empty()) {
		new_line = true;
	}
	else if (t.type == ParserTokenType::PRINT) {
		new_line = t.children.size() == 2;
		auto value_type = CompileExpression(t.children[0]);
		switch (value_type.type) {
			case Primitive::INT:
				CreateCall("PrintInteger", {value_type.value});
				break;
			case Primitive::FLOAT:
				CreateCall("PrintFloat", {value_type.value});
				break;
			case Primitive::BYTE:
				CreateCall("PrintByte", {value_type.value});
				break;
			case Primitive::STRING:
				CreateCall("PrintString", {value_type.value});
				break;
			default:
				assert(0);
		}
	}
	else {
		new_line = t.children.size() == 3;
		auto value_type1 = CompileExpression(t.children[1]);
		auto value_type2 = CompileExpression(t.children[0]);
		switch (value_type1.type) {
			case Primitive::INT:
				CreateCall("PrintIntegerFormat", {value_type1.value, value_type2.value});
				break;
			case Primitive::FLOAT:
				CreateCall("PrintFloatFormat", {value_type1.value, value_type2.value});
				break;
			case Primitive::BYTE:
				CreateCall("PrintByteFormat", {value_type1.value, value_type2.value});
				break;
			case Primitive::STRING:
				CreateCall("PrintStringFormat", {value_type1.value, value_type2.value});
				break;
			default:
				assert(0);
		}
	}
	if (new_line) {
		CreateCall("PrintNewline", {});
	}
}

void Compiler::TokenPrintSys(ParserToken &t) {
    bool new_line = false;
    if (t.children.empty()) {
        new_line = true;
    }
    else if (t.type == ParserTokenType::PRINTSYS) {
        new_line = t.children.size() == 2;
        auto value_type = CompileExpression(t.children[0]);
        switch (value_type.type) {
            case Primitive::INT:
                CreateCall("PrintInteger_sys", {value_type.value});
                break;
            case Primitive::FLOAT:
                CreateCall("PrintFloat_sys", {value_type.value});
                break;
            case Primitive::BYTE:
                CreateCall("PrintByte_sys", {value_type.value});
                break;
            case Primitive::STRING:
                CreateCall("PrintString_sys", {value_type.value});
                break;
            default:
                assert(0);
        }
    }
    else {
        new_line = t.children.size() == 3;
        auto value_type1 = CompileExpression(t.children[1]);
        auto value_type2 = CompileExpression(t.children[0]);
        switch (value_type1.type) {
            case Primitive::INT:
                CreateCall("PrintIntegerFormat_sys", {value_type1.value, value_type2.value});
                break;
            case Primitive::FLOAT:
                CreateCall("PrintFloatFormat_sys", {value_type1.value, value_type2.value});
                break;
            case Primitive::BYTE:
                CreateCall("PrintByteFormat_sys", {value_type1.value, value_type2.value});
                break;
            case Primitive::STRING:
                CreateCall("PrintStringFormat_sys", {value_type1.value, value_type2.value});
                break;
            default:
                assert(0);
        }
    }
    if (new_line) {
        CreateCall("PrintNewline_sys", {});
    }
}
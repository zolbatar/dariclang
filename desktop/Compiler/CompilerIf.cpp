#include "Compiler.h"

void Compiler::TokenIf(ParserToken &token) {
	auto value_type = CompileExpression(token.children[0]);
	auto t = Type::Int();
	llvm.AutoConversion(GetIR(), value_type, t);
	value_type.value = GetIR()->CreateIntCast(value_type.value, llvm.TypeBit, true);

	// Core block
	auto bc = CreateAndInsertBB("IF Single Line", true, token);

	// Create true block
	auto trueBB = CreateAndInsertBB("IF Cmp True", false, token);
	CompileStatements(token.children[1].children);
	trueBB = GetIR()->GetInsertBlock();

	// Create false block (f required)
	auto falseBB = CreateAndInsertBB("IF Cmp False", false, token);
	if (token.children.size() == 3) {
		CompileStatements(token.children[2].children);
	}
	falseBB = GetIR()->GetInsertBlock();

	// Terminator
	auto endBB = CreateAndInsertBB("IF End", false, token);

	RetBrCheckSplit(trueBB, endBB);
	RetBrCheckSplit(falseBB, endBB);

	// Actual condition
	GetIR()->SetInsertPoint(bc);
	GetIR()->CreateCondBr(value_type.value, trueBB, falseBB);
	GetIR()->SetInsertPoint(endBB);
}

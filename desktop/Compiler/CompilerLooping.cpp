#include "Compiler.h"

void Compiler::TokenRepeat(ParserToken &token) {
    // Core block
    auto bc = CreateAndInsertBB("REPEAT", true, token);

    // Body block
    CompileStatements(token.children[1].children);
    bc = GetIR()->GetInsertBlock();

    // Terminator
    auto endBB = CreateAndInsertBB("REPEAT End", false, token);
    auto quitBB = CreateAndInsertBB("REPEAT Quit", false, token);
    RetBrCheckSplit(bc, endBB);
    GetIR()->SetInsertPoint(endBB);

    // Calculate condition
    auto value_type = CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = GetIR()->CreateIntCast(value_type.value, llvm.TypeBit, true);

    // Check condition
    GetIR()->CreateCondBr(value_type.value, quitBB, bc);
    GetIR()->SetInsertPoint(quitBB);
}

void Compiler::TokenWhile(ParserToken &token) {
    // Core block
    auto bc = CreateAndInsertBB("WHILE", true, token);
    auto doBB = CreateAndInsertBB("WHILE Do", false, token);
    auto quitBB = CreateAndInsertBB("WHILE Quit", false, token);

    // Calculate condition
    GetIR()->SetInsertPoint(bc);
    auto value_type = CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = GetIR()->CreateIntCast(value_type.value, llvm.TypeBit, true);

    // Check condition
    GetIR()->CreateCondBr(value_type.value, doBB, quitBB);

    // Body block
    GetIR()->SetInsertPoint(doBB);
    CompileStatements(token.children[1].children);
    RetBrCheckSplit(doBB, bc);

    // Terminator
    GetIR()->SetInsertPoint(quitBB);
}


#include "Compiler.h"

llvm::Value *Compiler::IntToBitConditional(llvm::Value *value) {
    return GetIR()->CreateICmpNE(value, llvm::ConstantInt::get(llvm.TypeInt, 0));
}

void Compiler::TokenIf(ParserToken &token) {
    auto bc = CreateAndInsertBB("IF Single Line", true, token);
    auto value_type = CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = IntToBitConditional(value_type.value);

    // Blocks
    auto trueBB = CreateBB("IF Cmp True", token);
    auto falseBB = CreateBB("IF Cmp False", token);
    auto endBB = CreateBB("IF End", token);

    // Actual condition
    GetIR()->CreateCondBr(value_type.value, trueBB, falseBB);

    // Create true block
    AddBB(trueBB);
    CompileStatements(token.children[1].children);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);

    // Create false block (f required)
    AddBB(falseBB);
    if (token.children.size() == 3) {
        CompileStatements(token.children[2].children);
    }
    RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);

    AddBB(endBB);
}

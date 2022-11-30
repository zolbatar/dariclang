#include "Compiler.h"

void Compiler::TokenIf(ParserToken &token) {

    // Is this the special _main_ element?
    bool is_special = false;
    ValueType special;
    if (token.children.size() == 3 && token.children[0].type == ParserTokenType::VARIABLE) {
        auto ref = Reference::Get(token.children[0].reference);
        if (ref->GetName() == "MAIN") {
            is_special = true;
            special.type = Primitive::INT;
            special.value = llvm::ConstantInt::get(llvm.TypeInt, compiling_main_file);
        }
    }

    auto bc = CreateAndInsertBB("IF Single Line", true, token);
    auto value_type = is_special ? special : CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = GetIR()->CreateIntCast(value_type.value, llvm.TypeBit, true);

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

#include "Compiler.h"

void Compiler::TokenCase(ParserToken &token) {

    auto bc = CreateAndInsertBB("CASE", true, token);
    auto endBB = CreateBB("CASE terminate", token);

    // Expression to match against
    auto expr = CompileExpression(token.children[0]);

    // A case is a sequence of IF statements basically with an else clause
    bool otherwise = false;
    for (auto i = 1; i < token.children.size(); i++) {
        auto entry = token.children[i];
        if (entry.type == ParserTokenType::WHEN) {

            // Loop through each WHEN in turn
            for (auto j = 1; j < entry.children.size(); j++) {
                auto whenComp = CreateAndInsertBB("WHEN comparison", true, token);
                auto whenBody = CreateBB("WHEN body", token);
                auto whenBodyEnd = CreateBB("WHEN body not true", token);
                GetIR()->SetInsertPoint(whenComp);

                // Get expression to compare against
                auto when_expr = CompileExpression(entry.children[j]);
                llvm.AutoConversion(GetIR(), when_expr, expr.type);

                // Do a compare
                auto comp = llvm.ComparisonEQ(GetIR(), when_expr, expr);
                comp.value = GetIR()->CreateBitCast(comp.value, llvm.TypeBit);
                GetIR()->CreateCondBr(comp.value, whenBody, whenBodyEnd);
                AddBB(whenBody);
                CompileStatements(entry.children[0].children);
                RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);
                AddBB(whenBodyEnd);
            }
        } else {
            // Must be an OTHERWISE
            CompileStatements(entry.children);
            RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);
            otherwise = true;
        }
    }
    if (!otherwise)
        GetIR()->CreateBr(endBB);
    AddBB(endBB);
}

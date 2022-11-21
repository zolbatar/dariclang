#include "Compiler.h"

void Compiler::TokenRepeat(ParserToken &token) {
    // Core block
    auto bc = CreateAndInsertBB("REPEAT", true, token);

    // Body block
    CompileStatements(token.children[1].children);

    // Terminator
    auto endBB = CreateAndInsertBB("REPEAT End", false, token);
    auto quitBB = CreateAndInsertBB("REPEAT Quit", false, token);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);
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
    RetBrCheckSplit(GetIR()->GetInsertBlock(), bc);

    // Terminator
    GetIR()->SetInsertPoint(quitBB);
}

void Compiler::TokenFor(ParserToken &t) {
    auto ref = Reference::Get(t.reference);

    auto from = CompileExpression(t.children[1]);

    // String?
    if (ref->GetDataType() == Primitive::STRING) {
        RaiseException("Strings not allowed in FOR loops", t);
    }

    // Find the loop variable
    if (!ref->InstanceExists()) {
        // If no type, try and auto-guess it from the expression
        if (ref->GetDataType() == Primitive::NONE) {
            ref->SetDataType(from.type);
        }
        ref->CreateInstance(llvm, GetIR(), t.scope);
    }
    if (!ref->FindInstance())
        RaiseException("Variable error", t);

    auto to = CompileExpression(t.children[2]);
    ValueType step;
    if (t.children.size() == 4) {
        step = CompileExpression(t.children[3]);
    } else {
        step.type = ref->GetDataType();
        switch (ref->GetDataType()) {
            case Primitive::INT:
                step.value = llvm.CreateConstantInt(Primitive::INT, 1);
                break;
            case Primitive::FLOAT:
                step.value = llvm.CreateConstantFloat(Primitive::FLOAT, 1.0);
                break;
            default:
                TypeError(t);
        }
    }

    // Ensure all types are the same
    llvm.AutoConversion(GetIR(), to, ref->GetDataType());
    llvm.AutoConversion(GetIR(), from, ref->GetDataType());
    llvm.AutoConversion(GetIR(), step, ref->GetDataType());
    if (ref->GetDataType() != to.type && ref->GetDataType() != from.type || ref->GetDataType() != step.type) {
        RaiseException("In a FOR loop, all values must the same type", t);
    }

    // Set init loop variable value
    ref->SetValue(from, std::vector<ValueType>(), llvm, GetIR(), t);

    // Flag to indicate completion
    auto temp_name = "FOR temp (" + std::to_string(t.line) + ")";
    auto finished = GetIR()->CreateAlloca(llvm.TypeBit, nullptr, temp_name);
    GetIR()->CreateStore(llvm::ConstantInt::get(llvm.TypeBit, 0), finished);

    // Blocks
    auto bodyBB = CreateAndInsertBB("FOR body start", true, t);
    auto bodyEndBB = CreateAndInsertBB("FOR body end", false, t);
    auto bodyFlagBB = CreateAndInsertBB("FOR body flag", false, t);
    auto bodyFlag2BB = CreateAndInsertBB("FOR body flag2", false, t);
    auto endBB = CreateAndInsertBB("FOR body terminate", false, t);

    // Body block
    GetIR()->SetInsertPoint(bodyBB);
    CompileStatements(t.children[0].children);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), bodyEndBB);

    // Body Terminator
    GetIR()->SetInsertPoint(bodyEndBB);

    // Add step to loop variable
    auto v = ref->GetValue(std::vector<ValueType>(), llvm, GetIR(), t);
    auto nv = llvm.MathsAdd(GetIR(), v, step);
    ref->SetValue(nv, std::vector<ValueType>(), llvm, GetIR(), t);

    // Have we completed?
    auto cond = llvm.ComparisonEQ(GetIR(), nv, to);
    cond.value = GetIR()->CreateTrunc(cond.value, llvm.TypeBit);

    GetIR()->CreateCondBr(GetIR()->CreateLoad(llvm.TypeBit, finished), endBB, bodyFlagBB);
    GetIR()->SetInsertPoint(bodyFlagBB);
    GetIR()->CreateCondBr(cond.value, bodyFlag2BB, bodyBB);
    GetIR()->SetInsertPoint(bodyFlag2BB);
    GetIR()->CreateStore(llvm::ConstantInt::get(llvm.TypeBit, 1), finished);
    GetIR()->CreateBr(bodyBB);

    // Body Terminator
    GetIR()->SetInsertPoint(endBB);
}


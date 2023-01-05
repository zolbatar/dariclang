#include "Compiler.h"

void Compiler::TokenRepeat(ParserToken &token) {
    // Core block
    auto bc = CreateAndInsertBB("REPEAT", true, token);

    // Body block
    CompileStatements(token.children[1].children);

    // Terminator
    auto endBB = CreateBB("REPEAT End", token);
    auto quitBB = CreateBB("REPEAT Quit", token);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), endBB);
    AddBB(endBB);

    // Calculate condition
    auto value_type = CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = IntToBitConditional(value_type.value);

    // Check condition
    GetIR()->CreateCondBr(value_type.value, quitBB, bc);
    AddBB(quitBB);
}

void Compiler::TokenWhile(ParserToken &token) {
    // Core block
    auto bc = CreateAndInsertBB("WHILE", true, token);
    auto doBB = CreateBB("WHILE Do", token);
    auto quitBB = CreateBB("WHILE Quit", token);

    // Calculate condition
    auto value_type = CompileExpression(token.children[0]);
    auto t = Primitive::INT;
    llvm.AutoConversion(GetIR(), value_type, t);
    value_type.value = IntToBitConditional(value_type.value);

    // Check condition
    GetIR()->CreateCondBr(value_type.value, doBB, quitBB);

    // Body block
    AddBB(doBB);
    CompileStatements(token.children[1].children);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), bc);

    // Terminator
    AddBB(quitBB);
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
        ref->CreateInstance(llvm, GetFunction(), return_type, GetPreIR(), t.scope, false);
    }
    if (!ref->FindInstance())
        VariableError(t, ref->GetName());

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
    if (ref->GetDataType() != to.type || ref->GetDataType() != from.type || ref->GetDataType() != step.type) {
        RaiseException("In a FOR loop, all values must the same type", t);
    }

    // Set init loop variable value
    ref->SetValue(option_base, from, std::vector<ValueType>(), llvm, GetIR(), t);

    // Work out direction
    auto comp = llvm.ComparisonGT(GetIR(), from, to);
    auto direction = GetIR()->CreateTruncOrBitCast(comp.value, llvm.TypeBit);

    // Flag to indicate completion
    auto temp_name = GetScratchName(t.file.line);
    auto finished = GetIR()->CreateAlloca(llvm.TypeBit, nullptr, temp_name);
    GetIR()->CreateStore(llvm::ConstantInt::get(llvm.TypeBit, 0), finished);

    // Blocks
    auto bodyEndBB = CreateBB("FOR body end", t);
    auto endBB = CreateBB("FOR body terminate", t);

    // Body block
    auto bodyBB = CreateAndInsertBB("FOR body start", true, t);
    CompileStatements(t.children[0].children);
    RetBrCheckSplit(GetIR()->GetInsertBlock(), bodyEndBB);
    AddBB(bodyEndBB);

    // Add step to loop variable
    auto v = ref->GetValue(option_base, std::vector<ValueType>(), llvm, GetIR(), t);
    auto nv = llvm.MathsAdd(GetIR(), v, step);
    ref->SetValue(option_base, nv, std::vector<ValueType>(), llvm, GetIR(), t);

    // Have we completed?
    auto dirCheckBBLower = CreateBB("FOR direction check (lower)", t);
    auto dirCheckBBHigher = CreateBB("FOR direction check (higher)", t);
    auto dirCheckBBEnd = CreateBB("FOR direction end", t);
    GetIR()->CreateCondBr(direction, dirCheckBBLower, dirCheckBBHigher);

    // Lower check
    AddBB(dirCheckBBLower);
    auto condL = llvm.ComparisonLT(GetIR(), nv, to);
    GetIR()->CreateStore(GetIR()->CreateTruncOrBitCast(condL.value, llvm.TypeBit), finished);
    GetIR()->CreateBr(dirCheckBBEnd);

    // Higher check
    AddBB(dirCheckBBHigher);
    auto condR = llvm.ComparisonGT(GetIR(), nv, to);
    GetIR()->CreateStore(GetIR()->CreateTruncOrBitCast(condR.value, llvm.TypeBit), finished);
    GetIR()->CreateBr(dirCheckBBEnd);

    // End of checks
    AddBB(dirCheckBBEnd);

    // Check if we hit the end previously
    GetIR()->CreateCondBr(GetIR()->CreateLoad(llvm.TypeBit, finished), endBB, bodyBB);

    // Body Terminator
    AddBB(endBB);
}

std::string Compiler::GetScratchName(size_t line) {
    return "Scratch: (" + std::to_string(line) + "):Index" + std::to_string(scratch_index++);
}


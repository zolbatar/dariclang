#include "Compiler.h"

void Compiler::CreateLookaheadProc(ParserToken &t) {
    Func f;

    // Build parameters
    for (auto &token: t.children) {
        if (token.type == ParserTokenType::PARAMETER) {
            f.parameters.push_back(token.data_type);
            f.llvm_parameters.push_back(llvm.TypeConversion(token.data_type));
            f.parameter_names.push_back(token.identifier);
        }
    }

    // Now create
    f.return_type = t.data_type;
    f.func = llvm.CreateFunc(t.identifier, llvm.TypeConversion(f.return_type), llvm::ArrayRef(f.llvm_parameters));
    procedures.insert(std::make_pair(t.identifier, f));
}

void Compiler::TokenProcedure(ParserToken &t) {
    auto f = &procedures.find(t.identifier)->second;
    procedure = f->func;
    return_type = t.data_type;
    procedure_ir = llvm.CreateBuilder(t.identifier + " Builder", procedure);

    // Create local variables for parameters
    auto i = 0;
    for (auto &Arg: f->func->args()) {
        auto instance = InstancePrimitive::Build(f->parameter_names[i],
                                                 f->parameters[i],
                                                 Scope::LOCAL,
                                                 llvm,
                                                 procedure_ir);
        instance->Set(&Arg, nullptr, 0, llvm, procedure_ir);
        i++;
    }

    CompileStatements(t.children);
    DefaultReturn(return_type, t);
    procedure = nullptr;
    Instance::ClearLocals(llvm);
}

void Compiler::TokenCall(ParserToken &token) {
    auto ee = procedures.find(token.identifier);
    if (ee == procedures.end()) {
        ProcedureNotFound(token, token.identifier);
    }
    auto f = &ee->second;

    // Right number of parameters?
    if (token.children.size() != f->parameters.size()) {
        RaiseException("Parameter mismatch", token);
    }

    // Compile parameters
    std::vector<llvm::Value *> vals;
    auto i = 0;
    for (auto &s: token.children) {
        auto vt = CompileExpression(s);
        if (vt.type != f->parameters[i]) {
            RaiseException("Parameter mismatch", token);
        }
        vals.push_back(vt.value);
        i++;
    }

    CreateCall(token.identifier, llvm::ArrayRef(vals));
}

void Compiler::TokenReturn(ParserToken &token) {
    CreateAndInsertBB("RETURN", true, token);
    if (token.children.empty()) {
        DefaultReturn(return_type, token);
    } else {
        auto ret_value = CompileExpression(token.children[0]);
        llvm.AutoConversion(GetIR(), ret_value, return_type);
        GetIR()->CreateRet(ret_value.value);
    }

    CreateAndInsertBB("RETURN end", false, token);
}

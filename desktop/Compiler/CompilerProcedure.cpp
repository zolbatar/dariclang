#include "Compiler.h"

void Compiler::CreateLookaheadProc(ParserToken &t) {
    Func f;

    // Build parameters
    for (auto &token: t.children) {
        auto ref = Reference::Get(token.reference);
        if (token.type == ParserTokenType::PARAMETER) {
            FuncParameter fp(ref, false);
            f.parameters.push_back(std::move(fp));
        } else if (token.type == ParserTokenType::PARAMETER_REF) {
            FuncParameter fp(ref, true);
            f.parameters.push_back(std::move(fp));
        } else {
            break;
        }
    }

    // Now create
    f.return_type = t.data_type;
    std::vector<llvm::Type *> types;
    for (auto &ff: f.parameters) {
        auto tt = ff.GetLLVMType(llvm);
        if (tt == nullptr)
            RaiseException("Error processing parameter '" + ff.GetName() + "'", t);
        types.push_back(tt);
    }
    f.func = llvm.CreateFunc(t.identifier, llvm.TypeConversion(f.return_type), llvm::ArrayRef(types));

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
        auto pp = &f->parameters[i];
        auto ref = pp->GetReference();
        ref->CreateInstance(llvm, GetIR(), Scope::LOCAL, pp->IsRef());
        if (!pp->IsRef()) {
            ref->GetInstance()->Set(&Arg, nullptr, 0, llvm, procedure_ir);
        } else {
            ref->GetInstance()->SetPointer(&Arg, nullptr, 0, llvm, procedure_ir);
        }
        //Arg.setName(pp->GetName() + " (Raw)");
        i++;
    }

    CompileStatements(t.children);
    if (!llvm.CheckReturn(GetIR())) {
        DefaultReturn(return_type, t);
    }
    procedure = nullptr;
    Instance::ClearLocals(llvm);
}

void Compiler::TokenCall(ParserToken &token) {
    auto ee = procedures.find(token.identifier);
    if (ee == procedures.end()) {
        // Check library
        auto lf = library.find(token.identifier);
        if (lf == library.end()) {
            ProcedureNotFound(token, token.identifier);
        }

        // Right number of parameters?
        if (token.children.size() != lf->second.parameters.size()) {
            RaiseException("Parameter mismatch", token);
        }

        // Compile parameters
        std::vector<llvm::Value *> vals;
        auto i = 0;
        for (auto &s: token.children) {
            auto pp = &lf->second.parameters[i];
            if (!pp->IsRef()) {
                auto vt = CompileExpression(s);
                if (!lf->second.parameters[i].ConvertToOutputValue(vt, GetIR(), llvm)) {
                    RaiseException("Parameter mismatch", token);
                }
                vals.push_back(vt.value);
            } else {
                assert(0);
            }
            i++;
        }

        CreateCall(lf->second.func_name, vals);
        return;
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
        auto pp = &f->parameters[i];
        if (!pp->IsRef()) {
            auto vt = CompileExpression(s);
            if (!f->parameters[i].ConvertToOutputValue(vt, GetIR(), llvm)) {
                RaiseException("Parameter mismatch", token);
            }
            vals.push_back(vt.value);
        } else {
            auto ref = Reference::Get(s.reference);
            if (!ref->InstanceExists())
                VariableNotFound(s, ref->GetName());
            if (!ref->FindInstanceUnknownInstanceType()) {
                VariableError(s, ref->GetName());
            }
            auto value = ref->GetPointer(option_base, ProcessIndices(ref, s), llvm, GetIR(), s);
            vals.push_back(value);
        }
        i++;
    }

    CreateCall(token.identifier, llvm::ArrayRef(vals));
}

void Compiler::TokenReturn(ParserToken &token) {
    if (token.children.empty()) {
        DefaultReturn(return_type, token);
    } else {
        auto ret_value = CompileExpression(token.children[0]);
        llvm.AutoConversion(GetIR(), ret_value, return_type);
        GetIR()->CreateRet(ret_value.value);
    }
}

#include "Compiler.h"

void Compiler::CreateLookaheadProc(ParserToken &t) {
    // Exists?
    if (procedures.contains(t.identifier)) {
        RaiseException("Procedure '" + t.identifier + "' already exists", t);
    }

    Func f;

    // Build parameters
    for (auto &token: t.children[0].children) {
        auto signature = TypeSignature::Get(token.signature);
        if (token.type == ParserTokenType::PARAMETER) {
            FuncParameter fp(signature, false);
            f.parameters.push_back(std::move(fp));
        } else if (token.type == ParserTokenType::PARAMETER_REF) {
            FuncParameter fp(signature, true);
            f.parameters.push_back(std::move(fp));
        } else {
            assert(0);
        }
    }

    // Now create
    auto call = BuildTypeCall(t);
    f.return_type = t.data_type;
    std::vector<llvm::Type *> types;
    for (auto &ff: f.parameters) {
        auto tt = ff.GetLLVMType(call);
        if (tt == nullptr)
            RaiseException("Error processing parameter '" + ff.GetName() + "'", t);
        types.push_back(tt);
    }
    f.func = llvm.CreateFunc(t.identifier, llvm.TypeConversion(f.return_type), llvm::ArrayRef(types));

    procedures.insert(std::make_pair(t.identifier, f));
}

void Compiler::TokenProcedure(ParserToken &t) {
    auto call = BuildTypeCall(t);
    auto f = &procedures.find(t.identifier)->second;
    procedure = f->func;
    return_type = t.data_type;
    procedure_pre_ir = llvm.CreateBuilder(t.identifier + " Pre-Builder", procedure);
    procedure_ir = llvm.CreateBuilder(t.identifier + " Builder", procedure);
    auto bb = procedure_ir->GetInsertBlock();

    // Create local variables for parameters
    auto i = 0;
    for (auto &Arg: f->func->args()) {
        auto pp = &f->parameters[i];
        auto signature = pp->GetSignature();
        signature->Create(call);
        ValueType vt;
        vt.value = &Arg;
        vt.type = signature->GetPrimitiveType(call);
        i++;
    }

    CompileStatements(t.children[1].children);
    llvm.ClearLocals();
    Instance::locals.clear();
    if (!llvm.CheckReturn(GetIR())) {
        DefaultReturn(return_type, t);
    }
    procedure_pre_ir->CreateBr(bb);
    procedure = nullptr;
    return_type = Primitive::NONE;
}

void Compiler::TokenCall(ParserToken &token) {
    auto call = BuildTypeCall(token);
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
        auto vt = CompileExpression(s);
        if (!pp->ConvertToOutputValue(vt, call)) {
            RaiseException("Parameter mismatch", token);
        }
        vals.push_back(vt.value);
        i++;
    }

    CreateCall(token.identifier, llvm::ArrayRef(vals));
}

void Compiler::TokenReturn(ParserToken &token) {
    if (token.children.empty()) {
        GCLocals();
        DefaultReturn(return_type, token);
    } else {
        auto ret_value = CompileExpression(token.children[0]);
        llvm.AutoConversion(GetIR(), ret_value, return_type);
        GCLocals();
        GetIR()->CreateRet(ret_value.value);
    }

    // We definitely want a new block here
    auto bb = CreateAndInsertBB("Post-RETURN", false, token);
    GetIR()->SetInsertPoint(bb);
}

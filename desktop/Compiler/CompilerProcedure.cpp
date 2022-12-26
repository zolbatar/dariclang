#include <vector>
#include "Compiler.h"

void Compiler::CreateLookaheadProc(ParserToken &t) {
    // Exists?
    if (procedures.contains(t.identifier)) {
        RaiseException("Procedure '" + t.identifier + "' already exists", t);
    }

    Func f;

    // Build parameters
    for (auto &token: t.children[0].children) {
        auto ref = Reference::Get(token.reference);
        if (token.type == ParserTokenType::PARAMETER) {
            FuncParameter fp(ref, false, false);
            f.parameters.push_back(std::move(fp));
        } else if (token.type == ParserTokenType::PARAMETER_ARRAY) {
            FuncParameter fp(ref, false, true);
            f.parameters.push_back(std::move(fp));
        } else if (token.type == ParserTokenType::PARAMETER_REF) {
            FuncParameter fp(ref, true, false);
            f.parameters.push_back(std::move(fp));
        } else {
            break;
        }
    }

    // Now create
    f.return_type = t.data_type;
    std::vector<llvm::Type *> types;
    for (auto &ff: f.parameters) {
        auto success = ff.GetLLVMType(types, llvm);
        if (!success)
            RaiseException("Error processing parameter '" + ff.GetName() + "'", t);
    }
    f.func = llvm.CreateFunc(t.identifier, llvm.TypeConversion(f.return_type), llvm::ArrayRef(types));

    procedures.insert(std::make_pair(t.identifier, f));
}

void Compiler::TokenProcedure(ParserToken &t) {
    auto f = &procedures.find(t.identifier)->second;
    procedure = f->func;
    return_type = t.data_type;
    procedure_pre_ir = llvm.CreateBuilder(t.identifier + " Pre-Builder", procedure);
    procedure_ir = llvm.CreateBuilder(t.identifier + " Builder", procedure);
    auto bb = procedure_ir->GetInsertBlock();

    // Create local variables for parameters
    auto i = 0;
    std::vector<llvm::Argument *> args_array;
    for (auto &Arg: f->func->args()) {
        args_array.push_back(&Arg);
    }
    for (auto arg_index = 0; arg_index < args_array.size(); arg_index++) {
        auto Arg = args_array[arg_index];
        auto pp = &f->parameters[i];
        auto ref = pp->GetReference();

        // Is this an array? If so we need to grab all 3 parameters as one, i.e. array, number of indices and indices array
        if (pp->IsArray()) {
            arg_index += 2;
        }

        this failed. we need to create a structure for arrays combining everything

        // Get the instance
        if (ref->FindInstance()) {
            RaiseException("Variable name '" + ref->GetName() + "' already exists, are you shadowing a global variable",
                           t);
        }

        // And create local variables
        if (!pp->IsArray()) {
            ref->CreateInstance(llvm, GetPreIR(), Scope::LOCAL, pp->IsRef());
            if (!pp->IsRef()) {
                ref->GetInstance()->Set(Arg, nullptr, 0, llvm, procedure_ir);
            } else {
                ref->GetInstance()->SetPointer(Arg, nullptr, 0, llvm, procedure_ir);
            }
        } else {
            ref->CreateInstance(llvm, GetPreIR(), Scope::LOCAL, pp->IsRef());
        }
        //Arg.setName(pp->GetName() + " (Raw)");
        i++;
    }

    CompileStatements(t.children[1].children);
    if (!llvm.CheckReturn(GetIR())) {
        DefaultReturn(return_type, t);
    }
    procedure_pre_ir->CreateBr(bb);
    procedure = nullptr;
    return_type = Primitive::NONE;
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
        if (pp->IsArray()) {
            auto ref = Reference::Get(s.reference);
            if (!ref->InstanceExists())
                VariableNotFound(s, ref->GetName());
            if (!ref->FindInstanceUnknownInstanceType()) {
                VariableError(s, ref->GetName());
            }
            if (ref->GetInstance()->GetScope() != Scope::LOCAL) {
                RaiseException("Can only pass local variables to procedures", token);
            }
            int a = 1;
        } else if (!pp->IsRef()) {
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
            if (!ref->GetInstance()->IsRef()) {
                // Primitive?
                // Is it already a passed parameter?
                vals.push_back(value);
            } else {
                // Arrays
                // Deref pointer
                switch (ref->GetInstanceType()) {
                    case InstanceType::RECORD:
                    case InstanceType::RECORD_ARRAY:
                        ref->SetStructName(ref->GetInstance()->GetStructName());
                        break;
                    default:
                        break;
                }
                std::vector<llvm::Type *> types;
                ref->GetLLVMType(false, false, types, llvm);
                auto v2 = GetIR()->CreateLoad(types[0], value);
                vals.push_back(v2);
            }
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

    // We definitely want a new block here
    auto bb = CreateAndInsertBB("Post-RETURN", false, token);
    GetIR()->SetInsertPoint(bb);
}

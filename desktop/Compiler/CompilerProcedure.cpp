#include "Compiler.h"

void Compiler::CreateLookaheadProc(ParserToken& t)
{
	Func f;

	// Build parameters
	for (auto& token : t.children)
	{
		auto ref = Reference::Get(token.reference);
		if (token.type == ParserTokenType::PARAMETER)
		{
			FuncParameter fp(ref, false);
			f.parameters.push_back(std::move(fp));
		}
		else if (token.type == ParserTokenType::PARAMETER_REF)
		{
			FuncParameter fp(ref, true);
			f.parameters.push_back(std::move(fp));
		}
	}

	// Now create
	f.return_type = t.data_type;
	std::vector<llvm::Type*> types;
	for (auto& ff : f.parameters)
	{
		types.push_back(ff.GetLLVMType(llvm));
	}
	f.func = llvm.CreateFunc(t.identifier, llvm.TypeConversion(f.return_type), llvm::ArrayRef(types));
	procedures.insert(std::make_pair(t.identifier, f));
}

void Compiler::TokenProcedure(ParserToken& t)
{
	auto f = &procedures.find(t.identifier)->second;
	procedure = f->func;
	return_type = t.data_type;
	procedure_ir = llvm.CreateBuilder(t.identifier + " Builder", procedure);

	// Create local variables for parameters
	auto i = 0;
	for (auto& Arg : f->func->args())
	{
//		Arg.setName(f->parameters[i].GetName());
		auto instance = InstancePrimitive::Build(f->parameters[i].GetName(),
			f->parameters[i].GetDataType(),
			Scope::LOCAL,
			llvm,
			procedure_ir);
		instance->Set(&Arg, nullptr, 0, llvm, procedure_ir);
		i++;
	}

	CompileStatements(t.children);
	if (!llvm.CheckReturn(GetIR()))
	{
		DefaultReturn(return_type, t);
	}
	procedure = nullptr;
	Instance::ClearLocals(llvm);
}

void Compiler::TokenCall(ParserToken& token)
{
	auto ee = procedures.find(token.identifier);
	if (ee == procedures.end())
	{
		// Check library
		auto lf = library.find(token.identifier);
		if (lf == library.end())
		{
			ProcedureNotFound(token, token.identifier);
		}

		// Right number of parameters?
		if (token.children.size() != lf->second.parameters.size())
		{
			RaiseException("Parameter mismatch", token);
		}

		// Compile parameters
		std::vector<llvm::Value*> vals;
		auto i = 0;
		for (auto& s : token.children)
		{
			auto vt = CompileExpression(s);
			llvm.AutoConversion(GetIR(), vt, lf->second.parameters[i]);
			if (vt.type != lf->second.parameters[i])
			{
				RaiseException("Parameter mismatch", token);
			}
			vals.push_back(vt.value);
			i++;
		}

		CreateCall(lf->second.func_name, vals);
		return;
	}
	auto f = &ee->second;

	// Right number of parameters?
	if (token.children.size() != f->parameters.size())
	{
		RaiseException("Parameter mismatch", token);
	}

	// Compile parameters
	std::vector<llvm::Value*> vals;
	auto i = 0;
	for (auto& s : token.children)
	{
		auto vt = CompileExpression(s);
		if (!f->parameters[i].ConvertToOutputValue(vt, GetIR(), llvm))
		{
			RaiseException("Parameter mismatch", token);
		}
		vals.push_back(vt.value);
		i++;
	}

	CreateCall(token.identifier, llvm::ArrayRef(vals));
}

void Compiler::TokenReturn(ParserToken& token)
{
	if (token.children.empty())
	{
		DefaultReturn(return_type, token);
	}
	else
	{
		auto ret_value = CompileExpression(token.children[0]);
		llvm.AutoConversion(GetIR(), ret_value, return_type);
		GetIR()->CreateRet(ret_value.value);
	}
}

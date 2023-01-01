#include "Compiler.h"

void Compiler::TokenContainer(ParserToken &t) {
	auto var = Reference::Get(t.reference);

	if (var->GetDataType() == Primitive::NONE) {
		if (!state.StructExists(var->GetStructName()))
			RecordNotFound(t, var->GetStructName());
	}

	if (procedure == nullptr) {
		if (t.scope != Scope::GLOBAL)
			return;
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::GLOBAL, false);
	} else {
		if (t.scope != Scope::LOCAL)
			return;
		var->CreateInstance(llvm, GetFunction(), return_type, GetIR(), Scope::LOCAL, false);
	}
}

void Compiler::TokenPlace(ParserToken &t) {
	// Destination
	Reference *ref = Reference::Get(t.reference);
	if (!ref->InstanceExists())
		VariableNotFound(t, ref->GetName());
	if (!ref->FindInstanceUnknownInstanceType()) {
		VariableError(t, ref->GetName());
	}

	// Source
	Reference *ref_in;
	ValueType value_type;
	if (t.children[0].type != ParserTokenType::VARIABLE) {
		ValueType vt = CompileExpression(t.children[0]);

		// Create temp var and store
		auto temp_name = GetScratchName(t.line);
		auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(vt.type), nullptr, temp_name);

		// if string, clone and add to permanent list so we dont unallocate
		if (ref->GetDataType() == Primitive::STRING) {
			auto vv = CreateCall("clone_string", vt.value);
			llvm.AddPermString(vv, GetIR());
			GetIR()->CreateStore(vv, scratch);
		} else {
			GetIR()->CreateStore(vt.value, scratch);
		}
		value_type.value = scratch;
	} else {
		ref_in = Reference::Get(t.children[0].reference);
		if (!ref_in->InstanceExists())
			VariableNotFound(t, ref_in->GetName());
		if (!ref_in->FindInstanceUnknownInstanceType()) {
			VariableError(t, ref_in->GetName());
		}

		// Correct type?
		if (ref_in->GetDataType() != ref->GetDataType() || ref_in->GetStructName() != ref->GetStructName()) {
			TypeError(t);
		}
		value_type.value = ref_in->GetPointer(option_base, ProcessIndices(ref_in, t), llvm, GetIR(), t);
	}

	// Check is a collection
	switch (ref->GetInstanceType()) {
		case InstanceType::VECTOR:
		case InstanceType::LIST:
		case InstanceType::STACK:
		case InstanceType::SET:
		case InstanceType::MAP:
		case InstanceType::QUEUE:
			break;
		default:
			RaiseException("Collection required for ->", t);
			break;
	}

	// Get collection var
	ValueType vt_var;
	ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

	// Store
	switch (ref->GetInstanceType()) {
		case InstanceType::VECTOR: {
			// Get collection index
			auto index = CompileExpression(ref->GetIndices()[0]);
			if (option_base)
				index.value = GetIR()->CreateSub(index.value, llvm::ConstantInt::get(llvm.TypeInt, 1));

			auto trueBB = CreateBB("Vector size check True", t);
			auto falseBB = CreateBB("Vector size check False", t);
			auto endBB = CreateBB("Vector size check End", t);
			auto vv = CreateCall("vector_size", {vt_var.value});
			auto comp = GetIR()->CreateICmpULT(index.value, vv);

			// Actual condition
			GetIR()->CreateCondBr(comp, trueBB, falseBB);

			// Create true block
			AddBB(trueBB);
			CreateCall("vector_set_at", {vt_var.value, index.value, value_type.value});
			GetIR()->CreateBr(endBB);

			// Create false block (create entry)
			AddBB(falseBB);
			CreateCall("vector_add_at", {vt_var.value, index.value, value_type.value});
			GetIR()->CreateBr(endBB);

			AddBB(endBB);
			break;
		}
		case InstanceType::LIST:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for LISTs", t);
			CreateCall("list_add_last", {vt_var.value, value_type.value});
			break;
		case InstanceType::QUEUE:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for QUEUEs", t);
			CreateCall("queue_push", {vt_var.value, value_type.value});
			break;
		case InstanceType::STACK:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for STACKs", t);
			CreateCall("stack_push", {vt_var.value, value_type.value});
			break;
		case InstanceType::SET:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for SETs", t);
			CreateCall("set_put", {vt_var.value, value_type.value});
			break;
		case InstanceType::MAP: {
			if (ref->GetIndices().size() != 1)
				RaiseException("Key required for MAP", t);

			auto key = CompileExpression(ref->GetIndices()[0]);
			if (key.type != ref->GetInstance()->GetDataType()) {
				TypeError(t);
			}

			// Clone key?
			auto temp_name = GetScratchName(t.line);
			auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(key.type), nullptr, temp_name);
			if (key.type == Primitive::STRING) {
				auto vv = CreateCall("clone_string", key.value);
				llvm.AddPermString(vv, GetIR());
				GetIR()->CreateStore(vv, scratch);
			} else {
				GetIR()->CreateStore(key.value, scratch);
			}
			CreateCall("map_put", {vt_var.value, scratch, value_type.value});
			break;
		}
		default:
			TypeError(t);
	}

	// If a struct, we clone strings so we don't have the "same" string in two places
	if (ref->GetDataType() == Primitive::NONE) {
		auto idx = state.GetStructIndex(ref->GetStructName());
		auto str = state.GetStruct(idx);
		auto struct_type = llvm.GetStruct(ref->GetStructName());

		// Any string fields?
		int i = 0;
		for (auto &f : str->fields) {
			if (f.type == Primitive::STRING) {
				auto gep = GetIR()->CreateStructGEP(struct_type, value_type.value, i);
				auto vv = CreateCall("clone_string", gep);
				GetIR()->CreateStore(vv, gep);
				llvm.AddPermString(vv, GetIR());
			}
			i++;
		}
	}
}

void Compiler::TokenFetch(ParserToken &t) {
	auto ref = Reference::Get(t.reference);
	if (!ref->InstanceExists())
		VariableNotFound(t, ref->GetName());
	if (!ref->FindInstanceUnknownInstanceType()) {
		VariableError(t, ref->GetName());
	}

	Reference *ref_in = Reference::Get(t.children[0].reference);
	if (!ref_in->InstanceExists()) {
		ref_in->CopyFrom(ref);
		ref_in->CreateInstance(llvm, GetFunction(), return_type, GetIR(), t.scope, false);
	}
	if (!ref_in->FindInstanceUnknownInstanceType()) {
		VariableError(t, ref_in->GetName());
	}

	// Check is a collection
	switch (ref->GetInstanceType()) {
		case InstanceType::VECTOR:
		case InstanceType::LIST:
		case InstanceType::STACK:
		case InstanceType::SET:
		case InstanceType::MAP:
		case InstanceType::QUEUE:
			break;
		default:
			RaiseException("Collection required for <-", t);
			break;
	}

	// Correct type?
	if (ref_in->GetDataType() != ref->GetDataType() || ref_in->GetStructName() != ref->GetStructName()) {
		TypeError(t);
	}

	// Get address of struct (or variable)
	ValueType value_type;
	value_type.value = ref_in->GetPointer(option_base, ProcessIndices(ref_in, t), llvm, GetIR(), t);

	// Get collection var
	ValueType vt_var;
	ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

	// Right type?
	switch (ref->GetInstanceType()) {
		case InstanceType::VECTOR: {
			// Get collection index
			auto index = CompileExpression(ref->GetIndices()[0]);
			if (option_base)
				index.value = GetIR()->CreateSub(index.value, llvm::ConstantInt::get(llvm.TypeInt, 1));

			CreateCall("vector_get_at", {value_type.value, vt_var.value, index.value});
			break;
		}
		case InstanceType::LIST:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for LISTs", t);
			CreateCall("list_get_last", {value_type.value, vt_var.value});
			CreateCall("list_remove_last", {vt_var.value});
			break;
		case InstanceType::QUEUE:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for QUEUEs", t);
			CreateCall("queue_pop", {value_type.value, vt_var.value});
			break;
		case InstanceType::STACK:
			if (!ref->GetIndices().empty())
				RaiseException("Indices not valid for STACKs", t);
			CreateCall("stack_pop", {value_type.value, vt_var.value});
			break;
		case InstanceType::MAP: {
			if (ref->GetIndices().size() != 1)
				RaiseException("Key required for MAP", t);
			auto key = CompileExpression(ref->GetIndices()[0]);
			if (key.type != ref->GetInstance()->GetDataType()) {
				TypeError(t);
			}
			auto temp_name = GetScratchName(t.line);
			auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(key.type), nullptr, temp_name);
			GetIR()->CreateStore(key.value, scratch);

			// Do we contain it?
			auto trueBB = CreateBB("Contains check True", t);
			auto endBB = CreateBB("Contains check End", t);
			auto contains = CreateCall("map_contains", {vt_var.value, scratch});
			auto comp = GetIR()->CreateICmpNE(contains, llvm::ConstantInt::get(llvm.TypeInt, 0));

			// Actual condition
			GetIR()->CreateCondBr(comp, trueBB, endBB);

			// Create true block
			AddBB(trueBB);
			CreateCall("map_get", {value_type.value, vt_var.value, scratch});
			GetIR()->CreateBr(endBB);

			AddBB(endBB);
			break;
		}
		default:
			TypeError(t);
	}
}

void Compiler::TokenClear(ParserToken &t) {
	auto ref = Reference::Get(t.reference);
	if (!ref->InstanceExists())
		VariableNotFound(t, ref->GetName());
	if (!ref->FindInstanceUnknownInstanceType()) {
		VariableError(t, ref->GetName());
	}
	ValueType vt_var;
	ref->GetInstance()->Get(vt_var, nullptr, 0, llvm, GetIR());

	// Indices?
	if (ref->GetIndices().empty()) {
		switch (ref->GetInstanceType()) {
			case InstanceType::VECTOR:
				CreateCall("vector_clear", {vt_var.value});
				break;
			case InstanceType::LIST:
				CreateCall("list_clear", {vt_var.value});
				break;
			case InstanceType::QUEUE:
				CreateCall("queue_clear", {vt_var.value});
				break;
			case InstanceType::STACK:
				CreateCall("stack_clear", {vt_var.value});
				break;
			case InstanceType::MAP:
				CreateCall("map_clear", {vt_var.value});
				break;
			case InstanceType::SET:
				CreateCall("set_clear", {vt_var.value});
				break;
			default:
				TypeError(t);
		}
	} else {
		// Get collection index
		auto index = CompileExpression(ref->GetIndices()[0]);
		if (option_base)
			index.value = GetIR()->CreateSub(index.value, llvm::ConstantInt::get(llvm.TypeInt, 1));

		switch (ref->GetInstanceType()) {
			case InstanceType::VECTOR:
				CreateCall("vector_remove_at", {vt_var.value, index.value});
				break;
			case InstanceType::LIST:
				CreateCall("list_remove_at", {vt_var.value, index.value});
				break;
			case InstanceType::SET: {
				if (ref->GetIndices().size() != 1)
					RaiseException("Key required for SET", t);
				auto key = CompileExpression(ref->GetIndices()[0]);
				if (key.type != ref->GetDataType()) {
					TypeError(t);
				}
				auto temp_name = GetScratchName(t.line);
				auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(key.type), nullptr, temp_name);
				GetIR()->CreateStore(key.value, scratch);
				CreateCall("set_remove", {vt_var.value, scratch});
				break;
			}
			case InstanceType::MAP: {
				if (ref->GetIndices().size() != 1)
					RaiseException("Key required for MAP", t);
				auto key = CompileExpression(ref->GetIndices()[0]);
				if (key.type != ref->GetInstance()->GetDataType()) {
					TypeError(t);
				}
				auto temp_name = GetScratchName(t.line);
				auto scratch = GetIR()->CreateAlloca(llvm.TypeConversion(key.type), nullptr, temp_name);
				GetIR()->CreateStore(key.value, scratch);

				// Do we contain it?
				auto trueBB = CreateBB("Contains check True", t);
				auto endBB = CreateBB("Contains check End", t);
				auto contains = CreateCall("map_contains", {vt_var.value, scratch});
				auto comp = GetIR()->CreateICmpNE(contains, llvm::ConstantInt::get(llvm.TypeInt, 0));

				// Actual condition
				GetIR()->CreateCondBr(comp, trueBB, endBB);

				// Create true block
				AddBB(trueBB);
				CreateCall("map_remove", {vt_var.value, scratch});

				// String key we need to release?
				if (key.type == Primitive::STRING) {
					llvm.ClearPermString(CreateCall("GetStringComp", {}), GetIR());
				}
				GetIR()->CreateBr(endBB);

				AddBB(endBB);
				break;
			}
			default:
				TypeError(t);
		}
	}
}

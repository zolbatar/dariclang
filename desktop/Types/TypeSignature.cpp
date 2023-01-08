#include "Type.h"

size_t TypeSignature::index_ptr = 0;
size_t TypeSignature::instance_ptr = 0;
std::map<std::string, std::shared_ptr<TypeSignature>> TypeSignature::signatures;
std::vector<std::shared_ptr<TypeSignature>> TypeSignature::signatures_by_index;

std::string TypeSignature::GetLatestInstanceIndex() {
	return " #" + std::to_string(instance_ptr++);
}

void TypeSignature::ClearStatic() {
	signatures.clear();
	signatures_by_index.clear();
}

void TypeSignature::ClearLocals() {
	std::list<std::string> to_remove;
	for (auto &k : signatures) {
		if (k.second->scope == Scope::LOCAL) {
			to_remove.push_back(k.first);
		}
	}
	for (auto tr : to_remove) {
		signatures.erase(tr);
	}
}

void TypeSignature::GCLocals(SignatureCall &call) {
	for (auto &k : signatures) {
		if (k.second->scope == Scope::LOCAL) {
			k.second->GarbageCollect(call);
		}
	}
}

std::list<ParserToken> &TypeSignature::GetExpressions() {
	return expressions;
}

llvm::Value *TypeSignature::LocalIndex(SignatureCall &call) {
	auto index = values[0].value;
	if (call.option_base)
		index = call.ir->CreateSub(index, llvm::ConstantInt::get(call.llvm.TypeInt, 1));
	auto glob_v = call.llvm.GetLocal(name);
	auto glob = call.llvm.GetLocalArrayDimensions(name);
	for (size_t i = 0; i < num_dimensions - 1; i++) {
		// Get array entry from dimensions
		auto ptr = call.ir->CreateGEP(call.llvm.TypeInt,
									  glob,
									  {llvm::ConstantInt::get(call.llvm.TypeInt, i)});
		auto size = call.ir->CreateLoad(call.llvm.TypeInt, ptr);

		// 0 or 1 base index
		auto value = values[i + 1].value;
		if (call.option_base)
			value = call.ir->CreateSub(value, llvm::ConstantInt::get(call.llvm.TypeInt, 1));

		// Now multiply this dimension and add to the current index
		auto m = call.ir->CreateMul(size, value);
		index = call.ir->CreateAdd(index, m);
	}
	return call.ir->CreateGEP(glob_v->getAllocatedType(), glob_v, {index});
}

llvm::Value *TypeSignature::GlobalIndexPtr(SignatureCall &call) {
	auto index = values[0].value;
	if (call.option_base)
		index = call.ir->CreateSub(index, llvm::ConstantInt::get(call.llvm.TypeInt, 1));
	auto glob = call.llvm.GetGlobalArrayDimensions(name);
	for (size_t i = 0; i < num_dimensions - 1; i++) {

		// Get array entry from dimensions
		auto size_v = llvm::ArrayType::get(call.llvm.TypeInt, num_dimensions);
		auto ptr = call.ir->CreateGEP(size_v, glob, {llvm::ConstantInt::get(call.llvm.TypeInt, 0), llvm::ConstantInt::get(call.llvm.TypeInt, i)});
		auto size = call.ir->CreateLoad(call.llvm.TypeInt, ptr);

		// 0 or 1 base index
		auto value = values[i + 1].value;
		if (call.option_base)
			value = call.ir->CreateSub(value, llvm::ConstantInt::get(call.llvm.TypeInt, 1));

		// Now multiply this dimension and add to the current index
		auto m = call.ir->CreateMul(size, value);
		index = call.ir->CreateAdd(index, m);
	}
	return index;
}

llvm::Value *TypeSignature::GlobalIndex(SignatureCall &call) {
	auto glob_v = call.llvm.GetGlobal(name);
	auto index = GlobalIndexPtr(call);
	return call.ir->CreateGEP(glob_v->getValueType(), glob_v, {llvm::ConstantInt::get(call.llvm.TypeInt, 0), index});
}

std::shared_ptr<TypeSignature> TypeSignature::GetByName(const std::string &name) {
	auto f = signatures.find(name);
	if (f == signatures.end())
		return nullptr;
	return f->second;
}


/*
 *
 *
 * void CompilerLLVM::GCCollections(llvm::IRBuilder<> *ir) {
    for (auto &l: local_collections) {
        switch (l.type) {
            case CollectionType::Vector:
                ir->CreateCall(Module->getFunction("vector_destroy"), {l.alloc});
                break;
            case CollectionType::List:
                ir->CreateCall(Module->getFunction("list_destroy"), {l.alloc});
                break;
            case CollectionType::Map:
                ir->CreateCall(Module->getFunction("map_destroy"), {l.alloc});
                break;
            case CollectionType::Stack:
                ir->CreateCall(Module->getFunction("stack_destroy"), {l.alloc});
                break;
            case CollectionType::Queue:
                ir->CreateCall(Module->getFunction("queue_destroy"), {l.alloc});
                break;
            case CollectionType::Set:
                ir->CreateCall(Module->getFunction("set_destroy"), {l.alloc});
                break;
        }
    }
}


 void Compiler::GCLocals() {
    // Local vars
    for (auto &l: Instance::locals) {
        auto var = llvm.locals[l.first];
        if (l.second->GetInstanceType() == InstanceType::PRIMITIVE && l.second->GetType() == Primitive::STRING) {
            llvm.ClearPermString(GetIR()->CreateLoad(llvm.TypeString, var), GetIR());
        } else if (l.second->GetInstanceType() == InstanceType::RECORD) {
            // Is this a record?
            auto idx = state.GetStructIndex(l.second->GetStructName());
            auto str = state.GetStruct(idx);

            // Any string fields?
            int i = 0;
            for (auto &f: str->fields) {
                if (f.type == Primitive::STRING) {
                    auto gep = GetIR()->CreateStructGEP(l.second->GetStructType(), var, i);
                    llvm.ClearPermString(GetIR()->CreateLoad(llvm.TypeString, gep), GetIR());
                }
                i++;
            }
        }
    }
}



 */
#include "../Variables/PrimitiveTypes.h"
#include "Type.h"

size_t TypeSignature::index_ptr = 0;
size_t TypeSignature::instance_ptr = 0;
std::map<std::string, std::shared_ptr<TypeSignature>> TypeSignature::signatures;
std::vector<std::shared_ptr<TypeSignature>> TypeSignature::signatures_by_index;

std::string TypeSignature::GetLatestInstanceIndex() {
    return " #" + std::to_string(instance_ptr++);
}

void TypeSignature::ClearLocals() {
    std::list<std::string> to_remove;
    for (auto &k: signatures) {
        if (k.second->scope == Scope::LOCAL) {
            to_remove.push_back(k.first);
        }
    }
    for (auto tr: to_remove) {
        signatures.erase(tr);
    }
}


std::list<ParserToken> &TypeSignature::GetExpressions() {
    return expressions;
}

/*void TypeSignature::SetValues(std::vector<ValueType> values) {
    this->values = values;
}*/

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

std::shared_ptr<TypeSignature> TypeSignature::GetByName(std::string name) {
    auto f = signatures.find(name);
    if (f == signatures.end())
        return nullptr;
    return f->second;
}



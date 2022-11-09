#include "CompilerLLVM.h"

llvm::StructType *CompilerLLVM::CreateStruct(std::string name, std::vector<Type> types) {

    // Exist?
    if (structs.contains(name))
        return nullptr;

    // Build LLVM struct
    std::vector<llvm::Type *> members;
    for (int i = 0; i < types.size(); i++) {
        switch (types[i].GetType()) {
            case Primitive::INT:
                members.push_back(TypeInt);
                break;
            case Primitive::FLOAT:
                members.push_back(TypeFloat);
                break;
            case Primitive::STRING:
                members.push_back(TypeString);
                break;
            default:
                return nullptr;
        }
    }

    auto s = llvm::StructType::create(Module->getContext(),
                                      llvm::ArrayRef<llvm::Type *>(members),
                                      name);
    structs.insert(std::make_pair(name, s));
    return s;
}

llvm::StructType *CompilerLLVM::GetStruct(std::string name) {
    auto f = structs.find(name);
    if (f == structs.end())
        return nullptr;
    return f->second;
}


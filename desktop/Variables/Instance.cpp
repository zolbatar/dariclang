#include "Instance.h"

std::unordered_map<std::string, std::shared_ptr<Instance>> Instance::locals;
std::unordered_map<std::string, std::shared_ptr<Instance>> Instance::globals;

void Instance::ClearLocals(CompilerLLVM &llvm) {
    llvm.ClearLocals();
    locals.clear();
}

bool Instance::Exists(std::string name) {
    if (locals.contains(name))
        return true;
    if (globals.contains(name))
        return true;
    return false;
}

std::shared_ptr<Instance> Instance::FindInstance(std::string name) {
    if (locals.contains(name))
        return locals.find(name)->second;
    if (globals.contains(name))
        return globals.find(name)->second;
    return nullptr;
}




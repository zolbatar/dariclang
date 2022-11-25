#include "Reference.h"
#include <utility>

std::unordered_map<size_t, Reference> Reference::references;
size_t Reference::index_ptr = 0;

Reference::Reference(SharedState &state, std::string name) : state(state) {
    this->name = std::move(name);
    this->index = index_ptr++;
}

Reference *Reference::Create(SharedState &state, std::string name) {
    auto ref = Reference(state, std::move(name));
    auto index = ref.index;
    references.insert(std::make_pair(ref.index, ref));
    return &references.find(index)->second;
}

Reference *Reference::Get(size_t index) {
    return &references.find(index)->second;
}

void Reference::SetAsArray() {
    instance_type = InstanceType::ARRAY;
}

void Reference::SetAsStruct() {
    instance_type = InstanceType::RECORD;
}

void Reference::SetAsStructArray() {
    instance_type = InstanceType::RECORD_ARRAY;
}

void Reference::AddIndexRef(ParserToken &&token) {
    indices.push_back(token);
}

bool Reference::InstanceExists() {
    return Instance::Exists(name);
}

bool Reference::FindInstanceUnknownInstanceType() {
    instance = Instance::FindInstance(name);
    if (!instance)
        return false;
    this->data_type = instance->GetType();

    // Validate
    instance_type = instance->GetInstanceType();
//    if (instance->IndicesCount() != indices.size())
//        return false;

    return true;
}

bool Reference::FindInstance() {
    instance = Instance::FindInstance(name);
    if (!instance)
        return false;
    this->data_type = instance->GetType();

    // Validate
    if (instance->GetInstanceType() != instance_type)
        return false;
    if (instance->IndicesCount() != indices.size())
        return false;

    return true;
}

void Reference::CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope, bool is_ref) {
    switch (instance_type) {
        case InstanceType::PRIMITIVE:
            instance = InstancePrimitive::Build(name, data_type, scope, llvm, ir, is_ref);
            break;
        case InstanceType::ARRAY:
            instance = InstancePrimitiveArray::Build(name, data_type, scope, indices.size(), llvm, ir);
            break;
        case InstanceType::RECORD:
            SetLLVMStructType(llvm.GetStruct(GetStructName()));
            instance = InstanceRecord::Build(name, struct_name, llvm_struct_type, scope, llvm, ir, is_ref);
            break;
        case InstanceType::RECORD_ARRAY:
            SetLLVMStructType(llvm.GetStruct(GetStructName()));
            instance = InstanceRecordArray::Build(name, struct_name, llvm_struct_type, scope, indices.size(), llvm, ir);
            break;
        default:
            assert(0);
    }
}

void Reference::SetValue(ValueType vt,
                         const std::vector<ValueType> &indices_val,
                         CompilerLLVM &llvm,
                         llvm::IRBuilder<> *ir,
                         ParserToken &token) {
    switch (instance_type) {
        case InstanceType::PRIMITIVE:
            instance->Set(vt.value, nullptr, 0, llvm, ir);
            break;
        case InstanceType::ARRAY:
            instance->Set(vt.value, instance->GetScope() == Scope::GLOBAL
                                    ? GlobalIndex(indices_val, llvm, ir)
                                    : LocalIndex(indices_val, llvm, ir),
                          0, llvm, ir);
            break;
        case InstanceType::RECORD: {
            auto ss = FindFieldInStruct(token, llvm);
            instance->Set(vt.value, nullptr, ss.index, llvm, ir);
            break;
        }
        case InstanceType::RECORD_ARRAY: {
            auto ss = FindFieldInStruct(token, llvm);
            instance->Set(vt.value, instance->GetScope() == Scope::GLOBAL
                                    ? GlobalIndex(indices_val, llvm, ir)
                                    : LocalIndex(indices_val, llvm, ir),
                          ss.index, llvm, ir);
            break;
        }
        default:
            assert(0);
    }
}

llvm::Value *Reference::GetPointer(const std::vector<ValueType> &indices_val,
                                   CompilerLLVM &llvm,
                                   llvm::IRBuilder<> *ir,
                                   ParserToken &token) {
    switch (instance_type) {
        case InstanceType::RECORD:
        case InstanceType::PRIMITIVE: {
            if (instance->GetScope() == Scope::GLOBAL) {
                return llvm.globals[name];
            } else if (instance->GetScope() == Scope::LOCAL) {
                return llvm.locals[name];
            }
        }
        case InstanceType::ARRAY:
        case InstanceType::RECORD_ARRAY: {
            if (instance->GetScope() == Scope::GLOBAL) {
                return GlobalIndex(indices_val, llvm, ir);
            } else if (instance->GetScope() == Scope::LOCAL) {
                return LocalIndex(indices_val, llvm, ir);
            }
        }
        default:
            assert(0);
    }
}

ValueType Reference::GetValue(const std::vector<ValueType> &indices_val,
                              CompilerLLVM &llvm,
                              llvm::IRBuilder<> *ir,
                              ParserToken &token) {
    ValueType vt;
    switch (instance_type) {
        case InstanceType::PRIMITIVE:
            instance->Get(vt, nullptr, 0, llvm, ir);
            break;
        case InstanceType::ARRAY:
            instance->Get(vt, instance->GetScope() == Scope::GLOBAL
                              ? GlobalIndex(indices_val, llvm, ir)
                              : LocalIndex(indices_val, llvm, ir),
                          0, llvm, ir);
            break;
        case InstanceType::RECORD: {
            auto ss = FindFieldInStruct(token, llvm);
            vt.type = ss.member->type;
            instance->Get(vt, nullptr, ss.index, llvm, ir);
            break;
        }
        case InstanceType::RECORD_ARRAY: {
            auto ss = FindFieldInStruct(token, llvm);
            vt.type = ss.member->type;
            instance->Get(vt, instance->GetScope() == Scope::GLOBAL
                              ? GlobalIndex(indices_val, llvm, ir)
                              : LocalIndex(indices_val, llvm, ir),
                          ss.index, llvm, ir);
            break;
        }
        default:
            assert(0);
    }
    return vt;
}

StructSearch Reference::FindFieldInStruct(ParserToken &token, CompilerLLVM &llvm) {
    StructSearch ss;
    if (instance->GetInstanceType() != InstanceType::RECORD && instance->GetInstanceType() != InstanceType::RECORD_ARRAY) {
        RaiseException("Record fields only valid for records", token);
    }
    ss.struct_name = instance->GetStructName();// llvm.GetStructForVariable(GetName());
    auto si = state.GetStruct(state.GetStructIndex(ss.struct_name));

    // Is this a valid field?
    for (auto i = 0; i < si->fields.size(); i++) {
        if (si->fields[i].name == GetFields()) {
            ss.index = i;
            ss.member = &si->fields[i];
            return ss;
        }
    }
    RaiseException("Field '" + GetFields() + "' not found in record '" + ss.struct_name + "'", token);
    return ss;
}

llvm::Value *Reference::LocalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    auto index = indices_val[0].value;
    auto glob_v = llvm.GetLocal(name);
    auto glob = llvm.GetLocalArrayDimensions(name);
    for (auto i = 0; i < indices_val.size() - 1; i++) {
        // Get array entry from dimensions
        auto ptr = ir->CreateGEP(llvm.TypeInt,
                                 glob,
                                 {llvm::ConstantInt::get(llvm.TypeInt, i)});
        auto size = ir->CreateLoad(llvm.TypeInt, ptr);

        // Now multiply this dimension and add to the current index
        auto m = ir->CreateMul(size, indices_val[i + 1].value);
        index = ir->CreateAdd(index, m);
    }
    return ir->CreateGEP(glob_v->getAllocatedType(), glob_v, {index});
}

llvm::Value *Reference::GlobalIndexPtr(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    auto index = indices_val[0].value;
    auto glob = llvm.GetGlobalArrayDimensions(name);
    for (auto i = 0; i < indices_val.size() - 1; i++) {

        // Get array entry from dimensions
        auto ptr = ir->CreateGEP(llvm.TypeInt, glob, {llvm::ConstantInt::get(llvm.TypeInt, i)});
        auto size = ir->CreateLoad(llvm.TypeInt, ptr);

        // Now multiply this dimension and add to the current index
        auto m = ir->CreateMul(size, indices_val[i + 1].value);
        index = ir->CreateAdd(index, m);
    }
    return index;
}

llvm::Value *Reference::GlobalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    auto glob_v = llvm.GetGlobal(name);
    auto index = GlobalIndexPtr(indices_val, llvm, ir);
    return ir->CreateGEP(glob_v->getValueType(), glob_v, {llvm::ConstantInt::get(llvm.TypeInt, 0), index});
}

std::vector<ParserToken> &Reference::GetIndices() {
    return indices;
}

size_t Reference::IndicesCount() const { return indices.size(); }




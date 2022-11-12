#include "Reference.h"
#include "../Parser/Parser.h"
#include <utility>

std::vector<Reference> Reference::references;
size_t Reference::index_ptr = 0;

Reference::Reference(SharedState &state, std::string name) : state(state) {
    this->name = std::move(name);
    this->index = index_ptr++;
}

Reference *Reference::Create(SharedState &state, std::string name) {
    references.emplace_back(Reference(state, std::move(name)));
    auto r = &references.back();
    return r;
}

Reference *Reference::Get(size_t index) {
    return &references[index];
}

void Reference::SetAsArray(size_t size) {
    instance_type = InstanceType::ARRAY;
    no_indices = size;
}

void Reference::SetAsStruct() {
    instance_type = InstanceType::STRUCT;
}

void Reference::AddIndexRef(ParserToken &&token) {
    indices.push_back(token);
}

bool Reference::InstanceExists() {
    return Instance::Exists(name);
}

bool Reference::FindInstance() {
    instance = Instance::FindInstance(name);
    this->data_type = instance->GetDataType();

    // Validate
    if (instance->GetInstanceType() != instance_type) return false;
    if (instance->IndicesCount() != no_indices) return false;

    return true;
}

void Reference::CreateInstance(CompilerLLVM &llvm, llvm::IRBuilder<> *ir, Scope scope) {
    switch (instance_type) {
        case InstanceType::PRIMITIVE:
            instance = Instance::SimpleInstance(name, data_type, scope, llvm, ir);
            break;
        case InstanceType::ARRAY:
            instance = Instance::ArrayInstance(name, data_type, scope, no_indices, llvm, ir);
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
            instance->SetSimpleValue(vt.value, llvm, ir);
            break;
        case InstanceType::ARRAY:
            instance->SetArrayValue(vt.value, instance->GetScope() == Scope::GLOBAL
                                              ? GlobalIndex(indices_val, llvm, ir)
                                              : LocalIndex(indices_val, llvm, ir),
                                    llvm, ir);
            break;
        case InstanceType::STRUCT: {
            auto ss = FindFieldInStruct(token, llvm);
            switch (GetScope()) {
                case Scope::LOCAL:
                    llvm.StoreStructLocal(GetName(),
                                          ir,
                                          vt.value,
                                          ss.index,
                                          llvm.GetStruct(ss.struct_name));
                    break;
                case Scope::GLOBAL:
                    llvm.StoreStructGlobal(GetName(),
                                           ir,
                                           vt.value,
                                           ss.index,
                                           llvm.GetStruct(ss.struct_name));
                    break;
                default:
                    assert(0);
            }
            break;
        }
        default:
            assert(0);
    }
}

StructSearch Reference::FindFieldInStruct(ParserToken &token, CompilerLLVM &llvm) {
    StructSearch ss;
    if (!llvm.IsVariableStruct(GetName())) {
        RaiseException("Record fields only valid for records", token);
    }
    ss.struct_name = llvm.GetStructForVariable(GetName());
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

ValueType Reference::GetValue(const std::vector<ValueType> &indices_val,
                              CompilerLLVM &llvm,
                              llvm::IRBuilder<> *ir,
                              ParserToken &token) {
    switch (instance_type) {
        case InstanceType::PRIMITIVE:
            return instance->GetSimpleValue(llvm, ir);
        case InstanceType::ARRAY:
            return instance->GetArrayValue(instance->GetScope() == Scope::GLOBAL
                                           ? GlobalIndex(indices_val, llvm, ir)
                                           : LocalIndex(indices_val, llvm, ir),
                                           llvm, ir);
        case InstanceType::STRUCT: {
            auto ss = FindFieldInStruct(token, llvm);
            ValueType vt{.type = ss.member->type};
            switch (GetScope()) {
                case Scope::LOCAL:
                    vt.value = llvm.GetStructLocal(GetName(),
                                                   ir,
                                                   ss.index,
                                                   llvm.GetStruct(ss.struct_name),
                                                   llvm.TypeConversion(vt.type));
                    return vt;
                case Scope::GLOBAL:
                    vt.value = llvm.GetStructGlobal(GetName(),
                                                    ir,
                                                    ss.index,
                                                    llvm.GetStruct(ss.struct_name),
                                                    llvm.TypeConversion(vt.type));
                    return vt;
                default:
                    assert(0);
            }
        }
        default:
            assert(0);
    }
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

llvm::Value *Reference::GlobalIndex(std::vector<ValueType> indices_val, CompilerLLVM &llvm, llvm::IRBuilder<> *ir) {
    auto index = indices_val[0].value;
    auto glob_v = llvm.GetGlobal(name);
    auto glob = llvm.GetGlobalArrayDimensions(name);
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
    return ir->CreateGEP(glob_v->getValueType(), glob_v, {llvm::ConstantInt::get(llvm.TypeInt, 0), index});
}

std::vector<ParserToken> &Reference::GetIndices() {
    return indices;
}
size_t Reference::IndicesCount() const { return no_indices; }




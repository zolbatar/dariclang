#include "TypeRecordArray.h"

TypeRecordArray::TypeRecordArray(SourceFileData &state,
                                 std::string name,
                                 std::string struct_name,
                                 std::list<ParserToken> expressions,
                                 Scope scope) : TypeRecord(state, name, struct_name, expressions, scope) {
    this->clazz = SignatureClass::RecordArray;
    this->num_dimensions = expressions.size();
}

std::shared_ptr<TypeSignature> TypeRecordArray::Create(SourceFileData &state,
                                                       Scope scope,
                                                       std::string name,
                                                       std::string struct_name,
                                                       std::list<ParserToken> expressions) {
    std::shared_ptr<TypeRecordArray> v = std::make_shared<TypeRecordArray>(TypeRecordArray(state, name, struct_name, expressions, scope));
    signatures_by_index.push_back(v);
    signatures.emplace(name, v);
    return v;
}

std::shared_ptr<TypeSignature> TypeRecordArray::CreateLink(SourceFileData &state,
                                                      std::string field) {
    std::shared_ptr<TypeRecordArray> v = std::make_shared<TypeRecordArray>(TypeRecordArray(state, name, struct_name, {}, scope));
    v->created = true;
    v->SetField(field);
    signatures_by_index.push_back(v);
    signatures.emplace(name + GetLatestInstanceIndex(), v);
    return v;
}

bool TypeRecordArray::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypeRecordArray &>(other);
    if (ct.num_dimensions != this->num_dimensions)
        return false;
    return true;
}

bool TypeRecordArray::Matches(std::string struct_name,
                              std::list<ParserToken> &expressions) {
    if (expressions.size() != num_dimensions)
        return false;
    return this->struct_name == struct_name;
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeRecordArray::FindRecordArray(
        std::string name,
        std::string struct_name,
        std::list<ParserToken> &expressions) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::RecordArray)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    // Now specific class matching
    auto ct = std::dynamic_pointer_cast<TypeRecordArray>(sig->second);
    if (ct.get()->Matches(struct_name, expressions)) {
        return std::make_tuple(FindResult::OK, sig->second);
    }

    return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeRecordArray::FindRecordArray(
        std::string name,
        std::list<ParserToken> &expressions) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::RecordArray)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    return std::make_tuple(FindResult::OK, sig->second);
}

void TypeRecordArray::Create(SignatureCall &call) {
    auto si = GetStructInfo();
    auto llvm_struct_type = call.llvm.GetStruct(struct_name);

    switch (scope) {
        case Scope::LOCAL: {
            CreateLocalDimensions(call, llvm_struct_type);
        }
        case Scope::GLOBAL: {
            CreateGlobalDimensions(call, llvm_struct_type);
        }
    }

    created = true;
}

ValueType TypeRecordArray::Get(SignatureCall &call) {
    auto struct_type = call.llvm.GetStruct(struct_name);
    auto si = GetStructInfo();
    auto index = si->field_mappings.find(field_name)->second;
    ValueType vt;
    vt.type = si->fields[index].type;
    if (scope == Scope::GLOBAL) {
        assert(call.llvm.globals.contains(name));
        auto gep = call.ir->CreateStructGEP(struct_type, call.llvm.GetGlobal(name), index);
        vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(vt.type), gep);
    } else {
        assert(call.llvm.locals.contains(name));
        if (!is_ref) {
            auto gep = call.ir->CreateStructGEP(struct_type, call.llvm.GetLocal(name), index);
            vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(vt.type), gep);
        } else {
            auto pt = llvm::PointerType::get(struct_type, 0);
            auto p = call.ir->CreateLoad(pt, call.llvm.GetLocal(name));
            auto gep = call.ir->CreateStructGEP(struct_type, p, index);
            vt.value = call.ir->CreateLoad(call.llvm.TypeConversion(vt.type), gep);
        }
    }
    return vt;
}

void TypeRecordArray::Set(SignatureCall &call, ValueType value) {
    auto struct_type = call.llvm.GetStruct(struct_name);
    auto si = GetStructInfo();
    auto index = si->field_mappings.find(field_name)->second;
    if (scope == Scope::GLOBAL) {
        assert(call.llvm.globals.contains(name));
        auto gep = call.ir->CreateStructGEP(struct_type, call.llvm.GetGlobal(name), index);
        call.ir->CreateStore(value.value, gep);
    } else {
        assert(call.llvm.locals.contains(name));
        auto gep = call.ir->CreateStructGEP(struct_type, call.llvm.GetLocal(name), index);
        call.ir->CreateStore(value.value, gep);
    }
}

void TypeRecordArray::CreateLocalDimensions(SignatureCall &call, llvm::StructType *type2) {
    // Store dimensions (list of dimensions)
    auto la = call.llvm.CreateLocalArrayStage1(name, call.ir, values.size(), Primitive::INT);
    llvm::Value *size = llvm::ConstantInt::get(call.llvm.TypeInt, 1);
    size_t i = 0;
    for (auto &iv: values) {
        size = call.ir->CreateMul(size, iv.value);
        auto ptr = call.ir->CreateGEP(call.llvm.TypeInt, la, {llvm::ConstantInt::get(call.llvm.TypeInt, i)});
        call.ir->CreateStore(size, ptr);
        i++;
    }

    // Create array
    call.llvm.CreateLocalArrayStage2(name, call.ir, size, type2);
}

void TypeRecordArray::CreateGlobalDimensions(SignatureCall &call, llvm::StructType *type2) {
    // Check indices are integers
    std::vector<unsigned> indices;
    for (auto &s: expressions) {
        if (s.type != ParserTokenType::LITERAL && s.data_type != Primitive::INT) {
            // All dimensions need to be literals
            RaiseException("For global arrays, dimensions need to be literal integers", s);
        }
        indices.push_back(s.literal.iv);
    }

    size_t size = 1;
    auto typ = llvm::ArrayType::get(call.llvm.TypeInt, indices.size());
    std::vector<llvm::Constant *> values;
    for (auto &iv: indices) {
        size *= iv;
        values.push_back(llvm::ConstantInt::get(call.llvm.TypeInt, size));
    }
    auto init = llvm::ConstantArray::get(typ, values);
    auto size_v = llvm::ArrayType::get(type2, size);
    call.llvm.CreateGlobalArray(name, typ, init, indices.size(), size_v, Primitive::NONE);
}


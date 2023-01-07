#include "TypeRecord.h"

TypeRecord::TypeRecord(SourceFileData &state,
                       std::string name,
                       std::string struct_name,
                       std::list<ParserToken> initialisers,
                       Scope scope) : TypeSignature(state) {
    this->index = index_ptr++;
    this->clazz = SignatureClass::Record;
    this->scope = scope;
    this->name = name;
    this->struct_name = struct_name;
    this->expressions = initialisers;
}

std::shared_ptr<TypeSignature> TypeRecord::Create(SourceFileData &state,
                                                  Scope scope,
                                                  std::string name,
                                                  std::string struct_name,
                                                  std::list<ParserToken> initialisers) {
    std::shared_ptr<TypeRecord> v = std::make_shared<TypeRecord>(TypeRecord(state, name, struct_name, initialisers, scope));
    signatures_by_index.push_back(v);
    signatures.emplace(name, v);
    return v;
}

std::shared_ptr<TypeSignature> TypeRecord::CreateLink(SourceFileData &state,
                                                      std::string field) {
    std::shared_ptr<TypeRecord> v = std::make_shared<TypeRecord>(TypeRecord(state, name, struct_name, {}, scope));
    v->created = true;
    v->SetField(field);
    signatures_by_index.push_back(v);
    signatures.emplace(name + GetLatestInstanceIndex(), v);
    return v;
}

bool TypeRecord::operator==(TypeSignature &other) {
    if (other.GetClass() != this->clazz)
        return false;
    auto ct = dynamic_cast<TypeRecord &>(other);
    return true;
}

bool TypeRecord::Matches(std::string struct_name) {
    return this->struct_name == struct_name;
}

void TypeRecord::SetField(std::string field) {
    this->field_name = field;
}

Primitive TypeRecord::GetPrimitiveType(SignatureCall &call) {
    auto si = GetStructInfo();
    auto index = si->field_mappings.find(field_name)->second;
    return si->fields[index].type;
}

StructInfo *TypeRecord::GetStructInfo() {
    auto struct_index = state.GetStructIndex(struct_name);
    return state.GetStruct(struct_index);
}

bool TypeRecord::HasField(std::string field) {
    auto si = GetStructInfo();
    return (si->field_mappings.contains(field));
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeRecord::FindRecordSingle(
        std::string name,
        std::string struct_name) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::Record)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    // Now specific class matching
    auto ct = std::dynamic_pointer_cast<TypeRecord>(sig->second);
    if (ct.get()->Matches(struct_name)) {
        return std::make_tuple(FindResult::OK, sig->second);
    }

    return std::make_tuple(FindResult::NO_MATCH, nullptr);
}

std::tuple<FindResult, std::shared_ptr<TypeSignature>> TypeRecord::FindRecordSingle(
        std::string name) {

    // Find by name
    auto sig = signatures.find(name);
    if (sig == signatures.end())
        return std::make_tuple(FindResult::NOT_FOUND, nullptr);

    // Ensure is correct class
    if (sig->second.get()->GetClass() != SignatureClass::Record)
        return std::make_tuple(FindResult::INCORRECT_CLASS, nullptr);

    return std::make_tuple(FindResult::OK, sig->second);
}

void TypeRecord::Create(SignatureCall &call) {
    auto si = GetStructInfo();
    auto llvm_struct_type = call.llvm.GetStruct(struct_name);

    // Create LLVM struct instance
    switch (scope) {
        case Scope::LOCAL: {
            if (is_ref) {
                auto pt = llvm::PointerType::get(llvm_struct_type, 0);
                call.llvm.locals[name] = call.ir->CreateAlloca(pt, nullptr, name);
            } else {
                call.llvm.locals[name] = call.ir->CreateAlloca(llvm_struct_type, nullptr, name);
            }
            break;
        }
        case Scope::GLOBAL: {
            call.llvm.globals[name] = new llvm::GlobalVariable(*call.llvm.Module,
                                                               llvm_struct_type,
                                                               false,
                                                               call.llvm.GetLinkage(),
                                                               llvm::ConstantAggregateZero::get(llvm_struct_type),
                                                               name);
            break;
        }
    }

    // Zero out
    llvm::Constant *size = llvm::ConstantInt::get(call.llvm.TypeInt, call.llvm.dl->getTypeAllocSize(llvm_struct_type));
    if (scope == Scope::GLOBAL) {
        auto v = call.ir->CreatePointerCast(call.llvm.GetGlobal(name), call.llvm.TypeVoid);
        CreateCall("memset", {v, llvm::ConstantInt::get(call.llvm.TypeInt, 0), size}, call);
    } else {
        auto v = call.ir->CreatePointerCast(call.llvm.GetLocal(name), call.llvm.TypeVoid);
        CreateCall("memset", {v, llvm::ConstantInt::get(call.llvm.TypeInt, 0), size}, call);
    }

    // Create if necessary
    for (auto &s: GetExpressions()) {
        auto vt = call.exprcompile(s);
        values.push_back(vt);
    }

    // Initialise any fields?
    for (auto &init: expressions) {
        // Is this a valid field?
        bool found = false;
        for (size_t i = 0; i < si->fields.size(); i++) {
            if (si->fields[i].name == init.identifier) {
                auto value = values[i];
                call.llvm.AutoConversion(call.ir, value, si->fields[i].type);
                if (scope == Scope::GLOBAL) {
                    auto gep = call.ir->CreateStructGEP(llvm_struct_type, call.llvm.GetGlobal(name), i);
                    call.ir->CreateStore(value.value, gep);
                } else {
                    auto gep = call.ir->CreateStructGEP(llvm_struct_type, call.llvm.GetLocal(name), i);
                    call.ir->CreateStore(value.value, gep);
                }
                found = true;

                // If a string, make sure we don't collect it
                if (value.type == Primitive::STRING) {
                    call.llvm.MakePermString(value.value, call.ir);
                }
            }
        }
        if (!found)
            RaiseException("Field '" + init.identifier + "' not found in record '" + struct_name + "'", call.token);
    }

    created = true;
}

ValueType TypeRecord::Get(SignatureCall &call) {
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

void TypeRecord::Set(SignatureCall &call, ValueType value) {
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

#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include "PrimitiveTypes.h"

struct StructMember {
    std::string name;
    Primitive type;
};

struct StructInfo {
    std::vector<StructMember> fields;
};

class SharedState {
public:
    bool StructExists(std::string name) { return struct_indexes.contains(name); }
    size_t GetStructIndex(std::string name) { return struct_indexes.find(name)->second; }
    StructInfo *GetStruct(size_t index) { return &structs[index]; }

    std::unordered_map<std::string, size_t> struct_indexes;
    std::vector<StructInfo> structs;
    size_t index_ptr = 0;
};

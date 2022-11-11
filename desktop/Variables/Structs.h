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

class ParserStructs {
public:
    static bool StructExists(std::string name) { return struct_indexes.contains(name); }
    static size_t GetStructIndex(std::string name) { return struct_indexes.find(name)->second; }
    static StructInfo *GetStruct(size_t index) { return &structs[index]; }

    static std::unordered_map<std::string, size_t> struct_indexes;
    static std::vector<StructInfo> structs;
    static size_t index_ptr;
};

#pragma once

#include <vector>
#include "PrimitiveTypes.h"

struct StructMember {
    std::string name;
    Primitive type;
};

struct StructInfo {
    std::vector<StructMember> fields;
};

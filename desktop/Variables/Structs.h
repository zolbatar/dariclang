#pragma once
#include <vector>
#include "PrimitiveTypes.h"

struct StructInfo
{
    std::vector<std::string> fields;
    std::vector<Primitive> types;
};

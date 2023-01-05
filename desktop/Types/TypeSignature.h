#pragma once

#include <optional>
#include "TypeInstance.h"

class TypeSignature {
public:

    // Check two signatures are identical
    virtual TypeSignature &operator=(const TypeSignature &) = 0;

    // Managing instances of this type
    std::optional<TypeInstance> FindInstance(const std::string &name, bool create_if_not_found);
};
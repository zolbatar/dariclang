#include "Structs.h"

std::vector<StructInfo> ParserStructs::structs;
std::unordered_map<std::string, size_t> ParserStructs::struct_indexes;
size_t ParserStructs::index_ptr = 0;

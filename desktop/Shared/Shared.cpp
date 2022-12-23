#include <iostream>
#include <cassert>
#include "Shared.h"

size_t SourceFileData::ref_index_ptr = 0;

std::unordered_map<std::string, size_t>::iterator SourceFileData::FindStructIndices(std::string name) {
	return struct_indexes.find(name);
}

std::unordered_map<std::string, size_t>::iterator SourceFileData::FindDataLabel(std::string name) {
	return data_labels.find(name);
}

void SourceFileData::AddStruct(std::string name, StructInfo ti, size_t ref) {
	structs.push_back(ti);
	struct_indexes.insert(std::make_pair(name, ref));
}

size_t SourceFileData::GetStructIndex(std::string name) {
	auto ff = struct_indexes.find(name);
	assert (ff != struct_indexes.end());
	return ff->second;
}

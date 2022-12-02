#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include "../Variables/PrimitiveTypes.h"

struct StructMember {
	std::string name;
	Primitive type;
};

struct StructInfo {
	std::vector<StructMember> fields;
};

class SourceFileData {
public:
	bool StructExists(std::string name) { return struct_indexes.contains(name); }
	size_t GetStructIndex(std::string name);
	StructInfo *GetStruct(size_t index) { return &structs[index]; }
	std::unordered_map<std::string, size_t>::iterator FindDataLabel(std::string name);
	std::unordered_map<std::string, size_t>::iterator DataLabelEnd() { return data_labels.end(); }
	std::unordered_map<std::string, size_t>::iterator FindStructIndices(std::string name);
	std::unordered_map<std::string, size_t>::iterator StructIndicesEnd() { return struct_indexes.end(); }
	std::vector<T_I> &GetData() { return data; }
	StructInfo &GetStructInfo(size_t index) { return structs[index]; }
	size_t GetNextRefIndex() { return ref_index_ptr++; }
	void AddStruct(std::string name, StructInfo ti, size_t ref);
	void AddDataValue(T_I v) { data.push_back(v); }
	void AddDataLabel(std::string name) { data_labels.insert(std::make_pair(name, data.size())); }

private:
	static size_t ref_index_ptr;
	std::unordered_map<std::string, size_t> struct_indexes;
	std::vector<StructInfo> structs;
	std::vector<T_I> data;
	std::unordered_map<std::string, size_t> data_labels;
};

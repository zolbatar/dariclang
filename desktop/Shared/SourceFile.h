#pragma once
#include <memory>
#include <list>
#include <vector>
#include <string>
#include <unordered_set>
#include "Shared.h"
#include "../Parser/Parser.h"
#include "../Compiler/Compiler.h"

class SourceFile {
public:
	SourceFile(CompilerOptions &options);
	void ParseCompileAndRun();

private:
	void MoveToTop(std::string file);

	std::unordered_map<std::string, std::vector<std::string>> dependencies;
	CompilerOptions &options;
	std::list<Parser> parsers;
	std::unordered_set<std::string> already_imported;
	SourceFileData data;
};

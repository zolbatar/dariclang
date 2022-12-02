#pragma once
#include <memory>
#include <list>
#include "Shared.h"
#include "../Parser/Parser.h"
#include "../Compiler/Compiler.h"

class SourceFile {
public:
	SourceFile(CompilerOptions &options);
	void ParseCompileAndRun();

private:
	CompilerOptions &options;
	std::list<Parser> parsers;
	SourceFileData data;
};

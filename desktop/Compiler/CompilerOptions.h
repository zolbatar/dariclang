#pragma once
#include <memory>

enum class CompileTarget {
	INTERACTIVE,
	JIT,
	EXE
};

struct CompilerOptions {
	CompileTarget target;
	std::string output_filename;
	bool optimise = true;
	bool use_exit_as_end = false;
	bool run;
	std::string file;
};


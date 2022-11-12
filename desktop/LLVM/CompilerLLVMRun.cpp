#include "../Compiler/Compiler.h"
#include "../JIT/JIT.h"
#include "llvm/Linker/Linker.h"
#include "llvm/Support/FileSystem.h"

extern "C" void print(const char *format, ...) {
	char buffer[512];

	va_list args;
	va_start(args, format);
	vsnprintf(buffer, 512, format, args);
	va_end(args);
	printf("%s", buffer);
}

void CompilerLLVM::Run() {
	// Debug
	{
		auto p = "../Out.ll";
		std::cout << "Writing " << p << "\n";
		llvm::StringRef filename_post(p);
		std::error_code EC;
		llvm::raw_fd_ostream out_post(filename_post, EC);
		Module.get()->print(out_post, nullptr);
		out_post.close();
	}

	// Optimise
	if (optimise) {
		OptimiseModule();
	}

	// Optimised output
	if (optimise) {
		auto p = "../OutOptimised.ll";
		std::cout << "Writing " << p << "\n";
		llvm::StringRef filename_post(p);
		std::error_code EC;
		llvm::raw_fd_ostream out_post(filename_post, EC);
		Module.get()->print(out_post, nullptr);
		out_post.close();
	}

	// Run!
	Strings_Clear();
	JIT jit(std::move(Module), std::move(Context));
	jit.run();
	Strings_Summary();
}
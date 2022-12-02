#include <chrono>
#include "SourceFile.h"
#include "../../runtime/UI/UISDL.h"

extern std::atomic_bool ui_started;
extern Console console;
extern UISDL *ui;
extern Input input;

SourceFile::SourceFile(CompilerOptions& options) : options(options) {
	parsers.emplace_back(Parser(this->data));
	auto parser = &parsers.back();
	parser->Parse(options.file);
}

void SourceFile::ParseCompileAndRun() {
	Compiler compiler(this->data, &parsers.back(), options);
	auto t1 = std::chrono::steady_clock::now();
	if (compiler.Compile()) {
		if (options.run) {
			t1 = std::chrono::steady_clock::now();
			compiler.Run();
		} else {
			compiler.CreateExecutable();
			auto t2 = std::chrono::steady_clock::now();
			auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
			std::cout << "Compile finished in " << time_span.count() << "ms. Press a key to quit.";
			return;
		}
	}
	if (ui_started) {
		auto t2 = std::chrono::steady_clock::now();
		auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
		console.SetColour(0xFFFFFFFF);
		console.WriteString("Program finished in " + std::to_string(time_span.count()) + "ms. Press a key to quit.");
//        console.WriteString("Program finished. Press a key to quit.");
		ui->Flip(true);
		input.CheckForKeypress();
	}
}

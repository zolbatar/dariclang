#include <iostream>
#include <fstream>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Variables/Shared.h"

int main(int argc, char *argv[]) {
    std::cout << "Welcome to Daric! (0.1 pre-release)" << std::endl;

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cout << "Can't open source file\n";
        return 1;
    }

    // What sort of compile?
    CompilerOptions options;
    options.output_ll_files = true;
    if (argc == 2) {
        options.target = CompileTarget::JIT;
        options.use_exit_as_end = false;
    } else {
        options.target = CompileTarget::EXE;
        options.output_filename = std::string(argv[2]);
        options.use_exit_as_end = true;
    }
    bool run = argc == 2;

    Instance::ClearStatic();
    Reference::ClearStatic();
    SharedState state;
    Parser parser(state);
    parser.Parse(&file);
    Compiler c(state, &parser, options);
    if (c.Compile()) {
        if (run)
            c.Run();
        else
            c.CreateExecutable();
    }
    return 0;
}

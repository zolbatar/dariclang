#include <iostream>
#include <fstream>
#include <thread>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Variables/Shared.h"
#include "../runtime/UI/UISDL.h"

UISDL *ui;

CompilerOptions options;
std::atomic_bool done = false;
static void RunThread() {
    Instance::ClearStatic();
    Reference::ClearStatic();
    SharedState state;
    Parser parser(state);
    parser.Parse(options.file);
    Compiler c(state, &parser, std::move(options));
    if (c.Compile()) {
        if (options.run) {
            c.Run();
        } else
            c.CreateExecutable();
    }
    done = true;
}

int main(int argc, char *argv[]) {
    std::cout << "Welcome to Daric! (0.3alpha)" << std::endl;
    options.file = new std::ifstream(argv[1]);
    if (!options.file->is_open()) {
        std::cout << "Can't open source file\n";
        return 1;
    }

    // What sort of compile?
    options.output_ll_files = true;
    if (argc == 2) {
        options.target = CompileTarget::JIT;
        options.use_exit_as_end = false;
    } else {
        options.target = CompileTarget::EXE;
        options.output_filename = std::string(argv[2]);
        options.use_exit_as_end = true;
    }
    options.run = argc == 2;
    auto t = std::thread(&RunThread);
    t.detach();
    while (!done) {
        
    }
    return 0;
}

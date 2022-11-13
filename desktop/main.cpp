#include <iostream>
#include <fstream>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Variables/Shared.h"

int main(int argc, char *argv[]) {
    std::cout << "Welcome to Daric!" << std::endl;

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cout << "Can't open source file\n";
        return 1;
    }
    Instance::ClearStatic();
    Reference::ClearStatic();
    SharedState state;
    Parser parser(state);
    parser.Parse(&file);
    Compiler c(state);
    bool run = argc == 2;
    if (c.Compile(&parser, true, run, true)) {
        if (run)
            c.Run();
        else
            c.CreateExecutable(std::string(argv[2]));
    }
    return 0;
}

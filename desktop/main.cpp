#include <iostream>
#include <fstream>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Variables/Shared.h"

int main() {
    std::cout << "Welcome to Daric!" << std::endl;

    std::ifstream file("Syntax.daric");
//	std::ifstream file("Minimal.daric");
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
    if (c.Compile(&parser, true, false)) {
        c.Run();
    }
    return 0;
}

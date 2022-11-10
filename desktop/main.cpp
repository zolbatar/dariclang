#include <iostream>
#include <fstream>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"

int main() {
	std::cout << "Welcome to Daric!" << std::endl;

	Parser parser;
    std::ifstream file("Syntax.daric");
//	std::ifstream file("Minimal.daric");
	if (!file.is_open()) {
		std::cout << "Can't open source file\n";
		return 1;
	}
	parser.Parse(&file);
	Compiler c;
	if (c.Compile(&parser, true, false)) {
		c.Run();
	}
	return 0;
}

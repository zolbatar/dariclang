#include "Parser.h"
#include "../Grammar/DaricLexer.h"
#include "../Grammar/DaricParser.h"
#include "ParserErrorListener.h"

void Parser::Parse(std::istream *source) {
    try {
        // Call Antlr4 and process
        antlr4::ANTLRInputStream input(*source);
        DaricLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        DaricParser parser(&tokens);
        parser.removeErrorListeners();
        DaricErrorListener errorListener;
        parser.addErrorListener(&errorListener);
        parser.setBuildParseTree(true);
        parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(antlr4::atn::PredictionMode::SLL);
        DaricParser::ProgramContext *tree = parser.program();
        visitProgram(tree);
    } catch (CustomException &ex) {
        ex.OutputToStdout();
        return;
    }
    catch (std::exception &ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
        return;
    }
}
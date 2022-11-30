#include "Parser.h"
#include "../Grammar/DaricLexer.h"
#include "../Grammar/DaricParser.h"
#include "ParserErrorListener.h"

#define CATCH 1

void Parser::Parse(std::istream *source) {
#ifdef CATCH
    try {
#endif
        // Call Antlr4 and process
        antlr4::ANTLRInputStream input(*source);
        DaricLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        DaricParser parser(&tokens);
        parser.removeErrorListeners();
        DaricErrorListener errorListener;
        parser.addErrorListener(&errorListener);
        //parser.setBuildParseTree(true);
        parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(antlr4::atn::PredictionMode::LL_EXACT_AMBIG_DETECTION);
        DaricParser::ProgramContext *tree = parser.program();
        visitProgram(tree);
#ifdef CATCH
    } catch (CustomException &ex) {
        ex.OutputToStdout();
        exit(1);
    }
    catch (std::exception &ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
        exit(1);
    }
#endif
}
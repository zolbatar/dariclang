#include "Parser.h"
#include "../Grammar/DaricLexer.h"
#include "../Grammar/DaricParser.h"
#include "ParserErrorListener.h"

//#define CATCH 1
extern std::string parser_filename;
extern std::list<CaughtException> errors;

std::vector<std::string> Parser::Parse(std::istream &source, CompileTarget target) {
#ifdef CATCH
	try {
#endif
		// Call Antlr4 and process
		parser_filename = filename;
		antlr4::ANTLRInputStream input(source);

		DaricLexer lexer(&input);
		antlr4::CommonTokenStream tokens(&lexer);
		DaricParser parser(&tokens);
		parser.removeErrorListeners();
		DaricErrorListener errorListener;
		parser.addErrorListener(&errorListener);
		//parser.setBuildParseTree(true);
		//parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(antlr4::atn::PredictionMode::LL_EXACT_AMBIG_DETECTION);
		parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(antlr4::atn::PredictionMode::LL);
		DaricParser::ProgramContext *tree = parser.program();
		visitProgram(tree);
#ifdef CATCH
	} catch (CustomException &ex) {
		if (target == CompileTarget::INTERACTIVE) {
			errors.emplace_back(CaughtException{.type = ex.type,
				.filename = ex.filename,
				.line_number = ex.line_number,
				.char_position =ex.char_position,
				.error = ex.error
			});
		} else {
			ex.OutputToStdout();
			exit(1);
		}
	}
	catch (std::exception &ex) {
		std::cout << "Exception: " << ex.what() << std::endl;
		exit(1);
	}
#endif
	return additional_files;
}
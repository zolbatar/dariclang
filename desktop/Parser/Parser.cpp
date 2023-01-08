#include "Parser.h"
#include "../Grammar/DaricLexer.h"
#include "../Grammar/DaricParser.h"
#include "ParserErrorListener.h"
#include "../../runtime/UI/UISDL.h"

//#define CATCH 1
extern std::string parser_filename;
extern std::list<CaughtException> errors;

std::vector<std::string> Parser::Parse(std::istream &source, CompileTarget target) {
	Constants();
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

ParserToken Parser::CreateToken(antlr4::ParserRuleContext *context) {
	ParserToken p;
	p.scope = GetScope();
	p.file.line = context->getStart()->getLine();
	p.file.filename = this->filename;
	p.file.char_position = context->getStart()->getCharPositionInLine();
	return p;
}

ParserToken Parser::CreateToken(antlr4::ParserRuleContext *context, ParserTokenType type) {
	ParserToken p = CreateToken(context);
	p.type = type;
	return p;
}

void Parser::Constants() {
	CreateConstantInt("Windowed", 1);
	CreateConstantInt("Banked", 2);

	CreateConstantInt("KEY_ESCAPE", SDL_SCANCODE_ESCAPE);
	CreateConstantInt("KEY_RETURN", SDL_SCANCODE_RETURN);

	// Constants
	CreateConstantInt("KEY_1", SDL_SCANCODE_1);
	CreateConstantInt("KEY_2", SDL_SCANCODE_2);
	CreateConstantInt("KEY_3", SDL_SCANCODE_3);
	CreateConstantInt("KEY_4", SDL_SCANCODE_4);
	CreateConstantInt("KEY_5", SDL_SCANCODE_5);
	CreateConstantInt("KEY_6", SDL_SCANCODE_6);
	CreateConstantInt("KEY_7", SDL_SCANCODE_7);
	CreateConstantInt("KEY_8", SDL_SCANCODE_8);
	CreateConstantInt("KEY_9", SDL_SCANCODE_9);
	CreateConstantInt("KEY_0", SDL_SCANCODE_0);

	CreateConstantInt("KEY_Q", SDL_SCANCODE_Q);
	CreateConstantInt("KEY_W", SDL_SCANCODE_W);
	CreateConstantInt("KEY_E", SDL_SCANCODE_E);
	CreateConstantInt("KEY_R", SDL_SCANCODE_R);
	CreateConstantInt("KEY_T", SDL_SCANCODE_T);
	CreateConstantInt("KEY_Y", SDL_SCANCODE_Y);
	CreateConstantInt("KEY_U", SDL_SCANCODE_U);
	CreateConstantInt("KEY_I", SDL_SCANCODE_I);
	CreateConstantInt("KEY_O", SDL_SCANCODE_O);
	CreateConstantInt("KEY_P", SDL_SCANCODE_P);

	CreateConstantInt("KEY_A", SDL_SCANCODE_A);
	CreateConstantInt("KEY_S", SDL_SCANCODE_S);
	CreateConstantInt("KEY_D", SDL_SCANCODE_D);
	CreateConstantInt("KEY_F", SDL_SCANCODE_F);
	CreateConstantInt("KEY_G", SDL_SCANCODE_G);
	CreateConstantInt("KEY_H", SDL_SCANCODE_H);
	CreateConstantInt("KEY_J", SDL_SCANCODE_J);
	CreateConstantInt("KEY_K", SDL_SCANCODE_K);
	CreateConstantInt("KEY_L", SDL_SCANCODE_L);

	CreateConstantInt("KEY_Z", SDL_SCANCODE_Z);
	CreateConstantInt("KEY_X", SDL_SCANCODE_X);
	CreateConstantInt("KEY_C", SDL_SCANCODE_C);
	CreateConstantInt("KEY_V", SDL_SCANCODE_V);
	CreateConstantInt("KEY_B", SDL_SCANCODE_B);
	CreateConstantInt("KEY_N", SDL_SCANCODE_N);
	CreateConstantInt("KEY_M", SDL_SCANCODE_M);

/*    CreateConstantInt("NOTE_A0",21);
    CreateConstantInt("NOTE_As0",22);
    CreateConstantInt("NOTE_Bb0",22);
    CreateConstantInt("NOTE_B0",23);
    CreateConstantInt("NOTE_C1",24);
    CreateConstantInt("NOTE_Cs1",25);
    CreateConstantInt("NOTE_Db1",25);
    CreateConstantInt("NOTE_D1",26);
    CreateConstantInt("NOTE_Ds1",27);
    CreateConstantInt("NOTE_Eb1",27);
    CreateConstantInt("NOTE_E1",28);
    CreateConstantInt("NOTE_F1",29);
    CreateConstantInt("NOTE_Fs1",30);
    CreateConstantInt("NOTE_Gb1",30);
    CreateConstantInt("NOTE_G1",31);
    CreateConstantInt("NOTE_Gs1",32);
    CreateConstantInt("NOTE_Ab1",32);
    CreateConstantInt("NOTE_A1",33);
    CreateConstantInt("NOTE_As1",34);
    CreateConstantInt("NOTE_Bb1",34);
    CreateConstantInt("NOTE_B1",35);
    CreateConstantInt("NOTE_C2",36);
    CreateConstantInt("NOTE_Cs2",37);
    CreateConstantInt("NOTE_Db2",37);
    CreateConstantInt("NOTE_D2",38);
    CreateConstantInt("NOTE_Ds2",39);
    CreateConstantInt("NOTE_Eb2",39);
    CreateConstantInt("NOTE_E2",40);
    CreateConstantInt("NOTE_F2",41);
    CreateConstantInt("NOTE_Fs2",42);
    CreateConstantInt("NOTE_Gb2",42);
    CreateConstantInt("NOTE_G2",43);
    CreateConstantInt("NOTE_Gs2",44);
    CreateConstantInt("NOTE_Ab2",44);
    CreateConstantInt("NOTE_A2",45);
    CreateConstantInt("NOTE_As2",46);
    CreateConstantInt("NOTE_Bb2",46);
    CreateConstantInt("NOTE_B2",47);
    CreateConstantInt("NOTE_C3",48);
    CreateConstantInt("NOTE_Cs3",49);
    CreateConstantInt("NOTE_Db3",49);
    CreateConstantInt("NOTE_D3",50);
    CreateConstantInt("NOTE_Ds3",51);
    CreateConstantInt("NOTE_Eb3",51);
    CreateConstantInt("NOTE_E3",52);
    CreateConstantInt("NOTE_F3",53);
    CreateConstantInt("NOTE_Fs3",54);
    CreateConstantInt("NOTE_Gb3",54);
    CreateConstantInt("NOTE_G3",55);
    CreateConstantInt("NOTE_Gs3",56);
    CreateConstantInt("NOTE_Ab3",56);
    CreateConstantInt("NOTE_A3",57);
    CreateConstantInt("NOTE_As3",58);
    CreateConstantInt("NOTE_Bb3",58);
    CreateConstantInt("NOTE_B3",59);
    CreateConstantInt("NOTE_C4",60);
    CreateConstantInt("NOTE_Cs4",61);
    CreateConstantInt("NOTE_Db4",61);
    CreateConstantInt("NOTE_D4",62);
    CreateConstantInt("NOTE_Ds4",63);
    CreateConstantInt("NOTE_Eb4",63);
    CreateConstantInt("NOTE_E4",64);
    CreateConstantInt("NOTE_F4",65);
    CreateConstantInt("NOTE_Fs4",66);
    CreateConstantInt("NOTE_Gb4",66);
    CreateConstantInt("NOTE_G4",67);
    CreateConstantInt("NOTE_Gs4",68);
    CreateConstantInt("NOTE_Ab4",68);
    CreateConstantInt("NOTE_A4",69);
    CreateConstantInt("NOTE_As4",70);
    CreateConstantInt("NOTE_Bb4",70);
    CreateConstantInt("NOTE_B4",71);
    CreateConstantInt("NOTE_C5",72);
    CreateConstantInt("NOTE_Cs5",73);
    CreateConstantInt("NOTE_Db5",73);
    CreateConstantInt("NOTE_D5",74);
    CreateConstantInt("NOTE_Ds5",75);
    CreateConstantInt("NOTE_Eb5",75);
    CreateConstantInt("NOTE_E5",76);
    CreateConstantInt("NOTE_F5",77);
    CreateConstantInt("NOTE_Fs5",78);
    CreateConstantInt("NOTE_Gb5",78);
    CreateConstantInt("NOTE_G5",79);
    CreateConstantInt("NOTE_Gs5",80);
    CreateConstantInt("NOTE_Ab5",80);
    CreateConstantInt("NOTE_A5",81);
    CreateConstantInt("NOTE_As5",82);
    CreateConstantInt("NOTE_Bb5",82);
    CreateConstantInt("NOTE_B5",83);
    CreateConstantInt("NOTE_C6",84);
    CreateConstantInt("NOTE_Cs6",85);
    CreateConstantInt("NOTE_Db6",85);
    CreateConstantInt("NOTE_D6",86);
    CreateConstantInt("NOTE_Ds6",87);
    CreateConstantInt("NOTE_Eb6",87);
    CreateConstantInt("NOTE_E6",88);
    CreateConstantInt("NOTE_F6",89);
    CreateConstantInt("NOTE_Fs6",90);
    CreateConstantInt("NOTE_Gb6",90);
    CreateConstantInt("NOTE_G6",91);
    CreateConstantInt("NOTE_Gs6",92);
    CreateConstantInt("NOTE_Ab6",92);
    CreateConstantInt("NOTE_A6",93);
    CreateConstantInt("NOTE_As6",94);
    CreateConstantInt("NOTE_Bb6",94);
    CreateConstantInt("NOTE_B6",95);
    CreateConstantInt("NOTE_C7",96);
    CreateConstantInt("NOTE_Cs7",97);
    CreateConstantInt("NOTE_Db7",97);
    CreateConstantInt("NOTE_D7",98);
    CreateConstantInt("NOTE_Ds7",99);
    CreateConstantInt("NOTE_Eb7",99);
    CreateConstantInt("NOTE_E7",100);
    CreateConstantInt("NOTE_F7",101);
    CreateConstantInt("NOTE_Fs7",102);
    CreateConstantInt("NOTE_Gb7",102);
    CreateConstantInt("NOTE_G7",103);
    CreateConstantInt("NOTE_Gs7",104);
    CreateConstantInt("NOTE_Ab7",104);
    CreateConstantInt("NOTE_A7",105);
    CreateConstantInt("NOTE_As7",106);
    CreateConstantInt("NOTE_Bb7",106);
    CreateConstantInt("NOTE_B7",107);
    CreateConstantInt("NOTE_C8",108);
    CreateConstantInt("NOTE_Cs8",109);
    CreateConstantInt("NOTE_Db8",109);
    CreateConstantInt("NOTE_D8",110);
    CreateConstantInt("NOTE_Ds8",111);
    CreateConstantInt("NOTE_Eb8",111);
    CreateConstantInt("NOTE_E8",112);
    CreateConstantInt("NOTE_F8",113);
    CreateConstantInt("NOTE_Fs8",114);
    CreateConstantInt("NOTE_Gb8",114);
    CreateConstantInt("NOTE_G8",115);
    CreateConstantInt("NOTE_Gs8",116);
    CreateConstantInt("NOTE_Ab8",116);
    CreateConstantInt("NOTE_A8",117);
    CreateConstantInt("NOTE_As8",118);
    CreateConstantInt("NOTE_Bb8",118);
    CreateConstantInt("NOTE_B8",119);*/
}

void Parser::CreateConstantInt(const std::string &name, T_I val) {
	auto signature = TypePrimitive::Create(state, Scope::GLOBAL, name, Primitive::INT).get();

	ParserToken p;
	p.signature = signature->GetIndex();
	p.type = ParserTokenType::CONSTANT;
	p.scope = Scope::GLOBAL;
	p.file.line = 0;
	p.file.filename = this->filename;
	p.file.char_position = 0;
	p.literal.iv = val;

	// Set data type
	auto ct = dynamic_cast<TypePrimitive *>(signature);
	ct->SetAsConstant();
	ct->SetPrimitiveType(Primitive::INT);

	statements.push_back(std::move(p));
}


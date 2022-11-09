
// Generated from Daric.g4 by ANTLR 4.11.1


#include "DaricLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct DaricLexerStaticData final {
  DaricLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DaricLexerStaticData(const DaricLexerStaticData&) = delete;
  DaricLexerStaticData(DaricLexerStaticData&&) = delete;
  DaricLexerStaticData& operator=(const DaricLexerStaticData&) = delete;
  DaricLexerStaticData& operator=(DaricLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dariclexerLexerOnceFlag;
DaricLexerStaticData *dariclexerLexerStaticData = nullptr;

void dariclexerLexerInitialize() {
  assert(dariclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<DaricLexerStaticData>(
    std::vector<std::string>{
      "COMMENT", "CONST", "DEF", "DIM", "ELSE", "END", "ENDDEF", "ENDIF", 
      "IF", "MODULE", "OF", "PRINT", "PRIVATE", "REM", "RETURN", "THEN", 
      "SWAP", "WITH", "STRUCT", "ENDSTRUCT", "HPTIME", "TIME", "TIMES", 
      "ABS", "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LET", "LN", 
      "LOG", "PI", "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", "FALSE", 
      "TRUE", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", 
      "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", 
      "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", 
      "RPAREN", "SOPEN", "SCLOSE", "EQ", "NE", "GT", "GE", "LT", "LE", "HAT", 
      "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "MOD", "DIV", 
      "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", 
      "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", "HEX", "NAME", "ALPHA", 
      "DIGIT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", "','", "'''", "", 
      "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", "'<>'", "'>'", "'>='", 
      "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
      "", "", "'~'"
    },
    std::vector<std::string>{
      "", "COMMENT", "CONST", "DEF", "DIM", "ELSE", "END", "ENDDEF", "ENDIF", 
      "IF", "MODULE", "OF", "PRINT", "PRIVATE", "REM", "RETURN", "THEN", 
      "SWAP", "WITH", "STRUCT", "ENDSTRUCT", "HPTIME", "TIME", "TIMES", 
      "ABS", "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LET", "LN", 
      "LOG", "PI", "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", "FALSE", 
      "TRUE", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", 
      "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", 
      "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", 
      "RPAREN", "SOPEN", "SCLOSE", "EQ", "NE", "GT", "GE", "LT", "LE", "HAT", 
      "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "MOD", "DIV", 
      "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", 
      "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,95,936,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,
  	7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,
  	7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,98,
  	7,98,1,0,1,0,1,0,3,0,203,8,0,1,0,5,0,206,8,0,10,0,12,0,209,9,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,221,8,1,1,2,1,2,1,2,1,2,1,2,1,2,
  	3,2,229,8,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,237,8,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,3,4,247,8,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,255,8,5,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,269,8,6,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,3,7,281,8,7,1,8,1,8,1,8,1,8,3,8,287,8,8,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,301,8,9,1,10,1,10,1,10,1,10,3,
  	10,307,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,319,
  	8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,3,12,335,8,12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,343,8,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,357,8,14,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,367,8,15,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,3,16,378,8,16,1,17,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,3,17,388,8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,3,18,402,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,3,19,422,8,19,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,436,8,
  	20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,446,8,21,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,458,8,22,1,23,1,23,1,23,1,
  	23,1,23,1,23,3,23,466,8,23,1,24,1,24,1,24,1,24,1,24,1,24,3,24,474,8,24,
  	1,25,1,25,1,25,1,25,1,25,1,25,3,25,482,8,25,1,26,1,26,1,26,1,26,1,26,
  	1,26,3,26,490,8,26,1,27,1,27,1,27,1,27,1,27,1,27,3,27,498,8,27,1,28,1,
  	28,1,28,1,28,1,28,1,28,3,28,506,8,28,1,29,1,29,1,29,1,29,1,29,1,29,3,
  	29,514,8,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,30,526,
  	8,30,1,31,1,31,1,31,1,31,1,31,1,31,3,31,534,8,31,1,32,1,32,1,32,1,32,
  	3,32,540,8,32,1,33,1,33,1,33,1,33,1,33,1,33,3,33,548,8,33,1,34,1,34,1,
  	34,1,34,3,34,554,8,34,1,35,1,35,1,35,1,35,1,35,1,35,3,35,562,8,35,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,3,36,574,8,36,1,37,1,37,
  	1,37,1,37,1,37,1,37,3,37,582,8,37,1,38,1,38,1,38,1,38,1,38,1,38,3,38,
  	590,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,598,8,39,1,40,1,40,1,40,1,
  	40,1,40,1,40,3,40,606,8,40,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,
  	41,1,41,3,41,618,8,41,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,628,
  	8,42,1,43,1,43,1,43,1,43,1,43,1,43,3,43,636,8,43,1,44,1,44,1,44,1,44,
  	1,44,1,44,1,44,1,44,3,44,646,8,44,1,45,1,45,1,45,1,45,1,45,1,45,1,45,
  	1,45,1,45,1,45,3,45,658,8,45,1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,
  	1,46,1,46,3,46,670,8,46,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,3,47,
  	680,8,47,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,48,
  	3,48,694,8,48,1,49,1,49,1,49,1,49,1,49,1,49,3,49,702,8,49,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,3,50,712,8,50,1,51,1,51,1,51,1,51,1,51,1,
  	51,3,51,720,8,51,1,52,1,52,1,52,1,52,1,52,1,52,1,52,1,52,1,52,1,52,3,
  	52,732,8,52,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,
  	53,3,53,746,8,53,1,54,1,54,1,55,1,55,1,56,1,56,1,57,1,57,1,58,1,58,1,
  	59,1,59,1,60,1,60,1,61,4,61,763,8,61,11,61,12,61,764,1,62,1,62,1,63,1,
  	63,1,64,1,64,1,65,1,65,1,66,1,66,1,67,1,67,1,68,1,68,1,69,1,69,1,69,1,
  	70,1,70,1,71,1,71,1,71,1,72,1,72,1,73,1,73,1,73,1,74,1,74,1,75,1,75,1,
  	76,1,76,1,77,1,77,1,78,1,78,1,79,1,79,1,79,1,80,1,80,1,80,1,81,1,81,1,
  	81,1,81,1,81,1,81,3,81,816,8,81,1,82,1,82,1,82,1,82,1,82,1,82,1,82,1,
  	82,3,82,826,8,82,1,83,1,83,1,84,1,84,1,84,1,84,1,84,1,84,3,84,836,8,84,
  	1,85,1,85,1,85,1,85,1,85,1,85,3,85,844,8,85,1,86,1,86,1,86,1,86,3,86,
  	850,8,86,1,87,1,87,1,87,1,87,1,87,1,87,3,87,858,8,87,1,88,1,88,5,88,862,
  	8,88,10,88,12,88,865,9,88,1,88,1,88,1,89,1,89,4,89,871,8,89,11,89,12,
  	89,872,1,90,1,90,4,90,877,8,90,11,90,12,90,878,1,91,4,91,882,8,91,11,
  	91,12,91,883,1,91,1,91,4,91,888,8,91,11,91,12,91,889,1,91,1,91,4,91,894,
  	8,91,11,91,12,91,895,5,91,898,8,91,10,91,12,91,901,9,91,1,92,4,92,904,
  	8,92,11,92,12,92,905,1,93,1,93,1,94,1,94,1,95,1,95,1,95,1,95,5,95,916,
  	8,95,10,95,12,95,919,9,95,1,95,1,95,1,95,3,95,924,8,95,1,96,1,96,1,97,
  	1,97,1,98,4,98,931,8,98,11,98,12,98,932,1,98,1,98,0,0,99,1,1,3,2,5,3,
  	7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,
  	33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,
  	28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,
  	79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,
  	51,103,52,105,53,107,54,109,55,111,56,113,57,115,58,117,59,119,60,121,
  	61,123,62,125,63,127,64,129,65,131,66,133,67,135,68,137,69,139,70,141,
  	71,143,72,145,73,147,74,149,75,151,76,153,77,155,78,157,79,159,80,161,
  	81,163,82,165,83,167,84,169,85,171,86,173,87,175,88,177,89,179,90,181,
  	91,183,92,185,93,187,94,189,0,191,0,193,0,195,0,197,95,1,0,8,2,0,10,10,
  	13,13,3,0,10,10,13,13,34,34,2,0,48,49,124,124,3,0,69,69,101,101,124,124,
  	1,0,48,57,3,0,48,57,65,70,97,102,2,0,65,90,97,122,3,0,9,9,13,13,32,32,
  	1010,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,
  	0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,
  	1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,
  	0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,
  	0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,
  	107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,
  	117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,
  	127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,
  	137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,
  	147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,
  	157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,
  	167,1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,
  	177,1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,
  	187,1,0,0,0,0,197,1,0,0,0,1,202,1,0,0,0,3,220,1,0,0,0,5,228,1,0,0,0,7,
  	236,1,0,0,0,9,246,1,0,0,0,11,254,1,0,0,0,13,268,1,0,0,0,15,280,1,0,0,
  	0,17,286,1,0,0,0,19,300,1,0,0,0,21,306,1,0,0,0,23,318,1,0,0,0,25,334,
  	1,0,0,0,27,342,1,0,0,0,29,356,1,0,0,0,31,366,1,0,0,0,33,377,1,0,0,0,35,
  	387,1,0,0,0,37,401,1,0,0,0,39,421,1,0,0,0,41,435,1,0,0,0,43,445,1,0,0,
  	0,45,457,1,0,0,0,47,465,1,0,0,0,49,473,1,0,0,0,51,481,1,0,0,0,53,489,
  	1,0,0,0,55,497,1,0,0,0,57,505,1,0,0,0,59,513,1,0,0,0,61,525,1,0,0,0,63,
  	533,1,0,0,0,65,539,1,0,0,0,67,547,1,0,0,0,69,553,1,0,0,0,71,561,1,0,0,
  	0,73,573,1,0,0,0,75,581,1,0,0,0,77,589,1,0,0,0,79,597,1,0,0,0,81,605,
  	1,0,0,0,83,617,1,0,0,0,85,627,1,0,0,0,87,635,1,0,0,0,89,645,1,0,0,0,91,
  	657,1,0,0,0,93,669,1,0,0,0,95,679,1,0,0,0,97,693,1,0,0,0,99,701,1,0,0,
  	0,101,711,1,0,0,0,103,719,1,0,0,0,105,731,1,0,0,0,107,745,1,0,0,0,109,
  	747,1,0,0,0,111,749,1,0,0,0,113,751,1,0,0,0,115,753,1,0,0,0,117,755,1,
  	0,0,0,119,757,1,0,0,0,121,759,1,0,0,0,123,762,1,0,0,0,125,766,1,0,0,0,
  	127,768,1,0,0,0,129,770,1,0,0,0,131,772,1,0,0,0,133,774,1,0,0,0,135,776,
  	1,0,0,0,137,778,1,0,0,0,139,780,1,0,0,0,141,783,1,0,0,0,143,785,1,0,0,
  	0,145,788,1,0,0,0,147,790,1,0,0,0,149,793,1,0,0,0,151,795,1,0,0,0,153,
  	797,1,0,0,0,155,799,1,0,0,0,157,801,1,0,0,0,159,803,1,0,0,0,161,806,1,
  	0,0,0,163,815,1,0,0,0,165,825,1,0,0,0,167,827,1,0,0,0,169,835,1,0,0,0,
  	171,843,1,0,0,0,173,849,1,0,0,0,175,857,1,0,0,0,177,859,1,0,0,0,179,868,
  	1,0,0,0,181,874,1,0,0,0,183,881,1,0,0,0,185,903,1,0,0,0,187,907,1,0,0,
  	0,189,909,1,0,0,0,191,911,1,0,0,0,193,925,1,0,0,0,195,927,1,0,0,0,197,
  	930,1,0,0,0,199,203,3,27,13,0,200,203,3,111,55,0,201,203,3,121,60,0,202,
  	199,1,0,0,0,202,200,1,0,0,0,202,201,1,0,0,0,203,207,1,0,0,0,204,206,8,
  	0,0,0,205,204,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,
  	208,2,1,0,0,0,209,207,1,0,0,0,210,211,5,67,0,0,211,212,5,79,0,0,212,213,
  	5,78,0,0,213,214,5,83,0,0,214,221,5,84,0,0,215,216,5,67,0,0,216,217,5,
  	111,0,0,217,218,5,110,0,0,218,219,5,115,0,0,219,221,5,116,0,0,220,210,
  	1,0,0,0,220,215,1,0,0,0,221,4,1,0,0,0,222,223,5,68,0,0,223,224,5,69,0,
  	0,224,229,5,70,0,0,225,226,5,68,0,0,226,227,5,101,0,0,227,229,5,102,0,
  	0,228,222,1,0,0,0,228,225,1,0,0,0,229,6,1,0,0,0,230,231,5,68,0,0,231,
  	232,5,73,0,0,232,237,5,77,0,0,233,234,5,68,0,0,234,235,5,105,0,0,235,
  	237,5,109,0,0,236,230,1,0,0,0,236,233,1,0,0,0,237,8,1,0,0,0,238,239,5,
  	69,0,0,239,240,5,76,0,0,240,241,5,83,0,0,241,247,5,69,0,0,242,243,5,69,
  	0,0,243,244,5,108,0,0,244,245,5,115,0,0,245,247,5,101,0,0,246,238,1,0,
  	0,0,246,242,1,0,0,0,247,10,1,0,0,0,248,249,5,69,0,0,249,250,5,78,0,0,
  	250,255,5,68,0,0,251,252,5,69,0,0,252,253,5,110,0,0,253,255,5,100,0,0,
  	254,248,1,0,0,0,254,251,1,0,0,0,255,12,1,0,0,0,256,257,5,69,0,0,257,258,
  	5,78,0,0,258,259,5,68,0,0,259,260,5,68,0,0,260,261,5,69,0,0,261,269,5,
  	70,0,0,262,263,5,69,0,0,263,264,5,110,0,0,264,265,5,100,0,0,265,266,5,
  	68,0,0,266,267,5,101,0,0,267,269,5,102,0,0,268,256,1,0,0,0,268,262,1,
  	0,0,0,269,14,1,0,0,0,270,271,5,69,0,0,271,272,5,78,0,0,272,273,5,68,0,
  	0,273,274,5,73,0,0,274,281,5,70,0,0,275,276,5,69,0,0,276,277,5,110,0,
  	0,277,278,5,100,0,0,278,279,5,73,0,0,279,281,5,102,0,0,280,270,1,0,0,
  	0,280,275,1,0,0,0,281,16,1,0,0,0,282,283,5,73,0,0,283,287,5,70,0,0,284,
  	285,5,73,0,0,285,287,5,102,0,0,286,282,1,0,0,0,286,284,1,0,0,0,287,18,
  	1,0,0,0,288,289,5,77,0,0,289,290,5,79,0,0,290,291,5,68,0,0,291,292,5,
  	85,0,0,292,293,5,76,0,0,293,301,5,69,0,0,294,295,5,77,0,0,295,296,5,111,
  	0,0,296,297,5,100,0,0,297,298,5,117,0,0,298,299,5,108,0,0,299,301,5,101,
  	0,0,300,288,1,0,0,0,300,294,1,0,0,0,301,20,1,0,0,0,302,303,5,79,0,0,303,
  	307,5,70,0,0,304,305,5,79,0,0,305,307,5,102,0,0,306,302,1,0,0,0,306,304,
  	1,0,0,0,307,22,1,0,0,0,308,309,5,80,0,0,309,310,5,82,0,0,310,311,5,73,
  	0,0,311,312,5,78,0,0,312,319,5,84,0,0,313,314,5,80,0,0,314,315,5,114,
  	0,0,315,316,5,105,0,0,316,317,5,110,0,0,317,319,5,116,0,0,318,308,1,0,
  	0,0,318,313,1,0,0,0,319,24,1,0,0,0,320,321,5,80,0,0,321,322,5,82,0,0,
  	322,323,5,73,0,0,323,324,5,86,0,0,324,325,5,65,0,0,325,326,5,84,0,0,326,
  	335,5,69,0,0,327,328,5,80,0,0,328,329,5,114,0,0,329,330,5,105,0,0,330,
  	331,5,118,0,0,331,332,5,97,0,0,332,333,5,116,0,0,333,335,5,101,0,0,334,
  	320,1,0,0,0,334,327,1,0,0,0,335,26,1,0,0,0,336,337,5,82,0,0,337,338,5,
  	69,0,0,338,343,5,77,0,0,339,340,5,82,0,0,340,341,5,101,0,0,341,343,5,
  	109,0,0,342,336,1,0,0,0,342,339,1,0,0,0,343,28,1,0,0,0,344,345,5,82,0,
  	0,345,346,5,69,0,0,346,347,5,84,0,0,347,348,5,85,0,0,348,349,5,82,0,0,
  	349,357,5,78,0,0,350,351,5,82,0,0,351,352,5,101,0,0,352,353,5,116,0,0,
  	353,354,5,117,0,0,354,355,5,114,0,0,355,357,5,110,0,0,356,344,1,0,0,0,
  	356,350,1,0,0,0,357,30,1,0,0,0,358,359,5,84,0,0,359,360,5,72,0,0,360,
  	361,5,69,0,0,361,367,5,78,0,0,362,363,5,84,0,0,363,364,5,104,0,0,364,
  	365,5,101,0,0,365,367,5,110,0,0,366,358,1,0,0,0,366,362,1,0,0,0,367,32,
  	1,0,0,0,368,369,5,83,0,0,369,370,5,87,0,0,370,371,5,65,0,0,371,378,5,
  	80,0,0,372,373,5,83,0,0,373,374,5,119,0,0,374,375,5,97,0,0,375,376,5,
  	112,0,0,376,378,5,32,0,0,377,368,1,0,0,0,377,372,1,0,0,0,378,34,1,0,0,
  	0,379,380,5,87,0,0,380,381,5,73,0,0,381,382,5,84,0,0,382,388,5,72,0,0,
  	383,384,5,87,0,0,384,385,5,105,0,0,385,386,5,116,0,0,386,388,5,104,0,
  	0,387,379,1,0,0,0,387,383,1,0,0,0,388,36,1,0,0,0,389,390,5,83,0,0,390,
  	391,5,84,0,0,391,392,5,82,0,0,392,393,5,85,0,0,393,394,5,67,0,0,394,402,
  	5,84,0,0,395,396,5,83,0,0,396,397,5,116,0,0,397,398,5,114,0,0,398,399,
  	5,117,0,0,399,400,5,99,0,0,400,402,5,116,0,0,401,389,1,0,0,0,401,395,
  	1,0,0,0,402,38,1,0,0,0,403,404,5,69,0,0,404,405,5,78,0,0,405,406,5,68,
  	0,0,406,407,5,83,0,0,407,408,5,84,0,0,408,409,5,82,0,0,409,410,5,85,0,
  	0,410,411,5,67,0,0,411,422,5,84,0,0,412,413,5,69,0,0,413,414,5,110,0,
  	0,414,415,5,100,0,0,415,416,5,83,0,0,416,417,5,116,0,0,417,418,5,114,
  	0,0,418,419,5,117,0,0,419,420,5,99,0,0,420,422,5,116,0,0,421,403,1,0,
  	0,0,421,412,1,0,0,0,422,40,1,0,0,0,423,424,5,72,0,0,424,425,5,80,0,0,
  	425,426,5,84,0,0,426,427,5,73,0,0,427,428,5,77,0,0,428,436,5,69,0,0,429,
  	430,5,72,0,0,430,431,5,80,0,0,431,432,5,84,0,0,432,433,5,105,0,0,433,
  	434,5,109,0,0,434,436,5,101,0,0,435,423,1,0,0,0,435,429,1,0,0,0,436,42,
  	1,0,0,0,437,438,5,84,0,0,438,439,5,73,0,0,439,440,5,77,0,0,440,446,5,
  	69,0,0,441,442,5,84,0,0,442,443,5,105,0,0,443,444,5,109,0,0,444,446,5,
  	101,0,0,445,437,1,0,0,0,445,441,1,0,0,0,446,44,1,0,0,0,447,448,5,84,0,
  	0,448,449,5,73,0,0,449,450,5,77,0,0,450,451,5,69,0,0,451,458,5,36,0,0,
  	452,453,5,84,0,0,453,454,5,105,0,0,454,455,5,109,0,0,455,456,5,101,0,
  	0,456,458,5,36,0,0,457,447,1,0,0,0,457,452,1,0,0,0,458,46,1,0,0,0,459,
  	460,5,65,0,0,460,461,5,66,0,0,461,466,5,83,0,0,462,463,5,65,0,0,463,464,
  	5,98,0,0,464,466,5,115,0,0,465,459,1,0,0,0,465,462,1,0,0,0,466,48,1,0,
  	0,0,467,468,5,65,0,0,468,469,5,67,0,0,469,474,5,83,0,0,470,471,5,65,0,
  	0,471,472,5,99,0,0,472,474,5,115,0,0,473,467,1,0,0,0,473,470,1,0,0,0,
  	474,50,1,0,0,0,475,476,5,65,0,0,476,477,5,83,0,0,477,482,5,78,0,0,478,
  	479,5,65,0,0,479,480,5,115,0,0,480,482,5,110,0,0,481,475,1,0,0,0,481,
  	478,1,0,0,0,482,52,1,0,0,0,483,484,5,65,0,0,484,485,5,84,0,0,485,490,
  	5,78,0,0,486,487,5,65,0,0,487,488,5,116,0,0,488,490,5,110,0,0,489,483,
  	1,0,0,0,489,486,1,0,0,0,490,54,1,0,0,0,491,492,5,67,0,0,492,493,5,79,
  	0,0,493,498,5,83,0,0,494,495,5,67,0,0,495,496,5,111,0,0,496,498,5,115,
  	0,0,497,491,1,0,0,0,497,494,1,0,0,0,498,56,1,0,0,0,499,500,5,68,0,0,500,
  	501,5,69,0,0,501,506,5,71,0,0,502,503,5,68,0,0,503,504,5,101,0,0,504,
  	506,5,103,0,0,505,499,1,0,0,0,505,502,1,0,0,0,506,58,1,0,0,0,507,508,
  	5,69,0,0,508,509,5,88,0,0,509,514,5,80,0,0,510,511,5,69,0,0,511,512,5,
  	120,0,0,512,514,5,112,0,0,513,507,1,0,0,0,513,510,1,0,0,0,514,60,1,0,
  	0,0,515,516,5,70,0,0,516,517,5,76,0,0,517,518,5,79,0,0,518,519,5,79,0,
  	0,519,526,5,82,0,0,520,521,5,70,0,0,521,522,5,108,0,0,522,523,5,111,0,
  	0,523,524,5,111,0,0,524,526,5,114,0,0,525,515,1,0,0,0,525,520,1,0,0,0,
  	526,62,1,0,0,0,527,528,5,76,0,0,528,529,5,69,0,0,529,534,5,84,0,0,530,
  	531,5,76,0,0,531,532,5,101,0,0,532,534,5,116,0,0,533,527,1,0,0,0,533,
  	530,1,0,0,0,534,64,1,0,0,0,535,536,5,76,0,0,536,540,5,78,0,0,537,538,
  	5,76,0,0,538,540,5,110,0,0,539,535,1,0,0,0,539,537,1,0,0,0,540,66,1,0,
  	0,0,541,542,5,76,0,0,542,543,5,79,0,0,543,548,5,71,0,0,544,545,5,76,0,
  	0,545,546,5,111,0,0,546,548,5,103,0,0,547,541,1,0,0,0,547,544,1,0,0,0,
  	548,68,1,0,0,0,549,550,5,80,0,0,550,554,5,73,0,0,551,552,5,80,0,0,552,
  	554,5,105,0,0,553,549,1,0,0,0,553,551,1,0,0,0,554,70,1,0,0,0,555,556,
  	5,82,0,0,556,557,5,65,0,0,557,562,5,68,0,0,558,559,5,82,0,0,559,560,5,
  	97,0,0,560,562,5,100,0,0,561,555,1,0,0,0,561,558,1,0,0,0,562,72,1,0,0,
  	0,563,564,5,82,0,0,564,565,5,79,0,0,565,566,5,85,0,0,566,567,5,78,0,0,
  	567,574,5,68,0,0,568,569,5,82,0,0,569,570,5,111,0,0,570,571,5,117,0,0,
  	571,572,5,110,0,0,572,574,5,100,0,0,573,563,1,0,0,0,573,568,1,0,0,0,574,
  	74,1,0,0,0,575,576,5,83,0,0,576,577,5,71,0,0,577,582,5,78,0,0,578,579,
  	5,83,0,0,579,580,5,103,0,0,580,582,5,110,0,0,581,575,1,0,0,0,581,578,
  	1,0,0,0,582,76,1,0,0,0,583,584,5,83,0,0,584,585,5,73,0,0,585,590,5,78,
  	0,0,586,587,5,83,0,0,587,588,5,105,0,0,588,590,5,110,0,0,589,583,1,0,
  	0,0,589,586,1,0,0,0,590,78,1,0,0,0,591,592,5,83,0,0,592,593,5,81,0,0,
  	593,598,5,82,0,0,594,595,5,83,0,0,595,596,5,113,0,0,596,598,5,114,0,0,
  	597,591,1,0,0,0,597,594,1,0,0,0,598,80,1,0,0,0,599,600,5,84,0,0,600,601,
  	5,65,0,0,601,606,5,78,0,0,602,603,5,84,0,0,603,604,5,97,0,0,604,606,5,
  	110,0,0,605,599,1,0,0,0,605,602,1,0,0,0,606,82,1,0,0,0,607,608,5,70,0,
  	0,608,609,5,65,0,0,609,610,5,76,0,0,610,611,5,83,0,0,611,618,5,69,0,0,
  	612,613,5,70,0,0,613,614,5,97,0,0,614,615,5,108,0,0,615,616,5,115,0,0,
  	616,618,5,101,0,0,617,607,1,0,0,0,617,612,1,0,0,0,618,84,1,0,0,0,619,
  	620,5,84,0,0,620,621,5,82,0,0,621,622,5,85,0,0,622,628,5,69,0,0,623,624,
  	5,84,0,0,624,625,5,114,0,0,625,626,5,117,0,0,626,628,5,101,0,0,627,619,
  	1,0,0,0,627,623,1,0,0,0,628,86,1,0,0,0,629,630,5,65,0,0,630,631,5,83,
  	0,0,631,636,5,67,0,0,632,633,5,65,0,0,633,634,5,115,0,0,634,636,5,99,
  	0,0,635,629,1,0,0,0,635,632,1,0,0,0,636,88,1,0,0,0,637,638,5,67,0,0,638,
  	639,5,72,0,0,639,640,5,82,0,0,640,646,5,36,0,0,641,642,5,67,0,0,642,643,
  	5,104,0,0,643,644,5,114,0,0,644,646,5,36,0,0,645,637,1,0,0,0,645,641,
  	1,0,0,0,646,90,1,0,0,0,647,648,5,73,0,0,648,649,5,78,0,0,649,650,5,83,
  	0,0,650,651,5,84,0,0,651,658,5,82,0,0,652,653,5,73,0,0,653,654,5,110,
  	0,0,654,655,5,115,0,0,655,656,5,116,0,0,656,658,5,114,0,0,657,647,1,0,
  	0,0,657,652,1,0,0,0,658,92,1,0,0,0,659,660,5,76,0,0,660,661,5,69,0,0,
  	661,662,5,70,0,0,662,663,5,84,0,0,663,670,5,36,0,0,664,665,5,76,0,0,665,
  	666,5,101,0,0,666,667,5,102,0,0,667,668,5,116,0,0,668,670,5,36,0,0,669,
  	659,1,0,0,0,669,664,1,0,0,0,670,94,1,0,0,0,671,672,5,77,0,0,672,673,5,
  	73,0,0,673,674,5,68,0,0,674,680,5,36,0,0,675,676,5,77,0,0,676,677,5,105,
  	0,0,677,678,5,100,0,0,678,680,5,36,0,0,679,671,1,0,0,0,679,675,1,0,0,
  	0,680,96,1,0,0,0,681,682,5,82,0,0,682,683,5,73,0,0,683,684,5,71,0,0,684,
  	685,5,72,0,0,685,686,5,84,0,0,686,694,5,36,0,0,687,688,5,82,0,0,688,689,
  	5,105,0,0,689,690,5,103,0,0,690,691,5,104,0,0,691,692,5,116,0,0,692,694,
  	5,36,0,0,693,681,1,0,0,0,693,687,1,0,0,0,694,98,1,0,0,0,695,696,5,76,
  	0,0,696,697,5,69,0,0,697,702,5,78,0,0,698,699,5,76,0,0,699,700,5,101,
  	0,0,700,702,5,110,0,0,701,695,1,0,0,0,701,698,1,0,0,0,702,100,1,0,0,0,
  	703,704,5,66,0,0,704,705,5,89,0,0,705,706,5,84,0,0,706,712,5,69,0,0,707,
  	708,5,66,0,0,708,709,5,121,0,0,709,710,5,116,0,0,710,712,5,101,0,0,711,
  	703,1,0,0,0,711,707,1,0,0,0,712,102,1,0,0,0,713,714,5,73,0,0,714,715,
  	5,78,0,0,715,720,5,84,0,0,716,717,5,73,0,0,717,718,5,110,0,0,718,720,
  	5,116,0,0,719,713,1,0,0,0,719,716,1,0,0,0,720,104,1,0,0,0,721,722,5,70,
  	0,0,722,723,5,76,0,0,723,724,5,79,0,0,724,725,5,65,0,0,725,732,5,84,0,
  	0,726,727,5,70,0,0,727,728,5,108,0,0,728,729,5,111,0,0,729,730,5,97,0,
  	0,730,732,5,116,0,0,731,721,1,0,0,0,731,726,1,0,0,0,732,106,1,0,0,0,733,
  	734,5,83,0,0,734,735,5,84,0,0,735,736,5,82,0,0,736,737,5,73,0,0,737,738,
  	5,78,0,0,738,746,5,71,0,0,739,740,5,83,0,0,740,741,5,116,0,0,741,742,
  	5,114,0,0,742,743,5,105,0,0,743,744,5,110,0,0,744,746,5,103,0,0,745,733,
  	1,0,0,0,745,739,1,0,0,0,746,108,1,0,0,0,747,748,5,36,0,0,748,110,1,0,
  	0,0,749,750,5,35,0,0,750,112,1,0,0,0,751,752,5,58,0,0,752,114,1,0,0,0,
  	753,754,5,59,0,0,754,116,1,0,0,0,755,756,5,46,0,0,756,118,1,0,0,0,757,
  	758,5,44,0,0,758,120,1,0,0,0,759,760,5,39,0,0,760,122,1,0,0,0,761,763,
  	5,10,0,0,762,761,1,0,0,0,763,764,1,0,0,0,764,762,1,0,0,0,764,765,1,0,
  	0,0,765,124,1,0,0,0,766,767,5,37,0,0,767,126,1,0,0,0,768,769,5,95,0,0,
  	769,128,1,0,0,0,770,771,5,40,0,0,771,130,1,0,0,0,772,773,5,41,0,0,773,
  	132,1,0,0,0,774,775,5,91,0,0,775,134,1,0,0,0,776,777,5,93,0,0,777,136,
  	1,0,0,0,778,779,5,61,0,0,779,138,1,0,0,0,780,781,5,60,0,0,781,782,5,62,
  	0,0,782,140,1,0,0,0,783,784,5,62,0,0,784,142,1,0,0,0,785,786,5,62,0,0,
  	786,787,5,61,0,0,787,144,1,0,0,0,788,789,5,60,0,0,789,146,1,0,0,0,790,
  	791,5,60,0,0,791,792,5,61,0,0,792,148,1,0,0,0,793,794,5,94,0,0,794,150,
  	1,0,0,0,795,796,5,43,0,0,796,152,1,0,0,0,797,798,5,45,0,0,798,154,1,0,
  	0,0,799,800,5,42,0,0,800,156,1,0,0,0,801,802,5,47,0,0,802,158,1,0,0,0,
  	803,804,5,60,0,0,804,805,5,60,0,0,805,160,1,0,0,0,806,807,5,62,0,0,807,
  	808,5,62,0,0,808,162,1,0,0,0,809,810,5,77,0,0,810,811,5,79,0,0,811,816,
  	5,68,0,0,812,813,5,77,0,0,813,814,5,111,0,0,814,816,5,100,0,0,815,809,
  	1,0,0,0,815,812,1,0,0,0,816,164,1,0,0,0,817,818,5,68,0,0,818,819,5,73,
  	0,0,819,826,5,86,0,0,820,821,5,68,0,0,821,822,5,105,0,0,822,826,5,118,
  	0,0,823,824,5,47,0,0,824,826,5,47,0,0,825,817,1,0,0,0,825,820,1,0,0,0,
  	825,823,1,0,0,0,826,166,1,0,0,0,827,828,5,126,0,0,828,168,1,0,0,0,829,
  	830,5,78,0,0,830,831,5,79,0,0,831,836,5,84,0,0,832,833,5,78,0,0,833,834,
  	5,111,0,0,834,836,5,116,0,0,835,829,1,0,0,0,835,832,1,0,0,0,836,170,1,
  	0,0,0,837,838,5,65,0,0,838,839,5,78,0,0,839,844,5,68,0,0,840,841,5,65,
  	0,0,841,842,5,110,0,0,842,844,5,100,0,0,843,837,1,0,0,0,843,840,1,0,0,
  	0,844,172,1,0,0,0,845,846,5,79,0,0,846,850,5,82,0,0,847,848,5,79,0,0,
  	848,850,5,114,0,0,849,845,1,0,0,0,849,847,1,0,0,0,850,174,1,0,0,0,851,
  	852,5,69,0,0,852,853,5,79,0,0,853,858,5,82,0,0,854,855,5,69,0,0,855,856,
  	5,111,0,0,856,858,5,114,0,0,857,851,1,0,0,0,857,854,1,0,0,0,858,176,1,
  	0,0,0,859,863,5,34,0,0,860,862,8,1,0,0,861,860,1,0,0,0,862,865,1,0,0,
  	0,863,861,1,0,0,0,863,864,1,0,0,0,864,866,1,0,0,0,865,863,1,0,0,0,866,
  	867,5,34,0,0,867,178,1,0,0,0,868,870,5,38,0,0,869,871,3,189,94,0,870,
  	869,1,0,0,0,871,872,1,0,0,0,872,870,1,0,0,0,872,873,1,0,0,0,873,180,1,
  	0,0,0,874,876,3,125,62,0,875,877,7,2,0,0,876,875,1,0,0,0,877,878,1,0,
  	0,0,878,876,1,0,0,0,878,879,1,0,0,0,879,182,1,0,0,0,880,882,3,195,97,
  	0,881,880,1,0,0,0,882,883,1,0,0,0,883,881,1,0,0,0,883,884,1,0,0,0,884,
  	885,1,0,0,0,885,887,5,46,0,0,886,888,3,195,97,0,887,886,1,0,0,0,888,889,
  	1,0,0,0,889,887,1,0,0,0,889,890,1,0,0,0,890,899,1,0,0,0,891,893,7,3,0,
  	0,892,894,7,4,0,0,893,892,1,0,0,0,894,895,1,0,0,0,895,893,1,0,0,0,895,
  	896,1,0,0,0,896,898,1,0,0,0,897,891,1,0,0,0,898,901,1,0,0,0,899,897,1,
  	0,0,0,899,900,1,0,0,0,900,184,1,0,0,0,901,899,1,0,0,0,902,904,3,195,97,
  	0,903,902,1,0,0,0,904,905,1,0,0,0,905,903,1,0,0,0,905,906,1,0,0,0,906,
  	186,1,0,0,0,907,908,3,191,95,0,908,188,1,0,0,0,909,910,7,5,0,0,910,190,
  	1,0,0,0,911,917,3,193,96,0,912,916,3,193,96,0,913,916,3,195,97,0,914,
  	916,3,127,63,0,915,912,1,0,0,0,915,913,1,0,0,0,915,914,1,0,0,0,916,919,
  	1,0,0,0,917,915,1,0,0,0,917,918,1,0,0,0,918,923,1,0,0,0,919,917,1,0,0,
  	0,920,924,3,125,62,0,921,924,3,109,54,0,922,924,3,111,55,0,923,920,1,
  	0,0,0,923,921,1,0,0,0,923,922,1,0,0,0,923,924,1,0,0,0,924,192,1,0,0,0,
  	925,926,7,6,0,0,926,194,1,0,0,0,927,928,7,4,0,0,928,196,1,0,0,0,929,931,
  	7,7,0,0,930,929,1,0,0,0,931,932,1,0,0,0,932,930,1,0,0,0,932,933,1,0,0,
  	0,933,934,1,0,0,0,934,935,6,98,0,0,935,198,1,0,0,0,75,0,202,207,220,228,
  	236,246,254,268,280,286,300,306,318,334,342,356,366,377,387,401,421,435,
  	445,457,465,473,481,489,497,505,513,525,533,539,547,553,561,573,581,589,
  	597,605,617,627,635,645,657,669,679,693,701,711,719,731,745,764,815,825,
  	835,843,849,857,863,872,878,883,889,895,899,905,915,917,923,932,1,0,1,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dariclexerLexerStaticData = staticData.release();
}

}

DaricLexer::DaricLexer(CharStream *input) : Lexer(input) {
  DaricLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *dariclexerLexerStaticData->atn, dariclexerLexerStaticData->decisionToDFA, dariclexerLexerStaticData->sharedContextCache);
}

DaricLexer::~DaricLexer() {
  delete _interpreter;
}

std::string DaricLexer::getGrammarFileName() const {
  return "Daric.g4";
}

const std::vector<std::string>& DaricLexer::getRuleNames() const {
  return dariclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& DaricLexer::getChannelNames() const {
  return dariclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& DaricLexer::getModeNames() const {
  return dariclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& DaricLexer::getVocabulary() const {
  return dariclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DaricLexer::getSerializedATN() const {
  return dariclexerLexerStaticData->serializedATN;
}

const atn::ATN& DaricLexer::getATN() const {
  return *dariclexerLexerStaticData->atn;
}




void DaricLexer::initialize() {
  ::antlr4::internal::call_once(dariclexerLexerOnceFlag, dariclexerLexerInitialize);
}


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
      "COMMENT", "CASE", "CONST", "DEF", "DIM", "ELSE", "END", "ENDCASE", 
      "ENDDEF", "ENDIF", "ENDWHILE", "FOR", "IF", "MODULE", "NEXT", "OF", 
      "OTHERWISE", "PRINT", "PRIVATE", "REM", "REPEAT", "RETURN", "THEN", 
      "STEP", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "DEFRECORD", 
      "RECORD", "ENDRECORD", "HPTIME", "TIME", "TIMES", "ABS", "ACS", "ASN", 
      "ATN", "COS", "DEG", "EXP", "FLOOR", "LET", "LN", "LOG", "PI", "RAD", 
      "ROUND", "SGN", "SIN", "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHRS", 
      "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", "BYTE", "INT", "FLOAT", 
      "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", 
      "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", 
      "SCLOSE", "EQ", "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", 
      "MULTIPLY", "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", 
      "OR", "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
      "INTEGERLITERAL", "IDENTIFIER", "HEX", "NAME", "ALPHA", "DIGIT", "WS"
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
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "'$'", "'#'", "':'", "';'", "'.'", "','", "'''", "", "'%'", "'_'", 
      "'('", "')'", "'['", "']'", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
      "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "COMMENT", "CASE", "CONST", "DEF", "DIM", "ELSE", "END", "ENDCASE", 
      "ENDDEF", "ENDIF", "ENDWHILE", "FOR", "IF", "MODULE", "NEXT", "OF", 
      "OTHERWISE", "PRINT", "PRIVATE", "REM", "REPEAT", "RETURN", "THEN", 
      "STEP", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "DEFRECORD", 
      "RECORD", "ENDRECORD", "HPTIME", "TIME", "TIMES", "ABS", "ACS", "ASN", 
      "ATN", "COS", "DEG", "EXP", "FLOOR", "LET", "LN", "LOG", "PI", "RAD", 
      "ROUND", "SGN", "SIN", "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHRS", 
      "INSTR", "LEFTS", "MIDS", "RIGHTS", "LEN", "BYTE", "INT", "FLOAT", 
      "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", 
      "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", 
      "SCLOSE", "EQ", "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", 
      "MULTIPLY", "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", 
      "OR", "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
      "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,108,1128,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,1,0,1,0,1,0,3,0,229,8,0,1,0,5,0,232,8,0,10,0,12,0,235,
  	9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,245,8,1,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,257,8,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,265,8,3,1,4,
  	1,4,1,4,1,4,1,4,1,4,3,4,273,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,283,
  	8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,291,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,307,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,321,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,
  	9,333,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,3,10,351,8,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	359,8,11,1,12,1,12,1,12,1,12,3,12,365,8,12,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,379,8,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,3,14,389,8,14,1,15,1,15,1,15,1,15,3,15,395,8,15,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,3,16,415,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,3,17,427,8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,3,18,443,8,18,1,19,1,19,1,19,1,19,1,19,1,19,
  	3,19,451,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,3,20,465,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,3,21,479,8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,
  	489,8,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,499,8,23,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,510,8,24,1,25,1,25,1,25,1,
  	25,3,25,516,8,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,
  	26,528,8,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,538,8,27,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,548,8,28,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,3,29,560,8,29,1,30,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,30,
  	580,8,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,
  	3,31,594,8,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,3,32,614,8,32,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,628,8,33,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,3,34,638,8,34,1,35,1,35,1,35,1,35,1,35,1,35,
  	1,35,1,35,1,35,1,35,3,35,650,8,35,1,36,1,36,1,36,1,36,1,36,1,36,3,36,
  	658,8,36,1,37,1,37,1,37,1,37,1,37,1,37,3,37,666,8,37,1,38,1,38,1,38,1,
  	38,1,38,1,38,3,38,674,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,682,8,39,
  	1,40,1,40,1,40,1,40,1,40,1,40,3,40,690,8,40,1,41,1,41,1,41,1,41,1,41,
  	1,41,3,41,698,8,41,1,42,1,42,1,42,1,42,1,42,1,42,3,42,706,8,42,1,43,1,
  	43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,718,8,43,1,44,1,44,1,
  	44,1,44,1,44,1,44,3,44,726,8,44,1,45,1,45,1,45,1,45,3,45,732,8,45,1,46,
  	1,46,1,46,1,46,1,46,1,46,3,46,740,8,46,1,47,1,47,1,47,1,47,3,47,746,8,
  	47,1,48,1,48,1,48,1,48,1,48,1,48,3,48,754,8,48,1,49,1,49,1,49,1,49,1,
  	49,1,49,1,49,1,49,1,49,1,49,3,49,766,8,49,1,50,1,50,1,50,1,50,1,50,1,
  	50,3,50,774,8,50,1,51,1,51,1,51,1,51,1,51,1,51,3,51,782,8,51,1,52,1,52,
  	1,52,1,52,1,52,1,52,3,52,790,8,52,1,53,1,53,1,53,1,53,1,53,1,53,3,53,
  	798,8,53,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,3,54,810,8,
  	54,1,55,1,55,1,55,1,55,1,55,1,55,1,55,1,55,3,55,820,8,55,1,56,1,56,1,
  	56,1,56,1,56,1,56,3,56,828,8,56,1,57,1,57,1,57,1,57,1,57,1,57,1,57,1,
  	57,3,57,838,8,57,1,58,1,58,1,58,1,58,1,58,1,58,1,58,1,58,1,58,1,58,3,
  	58,850,8,58,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,3,59,862,
  	8,59,1,60,1,60,1,60,1,60,1,60,1,60,1,60,1,60,3,60,872,8,60,1,61,1,61,
  	1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,61,3,61,886,8,61,1,62,
  	1,62,1,62,1,62,1,62,1,62,3,62,894,8,62,1,63,1,63,1,63,1,63,1,63,1,63,
  	1,63,1,63,3,63,904,8,63,1,64,1,64,1,64,1,64,1,64,1,64,3,64,912,8,64,1,
  	65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,1,65,3,65,924,8,65,1,66,1,
  	66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,3,66,938,8,66,1,
  	67,1,67,1,68,1,68,1,69,1,69,1,70,1,70,1,71,1,71,1,72,1,72,1,73,1,73,1,
  	74,4,74,955,8,74,11,74,12,74,956,1,75,1,75,1,76,1,76,1,77,1,77,1,78,1,
  	78,1,79,1,79,1,80,1,80,1,81,1,81,1,82,1,82,1,82,1,83,1,83,1,84,1,84,1,
  	84,1,85,1,85,1,86,1,86,1,86,1,87,1,87,1,88,1,88,1,89,1,89,1,90,1,90,1,
  	91,1,91,1,92,1,92,1,92,1,93,1,93,1,93,1,94,1,94,1,94,1,94,1,94,1,94,3,
  	94,1008,8,94,1,95,1,95,1,95,1,95,1,95,1,95,1,95,1,95,3,95,1018,8,95,1,
  	96,1,96,1,97,1,97,1,97,1,97,1,97,1,97,3,97,1028,8,97,1,98,1,98,1,98,1,
  	98,1,98,1,98,3,98,1036,8,98,1,99,1,99,1,99,1,99,3,99,1042,8,99,1,100,
  	1,100,1,100,1,100,1,100,1,100,3,100,1050,8,100,1,101,1,101,5,101,1054,
  	8,101,10,101,12,101,1057,9,101,1,101,1,101,1,102,1,102,4,102,1063,8,102,
  	11,102,12,102,1064,1,103,1,103,4,103,1069,8,103,11,103,12,103,1070,1,
  	104,4,104,1074,8,104,11,104,12,104,1075,1,104,1,104,4,104,1080,8,104,
  	11,104,12,104,1081,1,104,1,104,4,104,1086,8,104,11,104,12,104,1087,5,
  	104,1090,8,104,10,104,12,104,1093,9,104,1,105,4,105,1096,8,105,11,105,
  	12,105,1097,1,106,1,106,1,107,1,107,1,108,1,108,1,108,1,108,5,108,1108,
  	8,108,10,108,12,108,1111,9,108,1,108,1,108,1,108,3,108,1116,8,108,1,109,
  	1,109,1,110,1,110,1,111,4,111,1123,8,111,11,111,12,111,1124,1,111,1,111,
  	0,0,112,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,
  	36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,
  	95,48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,111,56,113,57,115,
  	58,117,59,119,60,121,61,123,62,125,63,127,64,129,65,131,66,133,67,135,
  	68,137,69,139,70,141,71,143,72,145,73,147,74,149,75,151,76,153,77,155,
  	78,157,79,159,80,161,81,163,82,165,83,167,84,169,85,171,86,173,87,175,
  	88,177,89,179,90,181,91,183,92,185,93,187,94,189,95,191,96,193,97,195,
  	98,197,99,199,100,201,101,203,102,205,103,207,104,209,105,211,106,213,
  	107,215,0,217,0,219,0,221,0,223,108,1,0,8,2,0,10,10,13,13,3,0,10,10,13,
  	13,34,34,2,0,48,49,124,124,3,0,69,69,101,101,124,124,1,0,48,57,3,0,48,
  	57,65,70,97,102,2,0,65,90,97,122,3,0,9,9,13,13,32,32,1215,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,
  	1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,
  	0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,
  	0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,
  	1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,
  	1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,
  	1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,
  	1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,
  	1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,0,0,149,
  	1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,0,0,159,
  	1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,0,0,0,0,169,
  	1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,177,1,0,0,0,0,179,
  	1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,187,1,0,0,0,0,189,
  	1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,197,1,0,0,0,0,199,
  	1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,207,1,0,0,0,0,209,
  	1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,223,1,0,0,0,1,228,1,0,0,0,3,244,
  	1,0,0,0,5,256,1,0,0,0,7,264,1,0,0,0,9,272,1,0,0,0,11,282,1,0,0,0,13,290,
  	1,0,0,0,15,306,1,0,0,0,17,320,1,0,0,0,19,332,1,0,0,0,21,350,1,0,0,0,23,
  	358,1,0,0,0,25,364,1,0,0,0,27,378,1,0,0,0,29,388,1,0,0,0,31,394,1,0,0,
  	0,33,414,1,0,0,0,35,426,1,0,0,0,37,442,1,0,0,0,39,450,1,0,0,0,41,464,
  	1,0,0,0,43,478,1,0,0,0,45,488,1,0,0,0,47,498,1,0,0,0,49,509,1,0,0,0,51,
  	515,1,0,0,0,53,527,1,0,0,0,55,537,1,0,0,0,57,547,1,0,0,0,59,559,1,0,0,
  	0,61,579,1,0,0,0,63,593,1,0,0,0,65,613,1,0,0,0,67,627,1,0,0,0,69,637,
  	1,0,0,0,71,649,1,0,0,0,73,657,1,0,0,0,75,665,1,0,0,0,77,673,1,0,0,0,79,
  	681,1,0,0,0,81,689,1,0,0,0,83,697,1,0,0,0,85,705,1,0,0,0,87,717,1,0,0,
  	0,89,725,1,0,0,0,91,731,1,0,0,0,93,739,1,0,0,0,95,745,1,0,0,0,97,753,
  	1,0,0,0,99,765,1,0,0,0,101,773,1,0,0,0,103,781,1,0,0,0,105,789,1,0,0,
  	0,107,797,1,0,0,0,109,809,1,0,0,0,111,819,1,0,0,0,113,827,1,0,0,0,115,
  	837,1,0,0,0,117,849,1,0,0,0,119,861,1,0,0,0,121,871,1,0,0,0,123,885,1,
  	0,0,0,125,893,1,0,0,0,127,903,1,0,0,0,129,911,1,0,0,0,131,923,1,0,0,0,
  	133,937,1,0,0,0,135,939,1,0,0,0,137,941,1,0,0,0,139,943,1,0,0,0,141,945,
  	1,0,0,0,143,947,1,0,0,0,145,949,1,0,0,0,147,951,1,0,0,0,149,954,1,0,0,
  	0,151,958,1,0,0,0,153,960,1,0,0,0,155,962,1,0,0,0,157,964,1,0,0,0,159,
  	966,1,0,0,0,161,968,1,0,0,0,163,970,1,0,0,0,165,972,1,0,0,0,167,975,1,
  	0,0,0,169,977,1,0,0,0,171,980,1,0,0,0,173,982,1,0,0,0,175,985,1,0,0,0,
  	177,987,1,0,0,0,179,989,1,0,0,0,181,991,1,0,0,0,183,993,1,0,0,0,185,995,
  	1,0,0,0,187,998,1,0,0,0,189,1007,1,0,0,0,191,1017,1,0,0,0,193,1019,1,
  	0,0,0,195,1027,1,0,0,0,197,1035,1,0,0,0,199,1041,1,0,0,0,201,1049,1,0,
  	0,0,203,1051,1,0,0,0,205,1060,1,0,0,0,207,1066,1,0,0,0,209,1073,1,0,0,
  	0,211,1095,1,0,0,0,213,1099,1,0,0,0,215,1101,1,0,0,0,217,1103,1,0,0,0,
  	219,1117,1,0,0,0,221,1119,1,0,0,0,223,1122,1,0,0,0,225,229,3,39,19,0,
  	226,229,3,137,68,0,227,229,3,147,73,0,228,225,1,0,0,0,228,226,1,0,0,0,
  	228,227,1,0,0,0,229,233,1,0,0,0,230,232,8,0,0,0,231,230,1,0,0,0,232,235,
  	1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,2,1,0,0,0,235,233,1,0,0,0,
  	236,237,5,67,0,0,237,238,5,65,0,0,238,239,5,83,0,0,239,245,5,69,0,0,240,
  	241,5,67,0,0,241,242,5,97,0,0,242,243,5,115,0,0,243,245,5,101,0,0,244,
  	236,1,0,0,0,244,240,1,0,0,0,245,4,1,0,0,0,246,247,5,67,0,0,247,248,5,
  	79,0,0,248,249,5,78,0,0,249,250,5,83,0,0,250,257,5,84,0,0,251,252,5,67,
  	0,0,252,253,5,111,0,0,253,254,5,110,0,0,254,255,5,115,0,0,255,257,5,116,
  	0,0,256,246,1,0,0,0,256,251,1,0,0,0,257,6,1,0,0,0,258,259,5,68,0,0,259,
  	260,5,69,0,0,260,265,5,70,0,0,261,262,5,68,0,0,262,263,5,101,0,0,263,
  	265,5,102,0,0,264,258,1,0,0,0,264,261,1,0,0,0,265,8,1,0,0,0,266,267,5,
  	68,0,0,267,268,5,73,0,0,268,273,5,77,0,0,269,270,5,68,0,0,270,271,5,105,
  	0,0,271,273,5,109,0,0,272,266,1,0,0,0,272,269,1,0,0,0,273,10,1,0,0,0,
  	274,275,5,69,0,0,275,276,5,76,0,0,276,277,5,83,0,0,277,283,5,69,0,0,278,
  	279,5,69,0,0,279,280,5,108,0,0,280,281,5,115,0,0,281,283,5,101,0,0,282,
  	274,1,0,0,0,282,278,1,0,0,0,283,12,1,0,0,0,284,285,5,69,0,0,285,286,5,
  	78,0,0,286,291,5,68,0,0,287,288,5,69,0,0,288,289,5,110,0,0,289,291,5,
  	100,0,0,290,284,1,0,0,0,290,287,1,0,0,0,291,14,1,0,0,0,292,293,5,69,0,
  	0,293,294,5,78,0,0,294,295,5,68,0,0,295,296,5,67,0,0,296,297,5,65,0,0,
  	297,298,5,83,0,0,298,307,5,69,0,0,299,300,5,69,0,0,300,301,5,110,0,0,
  	301,302,5,100,0,0,302,303,5,67,0,0,303,304,5,97,0,0,304,305,5,115,0,0,
  	305,307,5,101,0,0,306,292,1,0,0,0,306,299,1,0,0,0,307,16,1,0,0,0,308,
  	309,5,69,0,0,309,310,5,78,0,0,310,311,5,68,0,0,311,312,5,68,0,0,312,313,
  	5,69,0,0,313,321,5,70,0,0,314,315,5,69,0,0,315,316,5,110,0,0,316,317,
  	5,100,0,0,317,318,5,68,0,0,318,319,5,101,0,0,319,321,5,102,0,0,320,308,
  	1,0,0,0,320,314,1,0,0,0,321,18,1,0,0,0,322,323,5,69,0,0,323,324,5,78,
  	0,0,324,325,5,68,0,0,325,326,5,73,0,0,326,333,5,70,0,0,327,328,5,69,0,
  	0,328,329,5,110,0,0,329,330,5,100,0,0,330,331,5,73,0,0,331,333,5,102,
  	0,0,332,322,1,0,0,0,332,327,1,0,0,0,333,20,1,0,0,0,334,335,5,69,0,0,335,
  	336,5,78,0,0,336,337,5,68,0,0,337,338,5,87,0,0,338,339,5,72,0,0,339,340,
  	5,73,0,0,340,341,5,76,0,0,341,351,5,69,0,0,342,343,5,69,0,0,343,344,5,
  	110,0,0,344,345,5,100,0,0,345,346,5,87,0,0,346,347,5,104,0,0,347,348,
  	5,105,0,0,348,349,5,108,0,0,349,351,5,101,0,0,350,334,1,0,0,0,350,342,
  	1,0,0,0,351,22,1,0,0,0,352,353,5,70,0,0,353,354,5,79,0,0,354,359,5,82,
  	0,0,355,356,5,70,0,0,356,357,5,111,0,0,357,359,5,114,0,0,358,352,1,0,
  	0,0,358,355,1,0,0,0,359,24,1,0,0,0,360,361,5,73,0,0,361,365,5,70,0,0,
  	362,363,5,73,0,0,363,365,5,102,0,0,364,360,1,0,0,0,364,362,1,0,0,0,365,
  	26,1,0,0,0,366,367,5,77,0,0,367,368,5,79,0,0,368,369,5,68,0,0,369,370,
  	5,85,0,0,370,371,5,76,0,0,371,379,5,69,0,0,372,373,5,77,0,0,373,374,5,
  	111,0,0,374,375,5,100,0,0,375,376,5,117,0,0,376,377,5,108,0,0,377,379,
  	5,101,0,0,378,366,1,0,0,0,378,372,1,0,0,0,379,28,1,0,0,0,380,381,5,78,
  	0,0,381,382,5,69,0,0,382,383,5,88,0,0,383,389,5,84,0,0,384,385,5,78,0,
  	0,385,386,5,101,0,0,386,387,5,120,0,0,387,389,5,116,0,0,388,380,1,0,0,
  	0,388,384,1,0,0,0,389,30,1,0,0,0,390,391,5,79,0,0,391,395,5,70,0,0,392,
  	393,5,79,0,0,393,395,5,102,0,0,394,390,1,0,0,0,394,392,1,0,0,0,395,32,
  	1,0,0,0,396,397,5,79,0,0,397,398,5,84,0,0,398,399,5,72,0,0,399,400,5,
  	69,0,0,400,401,5,82,0,0,401,402,5,87,0,0,402,403,5,73,0,0,403,404,5,83,
  	0,0,404,415,5,69,0,0,405,406,5,79,0,0,406,407,5,116,0,0,407,408,5,104,
  	0,0,408,409,5,101,0,0,409,410,5,114,0,0,410,411,5,119,0,0,411,412,5,105,
  	0,0,412,413,5,115,0,0,413,415,5,101,0,0,414,396,1,0,0,0,414,405,1,0,0,
  	0,415,34,1,0,0,0,416,417,5,80,0,0,417,418,5,82,0,0,418,419,5,73,0,0,419,
  	420,5,78,0,0,420,427,5,84,0,0,421,422,5,80,0,0,422,423,5,114,0,0,423,
  	424,5,105,0,0,424,425,5,110,0,0,425,427,5,116,0,0,426,416,1,0,0,0,426,
  	421,1,0,0,0,427,36,1,0,0,0,428,429,5,80,0,0,429,430,5,82,0,0,430,431,
  	5,73,0,0,431,432,5,86,0,0,432,433,5,65,0,0,433,434,5,84,0,0,434,443,5,
  	69,0,0,435,436,5,80,0,0,436,437,5,114,0,0,437,438,5,105,0,0,438,439,5,
  	118,0,0,439,440,5,97,0,0,440,441,5,116,0,0,441,443,5,101,0,0,442,428,
  	1,0,0,0,442,435,1,0,0,0,443,38,1,0,0,0,444,445,5,82,0,0,445,446,5,69,
  	0,0,446,451,5,77,0,0,447,448,5,82,0,0,448,449,5,101,0,0,449,451,5,109,
  	0,0,450,444,1,0,0,0,450,447,1,0,0,0,451,40,1,0,0,0,452,453,5,82,0,0,453,
  	454,5,69,0,0,454,455,5,80,0,0,455,456,5,69,0,0,456,457,5,65,0,0,457,465,
  	5,84,0,0,458,459,5,82,0,0,459,460,5,101,0,0,460,461,5,112,0,0,461,462,
  	5,101,0,0,462,463,5,97,0,0,463,465,5,116,0,0,464,452,1,0,0,0,464,458,
  	1,0,0,0,465,42,1,0,0,0,466,467,5,82,0,0,467,468,5,69,0,0,468,469,5,84,
  	0,0,469,470,5,85,0,0,470,471,5,82,0,0,471,479,5,78,0,0,472,473,5,82,0,
  	0,473,474,5,101,0,0,474,475,5,116,0,0,475,476,5,117,0,0,476,477,5,114,
  	0,0,477,479,5,110,0,0,478,466,1,0,0,0,478,472,1,0,0,0,479,44,1,0,0,0,
  	480,481,5,84,0,0,481,482,5,72,0,0,482,483,5,69,0,0,483,489,5,78,0,0,484,
  	485,5,84,0,0,485,486,5,104,0,0,486,487,5,101,0,0,487,489,5,110,0,0,488,
  	480,1,0,0,0,488,484,1,0,0,0,489,46,1,0,0,0,490,491,5,83,0,0,491,492,5,
  	84,0,0,492,493,5,69,0,0,493,499,5,80,0,0,494,495,5,83,0,0,495,496,5,116,
  	0,0,496,497,5,101,0,0,497,499,5,112,0,0,498,490,1,0,0,0,498,494,1,0,0,
  	0,499,48,1,0,0,0,500,501,5,83,0,0,501,502,5,87,0,0,502,503,5,65,0,0,503,
  	510,5,80,0,0,504,505,5,83,0,0,505,506,5,119,0,0,506,507,5,97,0,0,507,
  	508,5,112,0,0,508,510,5,32,0,0,509,500,1,0,0,0,509,504,1,0,0,0,510,50,
  	1,0,0,0,511,512,5,84,0,0,512,516,5,79,0,0,513,514,5,84,0,0,514,516,5,
  	111,0,0,515,511,1,0,0,0,515,513,1,0,0,0,516,52,1,0,0,0,517,518,5,85,0,
  	0,518,519,5,78,0,0,519,520,5,84,0,0,520,521,5,73,0,0,521,528,5,76,0,0,
  	522,523,5,85,0,0,523,524,5,110,0,0,524,525,5,116,0,0,525,526,5,105,0,
  	0,526,528,5,108,0,0,527,517,1,0,0,0,527,522,1,0,0,0,528,54,1,0,0,0,529,
  	530,5,87,0,0,530,531,5,72,0,0,531,532,5,69,0,0,532,538,5,78,0,0,533,534,
  	5,87,0,0,534,535,5,104,0,0,535,536,5,101,0,0,536,538,5,110,0,0,537,529,
  	1,0,0,0,537,533,1,0,0,0,538,56,1,0,0,0,539,540,5,87,0,0,540,541,5,73,
  	0,0,541,542,5,84,0,0,542,548,5,72,0,0,543,544,5,87,0,0,544,545,5,105,
  	0,0,545,546,5,116,0,0,546,548,5,104,0,0,547,539,1,0,0,0,547,543,1,0,0,
  	0,548,58,1,0,0,0,549,550,5,87,0,0,550,551,5,72,0,0,551,552,5,73,0,0,552,
  	553,5,76,0,0,553,560,5,69,0,0,554,555,5,87,0,0,555,556,5,104,0,0,556,
  	557,5,105,0,0,557,558,5,108,0,0,558,560,5,101,0,0,559,549,1,0,0,0,559,
  	554,1,0,0,0,560,60,1,0,0,0,561,562,5,68,0,0,562,563,5,69,0,0,563,564,
  	5,70,0,0,564,565,5,82,0,0,565,566,5,69,0,0,566,567,5,67,0,0,567,568,5,
  	79,0,0,568,569,5,82,0,0,569,580,5,68,0,0,570,571,5,68,0,0,571,572,5,101,
  	0,0,572,573,5,102,0,0,573,574,5,82,0,0,574,575,5,101,0,0,575,576,5,99,
  	0,0,576,577,5,111,0,0,577,578,5,114,0,0,578,580,5,100,0,0,579,561,1,0,
  	0,0,579,570,1,0,0,0,580,62,1,0,0,0,581,582,5,82,0,0,582,583,5,69,0,0,
  	583,584,5,67,0,0,584,585,5,79,0,0,585,586,5,82,0,0,586,594,5,68,0,0,587,
  	588,5,82,0,0,588,589,5,101,0,0,589,590,5,99,0,0,590,591,5,111,0,0,591,
  	592,5,114,0,0,592,594,5,100,0,0,593,581,1,0,0,0,593,587,1,0,0,0,594,64,
  	1,0,0,0,595,596,5,69,0,0,596,597,5,78,0,0,597,598,5,68,0,0,598,599,5,
  	82,0,0,599,600,5,69,0,0,600,601,5,67,0,0,601,602,5,79,0,0,602,603,5,82,
  	0,0,603,614,5,68,0,0,604,605,5,69,0,0,605,606,5,110,0,0,606,607,5,100,
  	0,0,607,608,5,82,0,0,608,609,5,101,0,0,609,610,5,99,0,0,610,611,5,111,
  	0,0,611,612,5,114,0,0,612,614,5,100,0,0,613,595,1,0,0,0,613,604,1,0,0,
  	0,614,66,1,0,0,0,615,616,5,72,0,0,616,617,5,80,0,0,617,618,5,84,0,0,618,
  	619,5,73,0,0,619,620,5,77,0,0,620,628,5,69,0,0,621,622,5,72,0,0,622,623,
  	5,80,0,0,623,624,5,84,0,0,624,625,5,105,0,0,625,626,5,109,0,0,626,628,
  	5,101,0,0,627,615,1,0,0,0,627,621,1,0,0,0,628,68,1,0,0,0,629,630,5,84,
  	0,0,630,631,5,73,0,0,631,632,5,77,0,0,632,638,5,69,0,0,633,634,5,84,0,
  	0,634,635,5,105,0,0,635,636,5,109,0,0,636,638,5,101,0,0,637,629,1,0,0,
  	0,637,633,1,0,0,0,638,70,1,0,0,0,639,640,5,84,0,0,640,641,5,73,0,0,641,
  	642,5,77,0,0,642,643,5,69,0,0,643,650,5,36,0,0,644,645,5,84,0,0,645,646,
  	5,105,0,0,646,647,5,109,0,0,647,648,5,101,0,0,648,650,5,36,0,0,649,639,
  	1,0,0,0,649,644,1,0,0,0,650,72,1,0,0,0,651,652,5,65,0,0,652,653,5,66,
  	0,0,653,658,5,83,0,0,654,655,5,65,0,0,655,656,5,98,0,0,656,658,5,115,
  	0,0,657,651,1,0,0,0,657,654,1,0,0,0,658,74,1,0,0,0,659,660,5,65,0,0,660,
  	661,5,67,0,0,661,666,5,83,0,0,662,663,5,65,0,0,663,664,5,99,0,0,664,666,
  	5,115,0,0,665,659,1,0,0,0,665,662,1,0,0,0,666,76,1,0,0,0,667,668,5,65,
  	0,0,668,669,5,83,0,0,669,674,5,78,0,0,670,671,5,65,0,0,671,672,5,115,
  	0,0,672,674,5,110,0,0,673,667,1,0,0,0,673,670,1,0,0,0,674,78,1,0,0,0,
  	675,676,5,65,0,0,676,677,5,84,0,0,677,682,5,78,0,0,678,679,5,65,0,0,679,
  	680,5,116,0,0,680,682,5,110,0,0,681,675,1,0,0,0,681,678,1,0,0,0,682,80,
  	1,0,0,0,683,684,5,67,0,0,684,685,5,79,0,0,685,690,5,83,0,0,686,687,5,
  	67,0,0,687,688,5,111,0,0,688,690,5,115,0,0,689,683,1,0,0,0,689,686,1,
  	0,0,0,690,82,1,0,0,0,691,692,5,68,0,0,692,693,5,69,0,0,693,698,5,71,0,
  	0,694,695,5,68,0,0,695,696,5,101,0,0,696,698,5,103,0,0,697,691,1,0,0,
  	0,697,694,1,0,0,0,698,84,1,0,0,0,699,700,5,69,0,0,700,701,5,88,0,0,701,
  	706,5,80,0,0,702,703,5,69,0,0,703,704,5,120,0,0,704,706,5,112,0,0,705,
  	699,1,0,0,0,705,702,1,0,0,0,706,86,1,0,0,0,707,708,5,70,0,0,708,709,5,
  	76,0,0,709,710,5,79,0,0,710,711,5,79,0,0,711,718,5,82,0,0,712,713,5,70,
  	0,0,713,714,5,108,0,0,714,715,5,111,0,0,715,716,5,111,0,0,716,718,5,114,
  	0,0,717,707,1,0,0,0,717,712,1,0,0,0,718,88,1,0,0,0,719,720,5,76,0,0,720,
  	721,5,69,0,0,721,726,5,84,0,0,722,723,5,76,0,0,723,724,5,101,0,0,724,
  	726,5,116,0,0,725,719,1,0,0,0,725,722,1,0,0,0,726,90,1,0,0,0,727,728,
  	5,76,0,0,728,732,5,78,0,0,729,730,5,76,0,0,730,732,5,110,0,0,731,727,
  	1,0,0,0,731,729,1,0,0,0,732,92,1,0,0,0,733,734,5,76,0,0,734,735,5,79,
  	0,0,735,740,5,71,0,0,736,737,5,76,0,0,737,738,5,111,0,0,738,740,5,103,
  	0,0,739,733,1,0,0,0,739,736,1,0,0,0,740,94,1,0,0,0,741,742,5,80,0,0,742,
  	746,5,73,0,0,743,744,5,80,0,0,744,746,5,105,0,0,745,741,1,0,0,0,745,743,
  	1,0,0,0,746,96,1,0,0,0,747,748,5,82,0,0,748,749,5,65,0,0,749,754,5,68,
  	0,0,750,751,5,82,0,0,751,752,5,97,0,0,752,754,5,100,0,0,753,747,1,0,0,
  	0,753,750,1,0,0,0,754,98,1,0,0,0,755,756,5,82,0,0,756,757,5,79,0,0,757,
  	758,5,85,0,0,758,759,5,78,0,0,759,766,5,68,0,0,760,761,5,82,0,0,761,762,
  	5,111,0,0,762,763,5,117,0,0,763,764,5,110,0,0,764,766,5,100,0,0,765,755,
  	1,0,0,0,765,760,1,0,0,0,766,100,1,0,0,0,767,768,5,83,0,0,768,769,5,71,
  	0,0,769,774,5,78,0,0,770,771,5,83,0,0,771,772,5,103,0,0,772,774,5,110,
  	0,0,773,767,1,0,0,0,773,770,1,0,0,0,774,102,1,0,0,0,775,776,5,83,0,0,
  	776,777,5,73,0,0,777,782,5,78,0,0,778,779,5,83,0,0,779,780,5,105,0,0,
  	780,782,5,110,0,0,781,775,1,0,0,0,781,778,1,0,0,0,782,104,1,0,0,0,783,
  	784,5,83,0,0,784,785,5,81,0,0,785,790,5,82,0,0,786,787,5,83,0,0,787,788,
  	5,113,0,0,788,790,5,114,0,0,789,783,1,0,0,0,789,786,1,0,0,0,790,106,1,
  	0,0,0,791,792,5,84,0,0,792,793,5,65,0,0,793,798,5,78,0,0,794,795,5,84,
  	0,0,795,796,5,97,0,0,796,798,5,110,0,0,797,791,1,0,0,0,797,794,1,0,0,
  	0,798,108,1,0,0,0,799,800,5,70,0,0,800,801,5,65,0,0,801,802,5,76,0,0,
  	802,803,5,83,0,0,803,810,5,69,0,0,804,805,5,70,0,0,805,806,5,97,0,0,806,
  	807,5,108,0,0,807,808,5,115,0,0,808,810,5,101,0,0,809,799,1,0,0,0,809,
  	804,1,0,0,0,810,110,1,0,0,0,811,812,5,84,0,0,812,813,5,82,0,0,813,814,
  	5,85,0,0,814,820,5,69,0,0,815,816,5,84,0,0,816,817,5,114,0,0,817,818,
  	5,117,0,0,818,820,5,101,0,0,819,811,1,0,0,0,819,815,1,0,0,0,820,112,1,
  	0,0,0,821,822,5,65,0,0,822,823,5,83,0,0,823,828,5,67,0,0,824,825,5,65,
  	0,0,825,826,5,115,0,0,826,828,5,99,0,0,827,821,1,0,0,0,827,824,1,0,0,
  	0,828,114,1,0,0,0,829,830,5,67,0,0,830,831,5,72,0,0,831,832,5,82,0,0,
  	832,838,5,36,0,0,833,834,5,67,0,0,834,835,5,104,0,0,835,836,5,114,0,0,
  	836,838,5,36,0,0,837,829,1,0,0,0,837,833,1,0,0,0,838,116,1,0,0,0,839,
  	840,5,73,0,0,840,841,5,78,0,0,841,842,5,83,0,0,842,843,5,84,0,0,843,850,
  	5,82,0,0,844,845,5,73,0,0,845,846,5,110,0,0,846,847,5,115,0,0,847,848,
  	5,116,0,0,848,850,5,114,0,0,849,839,1,0,0,0,849,844,1,0,0,0,850,118,1,
  	0,0,0,851,852,5,76,0,0,852,853,5,69,0,0,853,854,5,70,0,0,854,855,5,84,
  	0,0,855,862,5,36,0,0,856,857,5,76,0,0,857,858,5,101,0,0,858,859,5,102,
  	0,0,859,860,5,116,0,0,860,862,5,36,0,0,861,851,1,0,0,0,861,856,1,0,0,
  	0,862,120,1,0,0,0,863,864,5,77,0,0,864,865,5,73,0,0,865,866,5,68,0,0,
  	866,872,5,36,0,0,867,868,5,77,0,0,868,869,5,105,0,0,869,870,5,100,0,0,
  	870,872,5,36,0,0,871,863,1,0,0,0,871,867,1,0,0,0,872,122,1,0,0,0,873,
  	874,5,82,0,0,874,875,5,73,0,0,875,876,5,71,0,0,876,877,5,72,0,0,877,878,
  	5,84,0,0,878,886,5,36,0,0,879,880,5,82,0,0,880,881,5,105,0,0,881,882,
  	5,103,0,0,882,883,5,104,0,0,883,884,5,116,0,0,884,886,5,36,0,0,885,873,
  	1,0,0,0,885,879,1,0,0,0,886,124,1,0,0,0,887,888,5,76,0,0,888,889,5,69,
  	0,0,889,894,5,78,0,0,890,891,5,76,0,0,891,892,5,101,0,0,892,894,5,110,
  	0,0,893,887,1,0,0,0,893,890,1,0,0,0,894,126,1,0,0,0,895,896,5,66,0,0,
  	896,897,5,89,0,0,897,898,5,84,0,0,898,904,5,69,0,0,899,900,5,66,0,0,900,
  	901,5,121,0,0,901,902,5,116,0,0,902,904,5,101,0,0,903,895,1,0,0,0,903,
  	899,1,0,0,0,904,128,1,0,0,0,905,906,5,73,0,0,906,907,5,78,0,0,907,912,
  	5,84,0,0,908,909,5,73,0,0,909,910,5,110,0,0,910,912,5,116,0,0,911,905,
  	1,0,0,0,911,908,1,0,0,0,912,130,1,0,0,0,913,914,5,70,0,0,914,915,5,76,
  	0,0,915,916,5,79,0,0,916,917,5,65,0,0,917,924,5,84,0,0,918,919,5,70,0,
  	0,919,920,5,108,0,0,920,921,5,111,0,0,921,922,5,97,0,0,922,924,5,116,
  	0,0,923,913,1,0,0,0,923,918,1,0,0,0,924,132,1,0,0,0,925,926,5,83,0,0,
  	926,927,5,84,0,0,927,928,5,82,0,0,928,929,5,73,0,0,929,930,5,78,0,0,930,
  	938,5,71,0,0,931,932,5,83,0,0,932,933,5,116,0,0,933,934,5,114,0,0,934,
  	935,5,105,0,0,935,936,5,110,0,0,936,938,5,103,0,0,937,925,1,0,0,0,937,
  	931,1,0,0,0,938,134,1,0,0,0,939,940,5,36,0,0,940,136,1,0,0,0,941,942,
  	5,35,0,0,942,138,1,0,0,0,943,944,5,58,0,0,944,140,1,0,0,0,945,946,5,59,
  	0,0,946,142,1,0,0,0,947,948,5,46,0,0,948,144,1,0,0,0,949,950,5,44,0,0,
  	950,146,1,0,0,0,951,952,5,39,0,0,952,148,1,0,0,0,953,955,5,10,0,0,954,
  	953,1,0,0,0,955,956,1,0,0,0,956,954,1,0,0,0,956,957,1,0,0,0,957,150,1,
  	0,0,0,958,959,5,37,0,0,959,152,1,0,0,0,960,961,5,95,0,0,961,154,1,0,0,
  	0,962,963,5,40,0,0,963,156,1,0,0,0,964,965,5,41,0,0,965,158,1,0,0,0,966,
  	967,5,91,0,0,967,160,1,0,0,0,968,969,5,93,0,0,969,162,1,0,0,0,970,971,
  	5,61,0,0,971,164,1,0,0,0,972,973,5,60,0,0,973,974,5,62,0,0,974,166,1,
  	0,0,0,975,976,5,62,0,0,976,168,1,0,0,0,977,978,5,62,0,0,978,979,5,61,
  	0,0,979,170,1,0,0,0,980,981,5,60,0,0,981,172,1,0,0,0,982,983,5,60,0,0,
  	983,984,5,61,0,0,984,174,1,0,0,0,985,986,5,94,0,0,986,176,1,0,0,0,987,
  	988,5,43,0,0,988,178,1,0,0,0,989,990,5,45,0,0,990,180,1,0,0,0,991,992,
  	5,42,0,0,992,182,1,0,0,0,993,994,5,47,0,0,994,184,1,0,0,0,995,996,5,60,
  	0,0,996,997,5,60,0,0,997,186,1,0,0,0,998,999,5,62,0,0,999,1000,5,62,0,
  	0,1000,188,1,0,0,0,1001,1002,5,77,0,0,1002,1003,5,79,0,0,1003,1008,5,
  	68,0,0,1004,1005,5,77,0,0,1005,1006,5,111,0,0,1006,1008,5,100,0,0,1007,
  	1001,1,0,0,0,1007,1004,1,0,0,0,1008,190,1,0,0,0,1009,1010,5,68,0,0,1010,
  	1011,5,73,0,0,1011,1018,5,86,0,0,1012,1013,5,68,0,0,1013,1014,5,105,0,
  	0,1014,1018,5,118,0,0,1015,1016,5,47,0,0,1016,1018,5,47,0,0,1017,1009,
  	1,0,0,0,1017,1012,1,0,0,0,1017,1015,1,0,0,0,1018,192,1,0,0,0,1019,1020,
  	5,126,0,0,1020,194,1,0,0,0,1021,1022,5,78,0,0,1022,1023,5,79,0,0,1023,
  	1028,5,84,0,0,1024,1025,5,78,0,0,1025,1026,5,111,0,0,1026,1028,5,116,
  	0,0,1027,1021,1,0,0,0,1027,1024,1,0,0,0,1028,196,1,0,0,0,1029,1030,5,
  	65,0,0,1030,1031,5,78,0,0,1031,1036,5,68,0,0,1032,1033,5,65,0,0,1033,
  	1034,5,110,0,0,1034,1036,5,100,0,0,1035,1029,1,0,0,0,1035,1032,1,0,0,
  	0,1036,198,1,0,0,0,1037,1038,5,79,0,0,1038,1042,5,82,0,0,1039,1040,5,
  	79,0,0,1040,1042,5,114,0,0,1041,1037,1,0,0,0,1041,1039,1,0,0,0,1042,200,
  	1,0,0,0,1043,1044,5,69,0,0,1044,1045,5,79,0,0,1045,1050,5,82,0,0,1046,
  	1047,5,69,0,0,1047,1048,5,111,0,0,1048,1050,5,114,0,0,1049,1043,1,0,0,
  	0,1049,1046,1,0,0,0,1050,202,1,0,0,0,1051,1055,5,34,0,0,1052,1054,8,1,
  	0,0,1053,1052,1,0,0,0,1054,1057,1,0,0,0,1055,1053,1,0,0,0,1055,1056,1,
  	0,0,0,1056,1058,1,0,0,0,1057,1055,1,0,0,0,1058,1059,5,34,0,0,1059,204,
  	1,0,0,0,1060,1062,5,38,0,0,1061,1063,3,215,107,0,1062,1061,1,0,0,0,1063,
  	1064,1,0,0,0,1064,1062,1,0,0,0,1064,1065,1,0,0,0,1065,206,1,0,0,0,1066,
  	1068,3,151,75,0,1067,1069,7,2,0,0,1068,1067,1,0,0,0,1069,1070,1,0,0,0,
  	1070,1068,1,0,0,0,1070,1071,1,0,0,0,1071,208,1,0,0,0,1072,1074,3,221,
  	110,0,1073,1072,1,0,0,0,1074,1075,1,0,0,0,1075,1073,1,0,0,0,1075,1076,
  	1,0,0,0,1076,1077,1,0,0,0,1077,1079,5,46,0,0,1078,1080,3,221,110,0,1079,
  	1078,1,0,0,0,1080,1081,1,0,0,0,1081,1079,1,0,0,0,1081,1082,1,0,0,0,1082,
  	1091,1,0,0,0,1083,1085,7,3,0,0,1084,1086,7,4,0,0,1085,1084,1,0,0,0,1086,
  	1087,1,0,0,0,1087,1085,1,0,0,0,1087,1088,1,0,0,0,1088,1090,1,0,0,0,1089,
  	1083,1,0,0,0,1090,1093,1,0,0,0,1091,1089,1,0,0,0,1091,1092,1,0,0,0,1092,
  	210,1,0,0,0,1093,1091,1,0,0,0,1094,1096,3,221,110,0,1095,1094,1,0,0,0,
  	1096,1097,1,0,0,0,1097,1095,1,0,0,0,1097,1098,1,0,0,0,1098,212,1,0,0,
  	0,1099,1100,3,217,108,0,1100,214,1,0,0,0,1101,1102,7,5,0,0,1102,216,1,
  	0,0,0,1103,1109,3,219,109,0,1104,1108,3,219,109,0,1105,1108,3,221,110,
  	0,1106,1108,3,153,76,0,1107,1104,1,0,0,0,1107,1105,1,0,0,0,1107,1106,
  	1,0,0,0,1108,1111,1,0,0,0,1109,1107,1,0,0,0,1109,1110,1,0,0,0,1110,1115,
  	1,0,0,0,1111,1109,1,0,0,0,1112,1116,3,151,75,0,1113,1116,3,135,67,0,1114,
  	1116,3,137,68,0,1115,1112,1,0,0,0,1115,1113,1,0,0,0,1115,1114,1,0,0,0,
  	1115,1116,1,0,0,0,1116,218,1,0,0,0,1117,1118,7,6,0,0,1118,220,1,0,0,0,
  	1119,1120,7,4,0,0,1120,222,1,0,0,0,1121,1123,7,7,0,0,1122,1121,1,0,0,
  	0,1123,1124,1,0,0,0,1124,1122,1,0,0,0,1124,1125,1,0,0,0,1125,1126,1,0,
  	0,0,1126,1127,6,111,0,0,1127,224,1,0,0,0,88,0,228,233,244,256,264,272,
  	282,290,306,320,332,350,358,364,378,388,394,414,426,442,450,464,478,488,
  	498,509,515,527,537,547,559,579,593,613,627,637,649,657,665,673,681,689,
  	697,705,717,725,731,739,745,753,765,773,781,789,797,809,819,827,837,849,
  	861,871,885,893,903,911,923,937,956,1007,1017,1027,1035,1041,1049,1055,
  	1064,1070,1075,1081,1087,1091,1097,1107,1109,1115,1124,1,0,1,0
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

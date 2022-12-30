
// Generated from Daric.g4 by ANTLR 4.11.1


#include "DaricVisitor.h"

#include "DaricParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct DaricParserStaticData final {
  DaricParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  DaricParserStaticData(const DaricParserStaticData&) = delete;
  DaricParserStaticData(DaricParserStaticData&&) = delete;
  DaricParserStaticData& operator=(const DaricParserStaticData&) = delete;
  DaricParserStaticData& operator=(DaricParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag daricParserOnceFlag;
DaricParserStaticData *daricParserStaticData = nullptr;

void daricParserInitialize() {
  assert(daricParserStaticData == nullptr);
  auto staticData = std::make_unique<DaricParserStaticData>(
    std::vector<std::string>{
      "program", "statements", "statementsl", "statement", "separator", 
      "assign", "call", "case", "const", "data", "dataLabel", "dim", "exprcall", 
      "end", "for", "importlib", "if", "ifml", "input", "option", "parameter", 
      "print", "procedure", "repeat", "read", "restore", "return", "struct", 
      "structDim", "structInstance", "swap", "when", "while", "clear", "pop", 
      "push", "set", "variable", "expression", "type", "typeOrStruct", "literal", 
      "floatLiteral", "integerLiteral", "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'$'", "'#'", 
      "':'", "';'", "'.'", "','", "'''", "", "'%'", "'_'", "'('", "')'", 
      "'['", "']'", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", "'^'", 
      "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "ASSIGN", "CASE", "CONST", "CLEAR", 
      "DATA", "DATALABEL", "DEF", "DIM", "ELSE", "END", "FOR", "FROM", "IF", 
      "IMPORT", "INPUT", "INTO", "LET", "NEXT", "OF", "OPTION", "OTHERWISE", 
      "PRINT", "POP", "PUSH", "QUIT", "READ", "RECORD", "REF", "REM", "REPEAT", 
      "RESTORE", "RETURN", "THEN", "SIZE", "STEP", "SYS", "SWAP", "TO", 
      "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "ABS", "ACS", "ASN", "ATN", 
      "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", "PI", "RAD", "ROUND", "SGN", 
      "SIN", "SQR", "TAN", "VECTOR", "LIST", "MAP", "STACK", "QUEUE", "SET", 
      "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", "MID", "RIGHT", "LEN", 
      "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", 
      "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", 
      "RPAREN", "SOPEN", "SCLOSE", "EQ", "NE", "GT", "GE", "LT", "LE", "HAT", 
      "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "MOD", "DIV", 
      "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", 
      "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,122,809,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,1,0,1,0,1,0,1,1,4,1,95,8,1,11,1,12,1,96,1,1,5,
  	1,100,8,1,10,1,12,1,103,9,1,1,1,1,1,1,1,3,1,108,8,1,5,1,110,8,1,10,1,
  	12,1,113,9,1,3,1,115,8,1,1,2,5,2,118,8,2,10,2,12,2,121,9,2,1,2,1,2,3,
  	2,125,8,2,4,2,127,8,2,11,2,12,2,128,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,3,3,160,8,3,1,4,4,4,163,8,4,11,4,12,4,164,1,5,3,5,168,8,5,
  	1,5,1,5,1,5,3,5,173,8,5,1,5,1,5,1,5,1,6,1,6,3,6,180,8,6,1,6,3,6,183,8,
  	6,1,6,1,6,5,6,187,8,6,10,6,12,6,190,9,6,1,6,3,6,193,8,6,1,7,1,7,1,7,1,
  	7,3,7,199,8,7,1,7,5,7,202,8,7,10,7,12,7,205,9,7,1,7,1,7,3,7,209,8,7,1,
  	7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,222,8,8,10,8,12,8,225,9,
  	8,1,8,1,8,3,8,229,8,8,1,9,1,9,1,9,1,9,5,9,235,8,9,10,9,12,9,238,9,9,1,
  	10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,249,8,11,1,11,1,11,5,
  	11,253,8,11,10,11,12,11,256,9,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,291,8,
  	11,1,12,1,12,1,12,3,12,296,8,12,1,12,1,12,5,12,300,8,12,10,12,12,12,303,
  	9,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,3,14,313,8,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,3,14,321,8,14,1,14,1,14,1,14,1,15,1,15,1,15,1,16,
  	1,16,1,16,3,16,332,8,16,1,16,1,16,1,16,3,16,337,8,16,1,17,1,17,1,17,3,
  	17,342,8,17,1,17,1,17,1,17,1,17,1,17,3,17,349,8,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,362,8,19,1,20,3,20,365,8,20,1,
  	20,1,20,1,20,1,20,3,20,371,8,20,3,20,373,8,20,1,21,1,21,3,21,377,8,21,
  	1,21,1,21,3,21,381,8,21,1,21,3,21,384,8,21,1,21,3,21,387,8,21,3,21,389,
  	8,21,1,22,1,22,1,22,1,22,3,22,395,8,22,1,22,3,22,398,8,22,1,22,5,22,401,
  	8,22,10,22,12,22,404,9,22,1,22,3,22,407,8,22,1,22,1,22,5,22,411,8,22,
  	10,22,12,22,414,9,22,1,22,5,22,417,8,22,10,22,12,22,420,9,22,1,22,3,22,
  	423,8,22,1,22,5,22,426,8,22,10,22,12,22,429,9,22,1,22,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,444,8,24,10,24,12,24,
  	447,9,24,1,25,1,25,1,25,1,26,1,26,3,26,454,8,26,1,27,1,27,1,27,5,27,459,
  	8,27,10,27,12,27,462,9,27,1,27,1,27,1,27,1,27,4,27,468,8,27,11,27,12,
  	27,469,1,27,1,27,1,27,5,27,475,8,27,10,27,12,27,478,9,27,1,27,5,27,481,
  	8,27,10,27,12,27,484,9,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,
  	3,28,495,8,28,1,28,1,28,5,28,499,8,28,10,28,12,28,502,9,28,1,28,1,28,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,514,8,29,1,29,1,29,1,29,
  	1,29,5,29,520,8,29,10,29,12,29,523,9,29,1,29,3,29,526,8,29,1,30,1,30,
  	1,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,537,8,31,10,31,12,31,540,9,31,
  	1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,33,
  	3,33,556,8,33,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,37,1,37,1,37,3,37,579,8,37,1,37,
  	1,37,5,37,583,8,37,10,37,12,37,586,9,37,1,37,3,37,589,8,37,1,37,1,37,
  	5,37,593,8,37,10,37,12,37,596,9,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,3,38,617,
  	8,38,1,38,1,38,1,38,3,38,622,8,38,1,38,3,38,625,8,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,3,
  	38,672,8,38,1,38,1,38,1,38,1,38,1,38,1,38,3,38,680,8,38,1,38,1,38,3,38,
  	684,8,38,1,38,1,38,1,38,1,38,3,38,690,8,38,1,38,1,38,3,38,694,8,38,1,
  	38,1,38,1,38,1,38,1,38,1,38,3,38,702,8,38,1,38,1,38,3,38,706,8,38,1,38,
  	1,38,1,38,1,38,3,38,712,8,38,1,38,1,38,1,38,1,38,3,38,718,8,38,1,38,1,
  	38,3,38,722,8,38,3,38,724,8,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,38,5,38,780,8,38,10,38,12,38,783,9,38,1,39,1,39,1,40,
  	1,40,1,41,1,41,1,41,3,41,792,8,41,1,42,3,42,795,8,42,1,42,1,42,1,43,1,
  	43,1,43,3,43,802,8,43,1,43,3,43,805,8,43,1,44,1,44,1,44,0,1,76,45,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,
  	52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,0,5,1,1,84,84,
  	2,0,84,84,89,89,1,0,78,81,2,0,78,81,121,121,1,0,103,104,938,0,90,1,0,
  	0,0,2,114,1,0,0,0,4,126,1,0,0,0,6,159,1,0,0,0,8,162,1,0,0,0,10,167,1,
  	0,0,0,12,177,1,0,0,0,14,194,1,0,0,0,16,213,1,0,0,0,18,230,1,0,0,0,20,
  	239,1,0,0,0,22,242,1,0,0,0,24,292,1,0,0,0,26,306,1,0,0,0,28,308,1,0,0,
  	0,30,325,1,0,0,0,32,328,1,0,0,0,34,338,1,0,0,0,36,354,1,0,0,0,38,357,
  	1,0,0,0,40,364,1,0,0,0,42,374,1,0,0,0,44,390,1,0,0,0,46,434,1,0,0,0,48,
  	439,1,0,0,0,50,448,1,0,0,0,52,451,1,0,0,0,54,455,1,0,0,0,56,488,1,0,0,
  	0,58,505,1,0,0,0,60,527,1,0,0,0,62,532,1,0,0,0,64,543,1,0,0,0,66,549,
  	1,0,0,0,68,557,1,0,0,0,70,562,1,0,0,0,72,567,1,0,0,0,74,575,1,0,0,0,76,
  	723,1,0,0,0,78,784,1,0,0,0,80,786,1,0,0,0,82,791,1,0,0,0,84,794,1,0,0,
  	0,86,804,1,0,0,0,88,806,1,0,0,0,90,91,3,2,1,0,91,92,5,0,0,1,92,1,1,0,
  	0,0,93,95,3,8,4,0,94,93,1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,96,97,1,0,
  	0,0,97,115,1,0,0,0,98,100,3,8,4,0,99,98,1,0,0,0,100,103,1,0,0,0,101,99,
  	1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,0,0,0,104,107,3,6,3,
  	0,105,108,3,8,4,0,106,108,5,0,0,1,107,105,1,0,0,0,107,106,1,0,0,0,107,
  	108,1,0,0,0,108,110,1,0,0,0,109,101,1,0,0,0,110,113,1,0,0,0,111,109,1,
  	0,0,0,111,112,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,114,94,1,0,0,0,
  	114,111,1,0,0,0,115,3,1,0,0,0,116,118,5,84,0,0,117,116,1,0,0,0,118,121,
  	1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,0,0,0,121,119,1,0,0,
  	0,122,124,3,6,3,0,123,125,7,0,0,0,124,123,1,0,0,0,124,125,1,0,0,0,125,
  	127,1,0,0,0,126,119,1,0,0,0,127,128,1,0,0,0,128,126,1,0,0,0,128,129,1,
  	0,0,0,129,5,1,0,0,0,130,160,3,10,5,0,131,160,3,12,6,0,132,160,3,14,7,
  	0,133,160,3,66,33,0,134,160,3,16,8,0,135,160,3,18,9,0,136,160,3,20,10,
  	0,137,160,3,22,11,0,138,160,3,26,13,0,139,160,3,28,14,0,140,160,3,32,
  	16,0,141,160,3,34,17,0,142,160,3,36,18,0,143,160,3,30,15,0,144,160,3,
  	38,19,0,145,160,3,44,22,0,146,160,3,42,21,0,147,160,3,70,35,0,148,160,
  	3,68,34,0,149,160,3,48,24,0,150,160,3,46,23,0,151,160,3,50,25,0,152,160,
  	3,52,26,0,153,160,3,72,36,0,154,160,3,54,27,0,155,160,3,56,28,0,156,160,
  	3,58,29,0,157,160,3,60,30,0,158,160,3,64,32,0,159,130,1,0,0,0,159,131,
  	1,0,0,0,159,132,1,0,0,0,159,133,1,0,0,0,159,134,1,0,0,0,159,135,1,0,0,
  	0,159,136,1,0,0,0,159,137,1,0,0,0,159,138,1,0,0,0,159,139,1,0,0,0,159,
  	140,1,0,0,0,159,141,1,0,0,0,159,142,1,0,0,0,159,143,1,0,0,0,159,144,1,
  	0,0,0,159,145,1,0,0,0,159,146,1,0,0,0,159,147,1,0,0,0,159,148,1,0,0,0,
  	159,149,1,0,0,0,159,150,1,0,0,0,159,151,1,0,0,0,159,152,1,0,0,0,159,153,
  	1,0,0,0,159,154,1,0,0,0,159,155,1,0,0,0,159,156,1,0,0,0,159,157,1,0,0,
  	0,159,158,1,0,0,0,160,7,1,0,0,0,161,163,7,1,0,0,162,161,1,0,0,0,163,164,
  	1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,9,1,0,0,0,166,168,5,19,0,
  	0,167,166,1,0,0,0,167,168,1,0,0,0,168,169,1,0,0,0,169,172,3,74,37,0,170,
  	171,5,84,0,0,171,173,3,78,39,0,172,170,1,0,0,0,172,173,1,0,0,0,173,174,
  	1,0,0,0,174,175,5,96,0,0,175,176,3,76,38,0,176,11,1,0,0,0,177,179,5,121,
  	0,0,178,180,5,92,0,0,179,178,1,0,0,0,179,180,1,0,0,0,180,182,1,0,0,0,
  	181,183,3,76,38,0,182,181,1,0,0,0,182,183,1,0,0,0,183,188,1,0,0,0,184,
  	185,5,87,0,0,185,187,3,76,38,0,186,184,1,0,0,0,187,190,1,0,0,0,188,186,
  	1,0,0,0,188,189,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,191,193,5,93,
  	0,0,192,191,1,0,0,0,192,193,1,0,0,0,193,13,1,0,0,0,194,195,5,4,0,0,195,
  	196,3,76,38,0,196,198,5,21,0,0,197,199,3,8,4,0,198,197,1,0,0,0,198,199,
  	1,0,0,0,199,203,1,0,0,0,200,202,3,62,31,0,201,200,1,0,0,0,202,205,1,0,
  	0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,208,1,0,0,0,205,203,1,0,0,0,206,
  	207,5,23,0,0,207,209,3,2,1,0,208,206,1,0,0,0,208,209,1,0,0,0,209,210,
  	1,0,0,0,210,211,5,12,0,0,211,212,5,4,0,0,212,15,1,0,0,0,213,214,5,5,0,
  	0,214,215,5,121,0,0,215,216,5,96,0,0,216,223,3,82,41,0,217,218,5,87,0,
  	0,218,219,5,121,0,0,219,220,5,96,0,0,220,222,3,82,41,0,221,217,1,0,0,
  	0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,228,1,0,0,0,225,
  	223,1,0,0,0,226,227,5,84,0,0,227,229,3,78,39,0,228,226,1,0,0,0,228,229,
  	1,0,0,0,229,17,1,0,0,0,230,231,5,7,0,0,231,236,3,86,43,0,232,233,5,87,
  	0,0,233,235,3,86,43,0,234,232,1,0,0,0,235,238,1,0,0,0,236,234,1,0,0,0,
  	236,237,1,0,0,0,237,19,1,0,0,0,238,236,1,0,0,0,239,240,5,8,0,0,240,241,
  	3,88,44,0,241,21,1,0,0,0,242,243,5,10,0,0,243,244,5,121,0,0,244,290,5,
  	84,0,0,245,246,3,78,39,0,246,248,5,94,0,0,247,249,3,76,38,0,248,247,1,
  	0,0,0,248,249,1,0,0,0,249,254,1,0,0,0,250,251,5,87,0,0,251,253,3,76,38,
  	0,252,250,1,0,0,0,253,256,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,
  	257,1,0,0,0,256,254,1,0,0,0,257,258,5,95,0,0,258,291,1,0,0,0,259,260,
  	5,63,0,0,260,261,5,94,0,0,261,262,3,80,40,0,262,263,5,95,0,0,263,291,
  	1,0,0,0,264,265,5,64,0,0,265,266,5,94,0,0,266,267,3,80,40,0,267,268,5,
  	95,0,0,268,291,1,0,0,0,269,270,5,68,0,0,270,271,5,94,0,0,271,272,7,2,
  	0,0,272,291,5,95,0,0,273,274,5,65,0,0,274,275,5,94,0,0,275,276,7,2,0,
  	0,276,277,5,87,0,0,277,278,3,80,40,0,278,279,5,95,0,0,279,291,1,0,0,0,
  	280,281,5,66,0,0,281,282,5,94,0,0,282,283,3,80,40,0,283,284,5,95,0,0,
  	284,291,1,0,0,0,285,286,5,67,0,0,286,287,5,94,0,0,287,288,3,80,40,0,288,
  	289,5,95,0,0,289,291,1,0,0,0,290,245,1,0,0,0,290,259,1,0,0,0,290,264,
  	1,0,0,0,290,269,1,0,0,0,290,273,1,0,0,0,290,280,1,0,0,0,290,285,1,0,0,
  	0,291,23,1,0,0,0,292,293,5,121,0,0,293,295,5,92,0,0,294,296,3,76,38,0,
  	295,294,1,0,0,0,295,296,1,0,0,0,296,301,1,0,0,0,297,298,5,87,0,0,298,
  	300,3,76,38,0,299,297,1,0,0,0,300,303,1,0,0,0,301,299,1,0,0,0,301,302,
  	1,0,0,0,302,304,1,0,0,0,303,301,1,0,0,0,304,305,5,93,0,0,305,25,1,0,0,
  	0,306,307,5,27,0,0,307,27,1,0,0,0,308,309,5,13,0,0,309,312,5,121,0,0,
  	310,311,5,84,0,0,311,313,3,78,39,0,312,310,1,0,0,0,312,313,1,0,0,0,313,
  	314,1,0,0,0,314,315,5,96,0,0,315,316,3,76,38,0,316,317,5,40,0,0,317,320,
  	3,76,38,0,318,319,5,37,0,0,319,321,3,76,38,0,320,318,1,0,0,0,320,321,
  	1,0,0,0,321,322,1,0,0,0,322,323,3,2,1,0,323,324,5,20,0,0,324,29,1,0,0,
  	0,325,326,5,16,0,0,326,327,3,88,44,0,327,31,1,0,0,0,328,329,5,15,0,0,
  	329,331,3,76,38,0,330,332,5,35,0,0,331,330,1,0,0,0,331,332,1,0,0,0,332,
  	333,1,0,0,0,333,336,3,4,2,0,334,335,5,11,0,0,335,337,3,4,2,0,336,334,
  	1,0,0,0,336,337,1,0,0,0,337,33,1,0,0,0,338,339,5,15,0,0,339,341,3,76,
  	38,0,340,342,5,35,0,0,341,340,1,0,0,0,341,342,1,0,0,0,342,343,1,0,0,0,
  	343,344,5,89,0,0,344,348,3,2,1,0,345,346,5,11,0,0,346,347,5,89,0,0,347,
  	349,3,2,1,0,348,345,1,0,0,0,348,349,1,0,0,0,349,350,1,0,0,0,350,351,5,
  	89,0,0,351,352,5,12,0,0,352,353,5,15,0,0,353,35,1,0,0,0,354,355,5,17,
  	0,0,355,356,3,74,37,0,356,37,1,0,0,0,357,358,5,22,0,0,358,361,5,121,0,
  	0,359,362,5,121,0,0,360,362,3,86,43,0,361,359,1,0,0,0,361,360,1,0,0,0,
  	362,39,1,0,0,0,363,365,5,30,0,0,364,363,1,0,0,0,364,365,1,0,0,0,365,366,
  	1,0,0,0,366,372,5,121,0,0,367,370,5,84,0,0,368,371,3,78,39,0,369,371,
  	5,121,0,0,370,368,1,0,0,0,370,369,1,0,0,0,371,373,1,0,0,0,372,367,1,0,
  	0,0,372,373,1,0,0,0,373,41,1,0,0,0,374,376,5,24,0,0,375,377,5,38,0,0,
  	376,375,1,0,0,0,376,377,1,0,0,0,377,388,1,0,0,0,378,383,3,76,38,0,379,
  	381,5,43,0,0,380,379,1,0,0,0,380,381,1,0,0,0,381,382,1,0,0,0,382,384,
  	3,76,38,0,383,380,1,0,0,0,383,384,1,0,0,0,384,386,1,0,0,0,385,387,5,85,
  	0,0,386,385,1,0,0,0,386,387,1,0,0,0,387,389,1,0,0,0,388,378,1,0,0,0,388,
  	389,1,0,0,0,389,43,1,0,0,0,390,391,5,9,0,0,391,394,5,121,0,0,392,393,
  	5,84,0,0,393,395,3,78,39,0,394,392,1,0,0,0,394,395,1,0,0,0,395,397,1,
  	0,0,0,396,398,5,92,0,0,397,396,1,0,0,0,397,398,1,0,0,0,398,402,1,0,0,
  	0,399,401,5,89,0,0,400,399,1,0,0,0,401,404,1,0,0,0,402,400,1,0,0,0,402,
  	403,1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,405,407,3,40,20,0,406,405,
  	1,0,0,0,406,407,1,0,0,0,407,418,1,0,0,0,408,412,5,87,0,0,409,411,5,89,
  	0,0,410,409,1,0,0,0,411,414,1,0,0,0,412,410,1,0,0,0,412,413,1,0,0,0,413,
  	415,1,0,0,0,414,412,1,0,0,0,415,417,3,40,20,0,416,408,1,0,0,0,417,420,
  	1,0,0,0,418,416,1,0,0,0,418,419,1,0,0,0,419,422,1,0,0,0,420,418,1,0,0,
  	0,421,423,5,93,0,0,422,421,1,0,0,0,422,423,1,0,0,0,423,427,1,0,0,0,424,
  	426,3,8,4,0,425,424,1,0,0,0,426,429,1,0,0,0,427,425,1,0,0,0,427,428,1,
  	0,0,0,428,430,1,0,0,0,429,427,1,0,0,0,430,431,3,2,1,0,431,432,5,12,0,
  	0,432,433,5,9,0,0,433,45,1,0,0,0,434,435,5,32,0,0,435,436,3,2,1,0,436,
  	437,5,41,0,0,437,438,3,76,38,0,438,47,1,0,0,0,439,440,5,28,0,0,440,445,
  	3,74,37,0,441,442,5,87,0,0,442,444,3,74,37,0,443,441,1,0,0,0,444,447,
  	1,0,0,0,445,443,1,0,0,0,445,446,1,0,0,0,446,49,1,0,0,0,447,445,1,0,0,
  	0,448,449,5,33,0,0,449,450,3,88,44,0,450,51,1,0,0,0,451,453,5,34,0,0,
  	452,454,3,76,38,0,453,452,1,0,0,0,453,454,1,0,0,0,454,53,1,0,0,0,455,
  	456,5,29,0,0,456,460,5,121,0,0,457,459,5,89,0,0,458,457,1,0,0,0,459,462,
  	1,0,0,0,460,458,1,0,0,0,460,461,1,0,0,0,461,463,1,0,0,0,462,460,1,0,0,
  	0,463,464,5,121,0,0,464,465,5,84,0,0,465,476,3,80,40,0,466,468,5,89,0,
  	0,467,466,1,0,0,0,468,469,1,0,0,0,469,467,1,0,0,0,469,470,1,0,0,0,470,
  	471,1,0,0,0,471,472,5,121,0,0,472,473,5,84,0,0,473,475,3,80,40,0,474,
  	467,1,0,0,0,475,478,1,0,0,0,476,474,1,0,0,0,476,477,1,0,0,0,477,482,1,
  	0,0,0,478,476,1,0,0,0,479,481,5,89,0,0,480,479,1,0,0,0,481,484,1,0,0,
  	0,482,480,1,0,0,0,482,483,1,0,0,0,483,485,1,0,0,0,484,482,1,0,0,0,485,
  	486,5,12,0,0,486,487,5,29,0,0,487,55,1,0,0,0,488,489,5,10,0,0,489,490,
  	5,121,0,0,490,491,5,84,0,0,491,492,5,121,0,0,492,494,5,94,0,0,493,495,
  	3,76,38,0,494,493,1,0,0,0,494,495,1,0,0,0,495,500,1,0,0,0,496,497,5,87,
  	0,0,497,499,3,76,38,0,498,496,1,0,0,0,499,502,1,0,0,0,500,498,1,0,0,0,
  	500,501,1,0,0,0,501,503,1,0,0,0,502,500,1,0,0,0,503,504,5,95,0,0,504,
  	57,1,0,0,0,505,506,5,10,0,0,506,507,5,121,0,0,507,508,5,84,0,0,508,525,
  	5,121,0,0,509,513,5,92,0,0,510,511,5,121,0,0,511,512,5,96,0,0,512,514,
  	3,76,38,0,513,510,1,0,0,0,513,514,1,0,0,0,514,521,1,0,0,0,515,516,5,87,
  	0,0,516,517,5,121,0,0,517,518,5,96,0,0,518,520,3,76,38,0,519,515,1,0,
  	0,0,520,523,1,0,0,0,521,519,1,0,0,0,521,522,1,0,0,0,522,524,1,0,0,0,523,
  	521,1,0,0,0,524,526,5,93,0,0,525,509,1,0,0,0,525,526,1,0,0,0,526,59,1,
  	0,0,0,527,528,5,39,0,0,528,529,3,74,37,0,529,530,5,87,0,0,530,531,3,74,
  	37,0,531,61,1,0,0,0,532,533,5,42,0,0,533,538,3,76,38,0,534,535,5,87,0,
  	0,535,537,3,76,38,0,536,534,1,0,0,0,537,540,1,0,0,0,538,536,1,0,0,0,538,
  	539,1,0,0,0,539,541,1,0,0,0,540,538,1,0,0,0,541,542,3,2,1,0,542,63,1,
  	0,0,0,543,544,5,44,0,0,544,545,3,76,38,0,545,546,3,2,1,0,546,547,5,12,
  	0,0,547,548,5,44,0,0,548,65,1,0,0,0,549,550,5,6,0,0,550,555,5,121,0,0,
  	551,552,5,94,0,0,552,553,3,76,38,0,553,554,5,95,0,0,554,556,1,0,0,0,555,
  	551,1,0,0,0,555,556,1,0,0,0,556,67,1,0,0,0,557,558,5,25,0,0,558,559,3,
  	74,37,0,559,560,5,14,0,0,560,561,3,74,37,0,561,69,1,0,0,0,562,563,5,26,
  	0,0,563,564,3,74,37,0,564,565,5,18,0,0,565,566,3,74,37,0,566,71,1,0,0,
  	0,567,568,5,3,0,0,568,569,3,76,38,0,569,570,5,40,0,0,570,571,3,74,37,
  	0,571,572,5,94,0,0,572,573,3,76,38,0,573,574,5,95,0,0,574,73,1,0,0,0,
  	575,588,5,121,0,0,576,578,5,94,0,0,577,579,3,76,38,0,578,577,1,0,0,0,
  	578,579,1,0,0,0,579,584,1,0,0,0,580,581,5,87,0,0,581,583,3,76,38,0,582,
  	580,1,0,0,0,583,586,1,0,0,0,584,582,1,0,0,0,584,585,1,0,0,0,585,587,1,
  	0,0,0,586,584,1,0,0,0,587,589,5,95,0,0,588,576,1,0,0,0,588,589,1,0,0,
  	0,589,594,1,0,0,0,590,591,5,86,0,0,591,593,5,121,0,0,592,590,1,0,0,0,
  	593,596,1,0,0,0,594,592,1,0,0,0,594,595,1,0,0,0,595,75,1,0,0,0,596,594,
  	1,0,0,0,597,598,6,38,-1,0,598,599,5,92,0,0,599,600,3,76,38,0,600,601,
  	5,93,0,0,601,724,1,0,0,0,602,724,5,45,0,0,603,724,3,82,41,0,604,724,3,
  	24,12,0,605,724,3,74,37,0,606,607,5,104,0,0,607,724,3,76,38,52,608,609,
  	5,103,0,0,609,724,3,76,38,51,610,611,5,79,0,0,611,724,3,76,38,50,612,
  	613,5,80,0,0,613,724,3,76,38,49,614,616,5,81,0,0,615,617,5,92,0,0,616,
  	615,1,0,0,0,616,617,1,0,0,0,617,618,1,0,0,0,618,621,3,76,38,0,619,620,
  	5,43,0,0,620,622,3,76,38,0,621,619,1,0,0,0,621,622,1,0,0,0,622,624,1,
  	0,0,0,623,625,5,93,0,0,624,623,1,0,0,0,624,625,1,0,0,0,625,724,1,0,0,
  	0,626,627,5,46,0,0,627,724,3,76,38,47,628,629,5,111,0,0,629,724,3,76,
  	38,46,630,631,5,112,0,0,631,724,3,76,38,45,632,724,5,70,0,0,633,724,5,
  	69,0,0,634,724,5,56,0,0,635,636,5,51,0,0,636,724,3,76,38,41,637,638,5,
  	57,0,0,638,724,3,76,38,40,639,640,5,59,0,0,640,724,3,76,38,39,641,642,
  	5,47,0,0,642,724,3,76,38,38,643,644,5,48,0,0,644,724,3,76,38,37,645,646,
  	5,49,0,0,646,724,3,76,38,36,647,648,5,50,0,0,648,724,3,76,38,35,649,650,
  	5,52,0,0,650,724,3,76,38,34,651,652,5,53,0,0,652,724,3,76,38,33,653,654,
  	5,58,0,0,654,724,3,76,38,32,655,656,5,54,0,0,656,724,3,76,38,31,657,658,
  	5,55,0,0,658,724,3,76,38,30,659,660,5,60,0,0,660,724,3,76,38,29,661,662,
  	5,61,0,0,662,724,3,76,38,28,663,664,5,62,0,0,664,724,3,76,38,27,665,666,
  	5,71,0,0,666,724,3,76,38,26,667,668,5,72,0,0,668,724,3,76,38,25,669,671,
  	5,73,0,0,670,672,5,92,0,0,671,670,1,0,0,0,671,672,1,0,0,0,672,673,1,0,
  	0,0,673,674,3,76,38,0,674,675,5,87,0,0,675,676,3,76,38,0,676,677,5,87,
  	0,0,677,679,3,76,38,0,678,680,5,93,0,0,679,678,1,0,0,0,679,680,1,0,0,
  	0,680,724,1,0,0,0,681,683,5,74,0,0,682,684,5,92,0,0,683,682,1,0,0,0,683,
  	684,1,0,0,0,684,685,1,0,0,0,685,686,3,76,38,0,686,687,5,87,0,0,687,689,
  	3,76,38,0,688,690,5,93,0,0,689,688,1,0,0,0,689,690,1,0,0,0,690,724,1,
  	0,0,0,691,693,5,75,0,0,692,694,5,92,0,0,693,692,1,0,0,0,693,694,1,0,0,
  	0,694,695,1,0,0,0,695,696,3,76,38,0,696,697,5,87,0,0,697,698,3,76,38,
  	0,698,699,5,87,0,0,699,701,3,76,38,0,700,702,5,93,0,0,701,700,1,0,0,0,
  	701,702,1,0,0,0,702,724,1,0,0,0,703,705,5,76,0,0,704,706,5,92,0,0,705,
  	704,1,0,0,0,705,706,1,0,0,0,706,707,1,0,0,0,707,708,3,76,38,0,708,709,
  	5,87,0,0,709,711,3,76,38,0,710,712,5,93,0,0,711,710,1,0,0,0,711,712,1,
  	0,0,0,712,724,1,0,0,0,713,714,5,77,0,0,714,724,3,76,38,20,715,717,5,36,
  	0,0,716,718,5,92,0,0,717,716,1,0,0,0,717,718,1,0,0,0,718,719,1,0,0,0,
  	719,721,3,74,37,0,720,722,5,93,0,0,721,720,1,0,0,0,721,722,1,0,0,0,722,
  	724,1,0,0,0,723,597,1,0,0,0,723,602,1,0,0,0,723,603,1,0,0,0,723,604,1,
  	0,0,0,723,605,1,0,0,0,723,606,1,0,0,0,723,608,1,0,0,0,723,610,1,0,0,0,
  	723,612,1,0,0,0,723,614,1,0,0,0,723,626,1,0,0,0,723,628,1,0,0,0,723,630,
  	1,0,0,0,723,632,1,0,0,0,723,633,1,0,0,0,723,634,1,0,0,0,723,635,1,0,0,
  	0,723,637,1,0,0,0,723,639,1,0,0,0,723,641,1,0,0,0,723,643,1,0,0,0,723,
  	645,1,0,0,0,723,647,1,0,0,0,723,649,1,0,0,0,723,651,1,0,0,0,723,653,1,
  	0,0,0,723,655,1,0,0,0,723,657,1,0,0,0,723,659,1,0,0,0,723,661,1,0,0,0,
  	723,663,1,0,0,0,723,665,1,0,0,0,723,667,1,0,0,0,723,669,1,0,0,0,723,681,
  	1,0,0,0,723,691,1,0,0,0,723,703,1,0,0,0,723,713,1,0,0,0,723,715,1,0,0,
  	0,724,781,1,0,0,0,725,726,10,18,0,0,726,727,5,102,0,0,727,780,3,76,38,
  	18,728,729,10,17,0,0,729,730,5,106,0,0,730,780,3,76,38,18,731,732,10,
  	16,0,0,732,733,5,105,0,0,733,780,3,76,38,17,734,735,10,15,0,0,735,736,
  	5,110,0,0,736,780,3,76,38,16,737,738,10,14,0,0,738,739,5,109,0,0,739,
  	780,3,76,38,15,740,741,10,13,0,0,741,742,5,103,0,0,742,780,3,76,38,14,
  	743,744,10,12,0,0,744,745,5,104,0,0,745,780,3,76,38,13,746,747,10,11,
  	0,0,747,748,5,107,0,0,748,780,3,76,38,12,749,750,10,10,0,0,750,751,5,
  	108,0,0,751,780,3,76,38,11,752,753,10,9,0,0,753,754,5,96,0,0,754,780,
  	3,76,38,10,755,756,10,8,0,0,756,757,5,97,0,0,757,780,3,76,38,9,758,759,
  	10,7,0,0,759,760,5,98,0,0,760,780,3,76,38,8,761,762,10,6,0,0,762,763,
  	5,99,0,0,763,780,3,76,38,7,764,765,10,5,0,0,765,766,5,100,0,0,766,780,
  	3,76,38,6,767,768,10,4,0,0,768,769,5,101,0,0,769,780,3,76,38,5,770,771,
  	10,3,0,0,771,772,5,113,0,0,772,780,3,76,38,4,773,774,10,2,0,0,774,775,
  	5,114,0,0,775,780,3,76,38,3,776,777,10,1,0,0,777,778,5,115,0,0,778,780,
  	3,76,38,2,779,725,1,0,0,0,779,728,1,0,0,0,779,731,1,0,0,0,779,734,1,0,
  	0,0,779,737,1,0,0,0,779,740,1,0,0,0,779,743,1,0,0,0,779,746,1,0,0,0,779,
  	749,1,0,0,0,779,752,1,0,0,0,779,755,1,0,0,0,779,758,1,0,0,0,779,761,1,
  	0,0,0,779,764,1,0,0,0,779,767,1,0,0,0,779,770,1,0,0,0,779,773,1,0,0,0,
  	779,776,1,0,0,0,780,783,1,0,0,0,781,779,1,0,0,0,781,782,1,0,0,0,782,77,
  	1,0,0,0,783,781,1,0,0,0,784,785,7,2,0,0,785,79,1,0,0,0,786,787,7,3,0,
  	0,787,81,1,0,0,0,788,792,3,84,42,0,789,792,3,86,43,0,790,792,3,88,44,
  	0,791,788,1,0,0,0,791,789,1,0,0,0,791,790,1,0,0,0,792,83,1,0,0,0,793,
  	795,7,4,0,0,794,793,1,0,0,0,794,795,1,0,0,0,795,796,1,0,0,0,796,797,5,
  	119,0,0,797,85,1,0,0,0,798,805,5,117,0,0,799,805,5,118,0,0,800,802,7,
  	4,0,0,801,800,1,0,0,0,801,802,1,0,0,0,802,803,1,0,0,0,803,805,5,120,0,
  	0,804,798,1,0,0,0,804,799,1,0,0,0,804,801,1,0,0,0,805,87,1,0,0,0,806,
  	807,5,116,0,0,807,89,1,0,0,0,87,96,101,107,111,114,119,124,128,159,164,
  	167,172,179,182,188,192,198,203,208,223,228,236,248,254,290,295,301,312,
  	320,331,336,341,348,361,364,370,372,376,380,383,386,388,394,397,402,406,
  	412,418,422,427,445,453,460,469,476,482,494,500,513,521,525,538,555,578,
  	584,588,594,616,621,624,671,679,683,689,693,701,705,711,717,721,723,779,
  	781,791,794,801,804
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  daricParserStaticData = staticData.release();
}

}

DaricParser::DaricParser(TokenStream *input) : DaricParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

DaricParser::DaricParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  DaricParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *daricParserStaticData->atn, daricParserStaticData->decisionToDFA, daricParserStaticData->sharedContextCache, options);
}

DaricParser::~DaricParser() {
  delete _interpreter;
}

const atn::ATN& DaricParser::getATN() const {
  return *daricParserStaticData->atn;
}

std::string DaricParser::getGrammarFileName() const {
  return "Daric.g4";
}

const std::vector<std::string>& DaricParser::getRuleNames() const {
  return daricParserStaticData->ruleNames;
}

const dfa::Vocabulary& DaricParser::getVocabulary() const {
  return daricParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView DaricParser::getSerializedATN() const {
  return daricParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

DaricParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DaricParser::StatementsContext* DaricParser::ProgramContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::ProgramContext::EOF() {
  return getToken(DaricParser::EOF, 0);
}


size_t DaricParser::ProgramContext::getRuleIndex() const {
  return DaricParser::RuleProgram;
}


std::any DaricParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ProgramContext* DaricParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, DaricParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    statements();
    setState(91);
    match(DaricParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

DaricParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DaricParser::SeparatorContext *> DaricParser::StatementsContext::separator() {
  return getRuleContexts<DaricParser::SeparatorContext>();
}

DaricParser::SeparatorContext* DaricParser::StatementsContext::separator(size_t i) {
  return getRuleContext<DaricParser::SeparatorContext>(i);
}

std::vector<DaricParser::StatementContext *> DaricParser::StatementsContext::statement() {
  return getRuleContexts<DaricParser::StatementContext>();
}

DaricParser::StatementContext* DaricParser::StatementsContext::statement(size_t i) {
  return getRuleContext<DaricParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::StatementsContext::EOF() {
  return getTokens(DaricParser::EOF);
}

tree::TerminalNode* DaricParser::StatementsContext::EOF(size_t i) {
  return getToken(DaricParser::EOF, i);
}


size_t DaricParser::StatementsContext::getRuleIndex() const {
  return DaricParser::RuleStatements;
}


std::any DaricParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StatementsContext* DaricParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, DaricParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(93);
                separator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(96); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(101);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == DaricParser::COLON

          || _la == DaricParser::NEWLINE) {
            setState(98);
            separator();
            setState(103);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(104);
          statement();
          setState(107);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
          case 1: {
            setState(105);
            separator();
            break;
          }

          case 2: {
            setState(106);
            match(DaricParser::EOF);
            break;
          }

          default:
            break;
          } 
        }
        setState(113);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementslContext ------------------------------------------------------------------

DaricParser::StatementslContext::StatementslContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DaricParser::StatementContext *> DaricParser::StatementslContext::statement() {
  return getRuleContexts<DaricParser::StatementContext>();
}

DaricParser::StatementContext* DaricParser::StatementslContext::statement(size_t i) {
  return getRuleContext<DaricParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::StatementslContext::COLON() {
  return getTokens(DaricParser::COLON);
}

tree::TerminalNode* DaricParser::StatementslContext::COLON(size_t i) {
  return getToken(DaricParser::COLON, i);
}

std::vector<tree::TerminalNode *> DaricParser::StatementslContext::EOF() {
  return getTokens(DaricParser::EOF);
}

tree::TerminalNode* DaricParser::StatementslContext::EOF(size_t i) {
  return getToken(DaricParser::EOF, i);
}


size_t DaricParser::StatementslContext::getRuleIndex() const {
  return DaricParser::RuleStatementsl;
}


std::any DaricParser::StatementslContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStatementsl(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StatementslContext* DaricParser::statementsl() {
  StatementslContext *_localctx = _tracker.createInstance<StatementslContext>(_ctx, getState());
  enterRule(_localctx, 4, DaricParser::RuleStatementsl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(126); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(119);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(116);
                match(DaricParser::COLON);
                setState(121);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(122);
              statement();
              setState(124);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(123);
                _la = _input->LA(1);
                if (!(_la == DaricParser::EOF || _la == DaricParser::COLON)) {
                _errHandler->recoverInline(this);
                }
                else {
                  _errHandler->reportMatch(this);
                  consume();
                }
                break;
              }

              default:
                break;
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(128); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

DaricParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DaricParser::AssignContext* DaricParser::StatementContext::assign() {
  return getRuleContext<DaricParser::AssignContext>(0);
}

DaricParser::CallContext* DaricParser::StatementContext::call() {
  return getRuleContext<DaricParser::CallContext>(0);
}

DaricParser::CaseContext* DaricParser::StatementContext::case_() {
  return getRuleContext<DaricParser::CaseContext>(0);
}

DaricParser::ClearContext* DaricParser::StatementContext::clear() {
  return getRuleContext<DaricParser::ClearContext>(0);
}

DaricParser::ConstContext* DaricParser::StatementContext::const_() {
  return getRuleContext<DaricParser::ConstContext>(0);
}

DaricParser::DataContext* DaricParser::StatementContext::data() {
  return getRuleContext<DaricParser::DataContext>(0);
}

DaricParser::DataLabelContext* DaricParser::StatementContext::dataLabel() {
  return getRuleContext<DaricParser::DataLabelContext>(0);
}

DaricParser::DimContext* DaricParser::StatementContext::dim() {
  return getRuleContext<DaricParser::DimContext>(0);
}

DaricParser::EndContext* DaricParser::StatementContext::end() {
  return getRuleContext<DaricParser::EndContext>(0);
}

DaricParser::ForContext* DaricParser::StatementContext::for_() {
  return getRuleContext<DaricParser::ForContext>(0);
}

DaricParser::IfContext* DaricParser::StatementContext::if_() {
  return getRuleContext<DaricParser::IfContext>(0);
}

DaricParser::IfmlContext* DaricParser::StatementContext::ifml() {
  return getRuleContext<DaricParser::IfmlContext>(0);
}

DaricParser::InputContext* DaricParser::StatementContext::input() {
  return getRuleContext<DaricParser::InputContext>(0);
}

DaricParser::ImportlibContext* DaricParser::StatementContext::importlib() {
  return getRuleContext<DaricParser::ImportlibContext>(0);
}

DaricParser::OptionContext* DaricParser::StatementContext::option() {
  return getRuleContext<DaricParser::OptionContext>(0);
}

DaricParser::ProcedureContext* DaricParser::StatementContext::procedure() {
  return getRuleContext<DaricParser::ProcedureContext>(0);
}

DaricParser::PrintContext* DaricParser::StatementContext::print() {
  return getRuleContext<DaricParser::PrintContext>(0);
}

DaricParser::PushContext* DaricParser::StatementContext::push() {
  return getRuleContext<DaricParser::PushContext>(0);
}

DaricParser::PopContext* DaricParser::StatementContext::pop() {
  return getRuleContext<DaricParser::PopContext>(0);
}

DaricParser::ReadContext* DaricParser::StatementContext::read() {
  return getRuleContext<DaricParser::ReadContext>(0);
}

DaricParser::RepeatContext* DaricParser::StatementContext::repeat() {
  return getRuleContext<DaricParser::RepeatContext>(0);
}

DaricParser::RestoreContext* DaricParser::StatementContext::restore() {
  return getRuleContext<DaricParser::RestoreContext>(0);
}

DaricParser::ReturnContext* DaricParser::StatementContext::return_() {
  return getRuleContext<DaricParser::ReturnContext>(0);
}

DaricParser::SetContext* DaricParser::StatementContext::set() {
  return getRuleContext<DaricParser::SetContext>(0);
}

DaricParser::StructContext* DaricParser::StatementContext::struct_() {
  return getRuleContext<DaricParser::StructContext>(0);
}

DaricParser::StructDimContext* DaricParser::StatementContext::structDim() {
  return getRuleContext<DaricParser::StructDimContext>(0);
}

DaricParser::StructInstanceContext* DaricParser::StatementContext::structInstance() {
  return getRuleContext<DaricParser::StructInstanceContext>(0);
}

DaricParser::SwapContext* DaricParser::StatementContext::swap() {
  return getRuleContext<DaricParser::SwapContext>(0);
}

DaricParser::WhileContext* DaricParser::StatementContext::while_() {
  return getRuleContext<DaricParser::WhileContext>(0);
}


size_t DaricParser::StatementContext::getRuleIndex() const {
  return DaricParser::RuleStatement;
}


std::any DaricParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StatementContext* DaricParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, DaricParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      case_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(133);
      clear();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(134);
      const_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(135);
      data();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(136);
      dataLabel();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(137);
      dim();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(138);
      end();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(139);
      for_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(140);
      if_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(141);
      ifml();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(142);
      input();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(143);
      importlib();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(144);
      option();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(145);
      procedure();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(146);
      print();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(147);
      push();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(148);
      pop();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(149);
      read();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(150);
      repeat();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(151);
      restore();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(152);
      return_();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(153);
      set();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(154);
      struct_();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(155);
      structDim();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(156);
      structInstance();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(157);
      swap();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(158);
      while_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeparatorContext ------------------------------------------------------------------

DaricParser::SeparatorContext::SeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::SeparatorContext::COLON() {
  return getTokens(DaricParser::COLON);
}

tree::TerminalNode* DaricParser::SeparatorContext::COLON(size_t i) {
  return getToken(DaricParser::COLON, i);
}

std::vector<tree::TerminalNode *> DaricParser::SeparatorContext::NEWLINE() {
  return getTokens(DaricParser::NEWLINE);
}

tree::TerminalNode* DaricParser::SeparatorContext::NEWLINE(size_t i) {
  return getToken(DaricParser::NEWLINE, i);
}


size_t DaricParser::SeparatorContext::getRuleIndex() const {
  return DaricParser::RuleSeparator;
}


std::any DaricParser::SeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitSeparator(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::SeparatorContext* DaricParser::separator() {
  SeparatorContext *_localctx = _tracker.createInstance<SeparatorContext>(_ctx, getState());
  enterRule(_localctx, 8, DaricParser::RuleSeparator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(162); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(161);
              _la = _input->LA(1);
              if (!(_la == DaricParser::COLON

              || _la == DaricParser::NEWLINE)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(164); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

DaricParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DaricParser::VariableContext* DaricParser::AssignContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

tree::TerminalNode* DaricParser::AssignContext::EQ() {
  return getToken(DaricParser::EQ, 0);
}

DaricParser::ExpressionContext* DaricParser::AssignContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

tree::TerminalNode* DaricParser::AssignContext::LET() {
  return getToken(DaricParser::LET, 0);
}

tree::TerminalNode* DaricParser::AssignContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::AssignContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}


size_t DaricParser::AssignContext::getRuleIndex() const {
  return DaricParser::RuleAssign;
}


std::any DaricParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::AssignContext* DaricParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 10, DaricParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(166);
      match(DaricParser::LET);
    }
    setState(169);
    variable();
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(170);
      match(DaricParser::COLON);
      setState(171);
      type();
    }
    setState(174);
    match(DaricParser::EQ);
    setState(175);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

DaricParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::CallContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::CallContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::CallContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::CallContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::CallContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::CallContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

tree::TerminalNode* DaricParser::CallContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
}


size_t DaricParser::CallContext::getRuleIndex() const {
  return DaricParser::RuleCall;
}


std::any DaricParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::CallContext* DaricParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 12, DaricParser::RuleCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(DaricParser::IDENTIFIER);
    setState(179);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(178);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(182);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(181);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(184);
      match(DaricParser::COMMA);
      setState(185);
      expression(0);
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(191);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseContext ------------------------------------------------------------------

DaricParser::CaseContext::CaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::CaseContext::CASE() {
  return getTokens(DaricParser::CASE);
}

tree::TerminalNode* DaricParser::CaseContext::CASE(size_t i) {
  return getToken(DaricParser::CASE, i);
}

DaricParser::ExpressionContext* DaricParser::CaseContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

tree::TerminalNode* DaricParser::CaseContext::OF() {
  return getToken(DaricParser::OF, 0);
}

tree::TerminalNode* DaricParser::CaseContext::END() {
  return getToken(DaricParser::END, 0);
}

DaricParser::SeparatorContext* DaricParser::CaseContext::separator() {
  return getRuleContext<DaricParser::SeparatorContext>(0);
}

std::vector<DaricParser::WhenContext *> DaricParser::CaseContext::when() {
  return getRuleContexts<DaricParser::WhenContext>();
}

DaricParser::WhenContext* DaricParser::CaseContext::when(size_t i) {
  return getRuleContext<DaricParser::WhenContext>(i);
}

tree::TerminalNode* DaricParser::CaseContext::OTHERWISE() {
  return getToken(DaricParser::OTHERWISE, 0);
}

DaricParser::StatementsContext* DaricParser::CaseContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}


size_t DaricParser::CaseContext::getRuleIndex() const {
  return DaricParser::RuleCase;
}


std::any DaricParser::CaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitCase(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::CaseContext* DaricParser::case_() {
  CaseContext *_localctx = _tracker.createInstance<CaseContext>(_ctx, getState());
  enterRule(_localctx, 14, DaricParser::RuleCase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(DaricParser::CASE);
    setState(195);
    expression(0);
    setState(196);
    match(DaricParser::OF);
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(197);
      separator();
    }
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::WHEN) {
      setState(200);
      when();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(206);
      match(DaricParser::OTHERWISE);
      setState(207);
      statements();
    }
    setState(210);
    match(DaricParser::END);
    setState(211);
    match(DaricParser::CASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstContext ------------------------------------------------------------------

DaricParser::ConstContext::ConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ConstContext::CONST() {
  return getToken(DaricParser::CONST, 0);
}

std::vector<tree::TerminalNode *> DaricParser::ConstContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::ConstContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> DaricParser::ConstContext::EQ() {
  return getTokens(DaricParser::EQ);
}

tree::TerminalNode* DaricParser::ConstContext::EQ(size_t i) {
  return getToken(DaricParser::EQ, i);
}

std::vector<DaricParser::LiteralContext *> DaricParser::ConstContext::literal() {
  return getRuleContexts<DaricParser::LiteralContext>();
}

DaricParser::LiteralContext* DaricParser::ConstContext::literal(size_t i) {
  return getRuleContext<DaricParser::LiteralContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::ConstContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ConstContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::ConstContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::ConstContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}


size_t DaricParser::ConstContext::getRuleIndex() const {
  return DaricParser::RuleConst;
}


std::any DaricParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ConstContext* DaricParser::const_() {
  ConstContext *_localctx = _tracker.createInstance<ConstContext>(_ctx, getState());
  enterRule(_localctx, 16, DaricParser::RuleConst);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(DaricParser::CONST);
    setState(214);
    match(DaricParser::IDENTIFIER);
    setState(215);
    match(DaricParser::EQ);
    setState(216);
    literal();
    setState(223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(217);
      match(DaricParser::COMMA);
      setState(218);
      match(DaricParser::IDENTIFIER);
      setState(219);
      match(DaricParser::EQ);
      setState(220);
      literal();
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(228);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(226);
      match(DaricParser::COLON);
      setState(227);
      type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataContext ------------------------------------------------------------------

DaricParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::DataContext::DATA() {
  return getToken(DaricParser::DATA, 0);
}

std::vector<DaricParser::IntegerLiteralContext *> DaricParser::DataContext::integerLiteral() {
  return getRuleContexts<DaricParser::IntegerLiteralContext>();
}

DaricParser::IntegerLiteralContext* DaricParser::DataContext::integerLiteral(size_t i) {
  return getRuleContext<DaricParser::IntegerLiteralContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::DataContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::DataContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::DataContext::getRuleIndex() const {
  return DaricParser::RuleData;
}


std::any DaricParser::DataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitData(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::DataContext* DaricParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 18, DaricParser::RuleData);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(DaricParser::DATA);
    setState(231);
    integerLiteral();
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(232);
      match(DaricParser::COMMA);
      setState(233);
      integerLiteral();
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataLabelContext ------------------------------------------------------------------

DaricParser::DataLabelContext::DataLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::DataLabelContext::DATALABEL() {
  return getToken(DaricParser::DATALABEL, 0);
}

DaricParser::StringLiteralContext* DaricParser::DataLabelContext::stringLiteral() {
  return getRuleContext<DaricParser::StringLiteralContext>(0);
}


size_t DaricParser::DataLabelContext::getRuleIndex() const {
  return DaricParser::RuleDataLabel;
}


std::any DaricParser::DataLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitDataLabel(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::DataLabelContext* DaricParser::dataLabel() {
  DataLabelContext *_localctx = _tracker.createInstance<DataLabelContext>(_ctx, getState());
  enterRule(_localctx, 20, DaricParser::RuleDataLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(DaricParser::DATALABEL);
    setState(240);
    stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimContext ------------------------------------------------------------------

DaricParser::DimContext::DimContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::DimContext::DIM() {
  return getToken(DaricParser::DIM, 0);
}

tree::TerminalNode* DaricParser::DimContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

tree::TerminalNode* DaricParser::DimContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::DimContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::DimContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::DimContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}

tree::TerminalNode* DaricParser::DimContext::VECTOR() {
  return getToken(DaricParser::VECTOR, 0);
}

DaricParser::TypeOrStructContext* DaricParser::DimContext::typeOrStruct() {
  return getRuleContext<DaricParser::TypeOrStructContext>(0);
}

tree::TerminalNode* DaricParser::DimContext::LIST() {
  return getToken(DaricParser::LIST, 0);
}

tree::TerminalNode* DaricParser::DimContext::SET() {
  return getToken(DaricParser::SET, 0);
}

tree::TerminalNode* DaricParser::DimContext::MAP() {
  return getToken(DaricParser::MAP, 0);
}

std::vector<tree::TerminalNode *> DaricParser::DimContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::DimContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::DimContext::STACK() {
  return getToken(DaricParser::STACK, 0);
}

tree::TerminalNode* DaricParser::DimContext::QUEUE() {
  return getToken(DaricParser::QUEUE, 0);
}

tree::TerminalNode* DaricParser::DimContext::BYTE() {
  return getToken(DaricParser::BYTE, 0);
}

tree::TerminalNode* DaricParser::DimContext::INT() {
  return getToken(DaricParser::INT, 0);
}

tree::TerminalNode* DaricParser::DimContext::FLOAT() {
  return getToken(DaricParser::FLOAT, 0);
}

tree::TerminalNode* DaricParser::DimContext::STRING() {
  return getToken(DaricParser::STRING, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::DimContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::DimContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}


size_t DaricParser::DimContext::getRuleIndex() const {
  return DaricParser::RuleDim;
}


std::any DaricParser::DimContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitDim(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::DimContext* DaricParser::dim() {
  DimContext *_localctx = _tracker.createInstance<DimContext>(_ctx, getState());
  enterRule(_localctx, 22, DaricParser::RuleDim);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(DaricParser::DIM);
    setState(243);
    match(DaricParser::IDENTIFIER);
    setState(244);
    match(DaricParser::COLON);
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::BYTE:
      case DaricParser::INT:
      case DaricParser::FLOAT:
      case DaricParser::STRING: {
        setState(245);
        type();
        setState(246);
        match(DaricParser::SOPEN);
        setState(248);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 9223336921202163712) != 0 || (((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & 8879707453922815) != 0) {
          setState(247);
          expression(0);
        }
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COMMA) {
          setState(250);
          match(DaricParser::COMMA);
          setState(251);
          expression(0);
          setState(256);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(257);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::VECTOR: {
        setState(259);
        match(DaricParser::VECTOR);
        setState(260);
        match(DaricParser::SOPEN);
        setState(261);
        typeOrStruct();
        setState(262);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::LIST: {
        setState(264);
        match(DaricParser::LIST);
        setState(265);
        match(DaricParser::SOPEN);
        setState(266);
        typeOrStruct();
        setState(267);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::SET: {
        setState(269);
        match(DaricParser::SET);
        setState(270);
        match(DaricParser::SOPEN);
        setState(271);
        _la = _input->LA(1);
        if (!((((_la - 78) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 78)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(272);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::MAP: {
        setState(273);
        match(DaricParser::MAP);
        setState(274);
        match(DaricParser::SOPEN);
        setState(275);
        _la = _input->LA(1);
        if (!((((_la - 78) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 78)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(276);
        match(DaricParser::COMMA);
        setState(277);
        typeOrStruct();
        setState(278);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::STACK: {
        setState(280);
        match(DaricParser::STACK);
        setState(281);
        match(DaricParser::SOPEN);
        setState(282);
        typeOrStruct();
        setState(283);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::QUEUE: {
        setState(285);
        match(DaricParser::QUEUE);
        setState(286);
        match(DaricParser::SOPEN);
        setState(287);
        typeOrStruct();
        setState(288);
        match(DaricParser::SCLOSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprcallContext ------------------------------------------------------------------

DaricParser::ExprcallContext::ExprcallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ExprcallContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

tree::TerminalNode* DaricParser::ExprcallContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

tree::TerminalNode* DaricParser::ExprcallContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::ExprcallContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::ExprcallContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::ExprcallContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ExprcallContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::ExprcallContext::getRuleIndex() const {
  return DaricParser::RuleExprcall;
}


std::any DaricParser::ExprcallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitExprcall(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ExprcallContext* DaricParser::exprcall() {
  ExprcallContext *_localctx = _tracker.createInstance<ExprcallContext>(_ctx, getState());
  enterRule(_localctx, 24, DaricParser::RuleExprcall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(DaricParser::IDENTIFIER);
    setState(293);
    match(DaricParser::LPAREN);
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9223336921202163712) != 0 || (((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8879707453922815) != 0) {
      setState(294);
      expression(0);
    }
    setState(301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(297);
      match(DaricParser::COMMA);
      setState(298);
      expression(0);
      setState(303);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(304);
    match(DaricParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

DaricParser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::EndContext::QUIT() {
  return getToken(DaricParser::QUIT, 0);
}


size_t DaricParser::EndContext::getRuleIndex() const {
  return DaricParser::RuleEnd;
}


std::any DaricParser::EndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitEnd(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::EndContext* DaricParser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 26, DaricParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(DaricParser::QUIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForContext ------------------------------------------------------------------

DaricParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ForContext::FOR() {
  return getToken(DaricParser::FOR, 0);
}

tree::TerminalNode* DaricParser::ForContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

tree::TerminalNode* DaricParser::ForContext::EQ() {
  return getToken(DaricParser::EQ, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::ForContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::ForContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

tree::TerminalNode* DaricParser::ForContext::TO() {
  return getToken(DaricParser::TO, 0);
}

DaricParser::StatementsContext* DaricParser::ForContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::ForContext::NEXT() {
  return getToken(DaricParser::NEXT, 0);
}

tree::TerminalNode* DaricParser::ForContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::ForContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ForContext::STEP() {
  return getToken(DaricParser::STEP, 0);
}


size_t DaricParser::ForContext::getRuleIndex() const {
  return DaricParser::RuleFor;
}


std::any DaricParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ForContext* DaricParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 28, DaricParser::RuleFor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(DaricParser::FOR);
    setState(309);
    match(DaricParser::IDENTIFIER);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(310);
      match(DaricParser::COLON);
      setState(311);
      type();
    }
    setState(314);
    match(DaricParser::EQ);
    setState(315);
    expression(0);
    setState(316);
    match(DaricParser::TO);
    setState(317);
    expression(0);
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(318);
      match(DaricParser::STEP);
      setState(319);
      expression(0);
    }
    setState(322);
    statements();
    setState(323);
    match(DaricParser::NEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportlibContext ------------------------------------------------------------------

DaricParser::ImportlibContext::ImportlibContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ImportlibContext::IMPORT() {
  return getToken(DaricParser::IMPORT, 0);
}

DaricParser::StringLiteralContext* DaricParser::ImportlibContext::stringLiteral() {
  return getRuleContext<DaricParser::StringLiteralContext>(0);
}


size_t DaricParser::ImportlibContext::getRuleIndex() const {
  return DaricParser::RuleImportlib;
}


std::any DaricParser::ImportlibContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitImportlib(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ImportlibContext* DaricParser::importlib() {
  ImportlibContext *_localctx = _tracker.createInstance<ImportlibContext>(_ctx, getState());
  enterRule(_localctx, 30, DaricParser::RuleImportlib);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(DaricParser::IMPORT);
    setState(326);
    stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

DaricParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::IfContext::IF() {
  return getToken(DaricParser::IF, 0);
}

DaricParser::ExpressionContext* DaricParser::IfContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

std::vector<DaricParser::StatementslContext *> DaricParser::IfContext::statementsl() {
  return getRuleContexts<DaricParser::StatementslContext>();
}

DaricParser::StatementslContext* DaricParser::IfContext::statementsl(size_t i) {
  return getRuleContext<DaricParser::StatementslContext>(i);
}

tree::TerminalNode* DaricParser::IfContext::THEN() {
  return getToken(DaricParser::THEN, 0);
}

tree::TerminalNode* DaricParser::IfContext::ELSE() {
  return getToken(DaricParser::ELSE, 0);
}


size_t DaricParser::IfContext::getRuleIndex() const {
  return DaricParser::RuleIf;
}


std::any DaricParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::IfContext* DaricParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 32, DaricParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(DaricParser::IF);
    setState(329);
    expression(0);
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(330);
      match(DaricParser::THEN);
    }
    setState(333);
    statementsl();
    setState(336);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(334);
      match(DaricParser::ELSE);
      setState(335);
      statementsl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfmlContext ------------------------------------------------------------------

DaricParser::IfmlContext::IfmlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::IfmlContext::IF() {
  return getTokens(DaricParser::IF);
}

tree::TerminalNode* DaricParser::IfmlContext::IF(size_t i) {
  return getToken(DaricParser::IF, i);
}

DaricParser::ExpressionContext* DaricParser::IfmlContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> DaricParser::IfmlContext::NEWLINE() {
  return getTokens(DaricParser::NEWLINE);
}

tree::TerminalNode* DaricParser::IfmlContext::NEWLINE(size_t i) {
  return getToken(DaricParser::NEWLINE, i);
}

std::vector<DaricParser::StatementsContext *> DaricParser::IfmlContext::statements() {
  return getRuleContexts<DaricParser::StatementsContext>();
}

DaricParser::StatementsContext* DaricParser::IfmlContext::statements(size_t i) {
  return getRuleContext<DaricParser::StatementsContext>(i);
}

tree::TerminalNode* DaricParser::IfmlContext::END() {
  return getToken(DaricParser::END, 0);
}

tree::TerminalNode* DaricParser::IfmlContext::THEN() {
  return getToken(DaricParser::THEN, 0);
}

tree::TerminalNode* DaricParser::IfmlContext::ELSE() {
  return getToken(DaricParser::ELSE, 0);
}


size_t DaricParser::IfmlContext::getRuleIndex() const {
  return DaricParser::RuleIfml;
}


std::any DaricParser::IfmlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitIfml(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::IfmlContext* DaricParser::ifml() {
  IfmlContext *_localctx = _tracker.createInstance<IfmlContext>(_ctx, getState());
  enterRule(_localctx, 34, DaricParser::RuleIfml);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(DaricParser::IF);
    setState(339);
    expression(0);
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(340);
      match(DaricParser::THEN);
    }
    setState(343);
    match(DaricParser::NEWLINE);
    setState(344);
    statements();
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(345);
      match(DaricParser::ELSE);
      setState(346);
      match(DaricParser::NEWLINE);
      setState(347);
      statements();
    }
    setState(350);
    match(DaricParser::NEWLINE);
    setState(351);
    match(DaricParser::END);
    setState(352);
    match(DaricParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

DaricParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::InputContext::INPUT() {
  return getToken(DaricParser::INPUT, 0);
}

DaricParser::VariableContext* DaricParser::InputContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}


size_t DaricParser::InputContext::getRuleIndex() const {
  return DaricParser::RuleInput;
}


std::any DaricParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::InputContext* DaricParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 36, DaricParser::RuleInput);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(DaricParser::INPUT);
    setState(355);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

DaricParser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::OptionContext::OPTION() {
  return getToken(DaricParser::OPTION, 0);
}

std::vector<tree::TerminalNode *> DaricParser::OptionContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::OptionContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

DaricParser::IntegerLiteralContext* DaricParser::OptionContext::integerLiteral() {
  return getRuleContext<DaricParser::IntegerLiteralContext>(0);
}


size_t DaricParser::OptionContext::getRuleIndex() const {
  return DaricParser::RuleOption;
}


std::any DaricParser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::OptionContext* DaricParser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 38, DaricParser::RuleOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(DaricParser::OPTION);
    setState(358);
    match(DaricParser::IDENTIFIER);
    setState(361);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(359);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(360);
        integerLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

DaricParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::ParameterContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::ParameterContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

tree::TerminalNode* DaricParser::ParameterContext::REF() {
  return getToken(DaricParser::REF, 0);
}

tree::TerminalNode* DaricParser::ParameterContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::ParameterContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}


size_t DaricParser::ParameterContext::getRuleIndex() const {
  return DaricParser::RuleParameter;
}


std::any DaricParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ParameterContext* DaricParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 40, DaricParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(363);
      match(DaricParser::REF);
    }
    setState(366);
    match(DaricParser::IDENTIFIER);
    setState(372);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(367);
      match(DaricParser::COLON);
      setState(370);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case DaricParser::BYTE:
        case DaricParser::INT:
        case DaricParser::FLOAT:
        case DaricParser::STRING: {
          setState(368);
          type();
          break;
        }

        case DaricParser::IDENTIFIER: {
          setState(369);
          match(DaricParser::IDENTIFIER);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

DaricParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::PrintContext::PRINT() {
  return getToken(DaricParser::PRINT, 0);
}

tree::TerminalNode* DaricParser::PrintContext::SYS() {
  return getToken(DaricParser::SYS, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::PrintContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::PrintContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

tree::TerminalNode* DaricParser::PrintContext::SEMICOLON() {
  return getToken(DaricParser::SEMICOLON, 0);
}

tree::TerminalNode* DaricParser::PrintContext::WITH() {
  return getToken(DaricParser::WITH, 0);
}


size_t DaricParser::PrintContext::getRuleIndex() const {
  return DaricParser::RulePrint;
}


std::any DaricParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::PrintContext* DaricParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 42, DaricParser::RulePrint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(DaricParser::PRINT);
    setState(376);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SYS) {
      setState(375);
      match(DaricParser::SYS);
    }
    setState(388);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(378);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(383);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(380);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(379);
          match(DaricParser::WITH);
        }
        setState(382);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(385);
        match(DaricParser::SEMICOLON);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

DaricParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::ProcedureContext::DEF() {
  return getTokens(DaricParser::DEF);
}

tree::TerminalNode* DaricParser::ProcedureContext::DEF(size_t i) {
  return getToken(DaricParser::DEF, i);
}

tree::TerminalNode* DaricParser::ProcedureContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

DaricParser::StatementsContext* DaricParser::ProcedureContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::ProcedureContext::END() {
  return getToken(DaricParser::END, 0);
}

tree::TerminalNode* DaricParser::ProcedureContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::ProcedureContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ProcedureContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> DaricParser::ProcedureContext::NEWLINE() {
  return getTokens(DaricParser::NEWLINE);
}

tree::TerminalNode* DaricParser::ProcedureContext::NEWLINE(size_t i) {
  return getToken(DaricParser::NEWLINE, i);
}

std::vector<DaricParser::ParameterContext *> DaricParser::ProcedureContext::parameter() {
  return getRuleContexts<DaricParser::ParameterContext>();
}

DaricParser::ParameterContext* DaricParser::ProcedureContext::parameter(size_t i) {
  return getRuleContext<DaricParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::ProcedureContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ProcedureContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::ProcedureContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
}

std::vector<DaricParser::SeparatorContext *> DaricParser::ProcedureContext::separator() {
  return getRuleContexts<DaricParser::SeparatorContext>();
}

DaricParser::SeparatorContext* DaricParser::ProcedureContext::separator(size_t i) {
  return getRuleContext<DaricParser::SeparatorContext>(i);
}


size_t DaricParser::ProcedureContext::getRuleIndex() const {
  return DaricParser::RuleProcedure;
}


std::any DaricParser::ProcedureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitProcedure(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ProcedureContext* DaricParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 44, DaricParser::RuleProcedure);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(DaricParser::DEF);
    setState(391);
    match(DaricParser::IDENTIFIER);
    setState(394);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(392);
      match(DaricParser::COLON);
      setState(393);
      type();
      break;
    }

    default:
      break;
    }
    setState(397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(396);
      match(DaricParser::LPAREN);
    }
    setState(402);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(399);
        match(DaricParser::NEWLINE); 
      }
      setState(404);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(406);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(405);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(418);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(408);
      match(DaricParser::COMMA);
      setState(412);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(409);
        match(DaricParser::NEWLINE);
        setState(414);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(415);
      parameter();
      setState(420);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(421);
      match(DaricParser::RPAREN);
    }
    setState(427);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(424);
        separator(); 
      }
      setState(429);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(430);
    statements();
    setState(431);
    match(DaricParser::END);
    setState(432);
    match(DaricParser::DEF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatContext ------------------------------------------------------------------

DaricParser::RepeatContext::RepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::RepeatContext::REPEAT() {
  return getToken(DaricParser::REPEAT, 0);
}

DaricParser::StatementsContext* DaricParser::RepeatContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::RepeatContext::UNTIL() {
  return getToken(DaricParser::UNTIL, 0);
}

DaricParser::ExpressionContext* DaricParser::RepeatContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}


size_t DaricParser::RepeatContext::getRuleIndex() const {
  return DaricParser::RuleRepeat;
}


std::any DaricParser::RepeatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitRepeat(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::RepeatContext* DaricParser::repeat() {
  RepeatContext *_localctx = _tracker.createInstance<RepeatContext>(_ctx, getState());
  enterRule(_localctx, 46, DaricParser::RuleRepeat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(DaricParser::REPEAT);
    setState(435);
    statements();
    setState(436);
    match(DaricParser::UNTIL);
    setState(437);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadContext ------------------------------------------------------------------

DaricParser::ReadContext::ReadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ReadContext::READ() {
  return getToken(DaricParser::READ, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::ReadContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::ReadContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::ReadContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ReadContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::ReadContext::getRuleIndex() const {
  return DaricParser::RuleRead;
}


std::any DaricParser::ReadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitRead(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ReadContext* DaricParser::read() {
  ReadContext *_localctx = _tracker.createInstance<ReadContext>(_ctx, getState());
  enterRule(_localctx, 48, DaricParser::RuleRead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(DaricParser::READ);
    setState(440);
    variable();
    setState(445);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(441);
      match(DaricParser::COMMA);
      setState(442);
      variable();
      setState(447);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RestoreContext ------------------------------------------------------------------

DaricParser::RestoreContext::RestoreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::RestoreContext::RESTORE() {
  return getToken(DaricParser::RESTORE, 0);
}

DaricParser::StringLiteralContext* DaricParser::RestoreContext::stringLiteral() {
  return getRuleContext<DaricParser::StringLiteralContext>(0);
}


size_t DaricParser::RestoreContext::getRuleIndex() const {
  return DaricParser::RuleRestore;
}


std::any DaricParser::RestoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitRestore(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::RestoreContext* DaricParser::restore() {
  RestoreContext *_localctx = _tracker.createInstance<RestoreContext>(_ctx, getState());
  enterRule(_localctx, 50, DaricParser::RuleRestore);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(DaricParser::RESTORE);
    setState(449);
    stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

DaricParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ReturnContext::RETURN() {
  return getToken(DaricParser::RETURN, 0);
}

DaricParser::ExpressionContext* DaricParser::ReturnContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}


size_t DaricParser::ReturnContext::getRuleIndex() const {
  return DaricParser::RuleReturn;
}


std::any DaricParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ReturnContext* DaricParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 52, DaricParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(DaricParser::RETURN);
    setState(453);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(452);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructContext ------------------------------------------------------------------

DaricParser::StructContext::StructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::StructContext::RECORD() {
  return getTokens(DaricParser::RECORD);
}

tree::TerminalNode* DaricParser::StructContext::RECORD(size_t i) {
  return getToken(DaricParser::RECORD, i);
}

std::vector<tree::TerminalNode *> DaricParser::StructContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::StructContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> DaricParser::StructContext::COLON() {
  return getTokens(DaricParser::COLON);
}

tree::TerminalNode* DaricParser::StructContext::COLON(size_t i) {
  return getToken(DaricParser::COLON, i);
}

std::vector<DaricParser::TypeOrStructContext *> DaricParser::StructContext::typeOrStruct() {
  return getRuleContexts<DaricParser::TypeOrStructContext>();
}

DaricParser::TypeOrStructContext* DaricParser::StructContext::typeOrStruct(size_t i) {
  return getRuleContext<DaricParser::TypeOrStructContext>(i);
}

tree::TerminalNode* DaricParser::StructContext::END() {
  return getToken(DaricParser::END, 0);
}

std::vector<tree::TerminalNode *> DaricParser::StructContext::NEWLINE() {
  return getTokens(DaricParser::NEWLINE);
}

tree::TerminalNode* DaricParser::StructContext::NEWLINE(size_t i) {
  return getToken(DaricParser::NEWLINE, i);
}


size_t DaricParser::StructContext::getRuleIndex() const {
  return DaricParser::RuleStruct;
}


std::any DaricParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StructContext* DaricParser::struct_() {
  StructContext *_localctx = _tracker.createInstance<StructContext>(_ctx, getState());
  enterRule(_localctx, 54, DaricParser::RuleStruct);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(DaricParser::RECORD);
    setState(456);
    match(DaricParser::IDENTIFIER);
    setState(460);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(457);
      match(DaricParser::NEWLINE);
      setState(462);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(463);
    match(DaricParser::IDENTIFIER);
    setState(464);
    match(DaricParser::COLON);
    setState(465);
    typeOrStruct();
    setState(476);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(467); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(466);
          match(DaricParser::NEWLINE);
          setState(469); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::NEWLINE);
        setState(471);
        match(DaricParser::IDENTIFIER);
        setState(472);
        match(DaricParser::COLON);
        setState(473);
        typeOrStruct(); 
      }
      setState(478);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(479);
      match(DaricParser::NEWLINE);
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(485);
    match(DaricParser::END);
    setState(486);
    match(DaricParser::RECORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDimContext ------------------------------------------------------------------

DaricParser::StructDimContext::StructDimContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::StructDimContext::DIM() {
  return getToken(DaricParser::DIM, 0);
}

std::vector<tree::TerminalNode *> DaricParser::StructDimContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::StructDimContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

tree::TerminalNode* DaricParser::StructDimContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

tree::TerminalNode* DaricParser::StructDimContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::StructDimContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::StructDimContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::StructDimContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::StructDimContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::StructDimContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::StructDimContext::getRuleIndex() const {
  return DaricParser::RuleStructDim;
}


std::any DaricParser::StructDimContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStructDim(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StructDimContext* DaricParser::structDim() {
  StructDimContext *_localctx = _tracker.createInstance<StructDimContext>(_ctx, getState());
  enterRule(_localctx, 56, DaricParser::RuleStructDim);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(DaricParser::DIM);
    setState(489);
    match(DaricParser::IDENTIFIER);
    setState(490);
    match(DaricParser::COLON);
    setState(491);
    match(DaricParser::IDENTIFIER);
    setState(492);
    match(DaricParser::SOPEN);
    setState(494);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9223336921202163712) != 0 || (((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8879707453922815) != 0) {
      setState(493);
      expression(0);
    }
    setState(500);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(496);
      match(DaricParser::COMMA);
      setState(497);
      expression(0);
      setState(502);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(503);
    match(DaricParser::SCLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInstanceContext ------------------------------------------------------------------

DaricParser::StructInstanceContext::StructInstanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::StructInstanceContext::DIM() {
  return getToken(DaricParser::DIM, 0);
}

std::vector<tree::TerminalNode *> DaricParser::StructInstanceContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::StructInstanceContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

tree::TerminalNode* DaricParser::StructInstanceContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

tree::TerminalNode* DaricParser::StructInstanceContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

tree::TerminalNode* DaricParser::StructInstanceContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> DaricParser::StructInstanceContext::EQ() {
  return getTokens(DaricParser::EQ);
}

tree::TerminalNode* DaricParser::StructInstanceContext::EQ(size_t i) {
  return getToken(DaricParser::EQ, i);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::StructInstanceContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::StructInstanceContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::StructInstanceContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::StructInstanceContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::StructInstanceContext::getRuleIndex() const {
  return DaricParser::RuleStructInstance;
}


std::any DaricParser::StructInstanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStructInstance(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StructInstanceContext* DaricParser::structInstance() {
  StructInstanceContext *_localctx = _tracker.createInstance<StructInstanceContext>(_ctx, getState());
  enterRule(_localctx, 58, DaricParser::RuleStructInstance);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(DaricParser::DIM);
    setState(506);
    match(DaricParser::IDENTIFIER);
    setState(507);
    match(DaricParser::COLON);
    setState(508);
    match(DaricParser::IDENTIFIER);
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(509);
      match(DaricParser::LPAREN);
      setState(513);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(510);
        match(DaricParser::IDENTIFIER);
        setState(511);
        match(DaricParser::EQ);
        setState(512);
        expression(0);
      }
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(515);
        match(DaricParser::COMMA);
        setState(516);
        match(DaricParser::IDENTIFIER);
        setState(517);
        match(DaricParser::EQ);
        setState(518);
        expression(0);
        setState(523);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(524);
      match(DaricParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwapContext ------------------------------------------------------------------

DaricParser::SwapContext::SwapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::SwapContext::SWAP() {
  return getToken(DaricParser::SWAP, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::SwapContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::SwapContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

tree::TerminalNode* DaricParser::SwapContext::COMMA() {
  return getToken(DaricParser::COMMA, 0);
}


size_t DaricParser::SwapContext::getRuleIndex() const {
  return DaricParser::RuleSwap;
}


std::any DaricParser::SwapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitSwap(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::SwapContext* DaricParser::swap() {
  SwapContext *_localctx = _tracker.createInstance<SwapContext>(_ctx, getState());
  enterRule(_localctx, 60, DaricParser::RuleSwap);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    match(DaricParser::SWAP);
    setState(528);
    variable();
    setState(529);
    match(DaricParser::COMMA);
    setState(530);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenContext ------------------------------------------------------------------

DaricParser::WhenContext::WhenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::WhenContext::WHEN() {
  return getToken(DaricParser::WHEN, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::WhenContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::WhenContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

DaricParser::StatementsContext* DaricParser::WhenContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

std::vector<tree::TerminalNode *> DaricParser::WhenContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::WhenContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::WhenContext::getRuleIndex() const {
  return DaricParser::RuleWhen;
}


std::any DaricParser::WhenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitWhen(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::WhenContext* DaricParser::when() {
  WhenContext *_localctx = _tracker.createInstance<WhenContext>(_ctx, getState());
  enterRule(_localctx, 62, DaricParser::RuleWhen);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(532);
    match(DaricParser::WHEN);
    setState(533);
    expression(0);
    setState(538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(534);
      match(DaricParser::COMMA);
      setState(535);
      expression(0);
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(541);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

DaricParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::WhileContext::WHILE() {
  return getTokens(DaricParser::WHILE);
}

tree::TerminalNode* DaricParser::WhileContext::WHILE(size_t i) {
  return getToken(DaricParser::WHILE, i);
}

DaricParser::ExpressionContext* DaricParser::WhileContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

DaricParser::StatementsContext* DaricParser::WhileContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::WhileContext::END() {
  return getToken(DaricParser::END, 0);
}


size_t DaricParser::WhileContext::getRuleIndex() const {
  return DaricParser::RuleWhile;
}


std::any DaricParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::WhileContext* DaricParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 64, DaricParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    match(DaricParser::WHILE);
    setState(544);
    expression(0);
    setState(545);
    statements();
    setState(546);
    match(DaricParser::END);
    setState(547);
    match(DaricParser::WHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClearContext ------------------------------------------------------------------

DaricParser::ClearContext::ClearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ClearContext::CLEAR() {
  return getToken(DaricParser::CLEAR, 0);
}

tree::TerminalNode* DaricParser::ClearContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

tree::TerminalNode* DaricParser::ClearContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

DaricParser::ExpressionContext* DaricParser::ClearContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

tree::TerminalNode* DaricParser::ClearContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}


size_t DaricParser::ClearContext::getRuleIndex() const {
  return DaricParser::RuleClear;
}


std::any DaricParser::ClearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitClear(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ClearContext* DaricParser::clear() {
  ClearContext *_localctx = _tracker.createInstance<ClearContext>(_ctx, getState());
  enterRule(_localctx, 66, DaricParser::RuleClear);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(DaricParser::CLEAR);
    setState(550);
    match(DaricParser::IDENTIFIER);
    setState(555);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SOPEN) {
      setState(551);
      match(DaricParser::SOPEN);
      setState(552);
      expression(0);
      setState(553);
      match(DaricParser::SCLOSE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PopContext ------------------------------------------------------------------

DaricParser::PopContext::PopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::PopContext::POP() {
  return getToken(DaricParser::POP, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::PopContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::PopContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

tree::TerminalNode* DaricParser::PopContext::FROM() {
  return getToken(DaricParser::FROM, 0);
}


size_t DaricParser::PopContext::getRuleIndex() const {
  return DaricParser::RulePop;
}


std::any DaricParser::PopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitPop(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::PopContext* DaricParser::pop() {
  PopContext *_localctx = _tracker.createInstance<PopContext>(_ctx, getState());
  enterRule(_localctx, 68, DaricParser::RulePop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(DaricParser::POP);
    setState(558);
    variable();
    setState(559);
    match(DaricParser::FROM);
    setState(560);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PushContext ------------------------------------------------------------------

DaricParser::PushContext::PushContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::PushContext::PUSH() {
  return getToken(DaricParser::PUSH, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::PushContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::PushContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

tree::TerminalNode* DaricParser::PushContext::INTO() {
  return getToken(DaricParser::INTO, 0);
}


size_t DaricParser::PushContext::getRuleIndex() const {
  return DaricParser::RulePush;
}


std::any DaricParser::PushContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitPush(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::PushContext* DaricParser::push() {
  PushContext *_localctx = _tracker.createInstance<PushContext>(_ctx, getState());
  enterRule(_localctx, 70, DaricParser::RulePush);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    match(DaricParser::PUSH);
    setState(563);
    variable();
    setState(564);
    match(DaricParser::INTO);
    setState(565);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetContext ------------------------------------------------------------------

DaricParser::SetContext::SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::SetContext::ASSIGN() {
  return getToken(DaricParser::ASSIGN, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::SetContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::SetContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

tree::TerminalNode* DaricParser::SetContext::TO() {
  return getToken(DaricParser::TO, 0);
}

DaricParser::VariableContext* DaricParser::SetContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

tree::TerminalNode* DaricParser::SetContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::SetContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}


size_t DaricParser::SetContext::getRuleIndex() const {
  return DaricParser::RuleSet;
}


std::any DaricParser::SetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitSet(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::SetContext* DaricParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 72, DaricParser::RuleSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    match(DaricParser::ASSIGN);
    setState(568);
    expression(0);
    setState(569);
    match(DaricParser::TO);
    setState(570);
    variable();
    setState(571);
    match(DaricParser::SOPEN);
    setState(572);
    expression(0);
    setState(573);
    match(DaricParser::SCLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

DaricParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DaricParser::VariableContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::VariableContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

tree::TerminalNode* DaricParser::VariableContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::VariableContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}

std::vector<tree::TerminalNode *> DaricParser::VariableContext::DOT() {
  return getTokens(DaricParser::DOT);
}

tree::TerminalNode* DaricParser::VariableContext::DOT(size_t i) {
  return getToken(DaricParser::DOT, i);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::VariableContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::VariableContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::VariableContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::VariableContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}


size_t DaricParser::VariableContext::getRuleIndex() const {
  return DaricParser::RuleVariable;
}


std::any DaricParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::VariableContext* DaricParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 74, DaricParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(DaricParser::IDENTIFIER);
    setState(588);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(576);
      match(DaricParser::SOPEN);
      setState(578);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 9223336921202163712) != 0 || (((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & 8879707453922815) != 0) {
        setState(577);
        expression(0);
      }
      setState(584);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(580);
        match(DaricParser::COMMA);
        setState(581);
        expression(0);
        setState(586);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(587);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(594);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(590);
        match(DaricParser::DOT);
        setState(591);
        match(DaricParser::IDENTIFIER); 
      }
      setState(596);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

DaricParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ExpressionContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::ExpressionContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

tree::TerminalNode* DaricParser::ExpressionContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MAIN() {
  return getToken(DaricParser::MAIN, 0);
}

DaricParser::LiteralContext* DaricParser::ExpressionContext::literal() {
  return getRuleContext<DaricParser::LiteralContext>(0);
}

DaricParser::ExprcallContext* DaricParser::ExpressionContext::exprcall() {
  return getRuleContext<DaricParser::ExprcallContext>(0);
}

DaricParser::VariableContext* DaricParser::ExpressionContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MINUS() {
  return getToken(DaricParser::MINUS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::PLUS() {
  return getToken(DaricParser::PLUS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::INT() {
  return getToken(DaricParser::INT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::FLOAT() {
  return getToken(DaricParser::FLOAT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::STRING() {
  return getToken(DaricParser::STRING, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::WITH() {
  return getToken(DaricParser::WITH, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ABS() {
  return getToken(DaricParser::ABS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::COMP() {
  return getToken(DaricParser::COMP, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::NOT() {
  return getToken(DaricParser::NOT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::TRUE() {
  return getToken(DaricParser::TRUE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::FALSE() {
  return getToken(DaricParser::FALSE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::PI() {
  return getToken(DaricParser::PI, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::DEG() {
  return getToken(DaricParser::DEG, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::RAD() {
  return getToken(DaricParser::RAD, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SGN() {
  return getToken(DaricParser::SGN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ACS() {
  return getToken(DaricParser::ACS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ASN() {
  return getToken(DaricParser::ASN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ATN() {
  return getToken(DaricParser::ATN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::COS() {
  return getToken(DaricParser::COS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::EXP() {
  return getToken(DaricParser::EXP, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::FLOOR() {
  return getToken(DaricParser::FLOOR, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ROUND() {
  return getToken(DaricParser::ROUND, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::LN() {
  return getToken(DaricParser::LN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::LOG() {
  return getToken(DaricParser::LOG, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SIN() {
  return getToken(DaricParser::SIN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SQR() {
  return getToken(DaricParser::SQR, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::TAN() {
  return getToken(DaricParser::TAN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::ASC() {
  return getToken(DaricParser::ASC, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::CHR() {
  return getToken(DaricParser::CHR, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::INSTR() {
  return getToken(DaricParser::INSTR, 0);
}

std::vector<tree::TerminalNode *> DaricParser::ExpressionContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ExpressionContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::ExpressionContext::LEFT() {
  return getToken(DaricParser::LEFT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MID() {
  return getToken(DaricParser::MID, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::RIGHT() {
  return getToken(DaricParser::RIGHT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::LEN() {
  return getToken(DaricParser::LEN, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SIZE() {
  return getToken(DaricParser::SIZE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::HAT() {
  return getToken(DaricParser::HAT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::DIVIDE() {
  return getToken(DaricParser::DIVIDE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MULTIPLY() {
  return getToken(DaricParser::MULTIPLY, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::DIV() {
  return getToken(DaricParser::DIV, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MOD() {
  return getToken(DaricParser::MOD, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SHL() {
  return getToken(DaricParser::SHL, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::SHR() {
  return getToken(DaricParser::SHR, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::EQ() {
  return getToken(DaricParser::EQ, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::NE() {
  return getToken(DaricParser::NE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::GT() {
  return getToken(DaricParser::GT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::GE() {
  return getToken(DaricParser::GE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::LT() {
  return getToken(DaricParser::LT, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::LE() {
  return getToken(DaricParser::LE, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::AND() {
  return getToken(DaricParser::AND, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::OR() {
  return getToken(DaricParser::OR, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::EOR() {
  return getToken(DaricParser::EOR, 0);
}


size_t DaricParser::ExpressionContext::getRuleIndex() const {
  return DaricParser::RuleExpression;
}


std::any DaricParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


DaricParser::ExpressionContext* DaricParser::expression() {
   return expression(0);
}

DaricParser::ExpressionContext* DaricParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DaricParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  DaricParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, DaricParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(723);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      setState(598);
      match(DaricParser::LPAREN);
      setState(599);
      expression(0);
      setState(600);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(602);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(603);
      literal();
      break;
    }

    case 4: {
      setState(604);
      exprcall();
      break;
    }

    case 5: {
      setState(605);
      variable();
      break;
    }

    case 6: {
      setState(606);
      match(DaricParser::MINUS);
      setState(607);
      expression(52);
      break;
    }

    case 7: {
      setState(608);
      match(DaricParser::PLUS);
      setState(609);
      expression(51);
      break;
    }

    case 8: {
      setState(610);
      match(DaricParser::INT);
      setState(611);
      expression(50);
      break;
    }

    case 9: {
      setState(612);
      match(DaricParser::FLOAT);
      setState(613);
      expression(49);
      break;
    }

    case 10: {
      setState(614);
      match(DaricParser::STRING);
      setState(616);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(615);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(618);
      expression(0);
      setState(621);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(619);
        match(DaricParser::WITH);
        setState(620);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(624);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(623);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(626);
      match(DaricParser::ABS);
      setState(627);
      expression(47);
      break;
    }

    case 12: {
      setState(628);
      match(DaricParser::COMP);
      setState(629);
      expression(46);
      break;
    }

    case 13: {
      setState(630);
      match(DaricParser::NOT);
      setState(631);
      expression(45);
      break;
    }

    case 14: {
      setState(632);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(633);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(634);
      match(DaricParser::PI);
      break;
    }

    case 17: {
      setState(635);
      match(DaricParser::DEG);
      setState(636);
      expression(41);
      break;
    }

    case 18: {
      setState(637);
      match(DaricParser::RAD);
      setState(638);
      expression(40);
      break;
    }

    case 19: {
      setState(639);
      match(DaricParser::SGN);
      setState(640);
      expression(39);
      break;
    }

    case 20: {
      setState(641);
      match(DaricParser::ACS);
      setState(642);
      expression(38);
      break;
    }

    case 21: {
      setState(643);
      match(DaricParser::ASN);
      setState(644);
      expression(37);
      break;
    }

    case 22: {
      setState(645);
      match(DaricParser::ATN);
      setState(646);
      expression(36);
      break;
    }

    case 23: {
      setState(647);
      match(DaricParser::COS);
      setState(648);
      expression(35);
      break;
    }

    case 24: {
      setState(649);
      match(DaricParser::EXP);
      setState(650);
      expression(34);
      break;
    }

    case 25: {
      setState(651);
      match(DaricParser::FLOOR);
      setState(652);
      expression(33);
      break;
    }

    case 26: {
      setState(653);
      match(DaricParser::ROUND);
      setState(654);
      expression(32);
      break;
    }

    case 27: {
      setState(655);
      match(DaricParser::LN);
      setState(656);
      expression(31);
      break;
    }

    case 28: {
      setState(657);
      match(DaricParser::LOG);
      setState(658);
      expression(30);
      break;
    }

    case 29: {
      setState(659);
      match(DaricParser::SIN);
      setState(660);
      expression(29);
      break;
    }

    case 30: {
      setState(661);
      match(DaricParser::SQR);
      setState(662);
      expression(28);
      break;
    }

    case 31: {
      setState(663);
      match(DaricParser::TAN);
      setState(664);
      expression(27);
      break;
    }

    case 32: {
      setState(665);
      match(DaricParser::ASC);
      setState(666);
      expression(26);
      break;
    }

    case 33: {
      setState(667);
      match(DaricParser::CHR);
      setState(668);
      expression(25);
      break;
    }

    case 34: {
      setState(669);
      match(DaricParser::INSTR);
      setState(671);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(670);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(673);
      expression(0);
      setState(674);
      match(DaricParser::COMMA);
      setState(675);
      expression(0);
      setState(676);
      match(DaricParser::COMMA);
      setState(677);
      expression(0);
      setState(679);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(678);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      setState(681);
      match(DaricParser::LEFT);
      setState(683);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(682);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(685);
      expression(0);
      setState(686);
      match(DaricParser::COMMA);
      setState(687);
      expression(0);
      setState(689);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(688);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 36: {
      setState(691);
      match(DaricParser::MID);
      setState(693);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(692);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(695);
      expression(0);
      setState(696);
      match(DaricParser::COMMA);
      setState(697);
      expression(0);
      setState(698);
      match(DaricParser::COMMA);
      setState(699);
      expression(0);
      setState(701);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(700);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(703);
      match(DaricParser::RIGHT);
      setState(705);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(704);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(707);
      expression(0);
      setState(708);
      match(DaricParser::COMMA);
      setState(709);
      expression(0);
      setState(711);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(710);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(713);
      match(DaricParser::LEN);
      setState(714);
      expression(20);
      break;
    }

    case 39: {
      setState(715);
      match(DaricParser::SIZE);
      setState(717);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(716);
        match(DaricParser::LPAREN);
      }
      setState(719);
      variable();
      setState(721);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(720);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(781);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(779);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(725);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(726);
          match(DaricParser::HAT);
          setState(727);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(728);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(729);
          match(DaricParser::DIVIDE);
          setState(730);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(731);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(732);
          match(DaricParser::MULTIPLY);
          setState(733);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(734);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(735);
          match(DaricParser::DIV);
          setState(736);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(737);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(738);
          match(DaricParser::MOD);
          setState(739);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(740);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(741);
          match(DaricParser::PLUS);
          setState(742);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(743);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(744);
          match(DaricParser::MINUS);
          setState(745);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(746);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(747);
          match(DaricParser::SHL);
          setState(748);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(749);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(750);
          match(DaricParser::SHR);
          setState(751);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(752);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(753);
          match(DaricParser::EQ);
          setState(754);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(755);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(756);
          match(DaricParser::NE);
          setState(757);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(758);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(759);
          match(DaricParser::GT);
          setState(760);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(761);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(762);
          match(DaricParser::GE);
          setState(763);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(764);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(765);
          match(DaricParser::LT);
          setState(766);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(767);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(768);
          match(DaricParser::LE);
          setState(769);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(770);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(771);
          match(DaricParser::AND);
          setState(772);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(773);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(774);
          match(DaricParser::OR);
          setState(775);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(776);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(777);
          match(DaricParser::EOR);
          setState(778);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(783);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

DaricParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::TypeContext::BYTE() {
  return getToken(DaricParser::BYTE, 0);
}

tree::TerminalNode* DaricParser::TypeContext::FLOAT() {
  return getToken(DaricParser::FLOAT, 0);
}

tree::TerminalNode* DaricParser::TypeContext::INT() {
  return getToken(DaricParser::INT, 0);
}

tree::TerminalNode* DaricParser::TypeContext::STRING() {
  return getToken(DaricParser::STRING, 0);
}


size_t DaricParser::TypeContext::getRuleIndex() const {
  return DaricParser::RuleType;
}


std::any DaricParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::TypeContext* DaricParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 78, DaricParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    _la = _input->LA(1);
    if (!((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & 15) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeOrStructContext ------------------------------------------------------------------

DaricParser::TypeOrStructContext::TypeOrStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::TypeOrStructContext::BYTE() {
  return getToken(DaricParser::BYTE, 0);
}

tree::TerminalNode* DaricParser::TypeOrStructContext::FLOAT() {
  return getToken(DaricParser::FLOAT, 0);
}

tree::TerminalNode* DaricParser::TypeOrStructContext::INT() {
  return getToken(DaricParser::INT, 0);
}

tree::TerminalNode* DaricParser::TypeOrStructContext::STRING() {
  return getToken(DaricParser::STRING, 0);
}

tree::TerminalNode* DaricParser::TypeOrStructContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}


size_t DaricParser::TypeOrStructContext::getRuleIndex() const {
  return DaricParser::RuleTypeOrStruct;
}


std::any DaricParser::TypeOrStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitTypeOrStruct(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::TypeOrStructContext* DaricParser::typeOrStruct() {
  TypeOrStructContext *_localctx = _tracker.createInstance<TypeOrStructContext>(_ctx, getState());
  enterRule(_localctx, 80, DaricParser::RuleTypeOrStruct);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(786);
    _la = _input->LA(1);
    if (!((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & 8796093022223) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

DaricParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DaricParser::FloatLiteralContext* DaricParser::LiteralContext::floatLiteral() {
  return getRuleContext<DaricParser::FloatLiteralContext>(0);
}

DaricParser::IntegerLiteralContext* DaricParser::LiteralContext::integerLiteral() {
  return getRuleContext<DaricParser::IntegerLiteralContext>(0);
}

DaricParser::StringLiteralContext* DaricParser::LiteralContext::stringLiteral() {
  return getRuleContext<DaricParser::StringLiteralContext>(0);
}


size_t DaricParser::LiteralContext::getRuleIndex() const {
  return DaricParser::RuleLiteral;
}


std::any DaricParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::LiteralContext* DaricParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 82, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(791);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(788);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(789);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(790);
      stringLiteral();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

DaricParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::FloatLiteralContext::FLOATLITERAL() {
  return getToken(DaricParser::FLOATLITERAL, 0);
}

tree::TerminalNode* DaricParser::FloatLiteralContext::PLUS() {
  return getToken(DaricParser::PLUS, 0);
}

tree::TerminalNode* DaricParser::FloatLiteralContext::MINUS() {
  return getToken(DaricParser::MINUS, 0);
}


size_t DaricParser::FloatLiteralContext::getRuleIndex() const {
  return DaricParser::RuleFloatLiteral;
}


std::any DaricParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::FloatLiteralContext* DaricParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 84, DaricParser::RuleFloatLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(794);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(793);
      _la = _input->LA(1);
      if (!(_la == DaricParser::PLUS

      || _la == DaricParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(796);
    match(DaricParser::FLOATLITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

DaricParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::IntegerLiteralContext::HEXNUMBER() {
  return getToken(DaricParser::HEXNUMBER, 0);
}

tree::TerminalNode* DaricParser::IntegerLiteralContext::BINARYNUMBER() {
  return getToken(DaricParser::BINARYNUMBER, 0);
}

tree::TerminalNode* DaricParser::IntegerLiteralContext::INTEGERLITERAL() {
  return getToken(DaricParser::INTEGERLITERAL, 0);
}

tree::TerminalNode* DaricParser::IntegerLiteralContext::PLUS() {
  return getToken(DaricParser::PLUS, 0);
}

tree::TerminalNode* DaricParser::IntegerLiteralContext::MINUS() {
  return getToken(DaricParser::MINUS, 0);
}


size_t DaricParser::IntegerLiteralContext::getRuleIndex() const {
  return DaricParser::RuleIntegerLiteral;
}


std::any DaricParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::IntegerLiteralContext* DaricParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 86, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(804);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(798);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(799);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(801);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(800);
          _la = _input->LA(1);
          if (!(_la == DaricParser::PLUS

          || _la == DaricParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(803);
        match(DaricParser::INTEGERLITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

DaricParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::StringLiteralContext::STRINGLITERAL() {
  return getToken(DaricParser::STRINGLITERAL, 0);
}


size_t DaricParser::StringLiteralContext::getRuleIndex() const {
  return DaricParser::RuleStringLiteral;
}


std::any DaricParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::StringLiteralContext* DaricParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 88, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    match(DaricParser::STRINGLITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool DaricParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 38: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DaricParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 17);
    case 2: return precpred(_ctx, 16);
    case 3: return precpred(_ctx, 15);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 13);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 6);
    case 13: return precpred(_ctx, 5);
    case 14: return precpred(_ctx, 4);
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void DaricParser::initialize() {
  ::antlr4::internal::call_once(daricParserOnceFlag, daricParserInitialize);
}

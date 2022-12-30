
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
      "get", "set", "push", "cassign", "variable", "expression", "type", 
      "typeOrStruct", "literal", "floatLiteral", "integerLiteral", "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "'$'", "'#'", "':'", "';'", "'.'", "','", "'''", "", "'%'", "'_'", 
      "'('", "')'", "'['", "']'", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
      "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "ASSIGN", "AT", "CASE", "CONST", 
      "CLEAR", "DATA", "DATALABEL", "DEF", "DIM", "ELSE", "END", "FOR", 
      "FROM", "FETCH", "IF", "IMPORT", "INPUT", "INTO", "LET", "NEXT", "OF", 
      "OPTION", "OTHERWISE", "PRINT", "PLACE", "POP", "PUSH", "QUIT", "READ", 
      "RECORD", "REF", "REM", "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", 
      "STEP", "SYS", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", 
      "ABS", "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", 
      "PI", "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", "VECTOR", "LIST", 
      "MAP", "STACK", "QUEUE", "SET", "FALSE", "TRUE", "ASC", "CHR", "INSTR", 
      "LEFT", "MID", "RIGHT", "LEN", "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", 
      "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", 
      "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", 
      "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", 
      "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", 
      "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
      "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,125,825,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,1,0,1,0,1,1,4,1,99,8,1,
  	11,1,12,1,100,1,1,5,1,104,8,1,10,1,12,1,107,9,1,1,1,1,1,1,1,3,1,112,8,
  	1,5,1,114,8,1,10,1,12,1,117,9,1,3,1,119,8,1,1,2,5,2,122,8,2,10,2,12,2,
  	125,9,2,1,2,1,2,3,2,129,8,2,4,2,131,8,2,11,2,12,2,132,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,166,8,3,1,4,4,4,169,8,4,11,
  	4,12,4,170,1,5,3,5,174,8,5,1,5,1,5,1,5,3,5,179,8,5,1,5,1,5,1,5,1,6,1,
  	6,3,6,186,8,6,1,6,3,6,189,8,6,1,6,1,6,5,6,193,8,6,10,6,12,6,196,9,6,1,
  	6,3,6,199,8,6,1,7,1,7,1,7,1,7,3,7,205,8,7,1,7,5,7,208,8,7,10,7,12,7,211,
  	9,7,1,7,1,7,3,7,215,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,
  	8,228,8,8,10,8,12,8,231,9,8,1,8,1,8,3,8,235,8,8,1,9,1,9,1,9,1,9,5,9,241,
  	8,9,10,9,12,9,244,9,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,
  	11,255,8,11,1,11,1,11,5,11,259,8,11,10,11,12,11,262,9,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,3,11,297,8,11,1,12,1,12,1,12,3,12,302,8,12,1,12,1,12,5,12,
  	306,8,12,10,12,12,12,309,9,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,
  	3,14,319,8,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,327,8,14,1,14,1,14,1,
  	14,1,15,1,15,1,15,1,16,1,16,1,16,3,16,338,8,16,1,16,1,16,1,16,3,16,343,
  	8,16,1,17,1,17,1,17,3,17,348,8,17,1,17,1,17,1,17,1,17,1,17,3,17,355,8,
  	17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,368,8,
  	19,1,20,3,20,371,8,20,1,20,1,20,1,20,1,20,3,20,377,8,20,3,20,379,8,20,
  	1,21,1,21,3,21,383,8,21,1,21,1,21,3,21,387,8,21,1,21,3,21,390,8,21,1,
  	21,3,21,393,8,21,3,21,395,8,21,1,22,1,22,1,22,1,22,3,22,401,8,22,1,22,
  	3,22,404,8,22,1,22,5,22,407,8,22,10,22,12,22,410,9,22,1,22,3,22,413,8,
  	22,1,22,1,22,5,22,417,8,22,10,22,12,22,420,9,22,1,22,5,22,423,8,22,10,
  	22,12,22,426,9,22,1,22,3,22,429,8,22,1,22,5,22,432,8,22,10,22,12,22,435,
  	9,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,
  	5,24,450,8,24,10,24,12,24,453,9,24,1,25,1,25,1,25,1,26,1,26,3,26,460,
  	8,26,1,27,1,27,1,27,5,27,465,8,27,10,27,12,27,468,9,27,1,27,1,27,1,27,
  	1,27,4,27,474,8,27,11,27,12,27,475,1,27,1,27,1,27,5,27,481,8,27,10,27,
  	12,27,484,9,27,1,27,5,27,487,8,27,10,27,12,27,490,9,27,1,27,1,27,1,27,
  	1,28,1,28,1,28,1,28,1,28,1,28,3,28,501,8,28,1,28,1,28,5,28,505,8,28,10,
  	28,12,28,508,9,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,
  	29,520,8,29,1,29,1,29,1,29,1,29,5,29,526,8,29,10,29,12,29,529,9,29,1,
  	29,3,29,532,8,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,543,
  	8,31,10,31,12,31,546,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,33,
  	1,33,1,33,1,33,1,33,1,33,3,33,562,8,33,1,34,1,34,1,34,1,34,1,34,1,35,
  	1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,
  	1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,39,1,39,1,39,3,39,595,8,39,
  	1,39,1,39,5,39,599,8,39,10,39,12,39,602,9,39,1,39,3,39,605,8,39,1,39,
  	1,39,5,39,609,8,39,10,39,12,39,612,9,39,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,3,40,
  	633,8,40,1,40,1,40,1,40,3,40,638,8,40,1,40,3,40,641,8,40,1,40,1,40,1,
  	40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,
  	40,3,40,688,8,40,1,40,1,40,1,40,1,40,1,40,1,40,3,40,696,8,40,1,40,1,40,
  	3,40,700,8,40,1,40,1,40,1,40,1,40,3,40,706,8,40,1,40,1,40,3,40,710,8,
  	40,1,40,1,40,1,40,1,40,1,40,1,40,3,40,718,8,40,1,40,1,40,3,40,722,8,40,
  	1,40,1,40,1,40,1,40,3,40,728,8,40,1,40,1,40,1,40,1,40,3,40,734,8,40,1,
  	40,1,40,3,40,738,8,40,3,40,740,8,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,1,40,
  	1,40,1,40,1,40,1,40,1,40,5,40,796,8,40,10,40,12,40,799,9,40,1,41,1,41,
  	1,42,1,42,1,43,1,43,1,43,3,43,808,8,43,1,44,3,44,811,8,44,1,44,1,44,1,
  	45,1,45,1,45,3,45,818,8,45,1,45,3,45,821,8,45,1,46,1,46,1,46,0,1,80,47,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,
  	50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,0,5,
  	1,1,87,87,2,0,87,87,92,92,1,0,81,84,2,0,81,84,124,124,1,0,106,107,954,
  	0,94,1,0,0,0,2,118,1,0,0,0,4,130,1,0,0,0,6,165,1,0,0,0,8,168,1,0,0,0,
  	10,173,1,0,0,0,12,183,1,0,0,0,14,200,1,0,0,0,16,219,1,0,0,0,18,236,1,
  	0,0,0,20,245,1,0,0,0,22,248,1,0,0,0,24,298,1,0,0,0,26,312,1,0,0,0,28,
  	314,1,0,0,0,30,331,1,0,0,0,32,334,1,0,0,0,34,344,1,0,0,0,36,360,1,0,0,
  	0,38,363,1,0,0,0,40,370,1,0,0,0,42,380,1,0,0,0,44,396,1,0,0,0,46,440,
  	1,0,0,0,48,445,1,0,0,0,50,454,1,0,0,0,52,457,1,0,0,0,54,461,1,0,0,0,56,
  	494,1,0,0,0,58,511,1,0,0,0,60,533,1,0,0,0,62,538,1,0,0,0,64,549,1,0,0,
  	0,66,555,1,0,0,0,68,563,1,0,0,0,70,568,1,0,0,0,72,573,1,0,0,0,74,578,
  	1,0,0,0,76,583,1,0,0,0,78,591,1,0,0,0,80,739,1,0,0,0,82,800,1,0,0,0,84,
  	802,1,0,0,0,86,807,1,0,0,0,88,810,1,0,0,0,90,820,1,0,0,0,92,822,1,0,0,
  	0,94,95,3,2,1,0,95,96,5,0,0,1,96,1,1,0,0,0,97,99,3,8,4,0,98,97,1,0,0,
  	0,99,100,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,119,1,0,0,0,102,104,
  	3,8,4,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,
  	0,106,108,1,0,0,0,107,105,1,0,0,0,108,111,3,6,3,0,109,112,3,8,4,0,110,
  	112,5,0,0,1,111,109,1,0,0,0,111,110,1,0,0,0,111,112,1,0,0,0,112,114,1,
  	0,0,0,113,105,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,1,0,0,0,
  	116,119,1,0,0,0,117,115,1,0,0,0,118,98,1,0,0,0,118,115,1,0,0,0,119,3,
  	1,0,0,0,120,122,5,87,0,0,121,120,1,0,0,0,122,125,1,0,0,0,123,121,1,0,
  	0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,128,3,6,3,0,127,
  	129,7,0,0,0,128,127,1,0,0,0,128,129,1,0,0,0,129,131,1,0,0,0,130,123,1,
  	0,0,0,131,132,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,5,1,0,0,0,134,
  	166,3,10,5,0,135,166,3,12,6,0,136,166,3,14,7,0,137,166,3,76,38,0,138,
  	166,3,66,33,0,139,166,3,16,8,0,140,166,3,18,9,0,141,166,3,20,10,0,142,
  	166,3,22,11,0,143,166,3,26,13,0,144,166,3,28,14,0,145,166,3,70,35,0,146,
  	166,3,32,16,0,147,166,3,34,17,0,148,166,3,36,18,0,149,166,3,30,15,0,150,
  	166,3,38,19,0,151,166,3,44,22,0,152,166,3,42,21,0,153,166,3,74,37,0,154,
  	166,3,68,34,0,155,166,3,48,24,0,156,166,3,46,23,0,157,166,3,50,25,0,158,
  	166,3,52,26,0,159,166,3,72,36,0,160,166,3,54,27,0,161,166,3,56,28,0,162,
  	166,3,58,29,0,163,166,3,60,30,0,164,166,3,64,32,0,165,134,1,0,0,0,165,
  	135,1,0,0,0,165,136,1,0,0,0,165,137,1,0,0,0,165,138,1,0,0,0,165,139,1,
  	0,0,0,165,140,1,0,0,0,165,141,1,0,0,0,165,142,1,0,0,0,165,143,1,0,0,0,
  	165,144,1,0,0,0,165,145,1,0,0,0,165,146,1,0,0,0,165,147,1,0,0,0,165,148,
  	1,0,0,0,165,149,1,0,0,0,165,150,1,0,0,0,165,151,1,0,0,0,165,152,1,0,0,
  	0,165,153,1,0,0,0,165,154,1,0,0,0,165,155,1,0,0,0,165,156,1,0,0,0,165,
  	157,1,0,0,0,165,158,1,0,0,0,165,159,1,0,0,0,165,160,1,0,0,0,165,161,1,
  	0,0,0,165,162,1,0,0,0,165,163,1,0,0,0,165,164,1,0,0,0,166,7,1,0,0,0,167,
  	169,7,1,0,0,168,167,1,0,0,0,169,170,1,0,0,0,170,168,1,0,0,0,170,171,1,
  	0,0,0,171,9,1,0,0,0,172,174,5,21,0,0,173,172,1,0,0,0,173,174,1,0,0,0,
  	174,175,1,0,0,0,175,178,3,78,39,0,176,177,5,87,0,0,177,179,3,82,41,0,
  	178,176,1,0,0,0,178,179,1,0,0,0,179,180,1,0,0,0,180,181,5,99,0,0,181,
  	182,3,80,40,0,182,11,1,0,0,0,183,185,5,124,0,0,184,186,5,95,0,0,185,184,
  	1,0,0,0,185,186,1,0,0,0,186,188,1,0,0,0,187,189,3,80,40,0,188,187,1,0,
  	0,0,188,189,1,0,0,0,189,194,1,0,0,0,190,191,5,90,0,0,191,193,3,80,40,
  	0,192,190,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,
  	198,1,0,0,0,196,194,1,0,0,0,197,199,5,96,0,0,198,197,1,0,0,0,198,199,
  	1,0,0,0,199,13,1,0,0,0,200,201,5,5,0,0,201,202,3,80,40,0,202,204,5,23,
  	0,0,203,205,3,8,4,0,204,203,1,0,0,0,204,205,1,0,0,0,205,209,1,0,0,0,206,
  	208,3,62,31,0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,
  	1,0,0,0,210,214,1,0,0,0,211,209,1,0,0,0,212,213,5,25,0,0,213,215,3,2,
  	1,0,214,212,1,0,0,0,214,215,1,0,0,0,215,216,1,0,0,0,216,217,5,13,0,0,
  	217,218,5,5,0,0,218,15,1,0,0,0,219,220,5,6,0,0,220,221,5,124,0,0,221,
  	222,5,99,0,0,222,229,3,86,43,0,223,224,5,90,0,0,224,225,5,124,0,0,225,
  	226,5,99,0,0,226,228,3,86,43,0,227,223,1,0,0,0,228,231,1,0,0,0,229,227,
  	1,0,0,0,229,230,1,0,0,0,230,234,1,0,0,0,231,229,1,0,0,0,232,233,5,87,
  	0,0,233,235,3,82,41,0,234,232,1,0,0,0,234,235,1,0,0,0,235,17,1,0,0,0,
  	236,237,5,8,0,0,237,242,3,90,45,0,238,239,5,90,0,0,239,241,3,90,45,0,
  	240,238,1,0,0,0,241,244,1,0,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,19,
  	1,0,0,0,244,242,1,0,0,0,245,246,5,9,0,0,246,247,3,92,46,0,247,21,1,0,
  	0,0,248,249,5,11,0,0,249,250,5,124,0,0,250,296,5,87,0,0,251,252,3,82,
  	41,0,252,254,5,97,0,0,253,255,3,80,40,0,254,253,1,0,0,0,254,255,1,0,0,
  	0,255,260,1,0,0,0,256,257,5,90,0,0,257,259,3,80,40,0,258,256,1,0,0,0,
  	259,262,1,0,0,0,260,258,1,0,0,0,260,261,1,0,0,0,261,263,1,0,0,0,262,260,
  	1,0,0,0,263,264,5,98,0,0,264,297,1,0,0,0,265,266,5,66,0,0,266,267,5,97,
  	0,0,267,268,3,84,42,0,268,269,5,98,0,0,269,297,1,0,0,0,270,271,5,67,0,
  	0,271,272,5,97,0,0,272,273,3,84,42,0,273,274,5,98,0,0,274,297,1,0,0,0,
  	275,276,5,71,0,0,276,277,5,97,0,0,277,278,7,2,0,0,278,297,5,98,0,0,279,
  	280,5,68,0,0,280,281,5,97,0,0,281,282,7,2,0,0,282,283,5,90,0,0,283,284,
  	3,84,42,0,284,285,5,98,0,0,285,297,1,0,0,0,286,287,5,69,0,0,287,288,5,
  	97,0,0,288,289,3,84,42,0,289,290,5,98,0,0,290,297,1,0,0,0,291,292,5,70,
  	0,0,292,293,5,97,0,0,293,294,3,84,42,0,294,295,5,98,0,0,295,297,1,0,0,
  	0,296,251,1,0,0,0,296,265,1,0,0,0,296,270,1,0,0,0,296,275,1,0,0,0,296,
  	279,1,0,0,0,296,286,1,0,0,0,296,291,1,0,0,0,297,23,1,0,0,0,298,299,5,
  	124,0,0,299,301,5,95,0,0,300,302,3,80,40,0,301,300,1,0,0,0,301,302,1,
  	0,0,0,302,307,1,0,0,0,303,304,5,90,0,0,304,306,3,80,40,0,305,303,1,0,
  	0,0,306,309,1,0,0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,310,1,0,0,0,309,
  	307,1,0,0,0,310,311,5,96,0,0,311,25,1,0,0,0,312,313,5,30,0,0,313,27,1,
  	0,0,0,314,315,5,14,0,0,315,318,5,124,0,0,316,317,5,87,0,0,317,319,3,82,
  	41,0,318,316,1,0,0,0,318,319,1,0,0,0,319,320,1,0,0,0,320,321,5,99,0,0,
  	321,322,3,80,40,0,322,323,5,43,0,0,323,326,3,80,40,0,324,325,5,40,0,0,
  	325,327,3,80,40,0,326,324,1,0,0,0,326,327,1,0,0,0,327,328,1,0,0,0,328,
  	329,3,2,1,0,329,330,5,22,0,0,330,29,1,0,0,0,331,332,5,18,0,0,332,333,
  	3,92,46,0,333,31,1,0,0,0,334,335,5,17,0,0,335,337,3,80,40,0,336,338,5,
  	38,0,0,337,336,1,0,0,0,337,338,1,0,0,0,338,339,1,0,0,0,339,342,3,4,2,
  	0,340,341,5,12,0,0,341,343,3,4,2,0,342,340,1,0,0,0,342,343,1,0,0,0,343,
  	33,1,0,0,0,344,345,5,17,0,0,345,347,3,80,40,0,346,348,5,38,0,0,347,346,
  	1,0,0,0,347,348,1,0,0,0,348,349,1,0,0,0,349,350,5,92,0,0,350,354,3,2,
  	1,0,351,352,5,12,0,0,352,353,5,92,0,0,353,355,3,2,1,0,354,351,1,0,0,0,
  	354,355,1,0,0,0,355,356,1,0,0,0,356,357,5,92,0,0,357,358,5,13,0,0,358,
  	359,5,17,0,0,359,35,1,0,0,0,360,361,5,19,0,0,361,362,3,78,39,0,362,37,
  	1,0,0,0,363,364,5,24,0,0,364,367,5,124,0,0,365,368,5,124,0,0,366,368,
  	3,90,45,0,367,365,1,0,0,0,367,366,1,0,0,0,368,39,1,0,0,0,369,371,5,33,
  	0,0,370,369,1,0,0,0,370,371,1,0,0,0,371,372,1,0,0,0,372,378,5,124,0,0,
  	373,376,5,87,0,0,374,377,3,82,41,0,375,377,5,124,0,0,376,374,1,0,0,0,
  	376,375,1,0,0,0,377,379,1,0,0,0,378,373,1,0,0,0,378,379,1,0,0,0,379,41,
  	1,0,0,0,380,382,5,26,0,0,381,383,5,41,0,0,382,381,1,0,0,0,382,383,1,0,
  	0,0,383,394,1,0,0,0,384,389,3,80,40,0,385,387,5,46,0,0,386,385,1,0,0,
  	0,386,387,1,0,0,0,387,388,1,0,0,0,388,390,3,80,40,0,389,386,1,0,0,0,389,
  	390,1,0,0,0,390,392,1,0,0,0,391,393,5,88,0,0,392,391,1,0,0,0,392,393,
  	1,0,0,0,393,395,1,0,0,0,394,384,1,0,0,0,394,395,1,0,0,0,395,43,1,0,0,
  	0,396,397,5,10,0,0,397,400,5,124,0,0,398,399,5,87,0,0,399,401,3,82,41,
  	0,400,398,1,0,0,0,400,401,1,0,0,0,401,403,1,0,0,0,402,404,5,95,0,0,403,
  	402,1,0,0,0,403,404,1,0,0,0,404,408,1,0,0,0,405,407,5,92,0,0,406,405,
  	1,0,0,0,407,410,1,0,0,0,408,406,1,0,0,0,408,409,1,0,0,0,409,412,1,0,0,
  	0,410,408,1,0,0,0,411,413,3,40,20,0,412,411,1,0,0,0,412,413,1,0,0,0,413,
  	424,1,0,0,0,414,418,5,90,0,0,415,417,5,92,0,0,416,415,1,0,0,0,417,420,
  	1,0,0,0,418,416,1,0,0,0,418,419,1,0,0,0,419,421,1,0,0,0,420,418,1,0,0,
  	0,421,423,3,40,20,0,422,414,1,0,0,0,423,426,1,0,0,0,424,422,1,0,0,0,424,
  	425,1,0,0,0,425,428,1,0,0,0,426,424,1,0,0,0,427,429,5,96,0,0,428,427,
  	1,0,0,0,428,429,1,0,0,0,429,433,1,0,0,0,430,432,3,8,4,0,431,430,1,0,0,
  	0,432,435,1,0,0,0,433,431,1,0,0,0,433,434,1,0,0,0,434,436,1,0,0,0,435,
  	433,1,0,0,0,436,437,3,2,1,0,437,438,5,13,0,0,438,439,5,10,0,0,439,45,
  	1,0,0,0,440,441,5,35,0,0,441,442,3,2,1,0,442,443,5,44,0,0,443,444,3,80,
  	40,0,444,47,1,0,0,0,445,446,5,31,0,0,446,451,3,78,39,0,447,448,5,90,0,
  	0,448,450,3,78,39,0,449,447,1,0,0,0,450,453,1,0,0,0,451,449,1,0,0,0,451,
  	452,1,0,0,0,452,49,1,0,0,0,453,451,1,0,0,0,454,455,5,36,0,0,455,456,3,
  	92,46,0,456,51,1,0,0,0,457,459,5,37,0,0,458,460,3,80,40,0,459,458,1,0,
  	0,0,459,460,1,0,0,0,460,53,1,0,0,0,461,462,5,32,0,0,462,466,5,124,0,0,
  	463,465,5,92,0,0,464,463,1,0,0,0,465,468,1,0,0,0,466,464,1,0,0,0,466,
  	467,1,0,0,0,467,469,1,0,0,0,468,466,1,0,0,0,469,470,5,124,0,0,470,471,
  	5,87,0,0,471,482,3,84,42,0,472,474,5,92,0,0,473,472,1,0,0,0,474,475,1,
  	0,0,0,475,473,1,0,0,0,475,476,1,0,0,0,476,477,1,0,0,0,477,478,5,124,0,
  	0,478,479,5,87,0,0,479,481,3,84,42,0,480,473,1,0,0,0,481,484,1,0,0,0,
  	482,480,1,0,0,0,482,483,1,0,0,0,483,488,1,0,0,0,484,482,1,0,0,0,485,487,
  	5,92,0,0,486,485,1,0,0,0,487,490,1,0,0,0,488,486,1,0,0,0,488,489,1,0,
  	0,0,489,491,1,0,0,0,490,488,1,0,0,0,491,492,5,13,0,0,492,493,5,32,0,0,
  	493,55,1,0,0,0,494,495,5,11,0,0,495,496,5,124,0,0,496,497,5,87,0,0,497,
  	498,5,124,0,0,498,500,5,97,0,0,499,501,3,80,40,0,500,499,1,0,0,0,500,
  	501,1,0,0,0,501,506,1,0,0,0,502,503,5,90,0,0,503,505,3,80,40,0,504,502,
  	1,0,0,0,505,508,1,0,0,0,506,504,1,0,0,0,506,507,1,0,0,0,507,509,1,0,0,
  	0,508,506,1,0,0,0,509,510,5,98,0,0,510,57,1,0,0,0,511,512,5,11,0,0,512,
  	513,5,124,0,0,513,514,5,87,0,0,514,531,5,124,0,0,515,519,5,95,0,0,516,
  	517,5,124,0,0,517,518,5,99,0,0,518,520,3,80,40,0,519,516,1,0,0,0,519,
  	520,1,0,0,0,520,527,1,0,0,0,521,522,5,90,0,0,522,523,5,124,0,0,523,524,
  	5,99,0,0,524,526,3,80,40,0,525,521,1,0,0,0,526,529,1,0,0,0,527,525,1,
  	0,0,0,527,528,1,0,0,0,528,530,1,0,0,0,529,527,1,0,0,0,530,532,5,96,0,
  	0,531,515,1,0,0,0,531,532,1,0,0,0,532,59,1,0,0,0,533,534,5,42,0,0,534,
  	535,3,78,39,0,535,536,5,90,0,0,536,537,3,78,39,0,537,61,1,0,0,0,538,539,
  	5,45,0,0,539,544,3,80,40,0,540,541,5,90,0,0,541,543,3,80,40,0,542,540,
  	1,0,0,0,543,546,1,0,0,0,544,542,1,0,0,0,544,545,1,0,0,0,545,547,1,0,0,
  	0,546,544,1,0,0,0,547,548,3,2,1,0,548,63,1,0,0,0,549,550,5,47,0,0,550,
  	551,3,80,40,0,551,552,3,2,1,0,552,553,5,13,0,0,553,554,5,47,0,0,554,65,
  	1,0,0,0,555,556,5,7,0,0,556,561,5,124,0,0,557,558,5,97,0,0,558,559,3,
  	80,40,0,559,560,5,98,0,0,560,562,1,0,0,0,561,557,1,0,0,0,561,562,1,0,
  	0,0,562,67,1,0,0,0,563,564,5,28,0,0,564,565,3,78,39,0,565,566,5,15,0,
  	0,566,567,3,78,39,0,567,69,1,0,0,0,568,569,5,16,0,0,569,570,3,78,39,0,
  	570,571,5,15,0,0,571,572,3,78,39,0,572,71,1,0,0,0,573,574,5,27,0,0,574,
  	575,3,78,39,0,575,576,5,4,0,0,576,577,3,78,39,0,577,73,1,0,0,0,578,579,
  	5,29,0,0,579,580,3,78,39,0,580,581,5,20,0,0,581,582,3,78,39,0,582,75,
  	1,0,0,0,583,584,5,3,0,0,584,585,3,80,40,0,585,586,5,43,0,0,586,587,3,
  	78,39,0,587,588,5,97,0,0,588,589,3,80,40,0,589,590,5,98,0,0,590,77,1,
  	0,0,0,591,604,5,124,0,0,592,594,5,97,0,0,593,595,3,80,40,0,594,593,1,
  	0,0,0,594,595,1,0,0,0,595,600,1,0,0,0,596,597,5,90,0,0,597,599,3,80,40,
  	0,598,596,1,0,0,0,599,602,1,0,0,0,600,598,1,0,0,0,600,601,1,0,0,0,601,
  	603,1,0,0,0,602,600,1,0,0,0,603,605,5,98,0,0,604,592,1,0,0,0,604,605,
  	1,0,0,0,605,610,1,0,0,0,606,607,5,89,0,0,607,609,5,124,0,0,608,606,1,
  	0,0,0,609,612,1,0,0,0,610,608,1,0,0,0,610,611,1,0,0,0,611,79,1,0,0,0,
  	612,610,1,0,0,0,613,614,6,40,-1,0,614,615,5,95,0,0,615,616,3,80,40,0,
  	616,617,5,96,0,0,617,740,1,0,0,0,618,740,5,48,0,0,619,740,3,86,43,0,620,
  	740,3,24,12,0,621,740,3,78,39,0,622,623,5,107,0,0,623,740,3,80,40,52,
  	624,625,5,106,0,0,625,740,3,80,40,51,626,627,5,82,0,0,627,740,3,80,40,
  	50,628,629,5,83,0,0,629,740,3,80,40,49,630,632,5,84,0,0,631,633,5,95,
  	0,0,632,631,1,0,0,0,632,633,1,0,0,0,633,634,1,0,0,0,634,637,3,80,40,0,
  	635,636,5,46,0,0,636,638,3,80,40,0,637,635,1,0,0,0,637,638,1,0,0,0,638,
  	640,1,0,0,0,639,641,5,96,0,0,640,639,1,0,0,0,640,641,1,0,0,0,641,740,
  	1,0,0,0,642,643,5,49,0,0,643,740,3,80,40,47,644,645,5,114,0,0,645,740,
  	3,80,40,46,646,647,5,115,0,0,647,740,3,80,40,45,648,740,5,73,0,0,649,
  	740,5,72,0,0,650,740,5,59,0,0,651,652,5,54,0,0,652,740,3,80,40,41,653,
  	654,5,60,0,0,654,740,3,80,40,40,655,656,5,62,0,0,656,740,3,80,40,39,657,
  	658,5,50,0,0,658,740,3,80,40,38,659,660,5,51,0,0,660,740,3,80,40,37,661,
  	662,5,52,0,0,662,740,3,80,40,36,663,664,5,53,0,0,664,740,3,80,40,35,665,
  	666,5,55,0,0,666,740,3,80,40,34,667,668,5,56,0,0,668,740,3,80,40,33,669,
  	670,5,61,0,0,670,740,3,80,40,32,671,672,5,57,0,0,672,740,3,80,40,31,673,
  	674,5,58,0,0,674,740,3,80,40,30,675,676,5,63,0,0,676,740,3,80,40,29,677,
  	678,5,64,0,0,678,740,3,80,40,28,679,680,5,65,0,0,680,740,3,80,40,27,681,
  	682,5,74,0,0,682,740,3,80,40,26,683,684,5,75,0,0,684,740,3,80,40,25,685,
  	687,5,76,0,0,686,688,5,95,0,0,687,686,1,0,0,0,687,688,1,0,0,0,688,689,
  	1,0,0,0,689,690,3,80,40,0,690,691,5,90,0,0,691,692,3,80,40,0,692,693,
  	5,90,0,0,693,695,3,80,40,0,694,696,5,96,0,0,695,694,1,0,0,0,695,696,1,
  	0,0,0,696,740,1,0,0,0,697,699,5,77,0,0,698,700,5,95,0,0,699,698,1,0,0,
  	0,699,700,1,0,0,0,700,701,1,0,0,0,701,702,3,80,40,0,702,703,5,90,0,0,
  	703,705,3,80,40,0,704,706,5,96,0,0,705,704,1,0,0,0,705,706,1,0,0,0,706,
  	740,1,0,0,0,707,709,5,78,0,0,708,710,5,95,0,0,709,708,1,0,0,0,709,710,
  	1,0,0,0,710,711,1,0,0,0,711,712,3,80,40,0,712,713,5,90,0,0,713,714,3,
  	80,40,0,714,715,5,90,0,0,715,717,3,80,40,0,716,718,5,96,0,0,717,716,1,
  	0,0,0,717,718,1,0,0,0,718,740,1,0,0,0,719,721,5,79,0,0,720,722,5,95,0,
  	0,721,720,1,0,0,0,721,722,1,0,0,0,722,723,1,0,0,0,723,724,3,80,40,0,724,
  	725,5,90,0,0,725,727,3,80,40,0,726,728,5,96,0,0,727,726,1,0,0,0,727,728,
  	1,0,0,0,728,740,1,0,0,0,729,730,5,80,0,0,730,740,3,80,40,20,731,733,5,
  	39,0,0,732,734,5,95,0,0,733,732,1,0,0,0,733,734,1,0,0,0,734,735,1,0,0,
  	0,735,737,3,78,39,0,736,738,5,96,0,0,737,736,1,0,0,0,737,738,1,0,0,0,
  	738,740,1,0,0,0,739,613,1,0,0,0,739,618,1,0,0,0,739,619,1,0,0,0,739,620,
  	1,0,0,0,739,621,1,0,0,0,739,622,1,0,0,0,739,624,1,0,0,0,739,626,1,0,0,
  	0,739,628,1,0,0,0,739,630,1,0,0,0,739,642,1,0,0,0,739,644,1,0,0,0,739,
  	646,1,0,0,0,739,648,1,0,0,0,739,649,1,0,0,0,739,650,1,0,0,0,739,651,1,
  	0,0,0,739,653,1,0,0,0,739,655,1,0,0,0,739,657,1,0,0,0,739,659,1,0,0,0,
  	739,661,1,0,0,0,739,663,1,0,0,0,739,665,1,0,0,0,739,667,1,0,0,0,739,669,
  	1,0,0,0,739,671,1,0,0,0,739,673,1,0,0,0,739,675,1,0,0,0,739,677,1,0,0,
  	0,739,679,1,0,0,0,739,681,1,0,0,0,739,683,1,0,0,0,739,685,1,0,0,0,739,
  	697,1,0,0,0,739,707,1,0,0,0,739,719,1,0,0,0,739,729,1,0,0,0,739,731,1,
  	0,0,0,740,797,1,0,0,0,741,742,10,18,0,0,742,743,5,105,0,0,743,796,3,80,
  	40,18,744,745,10,17,0,0,745,746,5,109,0,0,746,796,3,80,40,18,747,748,
  	10,16,0,0,748,749,5,108,0,0,749,796,3,80,40,17,750,751,10,15,0,0,751,
  	752,5,113,0,0,752,796,3,80,40,16,753,754,10,14,0,0,754,755,5,112,0,0,
  	755,796,3,80,40,15,756,757,10,13,0,0,757,758,5,106,0,0,758,796,3,80,40,
  	14,759,760,10,12,0,0,760,761,5,107,0,0,761,796,3,80,40,13,762,763,10,
  	11,0,0,763,764,5,110,0,0,764,796,3,80,40,12,765,766,10,10,0,0,766,767,
  	5,111,0,0,767,796,3,80,40,11,768,769,10,9,0,0,769,770,5,99,0,0,770,796,
  	3,80,40,10,771,772,10,8,0,0,772,773,5,100,0,0,773,796,3,80,40,9,774,775,
  	10,7,0,0,775,776,5,101,0,0,776,796,3,80,40,8,777,778,10,6,0,0,778,779,
  	5,102,0,0,779,796,3,80,40,7,780,781,10,5,0,0,781,782,5,103,0,0,782,796,
  	3,80,40,6,783,784,10,4,0,0,784,785,5,104,0,0,785,796,3,80,40,5,786,787,
  	10,3,0,0,787,788,5,116,0,0,788,796,3,80,40,4,789,790,10,2,0,0,790,791,
  	5,117,0,0,791,796,3,80,40,3,792,793,10,1,0,0,793,794,5,118,0,0,794,796,
  	3,80,40,2,795,741,1,0,0,0,795,744,1,0,0,0,795,747,1,0,0,0,795,750,1,0,
  	0,0,795,753,1,0,0,0,795,756,1,0,0,0,795,759,1,0,0,0,795,762,1,0,0,0,795,
  	765,1,0,0,0,795,768,1,0,0,0,795,771,1,0,0,0,795,774,1,0,0,0,795,777,1,
  	0,0,0,795,780,1,0,0,0,795,783,1,0,0,0,795,786,1,0,0,0,795,789,1,0,0,0,
  	795,792,1,0,0,0,796,799,1,0,0,0,797,795,1,0,0,0,797,798,1,0,0,0,798,81,
  	1,0,0,0,799,797,1,0,0,0,800,801,7,2,0,0,801,83,1,0,0,0,802,803,7,3,0,
  	0,803,85,1,0,0,0,804,808,3,88,44,0,805,808,3,90,45,0,806,808,3,92,46,
  	0,807,804,1,0,0,0,807,805,1,0,0,0,807,806,1,0,0,0,808,87,1,0,0,0,809,
  	811,7,4,0,0,810,809,1,0,0,0,810,811,1,0,0,0,811,812,1,0,0,0,812,813,5,
  	122,0,0,813,89,1,0,0,0,814,821,5,120,0,0,815,821,5,121,0,0,816,818,7,
  	4,0,0,817,816,1,0,0,0,817,818,1,0,0,0,818,819,1,0,0,0,819,821,5,123,0,
  	0,820,814,1,0,0,0,820,815,1,0,0,0,820,817,1,0,0,0,821,91,1,0,0,0,822,
  	823,5,119,0,0,823,93,1,0,0,0,87,100,105,111,115,118,123,128,132,165,170,
  	173,178,185,188,194,198,204,209,214,229,234,242,254,260,296,301,307,318,
  	326,337,342,347,354,367,370,376,378,382,386,389,392,394,400,403,408,412,
  	418,424,428,433,451,459,466,475,482,488,500,506,519,527,531,544,561,594,
  	600,604,610,632,637,640,687,695,699,705,709,717,721,727,733,737,739,795,
  	797,807,810,817,820
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
    setState(94);
    statements();
    setState(95);
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
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(98); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(97);
                separator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(100); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(105);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == DaricParser::COLON

          || _la == DaricParser::NEWLINE) {
            setState(102);
            separator();
            setState(107);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(108);
          statement();
          setState(111);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
          case 1: {
            setState(109);
            separator();
            break;
          }

          case 2: {
            setState(110);
            match(DaricParser::EOF);
            break;
          }

          default:
            break;
          } 
        }
        setState(117);
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
    setState(130); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(123);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(120);
                match(DaricParser::COLON);
                setState(125);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(126);
              statement();
              setState(128);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(127);
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
      setState(132); 
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

DaricParser::CassignContext* DaricParser::StatementContext::cassign() {
  return getRuleContext<DaricParser::CassignContext>(0);
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

DaricParser::GetContext* DaricParser::StatementContext::get() {
  return getRuleContext<DaricParser::GetContext>(0);
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
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(136);
      case_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(137);
      cassign();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(138);
      clear();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(139);
      const_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(140);
      data();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(141);
      dataLabel();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(142);
      dim();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(143);
      end();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(144);
      for_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(145);
      get();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(146);
      if_();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(147);
      ifml();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(148);
      input();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(149);
      importlib();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(150);
      option();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(151);
      procedure();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(152);
      print();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(153);
      push();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(154);
      pop();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(155);
      read();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(156);
      repeat();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(157);
      restore();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(158);
      return_();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(159);
      set();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(160);
      struct_();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(161);
      structDim();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(162);
      structInstance();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(163);
      swap();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(164);
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
    setState(168); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(167);
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
      setState(170); 
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
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(172);
      match(DaricParser::LET);
    }
    setState(175);
    variable();
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(176);
      match(DaricParser::COLON);
      setState(177);
      type();
    }
    setState(180);
    match(DaricParser::EQ);
    setState(181);
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
    setState(183);
    match(DaricParser::IDENTIFIER);
    setState(185);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(184);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(188);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(187);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(190);
      match(DaricParser::COMMA);
      setState(191);
      expression(0);
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(197);
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
    setState(200);
    match(DaricParser::CASE);
    setState(201);
    expression(0);
    setState(202);
    match(DaricParser::OF);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(203);
      separator();
    }
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::WHEN) {
      setState(206);
      when();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(212);
      match(DaricParser::OTHERWISE);
      setState(213);
      statements();
    }
    setState(216);
    match(DaricParser::END);
    setState(217);
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
    setState(219);
    match(DaricParser::CONST);
    setState(220);
    match(DaricParser::IDENTIFIER);
    setState(221);
    match(DaricParser::EQ);
    setState(222);
    literal();
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(223);
      match(DaricParser::COMMA);
      setState(224);
      match(DaricParser::IDENTIFIER);
      setState(225);
      match(DaricParser::EQ);
      setState(226);
      literal();
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(234);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(232);
      match(DaricParser::COLON);
      setState(233);
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
    setState(236);
    match(DaricParser::DATA);
    setState(237);
    integerLiteral();
    setState(242);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(238);
      match(DaricParser::COMMA);
      setState(239);
      integerLiteral();
      setState(244);
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
    setState(245);
    match(DaricParser::DATALABEL);
    setState(246);
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
    setState(248);
    match(DaricParser::DIM);
    setState(249);
    match(DaricParser::IDENTIFIER);
    setState(250);
    match(DaricParser::COLON);
    setState(296);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::BYTE:
      case DaricParser::INT:
      case DaricParser::FLOAT:
      case DaricParser::STRING: {
        setState(251);
        type();
        setState(252);
        match(DaricParser::SOPEN);
        setState(254);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -280925220896768) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 2273205108204240643) != 0) {
          setState(253);
          expression(0);
        }
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COMMA) {
          setState(256);
          match(DaricParser::COMMA);
          setState(257);
          expression(0);
          setState(262);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(263);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::VECTOR: {
        setState(265);
        match(DaricParser::VECTOR);
        setState(266);
        match(DaricParser::SOPEN);
        setState(267);
        typeOrStruct();
        setState(268);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::LIST: {
        setState(270);
        match(DaricParser::LIST);
        setState(271);
        match(DaricParser::SOPEN);
        setState(272);
        typeOrStruct();
        setState(273);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::SET: {
        setState(275);
        match(DaricParser::SET);
        setState(276);
        match(DaricParser::SOPEN);
        setState(277);
        _la = _input->LA(1);
        if (!((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(278);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::MAP: {
        setState(279);
        match(DaricParser::MAP);
        setState(280);
        match(DaricParser::SOPEN);
        setState(281);
        _la = _input->LA(1);
        if (!((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(282);
        match(DaricParser::COMMA);
        setState(283);
        typeOrStruct();
        setState(284);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::STACK: {
        setState(286);
        match(DaricParser::STACK);
        setState(287);
        match(DaricParser::SOPEN);
        setState(288);
        typeOrStruct();
        setState(289);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::QUEUE: {
        setState(291);
        match(DaricParser::QUEUE);
        setState(292);
        match(DaricParser::SOPEN);
        setState(293);
        typeOrStruct();
        setState(294);
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
    setState(298);
    match(DaricParser::IDENTIFIER);
    setState(299);
    match(DaricParser::LPAREN);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -280925220896768) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 2273205108204240643) != 0) {
      setState(300);
      expression(0);
    }
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(303);
      match(DaricParser::COMMA);
      setState(304);
      expression(0);
      setState(309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(310);
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
    setState(312);
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
    setState(314);
    match(DaricParser::FOR);
    setState(315);
    match(DaricParser::IDENTIFIER);
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(316);
      match(DaricParser::COLON);
      setState(317);
      type();
    }
    setState(320);
    match(DaricParser::EQ);
    setState(321);
    expression(0);
    setState(322);
    match(DaricParser::TO);
    setState(323);
    expression(0);
    setState(326);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(324);
      match(DaricParser::STEP);
      setState(325);
      expression(0);
    }
    setState(328);
    statements();
    setState(329);
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
    setState(331);
    match(DaricParser::IMPORT);
    setState(332);
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
    setState(334);
    match(DaricParser::IF);
    setState(335);
    expression(0);
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(336);
      match(DaricParser::THEN);
    }
    setState(339);
    statementsl();
    setState(342);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(340);
      match(DaricParser::ELSE);
      setState(341);
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
    setState(344);
    match(DaricParser::IF);
    setState(345);
    expression(0);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(346);
      match(DaricParser::THEN);
    }
    setState(349);
    match(DaricParser::NEWLINE);
    setState(350);
    statements();
    setState(354);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(351);
      match(DaricParser::ELSE);
      setState(352);
      match(DaricParser::NEWLINE);
      setState(353);
      statements();
    }
    setState(356);
    match(DaricParser::NEWLINE);
    setState(357);
    match(DaricParser::END);
    setState(358);
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
    setState(360);
    match(DaricParser::INPUT);
    setState(361);
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
    setState(363);
    match(DaricParser::OPTION);
    setState(364);
    match(DaricParser::IDENTIFIER);
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(365);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(366);
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
    setState(370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(369);
      match(DaricParser::REF);
    }
    setState(372);
    match(DaricParser::IDENTIFIER);
    setState(378);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(373);
      match(DaricParser::COLON);
      setState(376);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case DaricParser::BYTE:
        case DaricParser::INT:
        case DaricParser::FLOAT:
        case DaricParser::STRING: {
          setState(374);
          type();
          break;
        }

        case DaricParser::IDENTIFIER: {
          setState(375);
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
    setState(380);
    match(DaricParser::PRINT);
    setState(382);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SYS) {
      setState(381);
      match(DaricParser::SYS);
    }
    setState(394);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(384);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(389);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(386);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(385);
          match(DaricParser::WITH);
        }
        setState(388);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(391);
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
    setState(396);
    match(DaricParser::DEF);
    setState(397);
    match(DaricParser::IDENTIFIER);
    setState(400);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(398);
      match(DaricParser::COLON);
      setState(399);
      type();
      break;
    }

    default:
      break;
    }
    setState(403);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(402);
      match(DaricParser::LPAREN);
    }
    setState(408);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(405);
        match(DaricParser::NEWLINE); 
      }
      setState(410);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(411);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(414);
      match(DaricParser::COMMA);
      setState(418);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(415);
        match(DaricParser::NEWLINE);
        setState(420);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(421);
      parameter();
      setState(426);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(428);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(427);
      match(DaricParser::RPAREN);
    }
    setState(433);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(430);
        separator(); 
      }
      setState(435);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(436);
    statements();
    setState(437);
    match(DaricParser::END);
    setState(438);
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
    setState(440);
    match(DaricParser::REPEAT);
    setState(441);
    statements();
    setState(442);
    match(DaricParser::UNTIL);
    setState(443);
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
    setState(445);
    match(DaricParser::READ);
    setState(446);
    variable();
    setState(451);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(447);
      match(DaricParser::COMMA);
      setState(448);
      variable();
      setState(453);
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
    setState(454);
    match(DaricParser::RESTORE);
    setState(455);
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
    setState(457);
    match(DaricParser::RETURN);
    setState(459);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(458);
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
    setState(461);
    match(DaricParser::RECORD);
    setState(462);
    match(DaricParser::IDENTIFIER);
    setState(466);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(463);
      match(DaricParser::NEWLINE);
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(469);
    match(DaricParser::IDENTIFIER);
    setState(470);
    match(DaricParser::COLON);
    setState(471);
    typeOrStruct();
    setState(482);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(473); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(472);
          match(DaricParser::NEWLINE);
          setState(475); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::NEWLINE);
        setState(477);
        match(DaricParser::IDENTIFIER);
        setState(478);
        match(DaricParser::COLON);
        setState(479);
        typeOrStruct(); 
      }
      setState(484);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(488);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(485);
      match(DaricParser::NEWLINE);
      setState(490);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(491);
    match(DaricParser::END);
    setState(492);
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
    setState(494);
    match(DaricParser::DIM);
    setState(495);
    match(DaricParser::IDENTIFIER);
    setState(496);
    match(DaricParser::COLON);
    setState(497);
    match(DaricParser::IDENTIFIER);
    setState(498);
    match(DaricParser::SOPEN);
    setState(500);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -280925220896768) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 2273205108204240643) != 0) {
      setState(499);
      expression(0);
    }
    setState(506);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(502);
      match(DaricParser::COMMA);
      setState(503);
      expression(0);
      setState(508);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(509);
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
    setState(511);
    match(DaricParser::DIM);
    setState(512);
    match(DaricParser::IDENTIFIER);
    setState(513);
    match(DaricParser::COLON);
    setState(514);
    match(DaricParser::IDENTIFIER);
    setState(531);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(515);
      match(DaricParser::LPAREN);
      setState(519);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(516);
        match(DaricParser::IDENTIFIER);
        setState(517);
        match(DaricParser::EQ);
        setState(518);
        expression(0);
      }
      setState(527);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(521);
        match(DaricParser::COMMA);
        setState(522);
        match(DaricParser::IDENTIFIER);
        setState(523);
        match(DaricParser::EQ);
        setState(524);
        expression(0);
        setState(529);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(530);
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
    setState(533);
    match(DaricParser::SWAP);
    setState(534);
    variable();
    setState(535);
    match(DaricParser::COMMA);
    setState(536);
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
    setState(538);
    match(DaricParser::WHEN);
    setState(539);
    expression(0);
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(540);
      match(DaricParser::COMMA);
      setState(541);
      expression(0);
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(547);
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
    setState(549);
    match(DaricParser::WHILE);
    setState(550);
    expression(0);
    setState(551);
    statements();
    setState(552);
    match(DaricParser::END);
    setState(553);
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
    setState(555);
    match(DaricParser::CLEAR);
    setState(556);
    match(DaricParser::IDENTIFIER);
    setState(561);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SOPEN) {
      setState(557);
      match(DaricParser::SOPEN);
      setState(558);
      expression(0);
      setState(559);
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
    setState(563);
    match(DaricParser::POP);
    setState(564);
    variable();
    setState(565);
    match(DaricParser::FROM);
    setState(566);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetContext ------------------------------------------------------------------

DaricParser::GetContext::GetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::GetContext::FETCH() {
  return getToken(DaricParser::FETCH, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::GetContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::GetContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

tree::TerminalNode* DaricParser::GetContext::FROM() {
  return getToken(DaricParser::FROM, 0);
}


size_t DaricParser::GetContext::getRuleIndex() const {
  return DaricParser::RuleGet;
}


std::any DaricParser::GetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitGet(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::GetContext* DaricParser::get() {
  GetContext *_localctx = _tracker.createInstance<GetContext>(_ctx, getState());
  enterRule(_localctx, 70, DaricParser::RuleGet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    match(DaricParser::FETCH);
    setState(569);
    variable();
    setState(570);
    match(DaricParser::FROM);
    setState(571);
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

tree::TerminalNode* DaricParser::SetContext::PLACE() {
  return getToken(DaricParser::PLACE, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::SetContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::SetContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

tree::TerminalNode* DaricParser::SetContext::AT() {
  return getToken(DaricParser::AT, 0);
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
    setState(573);
    match(DaricParser::PLACE);
    setState(574);
    variable();
    setState(575);
    match(DaricParser::AT);
    setState(576);
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
  enterRule(_localctx, 74, DaricParser::RulePush);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(DaricParser::PUSH);
    setState(579);
    variable();
    setState(580);
    match(DaricParser::INTO);
    setState(581);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CassignContext ------------------------------------------------------------------

DaricParser::CassignContext::CassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::CassignContext::ASSIGN() {
  return getToken(DaricParser::ASSIGN, 0);
}

std::vector<DaricParser::ExpressionContext *> DaricParser::CassignContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::CassignContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

tree::TerminalNode* DaricParser::CassignContext::TO() {
  return getToken(DaricParser::TO, 0);
}

DaricParser::VariableContext* DaricParser::CassignContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

tree::TerminalNode* DaricParser::CassignContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::CassignContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}


size_t DaricParser::CassignContext::getRuleIndex() const {
  return DaricParser::RuleCassign;
}


std::any DaricParser::CassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitCassign(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::CassignContext* DaricParser::cassign() {
  CassignContext *_localctx = _tracker.createInstance<CassignContext>(_ctx, getState());
  enterRule(_localctx, 76, DaricParser::RuleCassign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(DaricParser::ASSIGN);
    setState(584);
    expression(0);
    setState(585);
    match(DaricParser::TO);
    setState(586);
    variable();
    setState(587);
    match(DaricParser::SOPEN);
    setState(588);
    expression(0);
    setState(589);
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
  enterRule(_localctx, 78, DaricParser::RuleVariable);
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
    setState(591);
    match(DaricParser::IDENTIFIER);
    setState(604);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(592);
      match(DaricParser::SOPEN);
      setState(594);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -280925220896768) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 2273205108204240643) != 0) {
        setState(593);
        expression(0);
      }
      setState(600);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(596);
        match(DaricParser::COMMA);
        setState(597);
        expression(0);
        setState(602);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(603);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(610);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(606);
        match(DaricParser::DOT);
        setState(607);
        match(DaricParser::IDENTIFIER); 
      }
      setState(612);
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
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, DaricParser::RuleExpression, precedence);

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
    setState(739);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      setState(614);
      match(DaricParser::LPAREN);
      setState(615);
      expression(0);
      setState(616);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(618);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(619);
      literal();
      break;
    }

    case 4: {
      setState(620);
      exprcall();
      break;
    }

    case 5: {
      setState(621);
      variable();
      break;
    }

    case 6: {
      setState(622);
      match(DaricParser::MINUS);
      setState(623);
      expression(52);
      break;
    }

    case 7: {
      setState(624);
      match(DaricParser::PLUS);
      setState(625);
      expression(51);
      break;
    }

    case 8: {
      setState(626);
      match(DaricParser::INT);
      setState(627);
      expression(50);
      break;
    }

    case 9: {
      setState(628);
      match(DaricParser::FLOAT);
      setState(629);
      expression(49);
      break;
    }

    case 10: {
      setState(630);
      match(DaricParser::STRING);
      setState(632);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(631);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(634);
      expression(0);
      setState(637);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(635);
        match(DaricParser::WITH);
        setState(636);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(640);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(639);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(642);
      match(DaricParser::ABS);
      setState(643);
      expression(47);
      break;
    }

    case 12: {
      setState(644);
      match(DaricParser::COMP);
      setState(645);
      expression(46);
      break;
    }

    case 13: {
      setState(646);
      match(DaricParser::NOT);
      setState(647);
      expression(45);
      break;
    }

    case 14: {
      setState(648);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(649);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(650);
      match(DaricParser::PI);
      break;
    }

    case 17: {
      setState(651);
      match(DaricParser::DEG);
      setState(652);
      expression(41);
      break;
    }

    case 18: {
      setState(653);
      match(DaricParser::RAD);
      setState(654);
      expression(40);
      break;
    }

    case 19: {
      setState(655);
      match(DaricParser::SGN);
      setState(656);
      expression(39);
      break;
    }

    case 20: {
      setState(657);
      match(DaricParser::ACS);
      setState(658);
      expression(38);
      break;
    }

    case 21: {
      setState(659);
      match(DaricParser::ASN);
      setState(660);
      expression(37);
      break;
    }

    case 22: {
      setState(661);
      match(DaricParser::ATN);
      setState(662);
      expression(36);
      break;
    }

    case 23: {
      setState(663);
      match(DaricParser::COS);
      setState(664);
      expression(35);
      break;
    }

    case 24: {
      setState(665);
      match(DaricParser::EXP);
      setState(666);
      expression(34);
      break;
    }

    case 25: {
      setState(667);
      match(DaricParser::FLOOR);
      setState(668);
      expression(33);
      break;
    }

    case 26: {
      setState(669);
      match(DaricParser::ROUND);
      setState(670);
      expression(32);
      break;
    }

    case 27: {
      setState(671);
      match(DaricParser::LN);
      setState(672);
      expression(31);
      break;
    }

    case 28: {
      setState(673);
      match(DaricParser::LOG);
      setState(674);
      expression(30);
      break;
    }

    case 29: {
      setState(675);
      match(DaricParser::SIN);
      setState(676);
      expression(29);
      break;
    }

    case 30: {
      setState(677);
      match(DaricParser::SQR);
      setState(678);
      expression(28);
      break;
    }

    case 31: {
      setState(679);
      match(DaricParser::TAN);
      setState(680);
      expression(27);
      break;
    }

    case 32: {
      setState(681);
      match(DaricParser::ASC);
      setState(682);
      expression(26);
      break;
    }

    case 33: {
      setState(683);
      match(DaricParser::CHR);
      setState(684);
      expression(25);
      break;
    }

    case 34: {
      setState(685);
      match(DaricParser::INSTR);
      setState(687);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(686);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(689);
      expression(0);
      setState(690);
      match(DaricParser::COMMA);
      setState(691);
      expression(0);
      setState(692);
      match(DaricParser::COMMA);
      setState(693);
      expression(0);
      setState(695);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(694);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      setState(697);
      match(DaricParser::LEFT);
      setState(699);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(698);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(701);
      expression(0);
      setState(702);
      match(DaricParser::COMMA);
      setState(703);
      expression(0);
      setState(705);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(704);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 36: {
      setState(707);
      match(DaricParser::MID);
      setState(709);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(708);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(711);
      expression(0);
      setState(712);
      match(DaricParser::COMMA);
      setState(713);
      expression(0);
      setState(714);
      match(DaricParser::COMMA);
      setState(715);
      expression(0);
      setState(717);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(716);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(719);
      match(DaricParser::RIGHT);
      setState(721);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(720);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(723);
      expression(0);
      setState(724);
      match(DaricParser::COMMA);
      setState(725);
      expression(0);
      setState(727);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(726);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(729);
      match(DaricParser::LEN);
      setState(730);
      expression(20);
      break;
    }

    case 39: {
      setState(731);
      match(DaricParser::SIZE);
      setState(733);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(732);
        match(DaricParser::LPAREN);
      }
      setState(735);
      variable();
      setState(737);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(736);
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
    setState(797);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(795);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(741);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(742);
          match(DaricParser::HAT);
          setState(743);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(744);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(745);
          match(DaricParser::DIVIDE);
          setState(746);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(747);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(748);
          match(DaricParser::MULTIPLY);
          setState(749);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(750);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(751);
          match(DaricParser::DIV);
          setState(752);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(753);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(754);
          match(DaricParser::MOD);
          setState(755);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(756);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(757);
          match(DaricParser::PLUS);
          setState(758);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(759);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(760);
          match(DaricParser::MINUS);
          setState(761);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(762);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(763);
          match(DaricParser::SHL);
          setState(764);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(765);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(766);
          match(DaricParser::SHR);
          setState(767);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(768);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(769);
          match(DaricParser::EQ);
          setState(770);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(771);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(772);
          match(DaricParser::NE);
          setState(773);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(774);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(775);
          match(DaricParser::GT);
          setState(776);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(777);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(778);
          match(DaricParser::GE);
          setState(779);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(780);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(781);
          match(DaricParser::LT);
          setState(782);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(783);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(784);
          match(DaricParser::LE);
          setState(785);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(786);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(787);
          match(DaricParser::AND);
          setState(788);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(789);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(790);
          match(DaricParser::OR);
          setState(791);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(792);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(793);
          match(DaricParser::EOR);
          setState(794);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(799);
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
  enterRule(_localctx, 82, DaricParser::RuleType);
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
    setState(800);
    _la = _input->LA(1);
    if (!((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & 15) != 0)) {
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
  enterRule(_localctx, 84, DaricParser::RuleTypeOrStruct);
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
    setState(802);
    _la = _input->LA(1);
    if (!((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 86, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(807);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(804);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(805);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(806);
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
  enterRule(_localctx, 88, DaricParser::RuleFloatLiteral);
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
    setState(810);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(809);
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
    setState(812);
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
  enterRule(_localctx, 90, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(820);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(814);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(815);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(817);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(816);
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
        setState(819);
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
  enterRule(_localctx, 92, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
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
    case 40: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

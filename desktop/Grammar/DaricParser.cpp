
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
      "assign", "assignment", "call", "case", "const", "data", "dataLabel", 
      "dim", "exprcall", "end", "for", "importlib", "if", "ifml", "option", 
      "parameter", "print", "procedure", "repeat", "read", "restore", "return", 
      "struct", "structDim", "structInstance", "swap", "when", "while", 
      "variable", "expression", "type", "typeOrStruct", "literal", "floatLiteral", 
      "integerLiteral", "stringLiteral"
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
      "", "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "FOR", "IF", "IMPORT", "LET", "NEXT", 
      "OF", "OPTION", "OTHERWISE", "PRINT", "READ", "RECORD", "REF", "REM", 
      "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", "STEP", "SYS", "SWAP", 
      "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "ABS", "ACS", "ASN", 
      "ATN", "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", "PI", "RAD", "ROUND", 
      "SGN", "SIN", "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHR", "INSTR", 
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
  	4,1,108,742,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,1,0,1,0,1,0,1,1,
  	4,1,87,8,1,11,1,12,1,88,1,1,5,1,92,8,1,10,1,12,1,95,9,1,1,1,1,1,1,1,3,
  	1,100,8,1,5,1,102,8,1,10,1,12,1,105,9,1,3,1,107,8,1,1,2,5,2,110,8,2,10,
  	2,12,2,113,9,2,1,2,1,2,3,2,117,8,2,4,2,119,8,2,11,2,12,2,120,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,3,3,147,8,3,1,4,4,4,150,8,4,11,4,12,4,151,1,5,3,5,155,
  	8,5,1,5,1,5,1,5,5,5,160,8,5,10,5,12,5,163,9,5,1,5,1,5,3,5,167,8,5,1,6,
  	1,6,1,6,1,6,1,7,1,7,3,7,175,8,7,1,7,3,7,178,8,7,1,7,1,7,5,7,182,8,7,10,
  	7,12,7,185,9,7,1,7,3,7,188,8,7,1,8,1,8,1,8,1,8,3,8,194,8,8,1,8,5,8,197,
  	8,8,10,8,12,8,200,9,8,1,8,1,8,3,8,204,8,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,5,9,217,8,9,10,9,12,9,220,9,9,1,9,1,9,3,9,224,8,9,1,10,
  	1,10,1,10,1,10,5,10,230,8,10,10,10,12,10,233,9,10,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,3,12,244,8,12,1,12,1,12,5,12,248,8,12,10,12,
  	12,12,251,9,12,1,12,1,12,1,13,1,13,1,13,3,13,258,8,13,1,13,1,13,5,13,
  	262,8,13,10,13,12,13,265,9,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,15,
  	3,15,275,8,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,283,8,15,1,15,1,15,1,
  	15,1,16,1,16,1,16,1,17,1,17,1,17,3,17,294,8,17,1,17,1,17,1,17,3,17,299,
  	8,17,1,18,1,18,1,18,3,18,304,8,18,1,18,1,18,1,18,1,18,1,18,3,18,311,8,
  	18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,321,8,19,1,20,3,20,324,
  	8,20,1,20,1,20,1,20,1,20,3,20,330,8,20,3,20,332,8,20,1,21,1,21,3,21,336,
  	8,21,1,21,1,21,3,21,340,8,21,1,21,3,21,343,8,21,1,21,3,21,346,8,21,3,
  	21,348,8,21,1,22,1,22,1,22,1,22,3,22,354,8,22,1,22,3,22,357,8,22,1,22,
  	5,22,360,8,22,10,22,12,22,363,9,22,1,22,3,22,366,8,22,1,22,1,22,5,22,
  	370,8,22,10,22,12,22,373,9,22,1,22,5,22,376,8,22,10,22,12,22,379,9,22,
  	1,22,3,22,382,8,22,1,22,5,22,385,8,22,10,22,12,22,388,9,22,1,22,1,22,
  	1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,403,8,24,
  	10,24,12,24,406,9,24,1,25,1,25,1,25,1,26,1,26,3,26,413,8,26,1,27,1,27,
  	1,27,5,27,418,8,27,10,27,12,27,421,9,27,1,27,1,27,1,27,1,27,4,27,427,
  	8,27,11,27,12,27,428,1,27,1,27,1,27,5,27,434,8,27,10,27,12,27,437,9,27,
  	1,27,5,27,440,8,27,10,27,12,27,443,9,27,1,27,1,27,1,27,1,28,1,28,1,28,
  	1,28,1,28,1,28,3,28,454,8,28,1,28,1,28,5,28,458,8,28,10,28,12,28,461,
  	9,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,473,8,29,
  	1,29,1,29,1,29,1,29,5,29,479,8,29,10,29,12,29,482,9,29,1,29,3,29,485,
  	8,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,496,8,31,10,31,
  	12,31,499,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,
  	3,33,512,8,33,1,33,1,33,5,33,516,8,33,10,33,12,33,519,9,33,1,33,3,33,
  	522,8,33,1,33,1,33,5,33,526,8,33,10,33,12,33,529,9,33,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,3,34,550,8,34,1,34,1,34,1,34,3,34,555,8,34,1,34,3,34,558,8,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,3,34,605,8,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,613,
  	8,34,1,34,1,34,3,34,617,8,34,1,34,1,34,1,34,1,34,3,34,623,8,34,1,34,1,
  	34,3,34,627,8,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,635,8,34,1,34,1,34,
  	3,34,639,8,34,1,34,1,34,1,34,1,34,3,34,645,8,34,1,34,1,34,1,34,1,34,3,
  	34,651,8,34,1,34,1,34,3,34,655,8,34,3,34,657,8,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,5,34,713,8,34,10,34,12,34,716,
  	9,34,1,35,1,35,1,36,1,36,1,37,1,37,1,37,3,37,725,8,37,1,38,3,38,728,8,
  	38,1,38,1,38,1,39,1,39,1,39,3,39,735,8,39,1,39,3,39,738,8,39,1,40,1,40,
  	1,40,0,1,68,41,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,0,5,1,
  	1,70,70,2,0,70,70,75,75,1,0,64,67,2,0,64,67,107,107,1,0,89,90,864,0,82,
  	1,0,0,0,2,106,1,0,0,0,4,118,1,0,0,0,6,146,1,0,0,0,8,149,1,0,0,0,10,154,
  	1,0,0,0,12,168,1,0,0,0,14,172,1,0,0,0,16,189,1,0,0,0,18,208,1,0,0,0,20,
  	225,1,0,0,0,22,234,1,0,0,0,24,237,1,0,0,0,26,254,1,0,0,0,28,268,1,0,0,
  	0,30,270,1,0,0,0,32,287,1,0,0,0,34,290,1,0,0,0,36,300,1,0,0,0,38,316,
  	1,0,0,0,40,323,1,0,0,0,42,333,1,0,0,0,44,349,1,0,0,0,46,393,1,0,0,0,48,
  	398,1,0,0,0,50,407,1,0,0,0,52,410,1,0,0,0,54,414,1,0,0,0,56,447,1,0,0,
  	0,58,464,1,0,0,0,60,486,1,0,0,0,62,491,1,0,0,0,64,502,1,0,0,0,66,508,
  	1,0,0,0,68,656,1,0,0,0,70,717,1,0,0,0,72,719,1,0,0,0,74,724,1,0,0,0,76,
  	727,1,0,0,0,78,737,1,0,0,0,80,739,1,0,0,0,82,83,3,2,1,0,83,84,5,0,0,1,
  	84,1,1,0,0,0,85,87,3,8,4,0,86,85,1,0,0,0,87,88,1,0,0,0,88,86,1,0,0,0,
  	88,89,1,0,0,0,89,107,1,0,0,0,90,92,3,8,4,0,91,90,1,0,0,0,92,95,1,0,0,
  	0,93,91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,0,0,96,99,3,6,3,
  	0,97,100,3,8,4,0,98,100,5,0,0,1,99,97,1,0,0,0,99,98,1,0,0,0,99,100,1,
  	0,0,0,100,102,1,0,0,0,101,93,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,
  	103,104,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,106,86,1,0,0,0,106,103,
  	1,0,0,0,107,3,1,0,0,0,108,110,5,70,0,0,109,108,1,0,0,0,110,113,1,0,0,
  	0,111,109,1,0,0,0,111,112,1,0,0,0,112,114,1,0,0,0,113,111,1,0,0,0,114,
  	116,3,6,3,0,115,117,7,0,0,0,116,115,1,0,0,0,116,117,1,0,0,0,117,119,1,
  	0,0,0,118,111,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,
  	121,5,1,0,0,0,122,147,3,10,5,0,123,147,3,14,7,0,124,147,3,16,8,0,125,
  	147,3,18,9,0,126,147,3,20,10,0,127,147,3,22,11,0,128,147,3,24,12,0,129,
  	147,3,28,14,0,130,147,3,30,15,0,131,147,3,34,17,0,132,147,3,36,18,0,133,
  	147,3,32,16,0,134,147,3,38,19,0,135,147,3,44,22,0,136,147,3,42,21,0,137,
  	147,3,48,24,0,138,147,3,46,23,0,139,147,3,50,25,0,140,147,3,52,26,0,141,
  	147,3,54,27,0,142,147,3,56,28,0,143,147,3,58,29,0,144,147,3,60,30,0,145,
  	147,3,64,32,0,146,122,1,0,0,0,146,123,1,0,0,0,146,124,1,0,0,0,146,125,
  	1,0,0,0,146,126,1,0,0,0,146,127,1,0,0,0,146,128,1,0,0,0,146,129,1,0,0,
  	0,146,130,1,0,0,0,146,131,1,0,0,0,146,132,1,0,0,0,146,133,1,0,0,0,146,
  	134,1,0,0,0,146,135,1,0,0,0,146,136,1,0,0,0,146,137,1,0,0,0,146,138,1,
  	0,0,0,146,139,1,0,0,0,146,140,1,0,0,0,146,141,1,0,0,0,146,142,1,0,0,0,
  	146,143,1,0,0,0,146,144,1,0,0,0,146,145,1,0,0,0,147,7,1,0,0,0,148,150,
  	7,1,0,0,149,148,1,0,0,0,150,151,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,
  	0,152,9,1,0,0,0,153,155,5,14,0,0,154,153,1,0,0,0,154,155,1,0,0,0,155,
  	156,1,0,0,0,156,161,3,12,6,0,157,158,5,73,0,0,158,160,3,12,6,0,159,157,
  	1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,161,162,1,0,0,0,162,166,1,0,0,
  	0,163,161,1,0,0,0,164,165,5,70,0,0,165,167,3,70,35,0,166,164,1,0,0,0,
  	166,167,1,0,0,0,167,11,1,0,0,0,168,169,3,66,33,0,169,170,5,82,0,0,170,
  	171,3,68,34,0,171,13,1,0,0,0,172,174,5,107,0,0,173,175,5,78,0,0,174,173,
  	1,0,0,0,174,175,1,0,0,0,175,177,1,0,0,0,176,178,3,68,34,0,177,176,1,0,
  	0,0,177,178,1,0,0,0,178,183,1,0,0,0,179,180,5,73,0,0,180,182,3,68,34,
  	0,181,179,1,0,0,0,182,185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,
  	187,1,0,0,0,185,183,1,0,0,0,186,188,5,79,0,0,187,186,1,0,0,0,187,188,
  	1,0,0,0,188,15,1,0,0,0,189,190,5,3,0,0,190,191,3,68,34,0,191,193,5,16,
  	0,0,192,194,3,8,4,0,193,192,1,0,0,0,193,194,1,0,0,0,194,198,1,0,0,0,195,
  	197,3,62,31,0,196,195,1,0,0,0,197,200,1,0,0,0,198,196,1,0,0,0,198,199,
  	1,0,0,0,199,203,1,0,0,0,200,198,1,0,0,0,201,202,5,18,0,0,202,204,3,2,
  	1,0,203,201,1,0,0,0,203,204,1,0,0,0,204,205,1,0,0,0,205,206,5,10,0,0,
  	206,207,5,3,0,0,207,17,1,0,0,0,208,209,5,4,0,0,209,210,5,107,0,0,210,
  	211,5,82,0,0,211,218,3,74,37,0,212,213,5,73,0,0,213,214,5,107,0,0,214,
  	215,5,82,0,0,215,217,3,74,37,0,216,212,1,0,0,0,217,220,1,0,0,0,218,216,
  	1,0,0,0,218,219,1,0,0,0,219,223,1,0,0,0,220,218,1,0,0,0,221,222,5,70,
  	0,0,222,224,3,70,35,0,223,221,1,0,0,0,223,224,1,0,0,0,224,19,1,0,0,0,
  	225,226,5,5,0,0,226,231,3,78,39,0,227,228,5,73,0,0,228,230,3,78,39,0,
  	229,227,1,0,0,0,230,233,1,0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,21,
  	1,0,0,0,233,231,1,0,0,0,234,235,5,6,0,0,235,236,3,80,40,0,236,23,1,0,
  	0,0,237,238,5,8,0,0,238,239,5,107,0,0,239,240,5,70,0,0,240,241,3,70,35,
  	0,241,243,5,80,0,0,242,244,3,68,34,0,243,242,1,0,0,0,243,244,1,0,0,0,
  	244,249,1,0,0,0,245,246,5,73,0,0,246,248,3,68,34,0,247,245,1,0,0,0,248,
  	251,1,0,0,0,249,247,1,0,0,0,249,250,1,0,0,0,250,252,1,0,0,0,251,249,1,
  	0,0,0,252,253,5,81,0,0,253,25,1,0,0,0,254,255,5,107,0,0,255,257,5,78,
  	0,0,256,258,3,68,34,0,257,256,1,0,0,0,257,258,1,0,0,0,258,263,1,0,0,0,
  	259,260,5,73,0,0,260,262,3,68,34,0,261,259,1,0,0,0,262,265,1,0,0,0,263,
  	261,1,0,0,0,263,264,1,0,0,0,264,266,1,0,0,0,265,263,1,0,0,0,266,267,5,
  	79,0,0,267,27,1,0,0,0,268,269,5,10,0,0,269,29,1,0,0,0,270,271,5,11,0,
  	0,271,274,5,107,0,0,272,273,5,70,0,0,273,275,3,70,35,0,274,272,1,0,0,
  	0,274,275,1,0,0,0,275,276,1,0,0,0,276,277,5,82,0,0,277,278,3,68,34,0,
  	278,279,5,32,0,0,279,282,3,68,34,0,280,281,5,29,0,0,281,283,3,68,34,0,
  	282,280,1,0,0,0,282,283,1,0,0,0,283,284,1,0,0,0,284,285,3,2,1,0,285,286,
  	5,15,0,0,286,31,1,0,0,0,287,288,5,13,0,0,288,289,3,80,40,0,289,33,1,0,
  	0,0,290,291,5,12,0,0,291,293,3,68,34,0,292,294,5,27,0,0,293,292,1,0,0,
  	0,293,294,1,0,0,0,294,295,1,0,0,0,295,298,3,4,2,0,296,297,5,9,0,0,297,
  	299,3,4,2,0,298,296,1,0,0,0,298,299,1,0,0,0,299,35,1,0,0,0,300,301,5,
  	12,0,0,301,303,3,68,34,0,302,304,5,27,0,0,303,302,1,0,0,0,303,304,1,0,
  	0,0,304,305,1,0,0,0,305,306,5,75,0,0,306,310,3,2,1,0,307,308,5,9,0,0,
  	308,309,5,75,0,0,309,311,3,2,1,0,310,307,1,0,0,0,310,311,1,0,0,0,311,
  	312,1,0,0,0,312,313,5,75,0,0,313,314,5,10,0,0,314,315,5,12,0,0,315,37,
  	1,0,0,0,316,317,5,17,0,0,317,320,5,107,0,0,318,321,5,107,0,0,319,321,
  	3,78,39,0,320,318,1,0,0,0,320,319,1,0,0,0,321,39,1,0,0,0,322,324,5,22,
  	0,0,323,322,1,0,0,0,323,324,1,0,0,0,324,325,1,0,0,0,325,331,5,107,0,0,
  	326,329,5,70,0,0,327,330,3,70,35,0,328,330,5,107,0,0,329,327,1,0,0,0,
  	329,328,1,0,0,0,330,332,1,0,0,0,331,326,1,0,0,0,331,332,1,0,0,0,332,41,
  	1,0,0,0,333,335,5,19,0,0,334,336,5,30,0,0,335,334,1,0,0,0,335,336,1,0,
  	0,0,336,347,1,0,0,0,337,342,3,68,34,0,338,340,5,35,0,0,339,338,1,0,0,
  	0,339,340,1,0,0,0,340,341,1,0,0,0,341,343,3,68,34,0,342,339,1,0,0,0,342,
  	343,1,0,0,0,343,345,1,0,0,0,344,346,5,71,0,0,345,344,1,0,0,0,345,346,
  	1,0,0,0,346,348,1,0,0,0,347,337,1,0,0,0,347,348,1,0,0,0,348,43,1,0,0,
  	0,349,350,5,7,0,0,350,353,5,107,0,0,351,352,5,70,0,0,352,354,3,70,35,
  	0,353,351,1,0,0,0,353,354,1,0,0,0,354,356,1,0,0,0,355,357,5,78,0,0,356,
  	355,1,0,0,0,356,357,1,0,0,0,357,361,1,0,0,0,358,360,5,75,0,0,359,358,
  	1,0,0,0,360,363,1,0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,365,1,0,0,
  	0,363,361,1,0,0,0,364,366,3,40,20,0,365,364,1,0,0,0,365,366,1,0,0,0,366,
  	377,1,0,0,0,367,371,5,73,0,0,368,370,5,75,0,0,369,368,1,0,0,0,370,373,
  	1,0,0,0,371,369,1,0,0,0,371,372,1,0,0,0,372,374,1,0,0,0,373,371,1,0,0,
  	0,374,376,3,40,20,0,375,367,1,0,0,0,376,379,1,0,0,0,377,375,1,0,0,0,377,
  	378,1,0,0,0,378,381,1,0,0,0,379,377,1,0,0,0,380,382,5,79,0,0,381,380,
  	1,0,0,0,381,382,1,0,0,0,382,386,1,0,0,0,383,385,3,8,4,0,384,383,1,0,0,
  	0,385,388,1,0,0,0,386,384,1,0,0,0,386,387,1,0,0,0,387,389,1,0,0,0,388,
  	386,1,0,0,0,389,390,3,2,1,0,390,391,5,10,0,0,391,392,5,7,0,0,392,45,1,
  	0,0,0,393,394,5,24,0,0,394,395,3,2,1,0,395,396,5,33,0,0,396,397,3,68,
  	34,0,397,47,1,0,0,0,398,399,5,20,0,0,399,404,3,66,33,0,400,401,5,73,0,
  	0,401,403,3,66,33,0,402,400,1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,404,
  	405,1,0,0,0,405,49,1,0,0,0,406,404,1,0,0,0,407,408,5,25,0,0,408,409,3,
  	80,40,0,409,51,1,0,0,0,410,412,5,26,0,0,411,413,3,68,34,0,412,411,1,0,
  	0,0,412,413,1,0,0,0,413,53,1,0,0,0,414,415,5,21,0,0,415,419,5,107,0,0,
  	416,418,5,75,0,0,417,416,1,0,0,0,418,421,1,0,0,0,419,417,1,0,0,0,419,
  	420,1,0,0,0,420,422,1,0,0,0,421,419,1,0,0,0,422,423,5,107,0,0,423,424,
  	5,70,0,0,424,435,3,72,36,0,425,427,5,75,0,0,426,425,1,0,0,0,427,428,1,
  	0,0,0,428,426,1,0,0,0,428,429,1,0,0,0,429,430,1,0,0,0,430,431,5,107,0,
  	0,431,432,5,70,0,0,432,434,3,72,36,0,433,426,1,0,0,0,434,437,1,0,0,0,
  	435,433,1,0,0,0,435,436,1,0,0,0,436,441,1,0,0,0,437,435,1,0,0,0,438,440,
  	5,75,0,0,439,438,1,0,0,0,440,443,1,0,0,0,441,439,1,0,0,0,441,442,1,0,
  	0,0,442,444,1,0,0,0,443,441,1,0,0,0,444,445,5,10,0,0,445,446,5,21,0,0,
  	446,55,1,0,0,0,447,448,5,8,0,0,448,449,5,107,0,0,449,450,5,70,0,0,450,
  	451,5,107,0,0,451,453,5,80,0,0,452,454,3,68,34,0,453,452,1,0,0,0,453,
  	454,1,0,0,0,454,459,1,0,0,0,455,456,5,73,0,0,456,458,3,68,34,0,457,455,
  	1,0,0,0,458,461,1,0,0,0,459,457,1,0,0,0,459,460,1,0,0,0,460,462,1,0,0,
  	0,461,459,1,0,0,0,462,463,5,81,0,0,463,57,1,0,0,0,464,465,5,8,0,0,465,
  	466,5,107,0,0,466,467,5,70,0,0,467,484,5,107,0,0,468,472,5,78,0,0,469,
  	470,5,107,0,0,470,471,5,82,0,0,471,473,3,68,34,0,472,469,1,0,0,0,472,
  	473,1,0,0,0,473,480,1,0,0,0,474,475,5,73,0,0,475,476,5,107,0,0,476,477,
  	5,82,0,0,477,479,3,68,34,0,478,474,1,0,0,0,479,482,1,0,0,0,480,478,1,
  	0,0,0,480,481,1,0,0,0,481,483,1,0,0,0,482,480,1,0,0,0,483,485,5,79,0,
  	0,484,468,1,0,0,0,484,485,1,0,0,0,485,59,1,0,0,0,486,487,5,31,0,0,487,
  	488,3,66,33,0,488,489,5,73,0,0,489,490,3,66,33,0,490,61,1,0,0,0,491,492,
  	5,34,0,0,492,497,3,68,34,0,493,494,5,73,0,0,494,496,3,68,34,0,495,493,
  	1,0,0,0,496,499,1,0,0,0,497,495,1,0,0,0,497,498,1,0,0,0,498,500,1,0,0,
  	0,499,497,1,0,0,0,500,501,3,2,1,0,501,63,1,0,0,0,502,503,5,36,0,0,503,
  	504,3,68,34,0,504,505,3,2,1,0,505,506,5,10,0,0,506,507,5,36,0,0,507,65,
  	1,0,0,0,508,521,5,107,0,0,509,511,5,80,0,0,510,512,3,68,34,0,511,510,
  	1,0,0,0,511,512,1,0,0,0,512,517,1,0,0,0,513,514,5,73,0,0,514,516,3,68,
  	34,0,515,513,1,0,0,0,516,519,1,0,0,0,517,515,1,0,0,0,517,518,1,0,0,0,
  	518,520,1,0,0,0,519,517,1,0,0,0,520,522,5,81,0,0,521,509,1,0,0,0,521,
  	522,1,0,0,0,522,527,1,0,0,0,523,524,5,72,0,0,524,526,5,107,0,0,525,523,
  	1,0,0,0,526,529,1,0,0,0,527,525,1,0,0,0,527,528,1,0,0,0,528,67,1,0,0,
  	0,529,527,1,0,0,0,530,531,6,34,-1,0,531,532,5,78,0,0,532,533,3,68,34,
  	0,533,534,5,79,0,0,534,657,1,0,0,0,535,657,5,37,0,0,536,657,3,74,37,0,
  	537,657,3,26,13,0,538,657,3,66,33,0,539,540,5,90,0,0,540,657,3,68,34,
  	52,541,542,5,89,0,0,542,657,3,68,34,51,543,544,5,65,0,0,544,657,3,68,
  	34,50,545,546,5,66,0,0,546,657,3,68,34,49,547,549,5,67,0,0,548,550,5,
  	78,0,0,549,548,1,0,0,0,549,550,1,0,0,0,550,551,1,0,0,0,551,554,3,68,34,
  	0,552,553,5,35,0,0,553,555,3,68,34,0,554,552,1,0,0,0,554,555,1,0,0,0,
  	555,557,1,0,0,0,556,558,5,79,0,0,557,556,1,0,0,0,557,558,1,0,0,0,558,
  	657,1,0,0,0,559,560,5,38,0,0,560,657,3,68,34,47,561,562,5,97,0,0,562,
  	657,3,68,34,46,563,564,5,98,0,0,564,657,3,68,34,45,565,657,5,56,0,0,566,
  	657,5,55,0,0,567,657,5,48,0,0,568,569,5,43,0,0,569,657,3,68,34,41,570,
  	571,5,49,0,0,571,657,3,68,34,40,572,573,5,51,0,0,573,657,3,68,34,39,574,
  	575,5,39,0,0,575,657,3,68,34,38,576,577,5,40,0,0,577,657,3,68,34,37,578,
  	579,5,41,0,0,579,657,3,68,34,36,580,581,5,42,0,0,581,657,3,68,34,35,582,
  	583,5,44,0,0,583,657,3,68,34,34,584,585,5,45,0,0,585,657,3,68,34,33,586,
  	587,5,50,0,0,587,657,3,68,34,32,588,589,5,46,0,0,589,657,3,68,34,31,590,
  	591,5,47,0,0,591,657,3,68,34,30,592,593,5,52,0,0,593,657,3,68,34,29,594,
  	595,5,53,0,0,595,657,3,68,34,28,596,597,5,54,0,0,597,657,3,68,34,27,598,
  	599,5,57,0,0,599,657,3,68,34,26,600,601,5,58,0,0,601,657,3,68,34,25,602,
  	604,5,59,0,0,603,605,5,78,0,0,604,603,1,0,0,0,604,605,1,0,0,0,605,606,
  	1,0,0,0,606,607,3,68,34,0,607,608,5,73,0,0,608,609,3,68,34,0,609,610,
  	5,73,0,0,610,612,3,68,34,0,611,613,5,79,0,0,612,611,1,0,0,0,612,613,1,
  	0,0,0,613,657,1,0,0,0,614,616,5,60,0,0,615,617,5,78,0,0,616,615,1,0,0,
  	0,616,617,1,0,0,0,617,618,1,0,0,0,618,619,3,68,34,0,619,620,5,73,0,0,
  	620,622,3,68,34,0,621,623,5,79,0,0,622,621,1,0,0,0,622,623,1,0,0,0,623,
  	657,1,0,0,0,624,626,5,61,0,0,625,627,5,78,0,0,626,625,1,0,0,0,626,627,
  	1,0,0,0,627,628,1,0,0,0,628,629,3,68,34,0,629,630,5,73,0,0,630,631,3,
  	68,34,0,631,632,5,73,0,0,632,634,3,68,34,0,633,635,5,79,0,0,634,633,1,
  	0,0,0,634,635,1,0,0,0,635,657,1,0,0,0,636,638,5,62,0,0,637,639,5,78,0,
  	0,638,637,1,0,0,0,638,639,1,0,0,0,639,640,1,0,0,0,640,641,3,68,34,0,641,
  	642,5,73,0,0,642,644,3,68,34,0,643,645,5,79,0,0,644,643,1,0,0,0,644,645,
  	1,0,0,0,645,657,1,0,0,0,646,647,5,63,0,0,647,657,3,68,34,20,648,650,5,
  	28,0,0,649,651,5,78,0,0,650,649,1,0,0,0,650,651,1,0,0,0,651,652,1,0,0,
  	0,652,654,5,107,0,0,653,655,5,79,0,0,654,653,1,0,0,0,654,655,1,0,0,0,
  	655,657,1,0,0,0,656,530,1,0,0,0,656,535,1,0,0,0,656,536,1,0,0,0,656,537,
  	1,0,0,0,656,538,1,0,0,0,656,539,1,0,0,0,656,541,1,0,0,0,656,543,1,0,0,
  	0,656,545,1,0,0,0,656,547,1,0,0,0,656,559,1,0,0,0,656,561,1,0,0,0,656,
  	563,1,0,0,0,656,565,1,0,0,0,656,566,1,0,0,0,656,567,1,0,0,0,656,568,1,
  	0,0,0,656,570,1,0,0,0,656,572,1,0,0,0,656,574,1,0,0,0,656,576,1,0,0,0,
  	656,578,1,0,0,0,656,580,1,0,0,0,656,582,1,0,0,0,656,584,1,0,0,0,656,586,
  	1,0,0,0,656,588,1,0,0,0,656,590,1,0,0,0,656,592,1,0,0,0,656,594,1,0,0,
  	0,656,596,1,0,0,0,656,598,1,0,0,0,656,600,1,0,0,0,656,602,1,0,0,0,656,
  	614,1,0,0,0,656,624,1,0,0,0,656,636,1,0,0,0,656,646,1,0,0,0,656,648,1,
  	0,0,0,657,714,1,0,0,0,658,659,10,18,0,0,659,660,5,88,0,0,660,713,3,68,
  	34,18,661,662,10,17,0,0,662,663,5,92,0,0,663,713,3,68,34,18,664,665,10,
  	16,0,0,665,666,5,91,0,0,666,713,3,68,34,17,667,668,10,15,0,0,668,669,
  	5,96,0,0,669,713,3,68,34,16,670,671,10,14,0,0,671,672,5,95,0,0,672,713,
  	3,68,34,15,673,674,10,13,0,0,674,675,5,89,0,0,675,713,3,68,34,14,676,
  	677,10,12,0,0,677,678,5,90,0,0,678,713,3,68,34,13,679,680,10,11,0,0,680,
  	681,5,93,0,0,681,713,3,68,34,12,682,683,10,10,0,0,683,684,5,94,0,0,684,
  	713,3,68,34,11,685,686,10,9,0,0,686,687,5,82,0,0,687,713,3,68,34,10,688,
  	689,10,8,0,0,689,690,5,83,0,0,690,713,3,68,34,9,691,692,10,7,0,0,692,
  	693,5,84,0,0,693,713,3,68,34,8,694,695,10,6,0,0,695,696,5,85,0,0,696,
  	713,3,68,34,7,697,698,10,5,0,0,698,699,5,86,0,0,699,713,3,68,34,6,700,
  	701,10,4,0,0,701,702,5,87,0,0,702,713,3,68,34,5,703,704,10,3,0,0,704,
  	705,5,99,0,0,705,713,3,68,34,4,706,707,10,2,0,0,707,708,5,100,0,0,708,
  	713,3,68,34,3,709,710,10,1,0,0,710,711,5,101,0,0,711,713,3,68,34,2,712,
  	658,1,0,0,0,712,661,1,0,0,0,712,664,1,0,0,0,712,667,1,0,0,0,712,670,1,
  	0,0,0,712,673,1,0,0,0,712,676,1,0,0,0,712,679,1,0,0,0,712,682,1,0,0,0,
  	712,685,1,0,0,0,712,688,1,0,0,0,712,691,1,0,0,0,712,694,1,0,0,0,712,697,
  	1,0,0,0,712,700,1,0,0,0,712,703,1,0,0,0,712,706,1,0,0,0,712,709,1,0,0,
  	0,713,716,1,0,0,0,714,712,1,0,0,0,714,715,1,0,0,0,715,69,1,0,0,0,716,
  	714,1,0,0,0,717,718,7,2,0,0,718,71,1,0,0,0,719,720,7,3,0,0,720,73,1,0,
  	0,0,721,725,3,76,38,0,722,725,3,78,39,0,723,725,3,80,40,0,724,721,1,0,
  	0,0,724,722,1,0,0,0,724,723,1,0,0,0,725,75,1,0,0,0,726,728,7,4,0,0,727,
  	726,1,0,0,0,727,728,1,0,0,0,728,729,1,0,0,0,729,730,5,105,0,0,730,77,
  	1,0,0,0,731,738,5,103,0,0,732,738,5,104,0,0,733,735,7,4,0,0,734,733,1,
  	0,0,0,734,735,1,0,0,0,735,736,1,0,0,0,736,738,5,106,0,0,737,731,1,0,0,
  	0,737,732,1,0,0,0,737,734,1,0,0,0,738,79,1,0,0,0,739,740,5,102,0,0,740,
  	81,1,0,0,0,86,88,93,99,103,106,111,116,120,146,151,154,161,166,174,177,
  	183,187,193,198,203,218,223,231,243,249,257,263,274,282,293,298,303,310,
  	320,323,329,331,335,339,342,345,347,353,356,361,365,371,377,381,386,404,
  	412,419,428,435,441,453,459,472,480,484,497,511,517,521,527,549,554,557,
  	604,612,616,622,626,634,638,644,650,654,656,712,714,724,727,734,737
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
    setState(82);
    statements();
    setState(83);
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
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(85);
                separator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(88); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(93);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == DaricParser::COLON

          || _la == DaricParser::NEWLINE) {
            setState(90);
            separator();
            setState(95);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(96);
          statement();
          setState(99);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
          case 1: {
            setState(97);
            separator();
            break;
          }

          case 2: {
            setState(98);
            match(DaricParser::EOF);
            break;
          }

          default:
            break;
          } 
        }
        setState(105);
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
    setState(118); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(111);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(108);
                match(DaricParser::COLON);
                setState(113);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(114);
              statement();
              setState(116);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(115);
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
      setState(120); 
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
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      case_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      const_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(126);
      data();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(127);
      dataLabel();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(128);
      dim();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(129);
      end();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(130);
      for_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(131);
      if_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(132);
      ifml();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(133);
      importlib();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(134);
      option();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(135);
      procedure();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(136);
      print();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(137);
      read();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(138);
      repeat();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(139);
      restore();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(140);
      return_();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(141);
      struct_();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(142);
      structDim();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(143);
      structInstance();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(144);
      swap();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(145);
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
    setState(149); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(148);
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
      setState(151); 
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

std::vector<DaricParser::AssignmentContext *> DaricParser::AssignContext::assignment() {
  return getRuleContexts<DaricParser::AssignmentContext>();
}

DaricParser::AssignmentContext* DaricParser::AssignContext::assignment(size_t i) {
  return getRuleContext<DaricParser::AssignmentContext>(i);
}

tree::TerminalNode* DaricParser::AssignContext::LET() {
  return getToken(DaricParser::LET, 0);
}

std::vector<tree::TerminalNode *> DaricParser::AssignContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::AssignContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
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
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(153);
      match(DaricParser::LET);
    }
    setState(156);
    assignment();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(157);
      match(DaricParser::COMMA);
      setState(158);
      assignment();
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(166);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(164);
      match(DaricParser::COLON);
      setState(165);
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

//----------------- AssignmentContext ------------------------------------------------------------------

DaricParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DaricParser::VariableContext* DaricParser::AssignmentContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

tree::TerminalNode* DaricParser::AssignmentContext::EQ() {
  return getToken(DaricParser::EQ, 0);
}

DaricParser::ExpressionContext* DaricParser::AssignmentContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}


size_t DaricParser::AssignmentContext::getRuleIndex() const {
  return DaricParser::RuleAssignment;
}


std::any DaricParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::AssignmentContext* DaricParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, DaricParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    variable();
    setState(169);
    match(DaricParser::EQ);
    setState(170);
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
  enterRule(_localctx, 14, DaricParser::RuleCall);
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
    setState(172);
    match(DaricParser::IDENTIFIER);
    setState(174);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(173);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(177);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(176);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(179);
      match(DaricParser::COMMA);
      setState(180);
      expression(0);
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(186);
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
  enterRule(_localctx, 16, DaricParser::RuleCase);
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
    setState(189);
    match(DaricParser::CASE);
    setState(190);
    expression(0);
    setState(191);
    match(DaricParser::OF);
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(192);
      separator();
    }
    setState(198);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::WHEN) {
      setState(195);
      when();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(201);
      match(DaricParser::OTHERWISE);
      setState(202);
      statements();
    }
    setState(205);
    match(DaricParser::END);
    setState(206);
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
  enterRule(_localctx, 18, DaricParser::RuleConst);
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
    setState(208);
    match(DaricParser::CONST);
    setState(209);
    match(DaricParser::IDENTIFIER);
    setState(210);
    match(DaricParser::EQ);
    setState(211);
    literal();
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(212);
      match(DaricParser::COMMA);
      setState(213);
      match(DaricParser::IDENTIFIER);
      setState(214);
      match(DaricParser::EQ);
      setState(215);
      literal();
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(223);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(221);
      match(DaricParser::COLON);
      setState(222);
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
  enterRule(_localctx, 20, DaricParser::RuleData);
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
    setState(225);
    match(DaricParser::DATA);
    setState(226);
    integerLiteral();
    setState(231);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(227);
      match(DaricParser::COMMA);
      setState(228);
      integerLiteral();
      setState(233);
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
  enterRule(_localctx, 22, DaricParser::RuleDataLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(DaricParser::DATALABEL);
    setState(235);
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

std::vector<DaricParser::ExpressionContext *> DaricParser::DimContext::expression() {
  return getRuleContexts<DaricParser::ExpressionContext>();
}

DaricParser::ExpressionContext* DaricParser::DimContext::expression(size_t i) {
  return getRuleContext<DaricParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::DimContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::DimContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
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
  enterRule(_localctx, 24, DaricParser::RuleDim);
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
    setState(237);
    match(DaricParser::DIM);
    setState(238);
    match(DaricParser::IDENTIFIER);
    setState(239);
    match(DaricParser::COLON);
    setState(240);
    type();
    setState(241);
    match(DaricParser::SOPEN);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -137170518016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(242);
      expression(0);
    }
    setState(249);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(245);
      match(DaricParser::COMMA);
      setState(246);
      expression(0);
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(252);
    match(DaricParser::SCLOSE);
   
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
  enterRule(_localctx, 26, DaricParser::RuleExprcall);
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
    setState(254);
    match(DaricParser::IDENTIFIER);
    setState(255);
    match(DaricParser::LPAREN);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -137170518016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(256);
      expression(0);
    }
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(259);
      match(DaricParser::COMMA);
      setState(260);
      expression(0);
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(266);
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

tree::TerminalNode* DaricParser::EndContext::END() {
  return getToken(DaricParser::END, 0);
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
  enterRule(_localctx, 28, DaricParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(DaricParser::END);
   
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
  enterRule(_localctx, 30, DaricParser::RuleFor);
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
    setState(270);
    match(DaricParser::FOR);
    setState(271);
    match(DaricParser::IDENTIFIER);
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(272);
      match(DaricParser::COLON);
      setState(273);
      type();
    }
    setState(276);
    match(DaricParser::EQ);
    setState(277);
    expression(0);
    setState(278);
    match(DaricParser::TO);
    setState(279);
    expression(0);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(280);
      match(DaricParser::STEP);
      setState(281);
      expression(0);
    }
    setState(284);
    statements();
    setState(285);
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
  enterRule(_localctx, 32, DaricParser::RuleImportlib);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(DaricParser::IMPORT);
    setState(288);
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
  enterRule(_localctx, 34, DaricParser::RuleIf);
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
    setState(290);
    match(DaricParser::IF);
    setState(291);
    expression(0);
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(292);
      match(DaricParser::THEN);
    }
    setState(295);
    statementsl();
    setState(298);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(296);
      match(DaricParser::ELSE);
      setState(297);
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
  enterRule(_localctx, 36, DaricParser::RuleIfml);
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
    setState(300);
    match(DaricParser::IF);
    setState(301);
    expression(0);
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(302);
      match(DaricParser::THEN);
    }
    setState(305);
    match(DaricParser::NEWLINE);
    setState(306);
    statements();
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(307);
      match(DaricParser::ELSE);
      setState(308);
      match(DaricParser::NEWLINE);
      setState(309);
      statements();
    }
    setState(312);
    match(DaricParser::NEWLINE);
    setState(313);
    match(DaricParser::END);
    setState(314);
    match(DaricParser::IF);
   
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
    setState(316);
    match(DaricParser::OPTION);
    setState(317);
    match(DaricParser::IDENTIFIER);
    setState(320);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(318);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(319);
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
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(322);
      match(DaricParser::REF);
    }
    setState(325);
    match(DaricParser::IDENTIFIER);
    setState(331);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(326);
      match(DaricParser::COLON);
      setState(329);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case DaricParser::BYTE:
        case DaricParser::INT:
        case DaricParser::FLOAT:
        case DaricParser::STRING: {
          setState(327);
          type();
          break;
        }

        case DaricParser::IDENTIFIER: {
          setState(328);
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
    setState(333);
    match(DaricParser::PRINT);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SYS) {
      setState(334);
      match(DaricParser::SYS);
    }
    setState(347);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(337);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(342);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(339);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(338);
          match(DaricParser::WITH);
        }
        setState(341);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(344);
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
    setState(349);
    match(DaricParser::DEF);
    setState(350);
    match(DaricParser::IDENTIFIER);
    setState(353);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(351);
      match(DaricParser::COLON);
      setState(352);
      type();
      break;
    }

    default:
      break;
    }
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(355);
      match(DaricParser::LPAREN);
    }
    setState(361);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(358);
        match(DaricParser::NEWLINE); 
      }
      setState(363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(365);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(364);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(377);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(367);
      match(DaricParser::COMMA);
      setState(371);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(368);
        match(DaricParser::NEWLINE);
        setState(373);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(374);
      parameter();
      setState(379);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(380);
      match(DaricParser::RPAREN);
    }
    setState(386);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(383);
        separator(); 
      }
      setState(388);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(389);
    statements();
    setState(390);
    match(DaricParser::END);
    setState(391);
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
    setState(393);
    match(DaricParser::REPEAT);
    setState(394);
    statements();
    setState(395);
    match(DaricParser::UNTIL);
    setState(396);
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
    setState(398);
    match(DaricParser::READ);
    setState(399);
    variable();
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(400);
      match(DaricParser::COMMA);
      setState(401);
      variable();
      setState(406);
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
    setState(407);
    match(DaricParser::RESTORE);
    setState(408);
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
    setState(410);
    match(DaricParser::RETURN);
    setState(412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(411);
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
    setState(414);
    match(DaricParser::RECORD);
    setState(415);
    match(DaricParser::IDENTIFIER);
    setState(419);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(416);
      match(DaricParser::NEWLINE);
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(422);
    match(DaricParser::IDENTIFIER);
    setState(423);
    match(DaricParser::COLON);
    setState(424);
    typeOrStruct();
    setState(435);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(426); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(425);
          match(DaricParser::NEWLINE);
          setState(428); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::NEWLINE);
        setState(430);
        match(DaricParser::IDENTIFIER);
        setState(431);
        match(DaricParser::COLON);
        setState(432);
        typeOrStruct(); 
      }
      setState(437);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(438);
      match(DaricParser::NEWLINE);
      setState(443);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(444);
    match(DaricParser::END);
    setState(445);
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
    setState(447);
    match(DaricParser::DIM);
    setState(448);
    match(DaricParser::IDENTIFIER);
    setState(449);
    match(DaricParser::COLON);
    setState(450);
    match(DaricParser::IDENTIFIER);
    setState(451);
    match(DaricParser::SOPEN);
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -137170518016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(452);
      expression(0);
    }
    setState(459);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(455);
      match(DaricParser::COMMA);
      setState(456);
      expression(0);
      setState(461);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(462);
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
    setState(464);
    match(DaricParser::DIM);
    setState(465);
    match(DaricParser::IDENTIFIER);
    setState(466);
    match(DaricParser::COLON);
    setState(467);
    match(DaricParser::IDENTIFIER);
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(468);
      match(DaricParser::LPAREN);
      setState(472);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(469);
        match(DaricParser::IDENTIFIER);
        setState(470);
        match(DaricParser::EQ);
        setState(471);
        expression(0);
      }
      setState(480);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(474);
        match(DaricParser::COMMA);
        setState(475);
        match(DaricParser::IDENTIFIER);
        setState(476);
        match(DaricParser::EQ);
        setState(477);
        expression(0);
        setState(482);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(483);
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
    setState(486);
    match(DaricParser::SWAP);
    setState(487);
    variable();
    setState(488);
    match(DaricParser::COMMA);
    setState(489);
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
    setState(491);
    match(DaricParser::WHEN);
    setState(492);
    expression(0);
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(493);
      match(DaricParser::COMMA);
      setState(494);
      expression(0);
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(500);
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
    setState(502);
    match(DaricParser::WHILE);
    setState(503);
    expression(0);
    setState(504);
    statements();
    setState(505);
    match(DaricParser::END);
    setState(506);
    match(DaricParser::WHILE);
   
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
  enterRule(_localctx, 66, DaricParser::RuleVariable);
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
    setState(508);
    match(DaricParser::IDENTIFIER);
    setState(521);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(509);
      match(DaricParser::SOPEN);
      setState(511);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -137170518016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 8671589310471) != 0) {
        setState(510);
        expression(0);
      }
      setState(517);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(513);
        match(DaricParser::COMMA);
        setState(514);
        expression(0);
        setState(519);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(520);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(527);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(523);
        match(DaricParser::DOT);
        setState(524);
        match(DaricParser::IDENTIFIER); 
      }
      setState(529);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
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

tree::TerminalNode* DaricParser::ExpressionContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
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
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, DaricParser::RuleExpression, precedence);

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
    setState(656);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      setState(531);
      match(DaricParser::LPAREN);
      setState(532);
      expression(0);
      setState(533);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(535);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(536);
      literal();
      break;
    }

    case 4: {
      setState(537);
      exprcall();
      break;
    }

    case 5: {
      setState(538);
      variable();
      break;
    }

    case 6: {
      setState(539);
      match(DaricParser::MINUS);
      setState(540);
      expression(52);
      break;
    }

    case 7: {
      setState(541);
      match(DaricParser::PLUS);
      setState(542);
      expression(51);
      break;
    }

    case 8: {
      setState(543);
      match(DaricParser::INT);
      setState(544);
      expression(50);
      break;
    }

    case 9: {
      setState(545);
      match(DaricParser::FLOAT);
      setState(546);
      expression(49);
      break;
    }

    case 10: {
      setState(547);
      match(DaricParser::STRING);
      setState(549);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
      case 1: {
        setState(548);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(551);
      expression(0);
      setState(554);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(552);
        match(DaricParser::WITH);
        setState(553);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(557);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(556);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(559);
      match(DaricParser::ABS);
      setState(560);
      expression(47);
      break;
    }

    case 12: {
      setState(561);
      match(DaricParser::COMP);
      setState(562);
      expression(46);
      break;
    }

    case 13: {
      setState(563);
      match(DaricParser::NOT);
      setState(564);
      expression(45);
      break;
    }

    case 14: {
      setState(565);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(566);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(567);
      match(DaricParser::PI);
      break;
    }

    case 17: {
      setState(568);
      match(DaricParser::DEG);
      setState(569);
      expression(41);
      break;
    }

    case 18: {
      setState(570);
      match(DaricParser::RAD);
      setState(571);
      expression(40);
      break;
    }

    case 19: {
      setState(572);
      match(DaricParser::SGN);
      setState(573);
      expression(39);
      break;
    }

    case 20: {
      setState(574);
      match(DaricParser::ACS);
      setState(575);
      expression(38);
      break;
    }

    case 21: {
      setState(576);
      match(DaricParser::ASN);
      setState(577);
      expression(37);
      break;
    }

    case 22: {
      setState(578);
      match(DaricParser::ATN);
      setState(579);
      expression(36);
      break;
    }

    case 23: {
      setState(580);
      match(DaricParser::COS);
      setState(581);
      expression(35);
      break;
    }

    case 24: {
      setState(582);
      match(DaricParser::EXP);
      setState(583);
      expression(34);
      break;
    }

    case 25: {
      setState(584);
      match(DaricParser::FLOOR);
      setState(585);
      expression(33);
      break;
    }

    case 26: {
      setState(586);
      match(DaricParser::ROUND);
      setState(587);
      expression(32);
      break;
    }

    case 27: {
      setState(588);
      match(DaricParser::LN);
      setState(589);
      expression(31);
      break;
    }

    case 28: {
      setState(590);
      match(DaricParser::LOG);
      setState(591);
      expression(30);
      break;
    }

    case 29: {
      setState(592);
      match(DaricParser::SIN);
      setState(593);
      expression(29);
      break;
    }

    case 30: {
      setState(594);
      match(DaricParser::SQR);
      setState(595);
      expression(28);
      break;
    }

    case 31: {
      setState(596);
      match(DaricParser::TAN);
      setState(597);
      expression(27);
      break;
    }

    case 32: {
      setState(598);
      match(DaricParser::ASC);
      setState(599);
      expression(26);
      break;
    }

    case 33: {
      setState(600);
      match(DaricParser::CHR);
      setState(601);
      expression(25);
      break;
    }

    case 34: {
      setState(602);
      match(DaricParser::INSTR);
      setState(604);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(603);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(606);
      expression(0);
      setState(607);
      match(DaricParser::COMMA);
      setState(608);
      expression(0);
      setState(609);
      match(DaricParser::COMMA);
      setState(610);
      expression(0);
      setState(612);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(611);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      setState(614);
      match(DaricParser::LEFT);
      setState(616);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
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
      setState(619);
      match(DaricParser::COMMA);
      setState(620);
      expression(0);
      setState(622);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(621);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 36: {
      setState(624);
      match(DaricParser::MID);
      setState(626);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(625);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(628);
      expression(0);
      setState(629);
      match(DaricParser::COMMA);
      setState(630);
      expression(0);
      setState(631);
      match(DaricParser::COMMA);
      setState(632);
      expression(0);
      setState(634);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(633);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(636);
      match(DaricParser::RIGHT);
      setState(638);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(637);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(640);
      expression(0);
      setState(641);
      match(DaricParser::COMMA);
      setState(642);
      expression(0);
      setState(644);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(643);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(646);
      match(DaricParser::LEN);
      setState(647);
      expression(20);
      break;
    }

    case 39: {
      setState(648);
      match(DaricParser::SIZE);
      setState(650);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(649);
        match(DaricParser::LPAREN);
      }
      setState(652);
      match(DaricParser::IDENTIFIER);
      setState(654);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
      case 1: {
        setState(653);
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
    setState(714);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(712);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(658);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(659);
          match(DaricParser::HAT);
          setState(660);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(661);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(662);
          match(DaricParser::DIVIDE);
          setState(663);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(664);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(665);
          match(DaricParser::MULTIPLY);
          setState(666);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(667);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(668);
          match(DaricParser::DIV);
          setState(669);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(670);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(671);
          match(DaricParser::MOD);
          setState(672);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(673);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(674);
          match(DaricParser::PLUS);
          setState(675);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(676);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(677);
          match(DaricParser::MINUS);
          setState(678);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(679);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(680);
          match(DaricParser::SHL);
          setState(681);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(682);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(683);
          match(DaricParser::SHR);
          setState(684);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(685);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(686);
          match(DaricParser::EQ);
          setState(687);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(688);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(689);
          match(DaricParser::NE);
          setState(690);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(691);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(692);
          match(DaricParser::GT);
          setState(693);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(694);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(695);
          match(DaricParser::GE);
          setState(696);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(697);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(698);
          match(DaricParser::LT);
          setState(699);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(700);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(701);
          match(DaricParser::LE);
          setState(702);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(703);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(704);
          match(DaricParser::AND);
          setState(705);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(706);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(707);
          match(DaricParser::OR);
          setState(708);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(709);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(710);
          match(DaricParser::EOR);
          setState(711);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(716);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
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
  enterRule(_localctx, 70, DaricParser::RuleType);
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
    setState(717);
    _la = _input->LA(1);
    if (!((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 15) != 0)) {
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
  enterRule(_localctx, 72, DaricParser::RuleTypeOrStruct);
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
    setState(719);
    _la = _input->LA(1);
    if (!((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 74, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(724);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(721);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(722);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(723);
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
  enterRule(_localctx, 76, DaricParser::RuleFloatLiteral);
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
    setState(727);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(726);
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
    setState(729);
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
  enterRule(_localctx, 78, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(737);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(731);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(732);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(734);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(733);
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
        setState(736);
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
  enterRule(_localctx, 80, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(739);
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
    case 34: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

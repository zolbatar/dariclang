
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
      "structDim", "structInstance", "swap", "when", "while", "clear", "get", 
      "set", "variable", "expression", "type", "typeOrStruct", "literal", 
      "floatLiteral", "integerLiteral", "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'$'", 
      "'#'", "':'", "';'", "'.'", "','", "'''", "", "'%'", "'_'", "'('", 
      "')'", "'['", "']'", "'<-'", "'->'", "'='", "'<>'", "'>'", "'>='", 
      "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
      "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "AT", "CASE", "CONST", "CLEAR", 
      "DATA", "DATALABEL", "DEF", "DIM", "ELSE", "END", "FOR", "FROM", "HAS", 
      "IF", "IMPORT", "INPUT", "INTO", "LET", "NEXT", "OF", "OPTION", "OTHERWISE", 
      "PRINT", "QUIT", "READ", "RECORD", "REF", "REM", "REPEAT", "RESTORE", 
      "RETURN", "THEN", "SIZE", "STEP", "SYS", "SWAP", "TO", "UNTIL", "WHEN", 
      "WITH", "WHILE", "MAIN", "ABS", "ACS", "ASN", "ATN", "COS", "DEG", 
      "EXP", "FLOOR", "LN", "LOG", "MIN", "MAX", "PI", "RAD", "ROUND", "SGN", 
      "SIN", "SQR", "TAN", "VECTOR", "LIST", "MAP", "STACK", "QUEUE", "SET", 
      "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", "MID", "RIGHT", "LEN", 
      "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", "COLON", "SEMICOLON", 
      "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", "LPAREN", 
      "RPAREN", "SOPEN", "SCLOSE", "ASSIGNL", "ASSIGNR", "EQ", "NE", "GT", 
      "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", 
      "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", 
      "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,125,818,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,1,0,1,1,4,1,93,8,1,11,1,12,1,94,1,1,5,1,98,8,1,10,
  	1,12,1,101,9,1,1,1,1,1,1,1,3,1,106,8,1,5,1,108,8,1,10,1,12,1,111,9,1,
  	3,1,113,8,1,1,2,5,2,116,8,2,10,2,12,2,119,9,2,1,2,1,2,3,2,123,8,2,4,2,
  	125,8,2,11,2,12,2,126,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,157,
  	8,3,1,4,4,4,160,8,4,11,4,12,4,161,1,5,3,5,165,8,5,1,5,1,5,1,5,3,5,170,
  	8,5,1,5,1,5,1,5,1,6,1,6,3,6,177,8,6,1,6,3,6,180,8,6,1,6,1,6,5,6,184,8,
  	6,10,6,12,6,187,9,6,1,6,3,6,190,8,6,1,7,1,7,1,7,1,7,3,7,196,8,7,1,7,5,
  	7,199,8,7,10,7,12,7,202,9,7,1,7,1,7,3,7,206,8,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,3,8,215,8,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,223,8,8,10,8,12,8,226,9,
  	8,1,9,1,9,1,9,1,9,5,9,232,8,9,10,9,12,9,235,9,9,1,10,1,10,1,10,1,11,1,
  	11,1,11,1,11,1,11,1,11,3,11,246,8,11,1,11,1,11,5,11,250,8,11,10,11,12,
  	11,253,9,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,288,8,11,1,12,1,12,1,12,3,
  	12,293,8,12,1,12,1,12,5,12,297,8,12,10,12,12,12,300,9,12,1,12,1,12,1,
  	13,1,13,1,14,1,14,1,14,1,14,3,14,310,8,14,1,14,1,14,1,14,1,14,1,14,1,
  	14,3,14,318,8,14,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,3,16,329,
  	8,16,1,16,1,16,1,16,3,16,334,8,16,1,17,1,17,1,17,3,17,339,8,17,1,17,1,
  	17,1,17,1,17,1,17,3,17,346,8,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,
  	19,1,19,1,19,1,19,3,19,359,8,19,1,20,3,20,362,8,20,1,20,1,20,1,20,1,20,
  	3,20,368,8,20,3,20,370,8,20,1,21,1,21,3,21,374,8,21,1,21,1,21,3,21,378,
  	8,21,1,21,3,21,381,8,21,1,21,3,21,384,8,21,3,21,386,8,21,1,22,1,22,1,
  	22,1,22,3,22,392,8,22,1,22,3,22,395,8,22,1,22,5,22,398,8,22,10,22,12,
  	22,401,9,22,1,22,3,22,404,8,22,1,22,1,22,5,22,408,8,22,10,22,12,22,411,
  	9,22,1,22,5,22,414,8,22,10,22,12,22,417,9,22,1,22,3,22,420,8,22,1,22,
  	5,22,423,8,22,10,22,12,22,426,9,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,
  	1,23,1,23,1,24,1,24,1,24,1,24,5,24,441,8,24,10,24,12,24,444,9,24,1,25,
  	1,25,1,25,1,26,1,26,3,26,451,8,26,1,27,1,27,1,27,5,27,456,8,27,10,27,
  	12,27,459,9,27,1,27,1,27,1,27,1,27,4,27,465,8,27,11,27,12,27,466,1,27,
  	1,27,1,27,5,27,472,8,27,10,27,12,27,475,9,27,1,27,5,27,478,8,27,10,27,
  	12,27,481,9,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,3,28,492,
  	8,28,1,28,1,28,5,28,496,8,28,10,28,12,28,499,9,28,1,28,1,28,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,3,29,511,8,29,1,29,1,29,1,29,1,29,5,29,
  	517,8,29,10,29,12,29,520,9,29,1,29,3,29,523,8,29,1,30,1,30,1,30,1,30,
  	1,30,1,31,1,31,1,31,1,31,5,31,534,8,31,10,31,12,31,537,9,31,1,31,1,31,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,35,
  	1,35,3,35,556,8,35,1,35,1,35,1,35,1,36,1,36,1,36,3,36,564,8,36,1,36,1,
  	36,5,36,568,8,36,10,36,12,36,571,9,36,1,36,3,36,574,8,36,1,36,1,36,5,
  	36,578,8,36,10,36,12,36,581,9,36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,3,37,606,8,37,1,37,1,37,1,37,3,37,611,8,37,1,37,3,37,614,8,37,
  	1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,
  	1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,
  	1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,3,37,
  	657,8,37,1,37,1,37,1,37,1,37,3,37,663,8,37,1,37,1,37,3,37,667,8,37,1,
  	37,1,37,1,37,1,37,3,37,673,8,37,1,37,1,37,1,37,1,37,1,37,1,37,3,37,681,
  	8,37,1,37,1,37,1,37,1,37,1,37,1,37,3,37,689,8,37,1,37,1,37,3,37,693,8,
  	37,1,37,1,37,1,37,1,37,3,37,699,8,37,1,37,1,37,3,37,703,8,37,1,37,1,37,
  	1,37,1,37,1,37,1,37,3,37,711,8,37,1,37,1,37,3,37,715,8,37,1,37,1,37,1,
  	37,1,37,3,37,721,8,37,1,37,1,37,1,37,1,37,3,37,727,8,37,1,37,1,37,3,37,
  	731,8,37,3,37,733,8,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,5,37,789,8,37,10,37,12,37,792,9,37,1,38,1,38,1,39,1,39,1,
  	40,1,40,1,40,3,40,801,8,40,1,41,3,41,804,8,41,1,41,1,41,1,42,1,42,1,42,
  	3,42,811,8,42,1,42,3,42,814,8,42,1,43,1,43,1,43,0,1,74,44,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,
  	58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,0,5,1,1,85,85,2,0,85,85,
  	90,90,1,0,79,82,2,0,79,82,124,124,1,0,106,107,954,0,88,1,0,0,0,2,112,
  	1,0,0,0,4,124,1,0,0,0,6,156,1,0,0,0,8,159,1,0,0,0,10,164,1,0,0,0,12,174,
  	1,0,0,0,14,191,1,0,0,0,16,210,1,0,0,0,18,227,1,0,0,0,20,236,1,0,0,0,22,
  	239,1,0,0,0,24,289,1,0,0,0,26,303,1,0,0,0,28,305,1,0,0,0,30,322,1,0,0,
  	0,32,325,1,0,0,0,34,335,1,0,0,0,36,351,1,0,0,0,38,354,1,0,0,0,40,361,
  	1,0,0,0,42,371,1,0,0,0,44,387,1,0,0,0,46,431,1,0,0,0,48,436,1,0,0,0,50,
  	445,1,0,0,0,52,448,1,0,0,0,54,452,1,0,0,0,56,485,1,0,0,0,58,502,1,0,0,
  	0,60,524,1,0,0,0,62,529,1,0,0,0,64,540,1,0,0,0,66,546,1,0,0,0,68,549,
  	1,0,0,0,70,555,1,0,0,0,72,560,1,0,0,0,74,732,1,0,0,0,76,793,1,0,0,0,78,
  	795,1,0,0,0,80,800,1,0,0,0,82,803,1,0,0,0,84,813,1,0,0,0,86,815,1,0,0,
  	0,88,89,3,2,1,0,89,90,5,0,0,1,90,1,1,0,0,0,91,93,3,8,4,0,92,91,1,0,0,
  	0,93,94,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,113,1,0,0,0,96,98,3,8,
  	4,0,97,96,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,102,
  	1,0,0,0,101,99,1,0,0,0,102,105,3,6,3,0,103,106,3,8,4,0,104,106,5,0,0,
  	1,105,103,1,0,0,0,105,104,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,
  	99,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,113,1,
  	0,0,0,111,109,1,0,0,0,112,92,1,0,0,0,112,109,1,0,0,0,113,3,1,0,0,0,114,
  	116,5,85,0,0,115,114,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,117,118,
  	1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,0,120,122,3,6,3,0,121,123,7,0,0,
  	0,122,121,1,0,0,0,122,123,1,0,0,0,123,125,1,0,0,0,124,117,1,0,0,0,125,
  	126,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,5,1,0,0,0,128,157,3,10,
  	5,0,129,157,3,12,6,0,130,157,3,14,7,0,131,157,3,66,33,0,132,157,3,16,
  	8,0,133,157,3,18,9,0,134,157,3,20,10,0,135,157,3,22,11,0,136,157,3,26,
  	13,0,137,157,3,28,14,0,138,157,3,68,34,0,139,157,3,32,16,0,140,157,3,
  	34,17,0,141,157,3,36,18,0,142,157,3,30,15,0,143,157,3,38,19,0,144,157,
  	3,44,22,0,145,157,3,42,21,0,146,157,3,48,24,0,147,157,3,46,23,0,148,157,
  	3,50,25,0,149,157,3,52,26,0,150,157,3,70,35,0,151,157,3,54,27,0,152,157,
  	3,56,28,0,153,157,3,58,29,0,154,157,3,60,30,0,155,157,3,64,32,0,156,128,
  	1,0,0,0,156,129,1,0,0,0,156,130,1,0,0,0,156,131,1,0,0,0,156,132,1,0,0,
  	0,156,133,1,0,0,0,156,134,1,0,0,0,156,135,1,0,0,0,156,136,1,0,0,0,156,
  	137,1,0,0,0,156,138,1,0,0,0,156,139,1,0,0,0,156,140,1,0,0,0,156,141,1,
  	0,0,0,156,142,1,0,0,0,156,143,1,0,0,0,156,144,1,0,0,0,156,145,1,0,0,0,
  	156,146,1,0,0,0,156,147,1,0,0,0,156,148,1,0,0,0,156,149,1,0,0,0,156,150,
  	1,0,0,0,156,151,1,0,0,0,156,152,1,0,0,0,156,153,1,0,0,0,156,154,1,0,0,
  	0,156,155,1,0,0,0,157,7,1,0,0,0,158,160,7,1,0,0,159,158,1,0,0,0,160,161,
  	1,0,0,0,161,159,1,0,0,0,161,162,1,0,0,0,162,9,1,0,0,0,163,165,5,20,0,
  	0,164,163,1,0,0,0,164,165,1,0,0,0,165,166,1,0,0,0,166,169,3,72,36,0,167,
  	168,5,85,0,0,168,170,3,76,38,0,169,167,1,0,0,0,169,170,1,0,0,0,170,171,
  	1,0,0,0,171,172,5,99,0,0,172,173,3,74,37,0,173,11,1,0,0,0,174,176,5,124,
  	0,0,175,177,5,93,0,0,176,175,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,
  	178,180,3,74,37,0,179,178,1,0,0,0,179,180,1,0,0,0,180,185,1,0,0,0,181,
  	182,5,88,0,0,182,184,3,74,37,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,
  	1,0,0,0,185,186,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,188,190,5,94,
  	0,0,189,188,1,0,0,0,189,190,1,0,0,0,190,13,1,0,0,0,191,192,5,4,0,0,192,
  	193,3,74,37,0,193,195,5,22,0,0,194,196,3,8,4,0,195,194,1,0,0,0,195,196,
  	1,0,0,0,196,200,1,0,0,0,197,199,3,62,31,0,198,197,1,0,0,0,199,202,1,0,
  	0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,205,1,0,0,0,202,200,1,0,0,0,203,
  	204,5,24,0,0,204,206,3,2,1,0,205,203,1,0,0,0,205,206,1,0,0,0,206,207,
  	1,0,0,0,207,208,5,12,0,0,208,209,5,4,0,0,209,15,1,0,0,0,210,211,5,5,0,
  	0,211,214,5,124,0,0,212,213,5,85,0,0,213,215,3,76,38,0,214,212,1,0,0,
  	0,214,215,1,0,0,0,215,216,1,0,0,0,216,217,5,99,0,0,217,224,3,80,40,0,
  	218,219,5,88,0,0,219,220,5,124,0,0,220,221,5,99,0,0,221,223,3,80,40,0,
  	222,218,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,17,
  	1,0,0,0,226,224,1,0,0,0,227,228,5,7,0,0,228,233,3,84,42,0,229,230,5,88,
  	0,0,230,232,3,84,42,0,231,229,1,0,0,0,232,235,1,0,0,0,233,231,1,0,0,0,
  	233,234,1,0,0,0,234,19,1,0,0,0,235,233,1,0,0,0,236,237,5,8,0,0,237,238,
  	3,86,43,0,238,21,1,0,0,0,239,240,5,10,0,0,240,241,5,124,0,0,241,287,5,
  	85,0,0,242,243,3,76,38,0,243,245,5,95,0,0,244,246,3,74,37,0,245,244,1,
  	0,0,0,245,246,1,0,0,0,246,251,1,0,0,0,247,248,5,88,0,0,248,250,3,74,37,
  	0,249,247,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,
  	254,1,0,0,0,253,251,1,0,0,0,254,255,5,96,0,0,255,288,1,0,0,0,256,257,
  	5,64,0,0,257,258,5,95,0,0,258,259,3,78,39,0,259,260,5,96,0,0,260,288,
  	1,0,0,0,261,262,5,65,0,0,262,263,5,95,0,0,263,264,3,78,39,0,264,265,5,
  	96,0,0,265,288,1,0,0,0,266,267,5,69,0,0,267,268,5,95,0,0,268,269,7,2,
  	0,0,269,288,5,96,0,0,270,271,5,66,0,0,271,272,5,95,0,0,272,273,7,2,0,
  	0,273,274,5,88,0,0,274,275,3,78,39,0,275,276,5,96,0,0,276,288,1,0,0,0,
  	277,278,5,67,0,0,278,279,5,95,0,0,279,280,3,78,39,0,280,281,5,96,0,0,
  	281,288,1,0,0,0,282,283,5,68,0,0,283,284,5,95,0,0,284,285,3,78,39,0,285,
  	286,5,96,0,0,286,288,1,0,0,0,287,242,1,0,0,0,287,256,1,0,0,0,287,261,
  	1,0,0,0,287,266,1,0,0,0,287,270,1,0,0,0,287,277,1,0,0,0,287,282,1,0,0,
  	0,288,23,1,0,0,0,289,290,5,124,0,0,290,292,5,93,0,0,291,293,3,74,37,0,
  	292,291,1,0,0,0,292,293,1,0,0,0,293,298,1,0,0,0,294,295,5,88,0,0,295,
  	297,3,74,37,0,296,294,1,0,0,0,297,300,1,0,0,0,298,296,1,0,0,0,298,299,
  	1,0,0,0,299,301,1,0,0,0,300,298,1,0,0,0,301,302,5,94,0,0,302,25,1,0,0,
  	0,303,304,5,26,0,0,304,27,1,0,0,0,305,306,5,13,0,0,306,309,5,124,0,0,
  	307,308,5,85,0,0,308,310,3,76,38,0,309,307,1,0,0,0,309,310,1,0,0,0,310,
  	311,1,0,0,0,311,312,5,99,0,0,312,313,3,74,37,0,313,314,5,39,0,0,314,317,
  	3,74,37,0,315,316,5,36,0,0,316,318,3,74,37,0,317,315,1,0,0,0,317,318,
  	1,0,0,0,318,319,1,0,0,0,319,320,3,2,1,0,320,321,5,21,0,0,321,29,1,0,0,
  	0,322,323,5,17,0,0,323,324,3,86,43,0,324,31,1,0,0,0,325,326,5,16,0,0,
  	326,328,3,74,37,0,327,329,5,34,0,0,328,327,1,0,0,0,328,329,1,0,0,0,329,
  	330,1,0,0,0,330,333,3,4,2,0,331,332,5,11,0,0,332,334,3,4,2,0,333,331,
  	1,0,0,0,333,334,1,0,0,0,334,33,1,0,0,0,335,336,5,16,0,0,336,338,3,74,
  	37,0,337,339,5,34,0,0,338,337,1,0,0,0,338,339,1,0,0,0,339,340,1,0,0,0,
  	340,341,5,90,0,0,341,345,3,2,1,0,342,343,5,11,0,0,343,344,5,90,0,0,344,
  	346,3,2,1,0,345,342,1,0,0,0,345,346,1,0,0,0,346,347,1,0,0,0,347,348,5,
  	90,0,0,348,349,5,12,0,0,349,350,5,16,0,0,350,35,1,0,0,0,351,352,5,18,
  	0,0,352,353,3,72,36,0,353,37,1,0,0,0,354,355,5,23,0,0,355,358,5,124,0,
  	0,356,359,5,124,0,0,357,359,3,84,42,0,358,356,1,0,0,0,358,357,1,0,0,0,
  	359,39,1,0,0,0,360,362,5,29,0,0,361,360,1,0,0,0,361,362,1,0,0,0,362,363,
  	1,0,0,0,363,369,5,124,0,0,364,367,5,85,0,0,365,368,3,76,38,0,366,368,
  	5,124,0,0,367,365,1,0,0,0,367,366,1,0,0,0,368,370,1,0,0,0,369,364,1,0,
  	0,0,369,370,1,0,0,0,370,41,1,0,0,0,371,373,5,25,0,0,372,374,5,37,0,0,
  	373,372,1,0,0,0,373,374,1,0,0,0,374,385,1,0,0,0,375,380,3,74,37,0,376,
  	378,5,42,0,0,377,376,1,0,0,0,377,378,1,0,0,0,378,379,1,0,0,0,379,381,
  	3,74,37,0,380,377,1,0,0,0,380,381,1,0,0,0,381,383,1,0,0,0,382,384,5,86,
  	0,0,383,382,1,0,0,0,383,384,1,0,0,0,384,386,1,0,0,0,385,375,1,0,0,0,385,
  	386,1,0,0,0,386,43,1,0,0,0,387,388,5,9,0,0,388,391,5,124,0,0,389,390,
  	5,85,0,0,390,392,3,76,38,0,391,389,1,0,0,0,391,392,1,0,0,0,392,394,1,
  	0,0,0,393,395,5,93,0,0,394,393,1,0,0,0,394,395,1,0,0,0,395,399,1,0,0,
  	0,396,398,5,90,0,0,397,396,1,0,0,0,398,401,1,0,0,0,399,397,1,0,0,0,399,
  	400,1,0,0,0,400,403,1,0,0,0,401,399,1,0,0,0,402,404,3,40,20,0,403,402,
  	1,0,0,0,403,404,1,0,0,0,404,415,1,0,0,0,405,409,5,88,0,0,406,408,5,90,
  	0,0,407,406,1,0,0,0,408,411,1,0,0,0,409,407,1,0,0,0,409,410,1,0,0,0,410,
  	412,1,0,0,0,411,409,1,0,0,0,412,414,3,40,20,0,413,405,1,0,0,0,414,417,
  	1,0,0,0,415,413,1,0,0,0,415,416,1,0,0,0,416,419,1,0,0,0,417,415,1,0,0,
  	0,418,420,5,94,0,0,419,418,1,0,0,0,419,420,1,0,0,0,420,424,1,0,0,0,421,
  	423,3,8,4,0,422,421,1,0,0,0,423,426,1,0,0,0,424,422,1,0,0,0,424,425,1,
  	0,0,0,425,427,1,0,0,0,426,424,1,0,0,0,427,428,3,2,1,0,428,429,5,12,0,
  	0,429,430,5,9,0,0,430,45,1,0,0,0,431,432,5,31,0,0,432,433,3,2,1,0,433,
  	434,5,40,0,0,434,435,3,74,37,0,435,47,1,0,0,0,436,437,5,27,0,0,437,442,
  	3,72,36,0,438,439,5,88,0,0,439,441,3,72,36,0,440,438,1,0,0,0,441,444,
  	1,0,0,0,442,440,1,0,0,0,442,443,1,0,0,0,443,49,1,0,0,0,444,442,1,0,0,
  	0,445,446,5,32,0,0,446,447,3,86,43,0,447,51,1,0,0,0,448,450,5,33,0,0,
  	449,451,3,74,37,0,450,449,1,0,0,0,450,451,1,0,0,0,451,53,1,0,0,0,452,
  	453,5,28,0,0,453,457,5,124,0,0,454,456,5,90,0,0,455,454,1,0,0,0,456,459,
  	1,0,0,0,457,455,1,0,0,0,457,458,1,0,0,0,458,460,1,0,0,0,459,457,1,0,0,
  	0,460,461,5,124,0,0,461,462,5,85,0,0,462,473,3,78,39,0,463,465,5,90,0,
  	0,464,463,1,0,0,0,465,466,1,0,0,0,466,464,1,0,0,0,466,467,1,0,0,0,467,
  	468,1,0,0,0,468,469,5,124,0,0,469,470,5,85,0,0,470,472,3,78,39,0,471,
  	464,1,0,0,0,472,475,1,0,0,0,473,471,1,0,0,0,473,474,1,0,0,0,474,479,1,
  	0,0,0,475,473,1,0,0,0,476,478,5,90,0,0,477,476,1,0,0,0,478,481,1,0,0,
  	0,479,477,1,0,0,0,479,480,1,0,0,0,480,482,1,0,0,0,481,479,1,0,0,0,482,
  	483,5,12,0,0,483,484,5,28,0,0,484,55,1,0,0,0,485,486,5,10,0,0,486,487,
  	5,124,0,0,487,488,5,85,0,0,488,489,5,124,0,0,489,491,5,95,0,0,490,492,
  	3,74,37,0,491,490,1,0,0,0,491,492,1,0,0,0,492,497,1,0,0,0,493,494,5,88,
  	0,0,494,496,3,74,37,0,495,493,1,0,0,0,496,499,1,0,0,0,497,495,1,0,0,0,
  	497,498,1,0,0,0,498,500,1,0,0,0,499,497,1,0,0,0,500,501,5,96,0,0,501,
  	57,1,0,0,0,502,503,5,10,0,0,503,504,5,124,0,0,504,505,5,85,0,0,505,522,
  	5,124,0,0,506,510,5,93,0,0,507,508,5,124,0,0,508,509,5,99,0,0,509,511,
  	3,74,37,0,510,507,1,0,0,0,510,511,1,0,0,0,511,518,1,0,0,0,512,513,5,88,
  	0,0,513,514,5,124,0,0,514,515,5,99,0,0,515,517,3,74,37,0,516,512,1,0,
  	0,0,517,520,1,0,0,0,518,516,1,0,0,0,518,519,1,0,0,0,519,521,1,0,0,0,520,
  	518,1,0,0,0,521,523,5,94,0,0,522,506,1,0,0,0,522,523,1,0,0,0,523,59,1,
  	0,0,0,524,525,5,38,0,0,525,526,3,72,36,0,526,527,5,88,0,0,527,528,3,72,
  	36,0,528,61,1,0,0,0,529,530,5,41,0,0,530,535,3,74,37,0,531,532,5,88,0,
  	0,532,534,3,74,37,0,533,531,1,0,0,0,534,537,1,0,0,0,535,533,1,0,0,0,535,
  	536,1,0,0,0,536,538,1,0,0,0,537,535,1,0,0,0,538,539,3,2,1,0,539,63,1,
  	0,0,0,540,541,5,43,0,0,541,542,3,74,37,0,542,543,3,2,1,0,543,544,5,12,
  	0,0,544,545,5,43,0,0,545,65,1,0,0,0,546,547,5,6,0,0,547,548,3,72,36,0,
  	548,67,1,0,0,0,549,550,3,72,36,0,550,551,5,97,0,0,551,552,3,72,36,0,552,
  	69,1,0,0,0,553,556,3,72,36,0,554,556,3,74,37,0,555,553,1,0,0,0,555,554,
  	1,0,0,0,556,557,1,0,0,0,557,558,5,98,0,0,558,559,3,72,36,0,559,71,1,0,
  	0,0,560,573,5,124,0,0,561,563,5,95,0,0,562,564,3,74,37,0,563,562,1,0,
  	0,0,563,564,1,0,0,0,564,569,1,0,0,0,565,566,5,88,0,0,566,568,3,74,37,
  	0,567,565,1,0,0,0,568,571,1,0,0,0,569,567,1,0,0,0,569,570,1,0,0,0,570,
  	572,1,0,0,0,571,569,1,0,0,0,572,574,5,96,0,0,573,561,1,0,0,0,573,574,
  	1,0,0,0,574,579,1,0,0,0,575,576,5,87,0,0,576,578,5,124,0,0,577,575,1,
  	0,0,0,578,581,1,0,0,0,579,577,1,0,0,0,579,580,1,0,0,0,580,73,1,0,0,0,
  	581,579,1,0,0,0,582,583,6,37,-1,0,583,584,5,93,0,0,584,585,3,74,37,0,
  	585,586,5,94,0,0,586,733,1,0,0,0,587,733,5,44,0,0,588,733,3,80,40,0,589,
  	733,3,24,12,0,590,733,3,72,36,0,591,592,3,72,36,0,592,593,5,15,0,0,593,
  	594,3,74,37,55,594,733,1,0,0,0,595,596,5,107,0,0,596,733,3,74,37,54,597,
  	598,5,106,0,0,598,733,3,74,37,53,599,600,5,80,0,0,600,733,3,74,37,52,
  	601,602,5,81,0,0,602,733,3,74,37,51,603,605,5,82,0,0,604,606,5,93,0,0,
  	605,604,1,0,0,0,605,606,1,0,0,0,606,607,1,0,0,0,607,610,3,74,37,0,608,
  	609,5,42,0,0,609,611,3,74,37,0,610,608,1,0,0,0,610,611,1,0,0,0,611,613,
  	1,0,0,0,612,614,5,94,0,0,613,612,1,0,0,0,613,614,1,0,0,0,614,733,1,0,
  	0,0,615,616,5,45,0,0,616,733,3,74,37,49,617,618,5,114,0,0,618,733,3,74,
  	37,48,619,620,5,115,0,0,620,733,3,74,37,47,621,733,5,71,0,0,622,733,5,
  	70,0,0,623,733,5,57,0,0,624,625,5,50,0,0,625,733,3,74,37,43,626,627,5,
  	58,0,0,627,733,3,74,37,42,628,629,5,60,0,0,629,733,3,74,37,41,630,631,
  	5,46,0,0,631,733,3,74,37,40,632,633,5,47,0,0,633,733,3,74,37,39,634,635,
  	5,48,0,0,635,733,3,74,37,38,636,637,5,49,0,0,637,733,3,74,37,37,638,639,
  	5,51,0,0,639,733,3,74,37,36,640,641,5,52,0,0,641,733,3,74,37,35,642,643,
  	5,59,0,0,643,733,3,74,37,34,644,645,5,53,0,0,645,733,3,74,37,33,646,647,
  	5,54,0,0,647,733,3,74,37,32,648,649,5,61,0,0,649,733,3,74,37,31,650,651,
  	5,62,0,0,651,733,3,74,37,30,652,653,5,63,0,0,653,733,3,74,37,29,654,656,
  	5,55,0,0,655,657,5,93,0,0,656,655,1,0,0,0,656,657,1,0,0,0,657,658,1,0,
  	0,0,658,659,3,74,37,0,659,660,5,88,0,0,660,662,3,74,37,0,661,663,5,94,
  	0,0,662,661,1,0,0,0,662,663,1,0,0,0,663,733,1,0,0,0,664,666,5,56,0,0,
  	665,667,5,93,0,0,666,665,1,0,0,0,666,667,1,0,0,0,667,668,1,0,0,0,668,
  	669,3,74,37,0,669,670,5,88,0,0,670,672,3,74,37,0,671,673,5,94,0,0,672,
  	671,1,0,0,0,672,673,1,0,0,0,673,733,1,0,0,0,674,675,5,72,0,0,675,733,
  	3,74,37,26,676,677,5,73,0,0,677,733,3,74,37,25,678,680,5,74,0,0,679,681,
  	5,93,0,0,680,679,1,0,0,0,680,681,1,0,0,0,681,682,1,0,0,0,682,683,3,74,
  	37,0,683,684,5,88,0,0,684,685,3,74,37,0,685,686,5,88,0,0,686,688,3,74,
  	37,0,687,689,5,94,0,0,688,687,1,0,0,0,688,689,1,0,0,0,689,733,1,0,0,0,
  	690,692,5,75,0,0,691,693,5,93,0,0,692,691,1,0,0,0,692,693,1,0,0,0,693,
  	694,1,0,0,0,694,695,3,74,37,0,695,696,5,88,0,0,696,698,3,74,37,0,697,
  	699,5,94,0,0,698,697,1,0,0,0,698,699,1,0,0,0,699,733,1,0,0,0,700,702,
  	5,76,0,0,701,703,5,93,0,0,702,701,1,0,0,0,702,703,1,0,0,0,703,704,1,0,
  	0,0,704,705,3,74,37,0,705,706,5,88,0,0,706,707,3,74,37,0,707,708,5,88,
  	0,0,708,710,3,74,37,0,709,711,5,94,0,0,710,709,1,0,0,0,710,711,1,0,0,
  	0,711,733,1,0,0,0,712,714,5,77,0,0,713,715,5,93,0,0,714,713,1,0,0,0,714,
  	715,1,0,0,0,715,716,1,0,0,0,716,717,3,74,37,0,717,718,5,88,0,0,718,720,
  	3,74,37,0,719,721,5,94,0,0,720,719,1,0,0,0,720,721,1,0,0,0,721,733,1,
  	0,0,0,722,723,5,78,0,0,723,733,3,74,37,20,724,726,5,35,0,0,725,727,5,
  	93,0,0,726,725,1,0,0,0,726,727,1,0,0,0,727,728,1,0,0,0,728,730,3,72,36,
  	0,729,731,5,94,0,0,730,729,1,0,0,0,730,731,1,0,0,0,731,733,1,0,0,0,732,
  	582,1,0,0,0,732,587,1,0,0,0,732,588,1,0,0,0,732,589,1,0,0,0,732,590,1,
  	0,0,0,732,591,1,0,0,0,732,595,1,0,0,0,732,597,1,0,0,0,732,599,1,0,0,0,
  	732,601,1,0,0,0,732,603,1,0,0,0,732,615,1,0,0,0,732,617,1,0,0,0,732,619,
  	1,0,0,0,732,621,1,0,0,0,732,622,1,0,0,0,732,623,1,0,0,0,732,624,1,0,0,
  	0,732,626,1,0,0,0,732,628,1,0,0,0,732,630,1,0,0,0,732,632,1,0,0,0,732,
  	634,1,0,0,0,732,636,1,0,0,0,732,638,1,0,0,0,732,640,1,0,0,0,732,642,1,
  	0,0,0,732,644,1,0,0,0,732,646,1,0,0,0,732,648,1,0,0,0,732,650,1,0,0,0,
  	732,652,1,0,0,0,732,654,1,0,0,0,732,664,1,0,0,0,732,674,1,0,0,0,732,676,
  	1,0,0,0,732,678,1,0,0,0,732,690,1,0,0,0,732,700,1,0,0,0,732,712,1,0,0,
  	0,732,722,1,0,0,0,732,724,1,0,0,0,733,790,1,0,0,0,734,735,10,18,0,0,735,
  	736,5,105,0,0,736,789,3,74,37,18,737,738,10,17,0,0,738,739,5,109,0,0,
  	739,789,3,74,37,18,740,741,10,16,0,0,741,742,5,108,0,0,742,789,3,74,37,
  	17,743,744,10,15,0,0,744,745,5,113,0,0,745,789,3,74,37,16,746,747,10,
  	14,0,0,747,748,5,112,0,0,748,789,3,74,37,15,749,750,10,13,0,0,750,751,
  	5,106,0,0,751,789,3,74,37,14,752,753,10,12,0,0,753,754,5,107,0,0,754,
  	789,3,74,37,13,755,756,10,11,0,0,756,757,5,110,0,0,757,789,3,74,37,12,
  	758,759,10,10,0,0,759,760,5,111,0,0,760,789,3,74,37,11,761,762,10,9,0,
  	0,762,763,5,99,0,0,763,789,3,74,37,10,764,765,10,8,0,0,765,766,5,100,
  	0,0,766,789,3,74,37,9,767,768,10,7,0,0,768,769,5,101,0,0,769,789,3,74,
  	37,8,770,771,10,6,0,0,771,772,5,102,0,0,772,789,3,74,37,7,773,774,10,
  	5,0,0,774,775,5,103,0,0,775,789,3,74,37,6,776,777,10,4,0,0,777,778,5,
  	104,0,0,778,789,3,74,37,5,779,780,10,3,0,0,780,781,5,116,0,0,781,789,
  	3,74,37,4,782,783,10,2,0,0,783,784,5,117,0,0,784,789,3,74,37,3,785,786,
  	10,1,0,0,786,787,5,118,0,0,787,789,3,74,37,2,788,734,1,0,0,0,788,737,
  	1,0,0,0,788,740,1,0,0,0,788,743,1,0,0,0,788,746,1,0,0,0,788,749,1,0,0,
  	0,788,752,1,0,0,0,788,755,1,0,0,0,788,758,1,0,0,0,788,761,1,0,0,0,788,
  	764,1,0,0,0,788,767,1,0,0,0,788,770,1,0,0,0,788,773,1,0,0,0,788,776,1,
  	0,0,0,788,779,1,0,0,0,788,782,1,0,0,0,788,785,1,0,0,0,789,792,1,0,0,0,
  	790,788,1,0,0,0,790,791,1,0,0,0,791,75,1,0,0,0,792,790,1,0,0,0,793,794,
  	7,2,0,0,794,77,1,0,0,0,795,796,7,3,0,0,796,79,1,0,0,0,797,801,3,82,41,
  	0,798,801,3,84,42,0,799,801,3,86,43,0,800,797,1,0,0,0,800,798,1,0,0,0,
  	800,799,1,0,0,0,801,81,1,0,0,0,802,804,7,4,0,0,803,802,1,0,0,0,803,804,
  	1,0,0,0,804,805,1,0,0,0,805,806,5,122,0,0,806,83,1,0,0,0,807,814,5,120,
  	0,0,808,814,5,121,0,0,809,811,7,4,0,0,810,809,1,0,0,0,810,811,1,0,0,0,
  	811,812,1,0,0,0,812,814,5,123,0,0,813,807,1,0,0,0,813,808,1,0,0,0,813,
  	810,1,0,0,0,814,85,1,0,0,0,815,816,5,119,0,0,816,87,1,0,0,0,91,94,99,
  	105,109,112,117,122,126,156,161,164,169,176,179,185,189,195,200,205,214,
  	224,233,245,251,287,292,298,309,317,328,333,338,345,358,361,367,369,373,
  	377,380,383,385,391,394,399,403,409,415,419,424,442,450,457,466,473,479,
  	491,497,510,518,522,535,555,563,569,573,579,605,610,613,656,662,666,672,
  	680,688,692,698,702,710,714,720,726,730,732,788,790,800,803,810,813
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
    setState(88);
    statements();
    setState(89);
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
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(91);
                separator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(94); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(99);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == DaricParser::COLON

          || _la == DaricParser::NEWLINE) {
            setState(96);
            separator();
            setState(101);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(102);
          statement();
          setState(105);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
          case 1: {
            setState(103);
            separator();
            break;
          }

          case 2: {
            setState(104);
            match(DaricParser::EOF);
            break;
          }

          default:
            break;
          } 
        }
        setState(111);
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
    setState(124); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(117);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(114);
                match(DaricParser::COLON);
                setState(119);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(120);
              statement();
              setState(122);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(121);
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
      setState(126); 
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
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      case_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(131);
      clear();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(132);
      const_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(133);
      data();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(134);
      dataLabel();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(135);
      dim();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(136);
      end();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(137);
      for_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(138);
      get();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(139);
      if_();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(140);
      ifml();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(141);
      input();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(142);
      importlib();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(143);
      option();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(144);
      procedure();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(145);
      print();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(146);
      read();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(147);
      repeat();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(148);
      restore();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(149);
      return_();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(150);
      set();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(151);
      struct_();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(152);
      structDim();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(153);
      structInstance();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(154);
      swap();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(155);
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
    setState(159); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(158);
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
      setState(161); 
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
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(163);
      match(DaricParser::LET);
    }
    setState(166);
    variable();
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(167);
      match(DaricParser::COLON);
      setState(168);
      type();
    }
    setState(171);
    match(DaricParser::EQ);
    setState(172);
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
    setState(174);
    match(DaricParser::IDENTIFIER);
    setState(176);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(175);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(179);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(178);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(181);
      match(DaricParser::COMMA);
      setState(182);
      expression(0);
      setState(187);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(188);
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
    setState(191);
    match(DaricParser::CASE);
    setState(192);
    expression(0);
    setState(193);
    match(DaricParser::OF);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(194);
      separator();
    }
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::WHEN) {
      setState(197);
      when();
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(203);
      match(DaricParser::OTHERWISE);
      setState(204);
      statements();
    }
    setState(207);
    match(DaricParser::END);
    setState(208);
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

tree::TerminalNode* DaricParser::ConstContext::COLON() {
  return getToken(DaricParser::COLON, 0);
}

DaricParser::TypeContext* DaricParser::ConstContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> DaricParser::ConstContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ConstContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
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
    setState(210);
    match(DaricParser::CONST);
    setState(211);
    match(DaricParser::IDENTIFIER);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(212);
      match(DaricParser::COLON);
      setState(213);
      type();
    }
    setState(216);
    match(DaricParser::EQ);
    setState(217);
    literal();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(218);
      match(DaricParser::COMMA);
      setState(219);
      match(DaricParser::IDENTIFIER);
      setState(220);
      match(DaricParser::EQ);
      setState(221);
      literal();
      setState(226);
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
    setState(227);
    match(DaricParser::DATA);
    setState(228);
    integerLiteral();
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(229);
      match(DaricParser::COMMA);
      setState(230);
      integerLiteral();
      setState(235);
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
    setState(236);
    match(DaricParser::DATALABEL);
    setState(237);
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
    setState(239);
    match(DaricParser::DIM);
    setState(240);
    match(DaricParser::IDENTIFIER);
    setState(241);
    match(DaricParser::COLON);
    setState(287);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::BYTE:
      case DaricParser::INT:
      case DaricParser::FLOAT:
      case DaricParser::STRING: {
        setState(242);
        type();
        setState(243);
        match(DaricParser::SOPEN);
        setState(245);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -17557826306048) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & 35518829790502399) != 0) {
          setState(244);
          expression(0);
        }
        setState(251);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COMMA) {
          setState(247);
          match(DaricParser::COMMA);
          setState(248);
          expression(0);
          setState(253);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(254);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::VECTOR: {
        setState(256);
        match(DaricParser::VECTOR);
        setState(257);
        match(DaricParser::SOPEN);
        setState(258);
        typeOrStruct();
        setState(259);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::LIST: {
        setState(261);
        match(DaricParser::LIST);
        setState(262);
        match(DaricParser::SOPEN);
        setState(263);
        typeOrStruct();
        setState(264);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::SET: {
        setState(266);
        match(DaricParser::SET);
        setState(267);
        match(DaricParser::SOPEN);
        setState(268);
        _la = _input->LA(1);
        if (!((((_la - 79) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 79)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(269);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::MAP: {
        setState(270);
        match(DaricParser::MAP);
        setState(271);
        match(DaricParser::SOPEN);
        setState(272);
        _la = _input->LA(1);
        if (!((((_la - 79) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 79)) & 15) != 0)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(273);
        match(DaricParser::COMMA);
        setState(274);
        typeOrStruct();
        setState(275);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::STACK: {
        setState(277);
        match(DaricParser::STACK);
        setState(278);
        match(DaricParser::SOPEN);
        setState(279);
        typeOrStruct();
        setState(280);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::QUEUE: {
        setState(282);
        match(DaricParser::QUEUE);
        setState(283);
        match(DaricParser::SOPEN);
        setState(284);
        typeOrStruct();
        setState(285);
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
    setState(289);
    match(DaricParser::IDENTIFIER);
    setState(290);
    match(DaricParser::LPAREN);
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -17557826306048) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 35518829790502399) != 0) {
      setState(291);
      expression(0);
    }
    setState(298);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(294);
      match(DaricParser::COMMA);
      setState(295);
      expression(0);
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(301);
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
    setState(303);
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
    setState(305);
    match(DaricParser::FOR);
    setState(306);
    match(DaricParser::IDENTIFIER);
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(307);
      match(DaricParser::COLON);
      setState(308);
      type();
    }
    setState(311);
    match(DaricParser::EQ);
    setState(312);
    expression(0);
    setState(313);
    match(DaricParser::TO);
    setState(314);
    expression(0);
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(315);
      match(DaricParser::STEP);
      setState(316);
      expression(0);
    }
    setState(319);
    statements();
    setState(320);
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
    setState(322);
    match(DaricParser::IMPORT);
    setState(323);
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
    setState(325);
    match(DaricParser::IF);
    setState(326);
    expression(0);
    setState(328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(327);
      match(DaricParser::THEN);
    }
    setState(330);
    statementsl();
    setState(333);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(331);
      match(DaricParser::ELSE);
      setState(332);
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
    setState(335);
    match(DaricParser::IF);
    setState(336);
    expression(0);
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(337);
      match(DaricParser::THEN);
    }
    setState(340);
    match(DaricParser::NEWLINE);
    setState(341);
    statements();
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(342);
      match(DaricParser::ELSE);
      setState(343);
      match(DaricParser::NEWLINE);
      setState(344);
      statements();
    }
    setState(347);
    match(DaricParser::NEWLINE);
    setState(348);
    match(DaricParser::END);
    setState(349);
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
    setState(351);
    match(DaricParser::INPUT);
    setState(352);
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
    setState(354);
    match(DaricParser::OPTION);
    setState(355);
    match(DaricParser::IDENTIFIER);
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(356);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(357);
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
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(360);
      match(DaricParser::REF);
    }
    setState(363);
    match(DaricParser::IDENTIFIER);
    setState(369);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(364);
      match(DaricParser::COLON);
      setState(367);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case DaricParser::BYTE:
        case DaricParser::INT:
        case DaricParser::FLOAT:
        case DaricParser::STRING: {
          setState(365);
          type();
          break;
        }

        case DaricParser::IDENTIFIER: {
          setState(366);
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
    setState(371);
    match(DaricParser::PRINT);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SYS) {
      setState(372);
      match(DaricParser::SYS);
    }
    setState(385);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(375);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(380);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(377);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(376);
          match(DaricParser::WITH);
        }
        setState(379);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(383);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(382);
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
    setState(387);
    match(DaricParser::DEF);
    setState(388);
    match(DaricParser::IDENTIFIER);
    setState(391);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(389);
      match(DaricParser::COLON);
      setState(390);
      type();
      break;
    }

    default:
      break;
    }
    setState(394);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(393);
      match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(399);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(396);
        match(DaricParser::NEWLINE); 
      }
      setState(401);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(403);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(402);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(415);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(405);
      match(DaricParser::COMMA);
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(406);
        match(DaricParser::NEWLINE);
        setState(411);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(412);
      parameter();
      setState(417);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(418);
      match(DaricParser::RPAREN);
    }
    setState(424);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(421);
        separator(); 
      }
      setState(426);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(427);
    statements();
    setState(428);
    match(DaricParser::END);
    setState(429);
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
    setState(431);
    match(DaricParser::REPEAT);
    setState(432);
    statements();
    setState(433);
    match(DaricParser::UNTIL);
    setState(434);
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
    setState(436);
    match(DaricParser::READ);
    setState(437);
    variable();
    setState(442);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(438);
      match(DaricParser::COMMA);
      setState(439);
      variable();
      setState(444);
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
    setState(445);
    match(DaricParser::RESTORE);
    setState(446);
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
    setState(448);
    match(DaricParser::RETURN);
    setState(450);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(449);
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
    setState(452);
    match(DaricParser::RECORD);
    setState(453);
    match(DaricParser::IDENTIFIER);
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(454);
      match(DaricParser::NEWLINE);
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(460);
    match(DaricParser::IDENTIFIER);
    setState(461);
    match(DaricParser::COLON);
    setState(462);
    typeOrStruct();
    setState(473);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(464); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(463);
          match(DaricParser::NEWLINE);
          setState(466); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::NEWLINE);
        setState(468);
        match(DaricParser::IDENTIFIER);
        setState(469);
        match(DaricParser::COLON);
        setState(470);
        typeOrStruct(); 
      }
      setState(475);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(479);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(476);
      match(DaricParser::NEWLINE);
      setState(481);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(482);
    match(DaricParser::END);
    setState(483);
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
    setState(485);
    match(DaricParser::DIM);
    setState(486);
    match(DaricParser::IDENTIFIER);
    setState(487);
    match(DaricParser::COLON);
    setState(488);
    match(DaricParser::IDENTIFIER);
    setState(489);
    match(DaricParser::SOPEN);
    setState(491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -17557826306048) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 35518829790502399) != 0) {
      setState(490);
      expression(0);
    }
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
    setState(502);
    match(DaricParser::DIM);
    setState(503);
    match(DaricParser::IDENTIFIER);
    setState(504);
    match(DaricParser::COLON);
    setState(505);
    match(DaricParser::IDENTIFIER);
    setState(522);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(506);
      match(DaricParser::LPAREN);
      setState(510);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(507);
        match(DaricParser::IDENTIFIER);
        setState(508);
        match(DaricParser::EQ);
        setState(509);
        expression(0);
      }
      setState(518);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(512);
        match(DaricParser::COMMA);
        setState(513);
        match(DaricParser::IDENTIFIER);
        setState(514);
        match(DaricParser::EQ);
        setState(515);
        expression(0);
        setState(520);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(521);
      match(DaricParser::RPAREN);
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
    setState(524);
    match(DaricParser::SWAP);
    setState(525);
    variable();
    setState(526);
    match(DaricParser::COMMA);
    setState(527);
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
    setState(529);
    match(DaricParser::WHEN);
    setState(530);
    expression(0);
    setState(535);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(531);
      match(DaricParser::COMMA);
      setState(532);
      expression(0);
      setState(537);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(538);
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
    setState(540);
    match(DaricParser::WHILE);
    setState(541);
    expression(0);
    setState(542);
    statements();
    setState(543);
    match(DaricParser::END);
    setState(544);
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

DaricParser::VariableContext* DaricParser::ClearContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    match(DaricParser::CLEAR);
    setState(547);
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

tree::TerminalNode* DaricParser::GetContext::ASSIGNL() {
  return getToken(DaricParser::ASSIGNL, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::GetContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::GetContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
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
  enterRule(_localctx, 68, DaricParser::RuleGet);

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
    antlrcpp::downCast<GetContext *>(_localctx)->in = variable();
    setState(550);
    match(DaricParser::ASSIGNL);
    setState(551);
    antlrcpp::downCast<GetContext *>(_localctx)->coll = variable();
   
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

tree::TerminalNode* DaricParser::SetContext::ASSIGNR() {
  return getToken(DaricParser::ASSIGNR, 0);
}

std::vector<DaricParser::VariableContext *> DaricParser::SetContext::variable() {
  return getRuleContexts<DaricParser::VariableContext>();
}

DaricParser::VariableContext* DaricParser::SetContext::variable(size_t i) {
  return getRuleContext<DaricParser::VariableContext>(i);
}

DaricParser::ExpressionContext* DaricParser::SetContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
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
  enterRule(_localctx, 70, DaricParser::RuleSet);

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
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(553);
      antlrcpp::downCast<SetContext *>(_localctx)->in = variable();
      break;
    }

    case 2: {
      setState(554);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(557);
    match(DaricParser::ASSIGNR);
    setState(558);
    antlrcpp::downCast<SetContext *>(_localctx)->coll = variable();
   
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
  enterRule(_localctx, 72, DaricParser::RuleVariable);
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
    setState(560);
    match(DaricParser::IDENTIFIER);
    setState(573);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(561);
      match(DaricParser::SOPEN);
      setState(563);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -17557826306048) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & 35518829790502399) != 0) {
        setState(562);
        expression(0);
      }
      setState(569);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(565);
        match(DaricParser::COMMA);
        setState(566);
        expression(0);
        setState(571);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(572);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(579);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(575);
        match(DaricParser::DOT);
        setState(576);
        match(DaricParser::IDENTIFIER); 
      }
      setState(581);
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

tree::TerminalNode* DaricParser::ExpressionContext::HAS() {
  return getToken(DaricParser::HAS, 0);
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

tree::TerminalNode* DaricParser::ExpressionContext::MIN() {
  return getToken(DaricParser::MIN, 0);
}

std::vector<tree::TerminalNode *> DaricParser::ExpressionContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ExpressionContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

tree::TerminalNode* DaricParser::ExpressionContext::MAX() {
  return getToken(DaricParser::MAX, 0);
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
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, DaricParser::RuleExpression, precedence);

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
    setState(732);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      setState(583);
      match(DaricParser::LPAREN);
      setState(584);
      expression(0);
      setState(585);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(587);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(588);
      literal();
      break;
    }

    case 4: {
      setState(589);
      exprcall();
      break;
    }

    case 5: {
      setState(590);
      variable();
      break;
    }

    case 6: {
      setState(591);
      variable();
      setState(592);
      match(DaricParser::HAS);
      setState(593);
      expression(55);
      break;
    }

    case 7: {
      setState(595);
      match(DaricParser::MINUS);
      setState(596);
      expression(54);
      break;
    }

    case 8: {
      setState(597);
      match(DaricParser::PLUS);
      setState(598);
      expression(53);
      break;
    }

    case 9: {
      setState(599);
      match(DaricParser::INT);
      setState(600);
      expression(52);
      break;
    }

    case 10: {
      setState(601);
      match(DaricParser::FLOAT);
      setState(602);
      expression(51);
      break;
    }

    case 11: {
      setState(603);
      match(DaricParser::STRING);
      setState(605);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(604);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(607);
      expression(0);
      setState(610);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(608);
        match(DaricParser::WITH);
        setState(609);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(613);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(612);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 12: {
      setState(615);
      match(DaricParser::ABS);
      setState(616);
      expression(49);
      break;
    }

    case 13: {
      setState(617);
      match(DaricParser::COMP);
      setState(618);
      expression(48);
      break;
    }

    case 14: {
      setState(619);
      match(DaricParser::NOT);
      setState(620);
      expression(47);
      break;
    }

    case 15: {
      setState(621);
      match(DaricParser::TRUE);
      break;
    }

    case 16: {
      setState(622);
      match(DaricParser::FALSE);
      break;
    }

    case 17: {
      setState(623);
      match(DaricParser::PI);
      break;
    }

    case 18: {
      setState(624);
      match(DaricParser::DEG);
      setState(625);
      expression(43);
      break;
    }

    case 19: {
      setState(626);
      match(DaricParser::RAD);
      setState(627);
      expression(42);
      break;
    }

    case 20: {
      setState(628);
      match(DaricParser::SGN);
      setState(629);
      expression(41);
      break;
    }

    case 21: {
      setState(630);
      match(DaricParser::ACS);
      setState(631);
      expression(40);
      break;
    }

    case 22: {
      setState(632);
      match(DaricParser::ASN);
      setState(633);
      expression(39);
      break;
    }

    case 23: {
      setState(634);
      match(DaricParser::ATN);
      setState(635);
      expression(38);
      break;
    }

    case 24: {
      setState(636);
      match(DaricParser::COS);
      setState(637);
      expression(37);
      break;
    }

    case 25: {
      setState(638);
      match(DaricParser::EXP);
      setState(639);
      expression(36);
      break;
    }

    case 26: {
      setState(640);
      match(DaricParser::FLOOR);
      setState(641);
      expression(35);
      break;
    }

    case 27: {
      setState(642);
      match(DaricParser::ROUND);
      setState(643);
      expression(34);
      break;
    }

    case 28: {
      setState(644);
      match(DaricParser::LN);
      setState(645);
      expression(33);
      break;
    }

    case 29: {
      setState(646);
      match(DaricParser::LOG);
      setState(647);
      expression(32);
      break;
    }

    case 30: {
      setState(648);
      match(DaricParser::SIN);
      setState(649);
      expression(31);
      break;
    }

    case 31: {
      setState(650);
      match(DaricParser::SQR);
      setState(651);
      expression(30);
      break;
    }

    case 32: {
      setState(652);
      match(DaricParser::TAN);
      setState(653);
      expression(29);
      break;
    }

    case 33: {
      setState(654);
      match(DaricParser::MIN);
      setState(656);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(655);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(658);
      expression(0);
      setState(659);
      match(DaricParser::COMMA);
      setState(660);
      expression(0);
      setState(662);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(661);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 34: {
      setState(664);
      match(DaricParser::MAX);
      setState(666);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(665);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(668);
      expression(0);
      setState(669);
      match(DaricParser::COMMA);
      setState(670);
      expression(0);
      setState(672);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(671);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      setState(674);
      match(DaricParser::ASC);
      setState(675);
      expression(26);
      break;
    }

    case 36: {
      setState(676);
      match(DaricParser::CHR);
      setState(677);
      expression(25);
      break;
    }

    case 37: {
      setState(678);
      match(DaricParser::INSTR);
      setState(680);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(679);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(682);
      expression(0);
      setState(683);
      match(DaricParser::COMMA);
      setState(684);
      expression(0);
      setState(685);
      match(DaricParser::COMMA);
      setState(686);
      expression(0);
      setState(688);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(687);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(690);
      match(DaricParser::LEFT);
      setState(692);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(691);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(694);
      expression(0);
      setState(695);
      match(DaricParser::COMMA);
      setState(696);
      expression(0);
      setState(698);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(697);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 39: {
      setState(700);
      match(DaricParser::MID);
      setState(702);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
      case 1: {
        setState(701);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(704);
      expression(0);
      setState(705);
      match(DaricParser::COMMA);
      setState(706);
      expression(0);
      setState(707);
      match(DaricParser::COMMA);
      setState(708);
      expression(0);
      setState(710);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(709);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 40: {
      setState(712);
      match(DaricParser::RIGHT);
      setState(714);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(713);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(716);
      expression(0);
      setState(717);
      match(DaricParser::COMMA);
      setState(718);
      expression(0);
      setState(720);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
      case 1: {
        setState(719);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 41: {
      setState(722);
      match(DaricParser::LEN);
      setState(723);
      expression(20);
      break;
    }

    case 42: {
      setState(724);
      match(DaricParser::SIZE);
      setState(726);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(725);
        match(DaricParser::LPAREN);
      }
      setState(728);
      variable();
      setState(730);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
      case 1: {
        setState(729);
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
    setState(790);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(788);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(734);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(735);
          match(DaricParser::HAT);
          setState(736);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(737);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(738);
          match(DaricParser::DIVIDE);
          setState(739);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(740);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(741);
          match(DaricParser::MULTIPLY);
          setState(742);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(743);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(744);
          match(DaricParser::DIV);
          setState(745);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(746);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(747);
          match(DaricParser::MOD);
          setState(748);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(749);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(750);
          match(DaricParser::PLUS);
          setState(751);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(752);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(753);
          match(DaricParser::MINUS);
          setState(754);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(755);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(756);
          match(DaricParser::SHL);
          setState(757);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(758);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(759);
          match(DaricParser::SHR);
          setState(760);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(761);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(762);
          match(DaricParser::EQ);
          setState(763);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(764);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(765);
          match(DaricParser::NE);
          setState(766);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(767);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(768);
          match(DaricParser::GT);
          setState(769);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(770);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(771);
          match(DaricParser::GE);
          setState(772);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(773);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(774);
          match(DaricParser::LT);
          setState(775);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(776);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(777);
          match(DaricParser::LE);
          setState(778);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(779);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(780);
          match(DaricParser::AND);
          setState(781);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(782);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(783);
          match(DaricParser::OR);
          setState(784);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(785);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(786);
          match(DaricParser::EOR);
          setState(787);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(792);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
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
  enterRule(_localctx, 76, DaricParser::RuleType);
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
    setState(793);
    _la = _input->LA(1);
    if (!((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & 15) != 0)) {
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
  enterRule(_localctx, 78, DaricParser::RuleTypeOrStruct);
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
    setState(795);
    _la = _input->LA(1);
    if (!((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & 35184372088847) != 0)) {
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
  enterRule(_localctx, 80, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(800);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(797);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(798);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(799);
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
  enterRule(_localctx, 82, DaricParser::RuleFloatLiteral);
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
    setState(803);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(802);
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
    setState(805);
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
  enterRule(_localctx, 84, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(813);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(807);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(808);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
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
  enterRule(_localctx, 86, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
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
    case 37: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

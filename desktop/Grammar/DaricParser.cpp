
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
      "structDim", "structInstance", "swap", "when", "while", "variable", 
      "expression", "type", "collection", "typeOrStruct", "literal", "floatLiteral", 
      "integerLiteral", "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", "','", 
      "'''", "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", "'<>'", 
      "'>'", "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", 
      "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "FOR", "IF", "IMPORT", "INPUT", "LET", 
      "NEXT", "OF", "OPTION", "OTHERWISE", "PRINT", "READ", "RECORD", "REF", 
      "REM", "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", "STEP", "SYS", 
      "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "ABS", "ACS", 
      "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", "PI", "RAD", 
      "ROUND", "SGN", "SIN", "SQR", "TAN", "VECTOR", "MAP", "STACK", "QUEUE", 
      "SET", "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", "MID", "RIGHT", 
      "LEN", "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", "COLON", 
      "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", "UNDERSCORE", 
      "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", "NE", "GT", "GE", "LT", 
      "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", 
      "MOD", "DIV", "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", 
      "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,114,756,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,1,0,1,
  	0,1,0,1,1,4,1,89,8,1,11,1,12,1,90,1,1,5,1,94,8,1,10,1,12,1,97,9,1,1,1,
  	1,1,1,1,3,1,102,8,1,5,1,104,8,1,10,1,12,1,107,9,1,3,1,109,8,1,1,2,5,2,
  	112,8,2,10,2,12,2,115,9,2,1,2,1,2,3,2,119,8,2,4,2,121,8,2,11,2,12,2,122,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,150,8,3,1,4,4,4,153,8,4,11,4,12,4,154,
  	1,5,3,5,158,8,5,1,5,1,5,1,5,3,5,163,8,5,1,5,1,5,1,5,1,6,1,6,3,6,170,8,
  	6,1,6,3,6,173,8,6,1,6,1,6,5,6,177,8,6,10,6,12,6,180,9,6,1,6,3,6,183,8,
  	6,1,7,1,7,1,7,1,7,3,7,189,8,7,1,7,5,7,192,8,7,10,7,12,7,195,9,7,1,7,1,
  	7,3,7,199,8,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,212,8,8,
  	10,8,12,8,215,9,8,1,8,1,8,3,8,219,8,8,1,9,1,9,1,9,1,9,5,9,225,8,9,10,
  	9,12,9,228,9,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,239,
  	8,11,1,11,1,11,5,11,243,8,11,10,11,12,11,246,9,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,5,11,255,8,11,10,11,12,11,258,9,11,1,11,1,11,3,11,262,
  	8,11,1,12,1,12,1,12,3,12,267,8,12,1,12,1,12,5,12,271,8,12,10,12,12,12,
  	274,9,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,3,14,284,8,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,3,14,292,8,14,1,14,1,14,1,14,1,15,1,15,1,15,1,
  	16,1,16,1,16,3,16,303,8,16,1,16,1,16,1,16,3,16,308,8,16,1,17,1,17,1,17,
  	3,17,313,8,17,1,17,1,17,1,17,1,17,1,17,3,17,320,8,17,1,17,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,19,333,8,19,1,20,3,20,336,8,20,
  	1,20,1,20,1,20,1,20,3,20,342,8,20,3,20,344,8,20,1,21,1,21,3,21,348,8,
  	21,1,21,1,21,3,21,352,8,21,1,21,3,21,355,8,21,1,21,3,21,358,8,21,3,21,
  	360,8,21,1,22,1,22,1,22,1,22,3,22,366,8,22,1,22,3,22,369,8,22,1,22,5,
  	22,372,8,22,10,22,12,22,375,9,22,1,22,3,22,378,8,22,1,22,1,22,5,22,382,
  	8,22,10,22,12,22,385,9,22,1,22,5,22,388,8,22,10,22,12,22,391,9,22,1,22,
  	3,22,394,8,22,1,22,5,22,397,8,22,10,22,12,22,400,9,22,1,22,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,415,8,24,10,24,
  	12,24,418,9,24,1,25,1,25,1,25,1,26,1,26,3,26,425,8,26,1,27,1,27,1,27,
  	5,27,430,8,27,10,27,12,27,433,9,27,1,27,1,27,1,27,1,27,4,27,439,8,27,
  	11,27,12,27,440,1,27,1,27,1,27,5,27,446,8,27,10,27,12,27,449,9,27,1,27,
  	5,27,452,8,27,10,27,12,27,455,9,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,
  	1,28,1,28,3,28,466,8,28,1,28,1,28,5,28,470,8,28,10,28,12,28,473,9,28,
  	1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,485,8,29,1,29,
  	1,29,1,29,1,29,5,29,491,8,29,10,29,12,29,494,9,29,1,29,3,29,497,8,29,
  	1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,5,31,508,8,31,10,31,12,31,
  	511,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,3,33,
  	524,8,33,1,33,1,33,5,33,528,8,33,10,33,12,33,531,9,33,1,33,3,33,534,8,
  	33,1,33,1,33,5,33,538,8,33,10,33,12,33,541,9,33,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,3,34,562,8,34,1,34,1,34,1,34,3,34,567,8,34,1,34,3,34,570,8,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,3,34,617,8,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,625,8,34,1,
  	34,1,34,3,34,629,8,34,1,34,1,34,1,34,1,34,3,34,635,8,34,1,34,1,34,3,34,
  	639,8,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,647,8,34,1,34,1,34,3,34,651,
  	8,34,1,34,1,34,1,34,1,34,3,34,657,8,34,1,34,1,34,1,34,1,34,3,34,663,8,
  	34,1,34,1,34,3,34,667,8,34,3,34,669,8,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,5,34,725,8,34,10,34,12,34,728,9,34,1,35,
  	1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,38,3,38,739,8,38,1,39,3,39,742,8,
  	39,1,39,1,39,1,40,1,40,1,40,3,40,749,8,40,1,40,3,40,752,8,40,1,41,1,41,
  	1,41,0,1,68,42,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,
  	40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,0,6,
  	1,1,76,76,2,0,76,76,81,81,1,0,70,73,1,0,56,60,2,0,70,73,113,113,1,0,95,
  	96,879,0,84,1,0,0,0,2,108,1,0,0,0,4,120,1,0,0,0,6,149,1,0,0,0,8,152,1,
  	0,0,0,10,157,1,0,0,0,12,167,1,0,0,0,14,184,1,0,0,0,16,203,1,0,0,0,18,
  	220,1,0,0,0,20,229,1,0,0,0,22,232,1,0,0,0,24,263,1,0,0,0,26,277,1,0,0,
  	0,28,279,1,0,0,0,30,296,1,0,0,0,32,299,1,0,0,0,34,309,1,0,0,0,36,325,
  	1,0,0,0,38,328,1,0,0,0,40,335,1,0,0,0,42,345,1,0,0,0,44,361,1,0,0,0,46,
  	405,1,0,0,0,48,410,1,0,0,0,50,419,1,0,0,0,52,422,1,0,0,0,54,426,1,0,0,
  	0,56,459,1,0,0,0,58,476,1,0,0,0,60,498,1,0,0,0,62,503,1,0,0,0,64,514,
  	1,0,0,0,66,520,1,0,0,0,68,668,1,0,0,0,70,729,1,0,0,0,72,731,1,0,0,0,74,
  	733,1,0,0,0,76,738,1,0,0,0,78,741,1,0,0,0,80,751,1,0,0,0,82,753,1,0,0,
  	0,84,85,3,2,1,0,85,86,5,0,0,1,86,1,1,0,0,0,87,89,3,8,4,0,88,87,1,0,0,
  	0,89,90,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,109,1,0,0,0,92,94,3,8,
  	4,0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,
  	0,0,97,95,1,0,0,0,98,101,3,6,3,0,99,102,3,8,4,0,100,102,5,0,0,1,101,99,
  	1,0,0,0,101,100,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,95,1,0,0,
  	0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,109,1,0,0,0,107,
  	105,1,0,0,0,108,88,1,0,0,0,108,105,1,0,0,0,109,3,1,0,0,0,110,112,5,76,
  	0,0,111,110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,
  	116,1,0,0,0,115,113,1,0,0,0,116,118,3,6,3,0,117,119,7,0,0,0,118,117,1,
  	0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,113,1,0,0,0,121,122,1,0,0,0,
  	122,120,1,0,0,0,122,123,1,0,0,0,123,5,1,0,0,0,124,150,3,10,5,0,125,150,
  	3,12,6,0,126,150,3,14,7,0,127,150,3,16,8,0,128,150,3,18,9,0,129,150,3,
  	20,10,0,130,150,3,22,11,0,131,150,3,26,13,0,132,150,3,28,14,0,133,150,
  	3,32,16,0,134,150,3,34,17,0,135,150,3,36,18,0,136,150,3,30,15,0,137,150,
  	3,38,19,0,138,150,3,44,22,0,139,150,3,42,21,0,140,150,3,48,24,0,141,150,
  	3,46,23,0,142,150,3,50,25,0,143,150,3,52,26,0,144,150,3,54,27,0,145,150,
  	3,56,28,0,146,150,3,58,29,0,147,150,3,60,30,0,148,150,3,64,32,0,149,124,
  	1,0,0,0,149,125,1,0,0,0,149,126,1,0,0,0,149,127,1,0,0,0,149,128,1,0,0,
  	0,149,129,1,0,0,0,149,130,1,0,0,0,149,131,1,0,0,0,149,132,1,0,0,0,149,
  	133,1,0,0,0,149,134,1,0,0,0,149,135,1,0,0,0,149,136,1,0,0,0,149,137,1,
  	0,0,0,149,138,1,0,0,0,149,139,1,0,0,0,149,140,1,0,0,0,149,141,1,0,0,0,
  	149,142,1,0,0,0,149,143,1,0,0,0,149,144,1,0,0,0,149,145,1,0,0,0,149,146,
  	1,0,0,0,149,147,1,0,0,0,149,148,1,0,0,0,150,7,1,0,0,0,151,153,7,1,0,0,
  	152,151,1,0,0,0,153,154,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,9,
  	1,0,0,0,156,158,5,15,0,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,0,
  	0,0,159,162,3,66,33,0,160,161,5,76,0,0,161,163,3,70,35,0,162,160,1,0,
  	0,0,162,163,1,0,0,0,163,164,1,0,0,0,164,165,5,88,0,0,165,166,3,68,34,
  	0,166,11,1,0,0,0,167,169,5,113,0,0,168,170,5,84,0,0,169,168,1,0,0,0,169,
  	170,1,0,0,0,170,172,1,0,0,0,171,173,3,68,34,0,172,171,1,0,0,0,172,173,
  	1,0,0,0,173,178,1,0,0,0,174,175,5,79,0,0,175,177,3,68,34,0,176,174,1,
  	0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,182,1,0,0,0,
  	180,178,1,0,0,0,181,183,5,85,0,0,182,181,1,0,0,0,182,183,1,0,0,0,183,
  	13,1,0,0,0,184,185,5,3,0,0,185,186,3,68,34,0,186,188,5,17,0,0,187,189,
  	3,8,4,0,188,187,1,0,0,0,188,189,1,0,0,0,189,193,1,0,0,0,190,192,3,62,
  	31,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,
  	194,198,1,0,0,0,195,193,1,0,0,0,196,197,5,19,0,0,197,199,3,2,1,0,198,
  	196,1,0,0,0,198,199,1,0,0,0,199,200,1,0,0,0,200,201,5,10,0,0,201,202,
  	5,3,0,0,202,15,1,0,0,0,203,204,5,4,0,0,204,205,5,113,0,0,205,206,5,88,
  	0,0,206,213,3,76,38,0,207,208,5,79,0,0,208,209,5,113,0,0,209,210,5,88,
  	0,0,210,212,3,76,38,0,211,207,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,
  	213,214,1,0,0,0,214,218,1,0,0,0,215,213,1,0,0,0,216,217,5,76,0,0,217,
  	219,3,70,35,0,218,216,1,0,0,0,218,219,1,0,0,0,219,17,1,0,0,0,220,221,
  	5,5,0,0,221,226,3,80,40,0,222,223,5,79,0,0,223,225,3,80,40,0,224,222,
  	1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,227,1,0,0,0,227,19,1,0,0,
  	0,228,226,1,0,0,0,229,230,5,6,0,0,230,231,3,82,41,0,231,21,1,0,0,0,232,
  	233,5,8,0,0,233,234,5,113,0,0,234,261,5,76,0,0,235,236,3,70,35,0,236,
  	238,5,86,0,0,237,239,3,68,34,0,238,237,1,0,0,0,238,239,1,0,0,0,239,244,
  	1,0,0,0,240,241,5,79,0,0,241,243,3,68,34,0,242,240,1,0,0,0,243,246,1,
  	0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,247,1,0,0,0,246,244,1,0,0,0,
  	247,248,5,87,0,0,248,262,1,0,0,0,249,250,3,72,36,0,250,251,5,86,0,0,251,
  	256,3,74,37,0,252,253,5,79,0,0,253,255,3,74,37,0,254,252,1,0,0,0,255,
  	258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,259,1,0,0,0,258,256,1,
  	0,0,0,259,260,5,87,0,0,260,262,1,0,0,0,261,235,1,0,0,0,261,249,1,0,0,
  	0,262,23,1,0,0,0,263,264,5,113,0,0,264,266,5,84,0,0,265,267,3,68,34,0,
  	266,265,1,0,0,0,266,267,1,0,0,0,267,272,1,0,0,0,268,269,5,79,0,0,269,
  	271,3,68,34,0,270,268,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,
  	1,0,0,0,273,275,1,0,0,0,274,272,1,0,0,0,275,276,5,85,0,0,276,25,1,0,0,
  	0,277,278,5,10,0,0,278,27,1,0,0,0,279,280,5,11,0,0,280,283,5,113,0,0,
  	281,282,5,76,0,0,282,284,3,70,35,0,283,281,1,0,0,0,283,284,1,0,0,0,284,
  	285,1,0,0,0,285,286,5,88,0,0,286,287,3,68,34,0,287,288,5,33,0,0,288,291,
  	3,68,34,0,289,290,5,30,0,0,290,292,3,68,34,0,291,289,1,0,0,0,291,292,
  	1,0,0,0,292,293,1,0,0,0,293,294,3,2,1,0,294,295,5,16,0,0,295,29,1,0,0,
  	0,296,297,5,13,0,0,297,298,3,82,41,0,298,31,1,0,0,0,299,300,5,12,0,0,
  	300,302,3,68,34,0,301,303,5,28,0,0,302,301,1,0,0,0,302,303,1,0,0,0,303,
  	304,1,0,0,0,304,307,3,4,2,0,305,306,5,9,0,0,306,308,3,4,2,0,307,305,1,
  	0,0,0,307,308,1,0,0,0,308,33,1,0,0,0,309,310,5,12,0,0,310,312,3,68,34,
  	0,311,313,5,28,0,0,312,311,1,0,0,0,312,313,1,0,0,0,313,314,1,0,0,0,314,
  	315,5,81,0,0,315,319,3,2,1,0,316,317,5,9,0,0,317,318,5,81,0,0,318,320,
  	3,2,1,0,319,316,1,0,0,0,319,320,1,0,0,0,320,321,1,0,0,0,321,322,5,81,
  	0,0,322,323,5,10,0,0,323,324,5,12,0,0,324,35,1,0,0,0,325,326,5,14,0,0,
  	326,327,3,66,33,0,327,37,1,0,0,0,328,329,5,18,0,0,329,332,5,113,0,0,330,
  	333,5,113,0,0,331,333,3,80,40,0,332,330,1,0,0,0,332,331,1,0,0,0,333,39,
  	1,0,0,0,334,336,5,23,0,0,335,334,1,0,0,0,335,336,1,0,0,0,336,337,1,0,
  	0,0,337,343,5,113,0,0,338,341,5,76,0,0,339,342,3,70,35,0,340,342,5,113,
  	0,0,341,339,1,0,0,0,341,340,1,0,0,0,342,344,1,0,0,0,343,338,1,0,0,0,343,
  	344,1,0,0,0,344,41,1,0,0,0,345,347,5,20,0,0,346,348,5,31,0,0,347,346,
  	1,0,0,0,347,348,1,0,0,0,348,359,1,0,0,0,349,354,3,68,34,0,350,352,5,36,
  	0,0,351,350,1,0,0,0,351,352,1,0,0,0,352,353,1,0,0,0,353,355,3,68,34,0,
  	354,351,1,0,0,0,354,355,1,0,0,0,355,357,1,0,0,0,356,358,5,77,0,0,357,
  	356,1,0,0,0,357,358,1,0,0,0,358,360,1,0,0,0,359,349,1,0,0,0,359,360,1,
  	0,0,0,360,43,1,0,0,0,361,362,5,7,0,0,362,365,5,113,0,0,363,364,5,76,0,
  	0,364,366,3,70,35,0,365,363,1,0,0,0,365,366,1,0,0,0,366,368,1,0,0,0,367,
  	369,5,84,0,0,368,367,1,0,0,0,368,369,1,0,0,0,369,373,1,0,0,0,370,372,
  	5,81,0,0,371,370,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,0,373,374,1,0,
  	0,0,374,377,1,0,0,0,375,373,1,0,0,0,376,378,3,40,20,0,377,376,1,0,0,0,
  	377,378,1,0,0,0,378,389,1,0,0,0,379,383,5,79,0,0,380,382,5,81,0,0,381,
  	380,1,0,0,0,382,385,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,386,1,
  	0,0,0,385,383,1,0,0,0,386,388,3,40,20,0,387,379,1,0,0,0,388,391,1,0,0,
  	0,389,387,1,0,0,0,389,390,1,0,0,0,390,393,1,0,0,0,391,389,1,0,0,0,392,
  	394,5,85,0,0,393,392,1,0,0,0,393,394,1,0,0,0,394,398,1,0,0,0,395,397,
  	3,8,4,0,396,395,1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,1,0,0,
  	0,399,401,1,0,0,0,400,398,1,0,0,0,401,402,3,2,1,0,402,403,5,10,0,0,403,
  	404,5,7,0,0,404,45,1,0,0,0,405,406,5,25,0,0,406,407,3,2,1,0,407,408,5,
  	34,0,0,408,409,3,68,34,0,409,47,1,0,0,0,410,411,5,21,0,0,411,416,3,66,
  	33,0,412,413,5,79,0,0,413,415,3,66,33,0,414,412,1,0,0,0,415,418,1,0,0,
  	0,416,414,1,0,0,0,416,417,1,0,0,0,417,49,1,0,0,0,418,416,1,0,0,0,419,
  	420,5,26,0,0,420,421,3,82,41,0,421,51,1,0,0,0,422,424,5,27,0,0,423,425,
  	3,68,34,0,424,423,1,0,0,0,424,425,1,0,0,0,425,53,1,0,0,0,426,427,5,22,
  	0,0,427,431,5,113,0,0,428,430,5,81,0,0,429,428,1,0,0,0,430,433,1,0,0,
  	0,431,429,1,0,0,0,431,432,1,0,0,0,432,434,1,0,0,0,433,431,1,0,0,0,434,
  	435,5,113,0,0,435,436,5,76,0,0,436,447,3,74,37,0,437,439,5,81,0,0,438,
  	437,1,0,0,0,439,440,1,0,0,0,440,438,1,0,0,0,440,441,1,0,0,0,441,442,1,
  	0,0,0,442,443,5,113,0,0,443,444,5,76,0,0,444,446,3,74,37,0,445,438,1,
  	0,0,0,446,449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,0,0,448,453,1,0,0,0,
  	449,447,1,0,0,0,450,452,5,81,0,0,451,450,1,0,0,0,452,455,1,0,0,0,453,
  	451,1,0,0,0,453,454,1,0,0,0,454,456,1,0,0,0,455,453,1,0,0,0,456,457,5,
  	10,0,0,457,458,5,22,0,0,458,55,1,0,0,0,459,460,5,8,0,0,460,461,5,113,
  	0,0,461,462,5,76,0,0,462,463,5,113,0,0,463,465,5,86,0,0,464,466,3,68,
  	34,0,465,464,1,0,0,0,465,466,1,0,0,0,466,471,1,0,0,0,467,468,5,79,0,0,
  	468,470,3,68,34,0,469,467,1,0,0,0,470,473,1,0,0,0,471,469,1,0,0,0,471,
  	472,1,0,0,0,472,474,1,0,0,0,473,471,1,0,0,0,474,475,5,87,0,0,475,57,1,
  	0,0,0,476,477,5,8,0,0,477,478,5,113,0,0,478,479,5,76,0,0,479,496,5,113,
  	0,0,480,484,5,84,0,0,481,482,5,113,0,0,482,483,5,88,0,0,483,485,3,68,
  	34,0,484,481,1,0,0,0,484,485,1,0,0,0,485,492,1,0,0,0,486,487,5,79,0,0,
  	487,488,5,113,0,0,488,489,5,88,0,0,489,491,3,68,34,0,490,486,1,0,0,0,
  	491,494,1,0,0,0,492,490,1,0,0,0,492,493,1,0,0,0,493,495,1,0,0,0,494,492,
  	1,0,0,0,495,497,5,85,0,0,496,480,1,0,0,0,496,497,1,0,0,0,497,59,1,0,0,
  	0,498,499,5,32,0,0,499,500,3,66,33,0,500,501,5,79,0,0,501,502,3,66,33,
  	0,502,61,1,0,0,0,503,504,5,35,0,0,504,509,3,68,34,0,505,506,5,79,0,0,
  	506,508,3,68,34,0,507,505,1,0,0,0,508,511,1,0,0,0,509,507,1,0,0,0,509,
  	510,1,0,0,0,510,512,1,0,0,0,511,509,1,0,0,0,512,513,3,2,1,0,513,63,1,
  	0,0,0,514,515,5,37,0,0,515,516,3,68,34,0,516,517,3,2,1,0,517,518,5,10,
  	0,0,518,519,5,37,0,0,519,65,1,0,0,0,520,533,5,113,0,0,521,523,5,86,0,
  	0,522,524,3,68,34,0,523,522,1,0,0,0,523,524,1,0,0,0,524,529,1,0,0,0,525,
  	526,5,79,0,0,526,528,3,68,34,0,527,525,1,0,0,0,528,531,1,0,0,0,529,527,
  	1,0,0,0,529,530,1,0,0,0,530,532,1,0,0,0,531,529,1,0,0,0,532,534,5,87,
  	0,0,533,521,1,0,0,0,533,534,1,0,0,0,534,539,1,0,0,0,535,536,5,78,0,0,
  	536,538,5,113,0,0,537,535,1,0,0,0,538,541,1,0,0,0,539,537,1,0,0,0,539,
  	540,1,0,0,0,540,67,1,0,0,0,541,539,1,0,0,0,542,543,6,34,-1,0,543,544,
  	5,84,0,0,544,545,3,68,34,0,545,546,5,85,0,0,546,669,1,0,0,0,547,669,5,
  	38,0,0,548,669,3,76,38,0,549,669,3,24,12,0,550,669,3,66,33,0,551,552,
  	5,96,0,0,552,669,3,68,34,52,553,554,5,95,0,0,554,669,3,68,34,51,555,556,
  	5,71,0,0,556,669,3,68,34,50,557,558,5,72,0,0,558,669,3,68,34,49,559,561,
  	5,73,0,0,560,562,5,84,0,0,561,560,1,0,0,0,561,562,1,0,0,0,562,563,1,0,
  	0,0,563,566,3,68,34,0,564,565,5,36,0,0,565,567,3,68,34,0,566,564,1,0,
  	0,0,566,567,1,0,0,0,567,569,1,0,0,0,568,570,5,85,0,0,569,568,1,0,0,0,
  	569,570,1,0,0,0,570,669,1,0,0,0,571,572,5,39,0,0,572,669,3,68,34,47,573,
  	574,5,103,0,0,574,669,3,68,34,46,575,576,5,104,0,0,576,669,3,68,34,45,
  	577,669,5,62,0,0,578,669,5,61,0,0,579,669,5,49,0,0,580,581,5,44,0,0,581,
  	669,3,68,34,41,582,583,5,50,0,0,583,669,3,68,34,40,584,585,5,52,0,0,585,
  	669,3,68,34,39,586,587,5,40,0,0,587,669,3,68,34,38,588,589,5,41,0,0,589,
  	669,3,68,34,37,590,591,5,42,0,0,591,669,3,68,34,36,592,593,5,43,0,0,593,
  	669,3,68,34,35,594,595,5,45,0,0,595,669,3,68,34,34,596,597,5,46,0,0,597,
  	669,3,68,34,33,598,599,5,51,0,0,599,669,3,68,34,32,600,601,5,47,0,0,601,
  	669,3,68,34,31,602,603,5,48,0,0,603,669,3,68,34,30,604,605,5,53,0,0,605,
  	669,3,68,34,29,606,607,5,54,0,0,607,669,3,68,34,28,608,609,5,55,0,0,609,
  	669,3,68,34,27,610,611,5,63,0,0,611,669,3,68,34,26,612,613,5,64,0,0,613,
  	669,3,68,34,25,614,616,5,65,0,0,615,617,5,84,0,0,616,615,1,0,0,0,616,
  	617,1,0,0,0,617,618,1,0,0,0,618,619,3,68,34,0,619,620,5,79,0,0,620,621,
  	3,68,34,0,621,622,5,79,0,0,622,624,3,68,34,0,623,625,5,85,0,0,624,623,
  	1,0,0,0,624,625,1,0,0,0,625,669,1,0,0,0,626,628,5,66,0,0,627,629,5,84,
  	0,0,628,627,1,0,0,0,628,629,1,0,0,0,629,630,1,0,0,0,630,631,3,68,34,0,
  	631,632,5,79,0,0,632,634,3,68,34,0,633,635,5,85,0,0,634,633,1,0,0,0,634,
  	635,1,0,0,0,635,669,1,0,0,0,636,638,5,67,0,0,637,639,5,84,0,0,638,637,
  	1,0,0,0,638,639,1,0,0,0,639,640,1,0,0,0,640,641,3,68,34,0,641,642,5,79,
  	0,0,642,643,3,68,34,0,643,644,5,79,0,0,644,646,3,68,34,0,645,647,5,85,
  	0,0,646,645,1,0,0,0,646,647,1,0,0,0,647,669,1,0,0,0,648,650,5,68,0,0,
  	649,651,5,84,0,0,650,649,1,0,0,0,650,651,1,0,0,0,651,652,1,0,0,0,652,
  	653,3,68,34,0,653,654,5,79,0,0,654,656,3,68,34,0,655,657,5,85,0,0,656,
  	655,1,0,0,0,656,657,1,0,0,0,657,669,1,0,0,0,658,659,5,69,0,0,659,669,
  	3,68,34,20,660,662,5,29,0,0,661,663,5,84,0,0,662,661,1,0,0,0,662,663,
  	1,0,0,0,663,664,1,0,0,0,664,666,5,113,0,0,665,667,5,85,0,0,666,665,1,
  	0,0,0,666,667,1,0,0,0,667,669,1,0,0,0,668,542,1,0,0,0,668,547,1,0,0,0,
  	668,548,1,0,0,0,668,549,1,0,0,0,668,550,1,0,0,0,668,551,1,0,0,0,668,553,
  	1,0,0,0,668,555,1,0,0,0,668,557,1,0,0,0,668,559,1,0,0,0,668,571,1,0,0,
  	0,668,573,1,0,0,0,668,575,1,0,0,0,668,577,1,0,0,0,668,578,1,0,0,0,668,
  	579,1,0,0,0,668,580,1,0,0,0,668,582,1,0,0,0,668,584,1,0,0,0,668,586,1,
  	0,0,0,668,588,1,0,0,0,668,590,1,0,0,0,668,592,1,0,0,0,668,594,1,0,0,0,
  	668,596,1,0,0,0,668,598,1,0,0,0,668,600,1,0,0,0,668,602,1,0,0,0,668,604,
  	1,0,0,0,668,606,1,0,0,0,668,608,1,0,0,0,668,610,1,0,0,0,668,612,1,0,0,
  	0,668,614,1,0,0,0,668,626,1,0,0,0,668,636,1,0,0,0,668,648,1,0,0,0,668,
  	658,1,0,0,0,668,660,1,0,0,0,669,726,1,0,0,0,670,671,10,18,0,0,671,672,
  	5,94,0,0,672,725,3,68,34,18,673,674,10,17,0,0,674,675,5,98,0,0,675,725,
  	3,68,34,18,676,677,10,16,0,0,677,678,5,97,0,0,678,725,3,68,34,17,679,
  	680,10,15,0,0,680,681,5,102,0,0,681,725,3,68,34,16,682,683,10,14,0,0,
  	683,684,5,101,0,0,684,725,3,68,34,15,685,686,10,13,0,0,686,687,5,95,0,
  	0,687,725,3,68,34,14,688,689,10,12,0,0,689,690,5,96,0,0,690,725,3,68,
  	34,13,691,692,10,11,0,0,692,693,5,99,0,0,693,725,3,68,34,12,694,695,10,
  	10,0,0,695,696,5,100,0,0,696,725,3,68,34,11,697,698,10,9,0,0,698,699,
  	5,88,0,0,699,725,3,68,34,10,700,701,10,8,0,0,701,702,5,89,0,0,702,725,
  	3,68,34,9,703,704,10,7,0,0,704,705,5,90,0,0,705,725,3,68,34,8,706,707,
  	10,6,0,0,707,708,5,91,0,0,708,725,3,68,34,7,709,710,10,5,0,0,710,711,
  	5,92,0,0,711,725,3,68,34,6,712,713,10,4,0,0,713,714,5,93,0,0,714,725,
  	3,68,34,5,715,716,10,3,0,0,716,717,5,105,0,0,717,725,3,68,34,4,718,719,
  	10,2,0,0,719,720,5,106,0,0,720,725,3,68,34,3,721,722,10,1,0,0,722,723,
  	5,107,0,0,723,725,3,68,34,2,724,670,1,0,0,0,724,673,1,0,0,0,724,676,1,
  	0,0,0,724,679,1,0,0,0,724,682,1,0,0,0,724,685,1,0,0,0,724,688,1,0,0,0,
  	724,691,1,0,0,0,724,694,1,0,0,0,724,697,1,0,0,0,724,700,1,0,0,0,724,703,
  	1,0,0,0,724,706,1,0,0,0,724,709,1,0,0,0,724,712,1,0,0,0,724,715,1,0,0,
  	0,724,718,1,0,0,0,724,721,1,0,0,0,725,728,1,0,0,0,726,724,1,0,0,0,726,
  	727,1,0,0,0,727,69,1,0,0,0,728,726,1,0,0,0,729,730,7,2,0,0,730,71,1,0,
  	0,0,731,732,7,3,0,0,732,73,1,0,0,0,733,734,7,4,0,0,734,75,1,0,0,0,735,
  	739,3,78,39,0,736,739,3,80,40,0,737,739,3,82,41,0,738,735,1,0,0,0,738,
  	736,1,0,0,0,738,737,1,0,0,0,739,77,1,0,0,0,740,742,7,5,0,0,741,740,1,
  	0,0,0,741,742,1,0,0,0,742,743,1,0,0,0,743,744,5,111,0,0,744,79,1,0,0,
  	0,745,752,5,109,0,0,746,752,5,110,0,0,747,749,7,5,0,0,748,747,1,0,0,0,
  	748,749,1,0,0,0,749,750,1,0,0,0,750,752,5,112,0,0,751,745,1,0,0,0,751,
  	746,1,0,0,0,751,748,1,0,0,0,752,81,1,0,0,0,753,754,5,108,0,0,754,83,1,
  	0,0,0,87,90,95,101,105,108,113,118,122,149,154,157,162,169,172,178,182,
  	188,193,198,213,218,226,238,244,256,261,266,272,283,291,302,307,312,319,
  	332,335,341,343,347,351,354,357,359,365,368,373,377,383,389,393,398,416,
  	424,431,440,447,453,465,471,484,492,496,509,523,529,533,539,561,566,569,
  	616,624,628,634,638,646,650,656,662,666,668,724,726,738,741,748,751
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
    setState(84);
    statements();
    setState(85);
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
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(87);
                separator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(90); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(95);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == DaricParser::COLON

          || _la == DaricParser::NEWLINE) {
            setState(92);
            separator();
            setState(97);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(98);
          statement();
          setState(101);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
          case 1: {
            setState(99);
            separator();
            break;
          }

          case 2: {
            setState(100);
            match(DaricParser::EOF);
            break;
          }

          default:
            break;
          } 
        }
        setState(107);
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
    setState(120); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(113);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(110);
                match(DaricParser::COLON);
                setState(115);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(116);
              statement();
              setState(118);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(117);
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
      setState(122); 
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
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      call();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(126);
      case_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(127);
      const_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(128);
      data();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(129);
      dataLabel();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(130);
      dim();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(131);
      end();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(132);
      for_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(133);
      if_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(134);
      ifml();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(135);
      input();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(136);
      importlib();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(137);
      option();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(138);
      procedure();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(139);
      print();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(140);
      read();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(141);
      repeat();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(142);
      restore();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(143);
      return_();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(144);
      struct_();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(145);
      structDim();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(146);
      structInstance();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(147);
      swap();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(148);
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
    setState(152); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(151);
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
      setState(154); 
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
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(156);
      match(DaricParser::LET);
    }
    setState(159);
    variable();
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(160);
      match(DaricParser::COLON);
      setState(161);
      type();
    }
    setState(164);
    match(DaricParser::EQ);
    setState(165);
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
    setState(167);
    match(DaricParser::IDENTIFIER);
    setState(169);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(168);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(172);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(171);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(174);
      match(DaricParser::COMMA);
      setState(175);
      expression(0);
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(181);
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
    setState(184);
    match(DaricParser::CASE);
    setState(185);
    expression(0);
    setState(186);
    match(DaricParser::OF);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(187);
      separator();
    }
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::WHEN) {
      setState(190);
      when();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(196);
      match(DaricParser::OTHERWISE);
      setState(197);
      statements();
    }
    setState(200);
    match(DaricParser::END);
    setState(201);
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
    setState(203);
    match(DaricParser::CONST);
    setState(204);
    match(DaricParser::IDENTIFIER);
    setState(205);
    match(DaricParser::EQ);
    setState(206);
    literal();
    setState(213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(207);
      match(DaricParser::COMMA);
      setState(208);
      match(DaricParser::IDENTIFIER);
      setState(209);
      match(DaricParser::EQ);
      setState(210);
      literal();
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(218);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(216);
      match(DaricParser::COLON);
      setState(217);
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
    setState(220);
    match(DaricParser::DATA);
    setState(221);
    integerLiteral();
    setState(226);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(222);
      match(DaricParser::COMMA);
      setState(223);
      integerLiteral();
      setState(228);
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
    setState(229);
    match(DaricParser::DATALABEL);
    setState(230);
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

DaricParser::CollectionContext* DaricParser::DimContext::collection() {
  return getRuleContext<DaricParser::CollectionContext>(0);
}

std::vector<DaricParser::TypeOrStructContext *> DaricParser::DimContext::typeOrStruct() {
  return getRuleContexts<DaricParser::TypeOrStructContext>();
}

DaricParser::TypeOrStructContext* DaricParser::DimContext::typeOrStruct(size_t i) {
  return getRuleContext<DaricParser::TypeOrStructContext>(i);
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
    setState(232);
    match(DaricParser::DIM);
    setState(233);
    match(DaricParser::IDENTIFIER);
    setState(234);
    match(DaricParser::COLON);
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::BYTE:
      case DaricParser::INT:
      case DaricParser::FLOAT:
      case DaricParser::STRING: {
        setState(235);
        type();
        setState(236);
        match(DaricParser::SOPEN);
        setState(238);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -2233785689516802048) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 1109963431740351) != 0) {
          setState(237);
          expression(0);
        }
        setState(244);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COMMA) {
          setState(240);
          match(DaricParser::COMMA);
          setState(241);
          expression(0);
          setState(246);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(247);
        match(DaricParser::SCLOSE);
        break;
      }

      case DaricParser::VECTOR:
      case DaricParser::MAP:
      case DaricParser::STACK:
      case DaricParser::QUEUE:
      case DaricParser::SET: {
        setState(249);
        collection();
        setState(250);
        match(DaricParser::SOPEN);
        setState(251);
        typeOrStruct();
        setState(256);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COMMA) {
          setState(252);
          match(DaricParser::COMMA);
          setState(253);
          typeOrStruct();
          setState(258);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(259);
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
    setState(263);
    match(DaricParser::IDENTIFIER);
    setState(264);
    match(DaricParser::LPAREN);
    setState(266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2233785689516802048) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 1109963431740351) != 0) {
      setState(265);
      expression(0);
    }
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(268);
      match(DaricParser::COMMA);
      setState(269);
      expression(0);
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(275);
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
    setState(277);
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
    setState(279);
    match(DaricParser::FOR);
    setState(280);
    match(DaricParser::IDENTIFIER);
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON) {
      setState(281);
      match(DaricParser::COLON);
      setState(282);
      type();
    }
    setState(285);
    match(DaricParser::EQ);
    setState(286);
    expression(0);
    setState(287);
    match(DaricParser::TO);
    setState(288);
    expression(0);
    setState(291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(289);
      match(DaricParser::STEP);
      setState(290);
      expression(0);
    }
    setState(293);
    statements();
    setState(294);
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
    setState(296);
    match(DaricParser::IMPORT);
    setState(297);
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
    setState(299);
    match(DaricParser::IF);
    setState(300);
    expression(0);
    setState(302);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(301);
      match(DaricParser::THEN);
    }
    setState(304);
    statementsl();
    setState(307);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(305);
      match(DaricParser::ELSE);
      setState(306);
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
    setState(309);
    match(DaricParser::IF);
    setState(310);
    expression(0);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(311);
      match(DaricParser::THEN);
    }
    setState(314);
    match(DaricParser::NEWLINE);
    setState(315);
    statements();
    setState(319);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(316);
      match(DaricParser::ELSE);
      setState(317);
      match(DaricParser::NEWLINE);
      setState(318);
      statements();
    }
    setState(321);
    match(DaricParser::NEWLINE);
    setState(322);
    match(DaricParser::END);
    setState(323);
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
    setState(325);
    match(DaricParser::INPUT);
    setState(326);
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
    setState(328);
    match(DaricParser::OPTION);
    setState(329);
    match(DaricParser::IDENTIFIER);
    setState(332);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(330);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(331);
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
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(334);
      match(DaricParser::REF);
    }
    setState(337);
    match(DaricParser::IDENTIFIER);
    setState(343);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(338);
      match(DaricParser::COLON);
      setState(341);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case DaricParser::BYTE:
        case DaricParser::INT:
        case DaricParser::FLOAT:
        case DaricParser::STRING: {
          setState(339);
          type();
          break;
        }

        case DaricParser::IDENTIFIER: {
          setState(340);
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
    setState(345);
    match(DaricParser::PRINT);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::SYS) {
      setState(346);
      match(DaricParser::SYS);
    }
    setState(359);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(349);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(354);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(351);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(350);
          match(DaricParser::WITH);
        }
        setState(353);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(357);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(356);
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
    setState(361);
    match(DaricParser::DEF);
    setState(362);
    match(DaricParser::IDENTIFIER);
    setState(365);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(363);
      match(DaricParser::COLON);
      setState(364);
      type();
      break;
    }

    default:
      break;
    }
    setState(368);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(367);
      match(DaricParser::LPAREN);
    }
    setState(373);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(370);
        match(DaricParser::NEWLINE); 
      }
      setState(375);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(377);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(376);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(389);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(379);
      match(DaricParser::COMMA);
      setState(383);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(380);
        match(DaricParser::NEWLINE);
        setState(385);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(386);
      parameter();
      setState(391);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(392);
      match(DaricParser::RPAREN);
    }
    setState(398);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(395);
        separator(); 
      }
      setState(400);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    setState(401);
    statements();
    setState(402);
    match(DaricParser::END);
    setState(403);
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
    setState(405);
    match(DaricParser::REPEAT);
    setState(406);
    statements();
    setState(407);
    match(DaricParser::UNTIL);
    setState(408);
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
    setState(410);
    match(DaricParser::READ);
    setState(411);
    variable();
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(412);
      match(DaricParser::COMMA);
      setState(413);
      variable();
      setState(418);
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
    setState(419);
    match(DaricParser::RESTORE);
    setState(420);
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
    setState(422);
    match(DaricParser::RETURN);
    setState(424);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      setState(423);
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
    setState(426);
    match(DaricParser::RECORD);
    setState(427);
    match(DaricParser::IDENTIFIER);
    setState(431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(428);
      match(DaricParser::NEWLINE);
      setState(433);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(434);
    match(DaricParser::IDENTIFIER);
    setState(435);
    match(DaricParser::COLON);
    setState(436);
    typeOrStruct();
    setState(447);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(438); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(437);
          match(DaricParser::NEWLINE);
          setState(440); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::NEWLINE);
        setState(442);
        match(DaricParser::IDENTIFIER);
        setState(443);
        match(DaricParser::COLON);
        setState(444);
        typeOrStruct(); 
      }
      setState(449);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
    setState(453);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::NEWLINE) {
      setState(450);
      match(DaricParser::NEWLINE);
      setState(455);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(456);
    match(DaricParser::END);
    setState(457);
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
    setState(459);
    match(DaricParser::DIM);
    setState(460);
    match(DaricParser::IDENTIFIER);
    setState(461);
    match(DaricParser::COLON);
    setState(462);
    match(DaricParser::IDENTIFIER);
    setState(463);
    match(DaricParser::SOPEN);
    setState(465);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -2233785689516802048) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 1109963431740351) != 0) {
      setState(464);
      expression(0);
    }
    setState(471);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(467);
      match(DaricParser::COMMA);
      setState(468);
      expression(0);
      setState(473);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(474);
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
    setState(476);
    match(DaricParser::DIM);
    setState(477);
    match(DaricParser::IDENTIFIER);
    setState(478);
    match(DaricParser::COLON);
    setState(479);
    match(DaricParser::IDENTIFIER);
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(480);
      match(DaricParser::LPAREN);
      setState(484);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(481);
        match(DaricParser::IDENTIFIER);
        setState(482);
        match(DaricParser::EQ);
        setState(483);
        expression(0);
      }
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(486);
        match(DaricParser::COMMA);
        setState(487);
        match(DaricParser::IDENTIFIER);
        setState(488);
        match(DaricParser::EQ);
        setState(489);
        expression(0);
        setState(494);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(495);
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
    setState(498);
    match(DaricParser::SWAP);
    setState(499);
    variable();
    setState(500);
    match(DaricParser::COMMA);
    setState(501);
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
    setState(503);
    match(DaricParser::WHEN);
    setState(504);
    expression(0);
    setState(509);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(505);
      match(DaricParser::COMMA);
      setState(506);
      expression(0);
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(512);
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
    setState(514);
    match(DaricParser::WHILE);
    setState(515);
    expression(0);
    setState(516);
    statements();
    setState(517);
    match(DaricParser::END);
    setState(518);
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
    setState(520);
    match(DaricParser::IDENTIFIER);
    setState(533);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(521);
      match(DaricParser::SOPEN);
      setState(523);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -2233785689516802048) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 1109963431740351) != 0) {
        setState(522);
        expression(0);
      }
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(525);
        match(DaricParser::COMMA);
        setState(526);
        expression(0);
        setState(531);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(532);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(539);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(535);
        match(DaricParser::DOT);
        setState(536);
        match(DaricParser::IDENTIFIER); 
      }
      setState(541);
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
    setState(668);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      setState(543);
      match(DaricParser::LPAREN);
      setState(544);
      expression(0);
      setState(545);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(547);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(548);
      literal();
      break;
    }

    case 4: {
      setState(549);
      exprcall();
      break;
    }

    case 5: {
      setState(550);
      variable();
      break;
    }

    case 6: {
      setState(551);
      match(DaricParser::MINUS);
      setState(552);
      expression(52);
      break;
    }

    case 7: {
      setState(553);
      match(DaricParser::PLUS);
      setState(554);
      expression(51);
      break;
    }

    case 8: {
      setState(555);
      match(DaricParser::INT);
      setState(556);
      expression(50);
      break;
    }

    case 9: {
      setState(557);
      match(DaricParser::FLOAT);
      setState(558);
      expression(49);
      break;
    }

    case 10: {
      setState(559);
      match(DaricParser::STRING);
      setState(561);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(560);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(563);
      expression(0);
      setState(566);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(564);
        match(DaricParser::WITH);
        setState(565);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(569);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(568);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(571);
      match(DaricParser::ABS);
      setState(572);
      expression(47);
      break;
    }

    case 12: {
      setState(573);
      match(DaricParser::COMP);
      setState(574);
      expression(46);
      break;
    }

    case 13: {
      setState(575);
      match(DaricParser::NOT);
      setState(576);
      expression(45);
      break;
    }

    case 14: {
      setState(577);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(578);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(579);
      match(DaricParser::PI);
      break;
    }

    case 17: {
      setState(580);
      match(DaricParser::DEG);
      setState(581);
      expression(41);
      break;
    }

    case 18: {
      setState(582);
      match(DaricParser::RAD);
      setState(583);
      expression(40);
      break;
    }

    case 19: {
      setState(584);
      match(DaricParser::SGN);
      setState(585);
      expression(39);
      break;
    }

    case 20: {
      setState(586);
      match(DaricParser::ACS);
      setState(587);
      expression(38);
      break;
    }

    case 21: {
      setState(588);
      match(DaricParser::ASN);
      setState(589);
      expression(37);
      break;
    }

    case 22: {
      setState(590);
      match(DaricParser::ATN);
      setState(591);
      expression(36);
      break;
    }

    case 23: {
      setState(592);
      match(DaricParser::COS);
      setState(593);
      expression(35);
      break;
    }

    case 24: {
      setState(594);
      match(DaricParser::EXP);
      setState(595);
      expression(34);
      break;
    }

    case 25: {
      setState(596);
      match(DaricParser::FLOOR);
      setState(597);
      expression(33);
      break;
    }

    case 26: {
      setState(598);
      match(DaricParser::ROUND);
      setState(599);
      expression(32);
      break;
    }

    case 27: {
      setState(600);
      match(DaricParser::LN);
      setState(601);
      expression(31);
      break;
    }

    case 28: {
      setState(602);
      match(DaricParser::LOG);
      setState(603);
      expression(30);
      break;
    }

    case 29: {
      setState(604);
      match(DaricParser::SIN);
      setState(605);
      expression(29);
      break;
    }

    case 30: {
      setState(606);
      match(DaricParser::SQR);
      setState(607);
      expression(28);
      break;
    }

    case 31: {
      setState(608);
      match(DaricParser::TAN);
      setState(609);
      expression(27);
      break;
    }

    case 32: {
      setState(610);
      match(DaricParser::ASC);
      setState(611);
      expression(26);
      break;
    }

    case 33: {
      setState(612);
      match(DaricParser::CHR);
      setState(613);
      expression(25);
      break;
    }

    case 34: {
      setState(614);
      match(DaricParser::INSTR);
      setState(616);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
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
      setState(621);
      match(DaricParser::COMMA);
      setState(622);
      expression(0);
      setState(624);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
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

    case 35: {
      setState(626);
      match(DaricParser::LEFT);
      setState(628);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(627);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(630);
      expression(0);
      setState(631);
      match(DaricParser::COMMA);
      setState(632);
      expression(0);
      setState(634);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
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

    case 36: {
      setState(636);
      match(DaricParser::MID);
      setState(638);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
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
      setState(643);
      match(DaricParser::COMMA);
      setState(644);
      expression(0);
      setState(646);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(645);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(648);
      match(DaricParser::RIGHT);
      setState(650);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(649);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(652);
      expression(0);
      setState(653);
      match(DaricParser::COMMA);
      setState(654);
      expression(0);
      setState(656);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(655);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(658);
      match(DaricParser::LEN);
      setState(659);
      expression(20);
      break;
    }

    case 39: {
      setState(660);
      match(DaricParser::SIZE);
      setState(662);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(661);
        match(DaricParser::LPAREN);
      }
      setState(664);
      match(DaricParser::IDENTIFIER);
      setState(666);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(665);
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
    setState(726);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(724);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(670);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(671);
          match(DaricParser::HAT);
          setState(672);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(673);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(674);
          match(DaricParser::DIVIDE);
          setState(675);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(676);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(677);
          match(DaricParser::MULTIPLY);
          setState(678);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(679);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(680);
          match(DaricParser::DIV);
          setState(681);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(682);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(683);
          match(DaricParser::MOD);
          setState(684);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(685);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(686);
          match(DaricParser::PLUS);
          setState(687);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(688);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(689);
          match(DaricParser::MINUS);
          setState(690);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(691);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(692);
          match(DaricParser::SHL);
          setState(693);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(694);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(695);
          match(DaricParser::SHR);
          setState(696);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(697);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(698);
          match(DaricParser::EQ);
          setState(699);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(700);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(701);
          match(DaricParser::NE);
          setState(702);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(703);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(704);
          match(DaricParser::GT);
          setState(705);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(706);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(707);
          match(DaricParser::GE);
          setState(708);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(709);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(710);
          match(DaricParser::LT);
          setState(711);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(712);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(713);
          match(DaricParser::LE);
          setState(714);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(715);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(716);
          match(DaricParser::AND);
          setState(717);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(718);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(719);
          match(DaricParser::OR);
          setState(720);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(721);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(722);
          match(DaricParser::EOR);
          setState(723);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(728);
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
    setState(729);
    _la = _input->LA(1);
    if (!((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
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

//----------------- CollectionContext ------------------------------------------------------------------

DaricParser::CollectionContext::CollectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::CollectionContext::VECTOR() {
  return getToken(DaricParser::VECTOR, 0);
}

tree::TerminalNode* DaricParser::CollectionContext::MAP() {
  return getToken(DaricParser::MAP, 0);
}

tree::TerminalNode* DaricParser::CollectionContext::SET() {
  return getToken(DaricParser::SET, 0);
}

tree::TerminalNode* DaricParser::CollectionContext::QUEUE() {
  return getToken(DaricParser::QUEUE, 0);
}

tree::TerminalNode* DaricParser::CollectionContext::STACK() {
  return getToken(DaricParser::STACK, 0);
}


size_t DaricParser::CollectionContext::getRuleIndex() const {
  return DaricParser::RuleCollection;
}


std::any DaricParser::CollectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitCollection(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::CollectionContext* DaricParser::collection() {
  CollectionContext *_localctx = _tracker.createInstance<CollectionContext>(_ctx, getState());
  enterRule(_localctx, 72, DaricParser::RuleCollection);
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
    setState(731);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2233785415175766016) != 0)) {
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
  enterRule(_localctx, 74, DaricParser::RuleTypeOrStruct);
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
    setState(733);
    _la = _input->LA(1);
    if (!((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 76, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(738);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(735);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(736);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(737);
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
  enterRule(_localctx, 78, DaricParser::RuleFloatLiteral);
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
    setState(741);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(740);
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
    setState(743);
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
  enterRule(_localctx, 80, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(751);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(745);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(746);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(748);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(747);
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
        setState(750);
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
  enterRule(_localctx, 82, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(753);
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

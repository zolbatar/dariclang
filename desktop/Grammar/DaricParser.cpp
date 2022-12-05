
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
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'$'", 
      "'#'", "':'", "';'", "'.'", "','", "'''", "", "'%'", "'_'", "'('", 
      "')'", "'['", "']'", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
      "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "FOR", "IF", "IMPORT", "NEXT", "OF", 
      "OPTION", "OTHERWISE", "PRINT", "READ", "RECORD", "REF", "REM", "REPEAT", 
      "RESTORE", "RETURN", "THEN", "SIZE", "STEP", "SWAP", "TO", "UNTIL", 
      "WHEN", "WITH", "WHILE", "MAIN", "ABS", "ACS", "ASN", "ATN", "COS", 
      "DEG", "EXP", "FLOOR", "LET", "LN", "LOG", "PI", "RAD", "ROUND", "SGN", 
      "SIN", "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", 
      "MID", "RIGHT", "LEN", "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", 
      "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", 
      "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", 
      "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", 
      "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", 
      "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
      "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,107,756,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	8,5,1,5,1,5,1,5,5,5,160,8,5,10,5,12,5,163,9,5,1,5,3,5,166,8,5,1,5,3,5,
  	169,8,5,1,6,1,6,1,6,1,6,1,7,1,7,3,7,177,8,7,1,7,3,7,180,8,7,1,7,1,7,5,
  	7,184,8,7,10,7,12,7,187,9,7,1,7,3,7,190,8,7,1,8,1,8,1,8,1,8,3,8,196,8,
  	8,1,8,5,8,199,8,8,10,8,12,8,202,9,8,1,8,1,8,3,8,206,8,8,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,219,8,9,10,9,12,9,222,9,9,1,9,3,9,225,
  	8,9,1,9,3,9,228,8,9,1,10,1,10,1,10,1,10,5,10,234,8,10,10,10,12,10,237,
  	9,10,1,11,1,11,1,11,1,12,1,12,1,12,3,12,245,8,12,1,12,1,12,1,12,3,12,
  	250,8,12,1,12,1,12,5,12,254,8,12,10,12,12,12,257,9,12,1,12,1,12,1,13,
  	1,13,1,13,3,13,264,8,13,1,13,1,13,5,13,268,8,13,10,13,12,13,271,9,13,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,15,3,15,280,8,15,1,15,3,15,283,8,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,3,15,291,8,15,1,15,1,15,1,15,1,16,1,16,1,
  	16,1,17,1,17,1,17,3,17,302,8,17,1,17,1,17,1,17,3,17,307,8,17,1,18,1,18,
  	1,18,3,18,312,8,18,1,18,1,18,1,18,1,18,1,18,3,18,319,8,18,1,18,1,18,1,
  	18,1,18,1,19,1,19,1,19,1,19,3,19,329,8,19,1,20,3,20,332,8,20,1,20,1,20,
  	3,20,336,8,20,1,20,1,20,3,20,340,8,20,1,21,1,21,1,21,3,21,345,8,21,1,
  	21,3,21,348,8,21,1,21,3,21,351,8,21,3,21,353,8,21,1,22,1,22,1,22,3,22,
  	358,8,22,1,22,5,22,361,8,22,10,22,12,22,364,9,22,1,22,3,22,367,8,22,1,
  	22,1,22,5,22,371,8,22,10,22,12,22,374,9,22,1,22,5,22,377,8,22,10,22,12,
  	22,380,9,22,1,22,3,22,383,8,22,1,22,3,22,386,8,22,1,22,3,22,389,8,22,
  	1,22,5,22,392,8,22,10,22,12,22,395,9,22,1,22,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,410,8,24,10,24,12,24,413,9,24,
  	1,25,1,25,1,25,1,26,1,26,3,26,420,8,26,1,27,1,27,1,27,5,27,425,8,27,10,
  	27,12,27,428,9,27,1,27,1,27,3,27,432,8,27,1,27,1,27,4,27,436,8,27,11,
  	27,12,27,437,1,27,1,27,3,27,442,8,27,1,27,1,27,5,27,446,8,27,10,27,12,
  	27,449,9,27,1,27,5,27,452,8,27,10,27,12,27,455,9,27,1,27,1,27,1,27,1,
  	28,1,28,1,28,3,28,463,8,28,1,28,1,28,1,28,3,28,468,8,28,1,28,1,28,5,28,
  	472,8,28,10,28,12,28,475,9,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,3,29,487,8,29,1,29,1,29,1,29,1,29,5,29,493,8,29,10,29,12,29,
  	496,9,29,1,29,3,29,499,8,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,
  	31,5,31,510,8,31,10,31,12,31,513,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,
  	32,1,32,1,33,1,33,1,33,3,33,526,8,33,1,33,1,33,5,33,530,8,33,10,33,12,
  	33,533,9,33,1,33,3,33,536,8,33,1,33,1,33,5,33,540,8,33,10,33,12,33,543,
  	9,33,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,1,34,3,34,564,8,34,1,34,1,34,1,34,3,34,569,8,
  	34,1,34,3,34,572,8,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,619,8,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,3,34,627,8,34,1,34,1,34,3,34,631,8,34,1,34,1,34,1,34,1,34,
  	3,34,637,8,34,1,34,1,34,3,34,641,8,34,1,34,1,34,1,34,1,34,1,34,1,34,3,
  	34,649,8,34,1,34,1,34,3,34,653,8,34,1,34,1,34,1,34,1,34,3,34,659,8,34,
  	1,34,1,34,1,34,1,34,3,34,665,8,34,1,34,1,34,3,34,669,8,34,3,34,671,8,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,5,34,727,
  	8,34,10,34,12,34,730,9,34,1,35,1,35,1,36,1,36,1,37,1,37,1,37,3,37,739,
  	8,37,1,38,3,38,742,8,38,1,38,1,38,1,39,1,39,1,39,3,39,749,8,39,1,39,3,
  	39,752,8,39,1,40,1,40,1,40,0,1,68,41,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,0,5,1,1,69,69,2,0,69,69,74,74,1,0,63,66,2,0,63,66,106,
  	106,1,0,88,89,885,0,82,1,0,0,0,2,106,1,0,0,0,4,118,1,0,0,0,6,146,1,0,
  	0,0,8,149,1,0,0,0,10,154,1,0,0,0,12,170,1,0,0,0,14,174,1,0,0,0,16,191,
  	1,0,0,0,18,210,1,0,0,0,20,229,1,0,0,0,22,238,1,0,0,0,24,241,1,0,0,0,26,
  	260,1,0,0,0,28,274,1,0,0,0,30,276,1,0,0,0,32,295,1,0,0,0,34,298,1,0,0,
  	0,36,308,1,0,0,0,38,324,1,0,0,0,40,331,1,0,0,0,42,341,1,0,0,0,44,354,
  	1,0,0,0,46,400,1,0,0,0,48,405,1,0,0,0,50,414,1,0,0,0,52,417,1,0,0,0,54,
  	421,1,0,0,0,56,459,1,0,0,0,58,478,1,0,0,0,60,500,1,0,0,0,62,505,1,0,0,
  	0,64,516,1,0,0,0,66,522,1,0,0,0,68,670,1,0,0,0,70,731,1,0,0,0,72,733,
  	1,0,0,0,74,738,1,0,0,0,76,741,1,0,0,0,78,751,1,0,0,0,80,753,1,0,0,0,82,
  	83,3,2,1,0,83,84,5,0,0,1,84,1,1,0,0,0,85,87,3,8,4,0,86,85,1,0,0,0,87,
  	88,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,107,1,0,0,0,90,92,3,8,4,0,91,
  	90,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,
  	93,1,0,0,0,96,99,3,6,3,0,97,100,3,8,4,0,98,100,5,0,0,1,99,97,1,0,0,0,
  	99,98,1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,93,1,0,0,0,102,105,1,
  	0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,
  	106,86,1,0,0,0,106,103,1,0,0,0,107,3,1,0,0,0,108,110,5,69,0,0,109,108,
  	1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,114,1,0,0,
  	0,113,111,1,0,0,0,114,116,3,6,3,0,115,117,7,0,0,0,116,115,1,0,0,0,116,
  	117,1,0,0,0,117,119,1,0,0,0,118,111,1,0,0,0,119,120,1,0,0,0,120,118,1,
  	0,0,0,120,121,1,0,0,0,121,5,1,0,0,0,122,147,3,10,5,0,123,147,3,14,7,0,
  	124,147,3,16,8,0,125,147,3,18,9,0,126,147,3,20,10,0,127,147,3,22,11,0,
  	128,147,3,24,12,0,129,147,3,28,14,0,130,147,3,30,15,0,131,147,3,34,17,
  	0,132,147,3,36,18,0,133,147,3,32,16,0,134,147,3,38,19,0,135,147,3,44,
  	22,0,136,147,3,42,21,0,137,147,3,48,24,0,138,147,3,46,23,0,139,147,3,
  	50,25,0,140,147,3,52,26,0,141,147,3,54,27,0,142,147,3,56,28,0,143,147,
  	3,58,29,0,144,147,3,60,30,0,145,147,3,64,32,0,146,122,1,0,0,0,146,123,
  	1,0,0,0,146,124,1,0,0,0,146,125,1,0,0,0,146,126,1,0,0,0,146,127,1,0,0,
  	0,146,128,1,0,0,0,146,129,1,0,0,0,146,130,1,0,0,0,146,131,1,0,0,0,146,
  	132,1,0,0,0,146,133,1,0,0,0,146,134,1,0,0,0,146,135,1,0,0,0,146,136,1,
  	0,0,0,146,137,1,0,0,0,146,138,1,0,0,0,146,139,1,0,0,0,146,140,1,0,0,0,
  	146,141,1,0,0,0,146,142,1,0,0,0,146,143,1,0,0,0,146,144,1,0,0,0,146,145,
  	1,0,0,0,147,7,1,0,0,0,148,150,7,1,0,0,149,148,1,0,0,0,150,151,1,0,0,0,
  	151,149,1,0,0,0,151,152,1,0,0,0,152,9,1,0,0,0,153,155,5,44,0,0,154,153,
  	1,0,0,0,154,155,1,0,0,0,155,156,1,0,0,0,156,161,3,12,6,0,157,158,5,72,
  	0,0,158,160,3,12,6,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,
  	161,162,1,0,0,0,162,168,1,0,0,0,163,161,1,0,0,0,164,166,5,15,0,0,165,
  	164,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,167,169,3,70,35,0,168,165,
  	1,0,0,0,168,169,1,0,0,0,169,11,1,0,0,0,170,171,3,66,33,0,171,172,5,81,
  	0,0,172,173,3,68,34,0,173,13,1,0,0,0,174,176,5,106,0,0,175,177,5,77,0,
  	0,176,175,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,180,3,68,34,0,179,
  	178,1,0,0,0,179,180,1,0,0,0,180,185,1,0,0,0,181,182,5,72,0,0,182,184,
  	3,68,34,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,
  	0,0,186,189,1,0,0,0,187,185,1,0,0,0,188,190,5,78,0,0,189,188,1,0,0,0,
  	189,190,1,0,0,0,190,15,1,0,0,0,191,192,5,3,0,0,192,193,3,68,34,0,193,
  	195,5,15,0,0,194,196,3,8,4,0,195,194,1,0,0,0,195,196,1,0,0,0,196,200,
  	1,0,0,0,197,199,3,62,31,0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,
  	0,0,200,201,1,0,0,0,201,205,1,0,0,0,202,200,1,0,0,0,203,204,5,17,0,0,
  	204,206,3,2,1,0,205,203,1,0,0,0,205,206,1,0,0,0,206,207,1,0,0,0,207,208,
  	5,10,0,0,208,209,5,3,0,0,209,17,1,0,0,0,210,211,5,4,0,0,211,212,5,106,
  	0,0,212,213,5,81,0,0,213,220,3,74,37,0,214,215,5,72,0,0,215,216,5,106,
  	0,0,216,217,5,81,0,0,217,219,3,74,37,0,218,214,1,0,0,0,219,222,1,0,0,
  	0,220,218,1,0,0,0,220,221,1,0,0,0,221,227,1,0,0,0,222,220,1,0,0,0,223,
  	225,5,15,0,0,224,223,1,0,0,0,224,225,1,0,0,0,225,226,1,0,0,0,226,228,
  	3,70,35,0,227,224,1,0,0,0,227,228,1,0,0,0,228,19,1,0,0,0,229,230,5,5,
  	0,0,230,235,3,78,39,0,231,232,5,72,0,0,232,234,3,78,39,0,233,231,1,0,
  	0,0,234,237,1,0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,21,1,0,0,0,237,
  	235,1,0,0,0,238,239,5,6,0,0,239,240,3,80,40,0,240,23,1,0,0,0,241,242,
  	5,8,0,0,242,244,5,106,0,0,243,245,5,15,0,0,244,243,1,0,0,0,244,245,1,
  	0,0,0,245,246,1,0,0,0,246,247,3,70,35,0,247,249,5,79,0,0,248,250,3,68,
  	34,0,249,248,1,0,0,0,249,250,1,0,0,0,250,255,1,0,0,0,251,252,5,72,0,0,
  	252,254,3,68,34,0,253,251,1,0,0,0,254,257,1,0,0,0,255,253,1,0,0,0,255,
  	256,1,0,0,0,256,258,1,0,0,0,257,255,1,0,0,0,258,259,5,80,0,0,259,25,1,
  	0,0,0,260,261,5,106,0,0,261,263,5,77,0,0,262,264,3,68,34,0,263,262,1,
  	0,0,0,263,264,1,0,0,0,264,269,1,0,0,0,265,266,5,72,0,0,266,268,3,68,34,
  	0,267,265,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,
  	272,1,0,0,0,271,269,1,0,0,0,272,273,5,78,0,0,273,27,1,0,0,0,274,275,5,
  	10,0,0,275,29,1,0,0,0,276,277,5,11,0,0,277,282,5,106,0,0,278,280,5,15,
  	0,0,279,278,1,0,0,0,279,280,1,0,0,0,280,281,1,0,0,0,281,283,3,70,35,0,
  	282,279,1,0,0,0,282,283,1,0,0,0,283,284,1,0,0,0,284,285,5,81,0,0,285,
  	286,3,68,34,0,286,287,5,30,0,0,287,290,3,68,34,0,288,289,5,28,0,0,289,
  	291,3,68,34,0,290,288,1,0,0,0,290,291,1,0,0,0,291,292,1,0,0,0,292,293,
  	3,2,1,0,293,294,5,14,0,0,294,31,1,0,0,0,295,296,5,13,0,0,296,297,3,80,
  	40,0,297,33,1,0,0,0,298,299,5,12,0,0,299,301,3,68,34,0,300,302,5,26,0,
  	0,301,300,1,0,0,0,301,302,1,0,0,0,302,303,1,0,0,0,303,306,3,4,2,0,304,
  	305,5,9,0,0,305,307,3,4,2,0,306,304,1,0,0,0,306,307,1,0,0,0,307,35,1,
  	0,0,0,308,309,5,12,0,0,309,311,3,68,34,0,310,312,5,26,0,0,311,310,1,0,
  	0,0,311,312,1,0,0,0,312,313,1,0,0,0,313,314,5,74,0,0,314,318,3,2,1,0,
  	315,316,5,9,0,0,316,317,5,74,0,0,317,319,3,2,1,0,318,315,1,0,0,0,318,
  	319,1,0,0,0,319,320,1,0,0,0,320,321,5,74,0,0,321,322,5,10,0,0,322,323,
  	5,12,0,0,323,37,1,0,0,0,324,325,5,16,0,0,325,328,5,106,0,0,326,329,5,
  	106,0,0,327,329,3,78,39,0,328,326,1,0,0,0,328,327,1,0,0,0,329,39,1,0,
  	0,0,330,332,5,21,0,0,331,330,1,0,0,0,331,332,1,0,0,0,332,333,1,0,0,0,
  	333,335,5,106,0,0,334,336,5,15,0,0,335,334,1,0,0,0,335,336,1,0,0,0,336,
  	339,1,0,0,0,337,340,3,70,35,0,338,340,5,106,0,0,339,337,1,0,0,0,339,338,
  	1,0,0,0,340,41,1,0,0,0,341,352,5,18,0,0,342,347,3,68,34,0,343,345,5,33,
  	0,0,344,343,1,0,0,0,344,345,1,0,0,0,345,346,1,0,0,0,346,348,3,68,34,0,
  	347,344,1,0,0,0,347,348,1,0,0,0,348,350,1,0,0,0,349,351,5,70,0,0,350,
  	349,1,0,0,0,350,351,1,0,0,0,351,353,1,0,0,0,352,342,1,0,0,0,352,353,1,
  	0,0,0,353,43,1,0,0,0,354,355,5,7,0,0,355,357,5,106,0,0,356,358,5,77,0,
  	0,357,356,1,0,0,0,357,358,1,0,0,0,358,362,1,0,0,0,359,361,5,74,0,0,360,
  	359,1,0,0,0,361,364,1,0,0,0,362,360,1,0,0,0,362,363,1,0,0,0,363,366,1,
  	0,0,0,364,362,1,0,0,0,365,367,3,40,20,0,366,365,1,0,0,0,366,367,1,0,0,
  	0,367,378,1,0,0,0,368,372,5,72,0,0,369,371,5,74,0,0,370,369,1,0,0,0,371,
  	374,1,0,0,0,372,370,1,0,0,0,372,373,1,0,0,0,373,375,1,0,0,0,374,372,1,
  	0,0,0,375,377,3,40,20,0,376,368,1,0,0,0,377,380,1,0,0,0,378,376,1,0,0,
  	0,378,379,1,0,0,0,379,382,1,0,0,0,380,378,1,0,0,0,381,383,5,78,0,0,382,
  	381,1,0,0,0,382,383,1,0,0,0,383,388,1,0,0,0,384,386,5,15,0,0,385,384,
  	1,0,0,0,385,386,1,0,0,0,386,387,1,0,0,0,387,389,3,70,35,0,388,385,1,0,
  	0,0,388,389,1,0,0,0,389,393,1,0,0,0,390,392,3,8,4,0,391,390,1,0,0,0,392,
  	395,1,0,0,0,393,391,1,0,0,0,393,394,1,0,0,0,394,396,1,0,0,0,395,393,1,
  	0,0,0,396,397,3,2,1,0,397,398,5,10,0,0,398,399,5,7,0,0,399,45,1,0,0,0,
  	400,401,5,23,0,0,401,402,3,2,1,0,402,403,5,31,0,0,403,404,3,68,34,0,404,
  	47,1,0,0,0,405,406,5,19,0,0,406,411,3,66,33,0,407,408,5,72,0,0,408,410,
  	3,66,33,0,409,407,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,411,412,1,0,
  	0,0,412,49,1,0,0,0,413,411,1,0,0,0,414,415,5,24,0,0,415,416,3,80,40,0,
  	416,51,1,0,0,0,417,419,5,25,0,0,418,420,3,68,34,0,419,418,1,0,0,0,419,
  	420,1,0,0,0,420,53,1,0,0,0,421,422,5,20,0,0,422,426,5,106,0,0,423,425,
  	3,8,4,0,424,423,1,0,0,0,425,428,1,0,0,0,426,424,1,0,0,0,426,427,1,0,0,
  	0,427,429,1,0,0,0,428,426,1,0,0,0,429,431,5,106,0,0,430,432,5,15,0,0,
  	431,430,1,0,0,0,431,432,1,0,0,0,432,433,1,0,0,0,433,447,3,72,36,0,434,
  	436,3,8,4,0,435,434,1,0,0,0,436,437,1,0,0,0,437,435,1,0,0,0,437,438,1,
  	0,0,0,438,439,1,0,0,0,439,441,5,106,0,0,440,442,5,15,0,0,441,440,1,0,
  	0,0,441,442,1,0,0,0,442,443,1,0,0,0,443,444,3,72,36,0,444,446,1,0,0,0,
  	445,435,1,0,0,0,446,449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,0,0,448,453,
  	1,0,0,0,449,447,1,0,0,0,450,452,3,8,4,0,451,450,1,0,0,0,452,455,1,0,0,
  	0,453,451,1,0,0,0,453,454,1,0,0,0,454,456,1,0,0,0,455,453,1,0,0,0,456,
  	457,5,10,0,0,457,458,5,20,0,0,458,55,1,0,0,0,459,460,5,8,0,0,460,462,
  	5,106,0,0,461,463,5,15,0,0,462,461,1,0,0,0,462,463,1,0,0,0,463,464,1,
  	0,0,0,464,465,5,106,0,0,465,467,5,79,0,0,466,468,3,68,34,0,467,466,1,
  	0,0,0,467,468,1,0,0,0,468,473,1,0,0,0,469,470,5,72,0,0,470,472,3,68,34,
  	0,471,469,1,0,0,0,472,475,1,0,0,0,473,471,1,0,0,0,473,474,1,0,0,0,474,
  	476,1,0,0,0,475,473,1,0,0,0,476,477,5,80,0,0,477,57,1,0,0,0,478,479,5,
  	8,0,0,479,480,5,106,0,0,480,481,5,15,0,0,481,498,5,106,0,0,482,486,5,
  	77,0,0,483,484,5,106,0,0,484,485,5,81,0,0,485,487,3,68,34,0,486,483,1,
  	0,0,0,486,487,1,0,0,0,487,494,1,0,0,0,488,489,5,72,0,0,489,490,5,106,
  	0,0,490,491,5,81,0,0,491,493,3,68,34,0,492,488,1,0,0,0,493,496,1,0,0,
  	0,494,492,1,0,0,0,494,495,1,0,0,0,495,497,1,0,0,0,496,494,1,0,0,0,497,
  	499,5,78,0,0,498,482,1,0,0,0,498,499,1,0,0,0,499,59,1,0,0,0,500,501,5,
  	29,0,0,501,502,3,66,33,0,502,503,5,72,0,0,503,504,3,66,33,0,504,61,1,
  	0,0,0,505,506,5,32,0,0,506,511,3,68,34,0,507,508,5,72,0,0,508,510,3,68,
  	34,0,509,507,1,0,0,0,510,513,1,0,0,0,511,509,1,0,0,0,511,512,1,0,0,0,
  	512,514,1,0,0,0,513,511,1,0,0,0,514,515,3,2,1,0,515,63,1,0,0,0,516,517,
  	5,34,0,0,517,518,3,68,34,0,518,519,3,2,1,0,519,520,5,10,0,0,520,521,5,
  	34,0,0,521,65,1,0,0,0,522,535,5,106,0,0,523,525,5,79,0,0,524,526,3,68,
  	34,0,525,524,1,0,0,0,525,526,1,0,0,0,526,531,1,0,0,0,527,528,5,72,0,0,
  	528,530,3,68,34,0,529,527,1,0,0,0,530,533,1,0,0,0,531,529,1,0,0,0,531,
  	532,1,0,0,0,532,534,1,0,0,0,533,531,1,0,0,0,534,536,5,80,0,0,535,523,
  	1,0,0,0,535,536,1,0,0,0,536,541,1,0,0,0,537,538,5,71,0,0,538,540,5,106,
  	0,0,539,537,1,0,0,0,540,543,1,0,0,0,541,539,1,0,0,0,541,542,1,0,0,0,542,
  	67,1,0,0,0,543,541,1,0,0,0,544,545,6,34,-1,0,545,546,5,77,0,0,546,547,
  	3,68,34,0,547,548,5,78,0,0,548,671,1,0,0,0,549,671,5,35,0,0,550,671,3,
  	74,37,0,551,671,3,26,13,0,552,671,3,66,33,0,553,554,5,89,0,0,554,671,
  	3,68,34,52,555,556,5,88,0,0,556,671,3,68,34,51,557,558,5,64,0,0,558,671,
  	3,68,34,50,559,560,5,65,0,0,560,671,3,68,34,49,561,563,5,66,0,0,562,564,
  	5,77,0,0,563,562,1,0,0,0,563,564,1,0,0,0,564,565,1,0,0,0,565,568,3,68,
  	34,0,566,567,5,33,0,0,567,569,3,68,34,0,568,566,1,0,0,0,568,569,1,0,0,
  	0,569,571,1,0,0,0,570,572,5,78,0,0,571,570,1,0,0,0,571,572,1,0,0,0,572,
  	671,1,0,0,0,573,574,5,36,0,0,574,671,3,68,34,47,575,576,5,96,0,0,576,
  	671,3,68,34,46,577,578,5,97,0,0,578,671,3,68,34,45,579,671,5,55,0,0,580,
  	671,5,54,0,0,581,671,5,47,0,0,582,583,5,41,0,0,583,671,3,68,34,41,584,
  	585,5,48,0,0,585,671,3,68,34,40,586,587,5,50,0,0,587,671,3,68,34,39,588,
  	589,5,37,0,0,589,671,3,68,34,38,590,591,5,38,0,0,591,671,3,68,34,37,592,
  	593,5,39,0,0,593,671,3,68,34,36,594,595,5,40,0,0,595,671,3,68,34,35,596,
  	597,5,42,0,0,597,671,3,68,34,34,598,599,5,43,0,0,599,671,3,68,34,33,600,
  	601,5,49,0,0,601,671,3,68,34,32,602,603,5,45,0,0,603,671,3,68,34,31,604,
  	605,5,46,0,0,605,671,3,68,34,30,606,607,5,51,0,0,607,671,3,68,34,29,608,
  	609,5,52,0,0,609,671,3,68,34,28,610,611,5,53,0,0,611,671,3,68,34,27,612,
  	613,5,56,0,0,613,671,3,68,34,26,614,615,5,57,0,0,615,671,3,68,34,25,616,
  	618,5,58,0,0,617,619,5,77,0,0,618,617,1,0,0,0,618,619,1,0,0,0,619,620,
  	1,0,0,0,620,621,3,68,34,0,621,622,5,72,0,0,622,623,3,68,34,0,623,624,
  	5,72,0,0,624,626,3,68,34,0,625,627,5,78,0,0,626,625,1,0,0,0,626,627,1,
  	0,0,0,627,671,1,0,0,0,628,630,5,59,0,0,629,631,5,77,0,0,630,629,1,0,0,
  	0,630,631,1,0,0,0,631,632,1,0,0,0,632,633,3,68,34,0,633,634,5,72,0,0,
  	634,636,3,68,34,0,635,637,5,78,0,0,636,635,1,0,0,0,636,637,1,0,0,0,637,
  	671,1,0,0,0,638,640,5,60,0,0,639,641,5,77,0,0,640,639,1,0,0,0,640,641,
  	1,0,0,0,641,642,1,0,0,0,642,643,3,68,34,0,643,644,5,72,0,0,644,645,3,
  	68,34,0,645,646,5,72,0,0,646,648,3,68,34,0,647,649,5,78,0,0,648,647,1,
  	0,0,0,648,649,1,0,0,0,649,671,1,0,0,0,650,652,5,61,0,0,651,653,5,77,0,
  	0,652,651,1,0,0,0,652,653,1,0,0,0,653,654,1,0,0,0,654,655,3,68,34,0,655,
  	656,5,72,0,0,656,658,3,68,34,0,657,659,5,78,0,0,658,657,1,0,0,0,658,659,
  	1,0,0,0,659,671,1,0,0,0,660,661,5,62,0,0,661,671,3,68,34,20,662,664,5,
  	27,0,0,663,665,5,77,0,0,664,663,1,0,0,0,664,665,1,0,0,0,665,666,1,0,0,
  	0,666,668,5,106,0,0,667,669,5,78,0,0,668,667,1,0,0,0,668,669,1,0,0,0,
  	669,671,1,0,0,0,670,544,1,0,0,0,670,549,1,0,0,0,670,550,1,0,0,0,670,551,
  	1,0,0,0,670,552,1,0,0,0,670,553,1,0,0,0,670,555,1,0,0,0,670,557,1,0,0,
  	0,670,559,1,0,0,0,670,561,1,0,0,0,670,573,1,0,0,0,670,575,1,0,0,0,670,
  	577,1,0,0,0,670,579,1,0,0,0,670,580,1,0,0,0,670,581,1,0,0,0,670,582,1,
  	0,0,0,670,584,1,0,0,0,670,586,1,0,0,0,670,588,1,0,0,0,670,590,1,0,0,0,
  	670,592,1,0,0,0,670,594,1,0,0,0,670,596,1,0,0,0,670,598,1,0,0,0,670,600,
  	1,0,0,0,670,602,1,0,0,0,670,604,1,0,0,0,670,606,1,0,0,0,670,608,1,0,0,
  	0,670,610,1,0,0,0,670,612,1,0,0,0,670,614,1,0,0,0,670,616,1,0,0,0,670,
  	628,1,0,0,0,670,638,1,0,0,0,670,650,1,0,0,0,670,660,1,0,0,0,670,662,1,
  	0,0,0,671,728,1,0,0,0,672,673,10,18,0,0,673,674,5,87,0,0,674,727,3,68,
  	34,18,675,676,10,17,0,0,676,677,5,91,0,0,677,727,3,68,34,18,678,679,10,
  	16,0,0,679,680,5,90,0,0,680,727,3,68,34,17,681,682,10,15,0,0,682,683,
  	5,95,0,0,683,727,3,68,34,16,684,685,10,14,0,0,685,686,5,94,0,0,686,727,
  	3,68,34,15,687,688,10,13,0,0,688,689,5,88,0,0,689,727,3,68,34,14,690,
  	691,10,12,0,0,691,692,5,89,0,0,692,727,3,68,34,13,693,694,10,11,0,0,694,
  	695,5,92,0,0,695,727,3,68,34,12,696,697,10,10,0,0,697,698,5,93,0,0,698,
  	727,3,68,34,11,699,700,10,9,0,0,700,701,5,81,0,0,701,727,3,68,34,10,702,
  	703,10,8,0,0,703,704,5,82,0,0,704,727,3,68,34,9,705,706,10,7,0,0,706,
  	707,5,83,0,0,707,727,3,68,34,8,708,709,10,6,0,0,709,710,5,84,0,0,710,
  	727,3,68,34,7,711,712,10,5,0,0,712,713,5,85,0,0,713,727,3,68,34,6,714,
  	715,10,4,0,0,715,716,5,86,0,0,716,727,3,68,34,5,717,718,10,3,0,0,718,
  	719,5,98,0,0,719,727,3,68,34,4,720,721,10,2,0,0,721,722,5,99,0,0,722,
  	727,3,68,34,3,723,724,10,1,0,0,724,725,5,100,0,0,725,727,3,68,34,2,726,
  	672,1,0,0,0,726,675,1,0,0,0,726,678,1,0,0,0,726,681,1,0,0,0,726,684,1,
  	0,0,0,726,687,1,0,0,0,726,690,1,0,0,0,726,693,1,0,0,0,726,696,1,0,0,0,
  	726,699,1,0,0,0,726,702,1,0,0,0,726,705,1,0,0,0,726,708,1,0,0,0,726,711,
  	1,0,0,0,726,714,1,0,0,0,726,717,1,0,0,0,726,720,1,0,0,0,726,723,1,0,0,
  	0,727,730,1,0,0,0,728,726,1,0,0,0,728,729,1,0,0,0,729,69,1,0,0,0,730,
  	728,1,0,0,0,731,732,7,2,0,0,732,71,1,0,0,0,733,734,7,3,0,0,734,73,1,0,
  	0,0,735,739,3,76,38,0,736,739,3,78,39,0,737,739,3,80,40,0,738,735,1,0,
  	0,0,738,736,1,0,0,0,738,737,1,0,0,0,739,75,1,0,0,0,740,742,7,4,0,0,741,
  	740,1,0,0,0,741,742,1,0,0,0,742,743,1,0,0,0,743,744,5,104,0,0,744,77,
  	1,0,0,0,745,752,5,102,0,0,746,752,5,103,0,0,747,749,7,4,0,0,748,747,1,
  	0,0,0,748,749,1,0,0,0,749,750,1,0,0,0,750,752,5,105,0,0,751,745,1,0,0,
  	0,751,746,1,0,0,0,751,748,1,0,0,0,752,79,1,0,0,0,753,754,5,101,0,0,754,
  	81,1,0,0,0,93,88,93,99,103,106,111,116,120,146,151,154,161,165,168,176,
  	179,185,189,195,200,205,220,224,227,235,244,249,255,263,269,279,282,290,
  	301,306,311,318,328,331,335,339,344,347,350,352,357,362,366,372,378,382,
  	385,388,393,411,419,426,431,437,441,447,453,462,467,473,486,494,498,511,
  	525,531,535,541,563,568,571,618,626,630,636,640,648,652,658,664,668,670,
  	726,728,738,741,748,751
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

DaricParser::TypeContext* DaricParser::AssignContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::AssignContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & 4222124650659841) != 0) {
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(164);
        match(DaricParser::OF);
      }
      setState(167);
      type();
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
    setState(170);
    variable();
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
    setState(174);
    match(DaricParser::IDENTIFIER);
    setState(176);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
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

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
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

std::vector<tree::TerminalNode *> DaricParser::ConstContext::COMMA() {
  return getTokens(DaricParser::COMMA);
}

tree::TerminalNode* DaricParser::ConstContext::COMMA(size_t i) {
  return getToken(DaricParser::COMMA, i);
}

DaricParser::TypeContext* DaricParser::ConstContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ConstContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(210);
    match(DaricParser::CONST);
    setState(211);
    match(DaricParser::IDENTIFIER);
    setState(212);
    match(DaricParser::EQ);
    setState(213);
    literal();
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(214);
      match(DaricParser::COMMA);
      setState(215);
      match(DaricParser::IDENTIFIER);
      setState(216);
      match(DaricParser::EQ);
      setState(217);
      literal();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & 4222124650659841) != 0) {
      setState(224);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(223);
        match(DaricParser::OF);
      }
      setState(226);
      type();
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
    setState(229);
    match(DaricParser::DATA);
    setState(230);
    integerLiteral();
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(231);
      match(DaricParser::COMMA);
      setState(232);
      integerLiteral();
      setState(237);
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
    setState(238);
    match(DaricParser::DATALABEL);
    setState(239);
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

DaricParser::TypeContext* DaricParser::DimContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::DimContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::DimContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}

tree::TerminalNode* DaricParser::DimContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(241);
    match(DaricParser::DIM);
    setState(242);
    match(DaricParser::IDENTIFIER);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(243);
      match(DaricParser::OF);
    }
    setState(246);
    type();
    setState(247);
    match(DaricParser::SOPEN);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9223354410443210752) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 8671589310471) != 0) {
      setState(248);
      expression(0);
    }
    setState(255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(251);
      match(DaricParser::COMMA);
      setState(252);
      expression(0);
      setState(257);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(258);
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
    setState(260);
    match(DaricParser::IDENTIFIER);
    setState(261);
    match(DaricParser::LPAREN);
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9223354410443210752) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 8671589310471) != 0) {
      setState(262);
      expression(0);
    }
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(265);
      match(DaricParser::COMMA);
      setState(266);
      expression(0);
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
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
    setState(274);
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

DaricParser::TypeContext* DaricParser::ForContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ForContext::STEP() {
  return getToken(DaricParser::STEP, 0);
}

tree::TerminalNode* DaricParser::ForContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(276);
    match(DaricParser::FOR);
    setState(277);
    match(DaricParser::IDENTIFIER);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & 4222124650659841) != 0) {
      setState(279);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(278);
        match(DaricParser::OF);
      }
      setState(281);
      type();
    }
    setState(284);
    match(DaricParser::EQ);
    setState(285);
    expression(0);
    setState(286);
    match(DaricParser::TO);
    setState(287);
    expression(0);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(288);
      match(DaricParser::STEP);
      setState(289);
      expression(0);
    }
    setState(292);
    statements();
    setState(293);
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
    setState(295);
    match(DaricParser::IMPORT);
    setState(296);
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
    setState(298);
    match(DaricParser::IF);
    setState(299);
    expression(0);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(300);
      match(DaricParser::THEN);
    }
    setState(303);
    statementsl();
    setState(306);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(304);
      match(DaricParser::ELSE);
      setState(305);
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
    setState(308);
    match(DaricParser::IF);
    setState(309);
    expression(0);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(310);
      match(DaricParser::THEN);
    }
    setState(313);
    match(DaricParser::NEWLINE);
    setState(314);
    statements();
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(315);
      match(DaricParser::ELSE);
      setState(316);
      match(DaricParser::NEWLINE);
      setState(317);
      statements();
    }
    setState(320);
    match(DaricParser::NEWLINE);
    setState(321);
    match(DaricParser::END);
    setState(322);
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
    setState(324);
    match(DaricParser::OPTION);
    setState(325);
    match(DaricParser::IDENTIFIER);
    setState(328);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(326);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(327);
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

DaricParser::TypeContext* DaricParser::ParameterContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ParameterContext::REF() {
  return getToken(DaricParser::REF, 0);
}

tree::TerminalNode* DaricParser::ParameterContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(330);
      match(DaricParser::REF);
    }
    setState(333);
    match(DaricParser::IDENTIFIER);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(334);
      match(DaricParser::OF);
    }
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::BYTE:
      case DaricParser::INT:
      case DaricParser::FLOAT:
      case DaricParser::STRING: {
        setState(337);
        type();
        break;
      }

      case DaricParser::IDENTIFIER: {
        setState(338);
        match(DaricParser::IDENTIFIER);
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

//----------------- PrintContext ------------------------------------------------------------------

DaricParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::PrintContext::PRINT() {
  return getToken(DaricParser::PRINT, 0);
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
    setState(341);
    match(DaricParser::PRINT);
    setState(352);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(342);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(347);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(344);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(343);
          match(DaricParser::WITH);
        }
        setState(346);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(350);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(349);
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

DaricParser::TypeContext* DaricParser::ProcedureContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

std::vector<DaricParser::SeparatorContext *> DaricParser::ProcedureContext::separator() {
  return getRuleContexts<DaricParser::SeparatorContext>();
}

DaricParser::SeparatorContext* DaricParser::ProcedureContext::separator(size_t i) {
  return getRuleContext<DaricParser::SeparatorContext>(i);
}

tree::TerminalNode* DaricParser::ProcedureContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(354);
    match(DaricParser::DEF);
    setState(355);
    match(DaricParser::IDENTIFIER);
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(356);
      match(DaricParser::LPAREN);
    }
    setState(362);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(359);
        match(DaricParser::NEWLINE); 
      }
      setState(364);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(366);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(365);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(368);
      match(DaricParser::COMMA);
      setState(372);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(369);
        match(DaricParser::NEWLINE);
        setState(374);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(375);
      parameter();
      setState(380);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(382);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(381);
      match(DaricParser::RPAREN);
    }
    setState(388);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 15) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 15)) & 4222124650659841) != 0) {
      setState(385);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(384);
        match(DaricParser::OF);
      }
      setState(387);
      type();
    }
    setState(393);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(390);
        separator(); 
      }
      setState(395);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(396);
    statements();
    setState(397);
    match(DaricParser::END);
    setState(398);
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
    setState(400);
    match(DaricParser::REPEAT);
    setState(401);
    statements();
    setState(402);
    match(DaricParser::UNTIL);
    setState(403);
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
    setState(405);
    match(DaricParser::READ);
    setState(406);
    variable();
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(407);
      match(DaricParser::COMMA);
      setState(408);
      variable();
      setState(413);
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
    setState(414);
    match(DaricParser::RESTORE);
    setState(415);
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
    setState(417);
    match(DaricParser::RETURN);
    setState(419);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(418);
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

std::vector<DaricParser::TypeOrStructContext *> DaricParser::StructContext::typeOrStruct() {
  return getRuleContexts<DaricParser::TypeOrStructContext>();
}

DaricParser::TypeOrStructContext* DaricParser::StructContext::typeOrStruct(size_t i) {
  return getRuleContext<DaricParser::TypeOrStructContext>(i);
}

tree::TerminalNode* DaricParser::StructContext::END() {
  return getToken(DaricParser::END, 0);
}

std::vector<DaricParser::SeparatorContext *> DaricParser::StructContext::separator() {
  return getRuleContexts<DaricParser::SeparatorContext>();
}

DaricParser::SeparatorContext* DaricParser::StructContext::separator(size_t i) {
  return getRuleContext<DaricParser::SeparatorContext>(i);
}

std::vector<tree::TerminalNode *> DaricParser::StructContext::OF() {
  return getTokens(DaricParser::OF);
}

tree::TerminalNode* DaricParser::StructContext::OF(size_t i) {
  return getToken(DaricParser::OF, i);
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
    setState(421);
    match(DaricParser::RECORD);
    setState(422);
    match(DaricParser::IDENTIFIER);
    setState(426);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(423);
      separator();
      setState(428);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(429);
    match(DaricParser::IDENTIFIER);
    setState(431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(430);
      match(DaricParser::OF);
    }
    setState(433);
    typeOrStruct();
    setState(447);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(435); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(434);
          separator();
          setState(437); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(439);
        match(DaricParser::IDENTIFIER);
        setState(441);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(440);
          match(DaricParser::OF);
        }
        setState(443);
        typeOrStruct(); 
      }
      setState(449);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
    setState(453);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(450);
      separator();
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

tree::TerminalNode* DaricParser::StructDimContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::StructDimContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
}

tree::TerminalNode* DaricParser::StructDimContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(461);
      match(DaricParser::OF);
    }
    setState(464);
    match(DaricParser::IDENTIFIER);
    setState(465);
    match(DaricParser::SOPEN);
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9223354410443210752) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 8671589310471) != 0) {
      setState(466);
      expression(0);
    }
    setState(473);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(469);
      match(DaricParser::COMMA);
      setState(470);
      expression(0);
      setState(475);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(476);
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

tree::TerminalNode* DaricParser::StructInstanceContext::OF() {
  return getToken(DaricParser::OF, 0);
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
    setState(478);
    match(DaricParser::DIM);
    setState(479);
    match(DaricParser::IDENTIFIER);
    setState(480);
    match(DaricParser::OF);
    setState(481);
    match(DaricParser::IDENTIFIER);
    setState(498);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(482);
      match(DaricParser::LPAREN);
      setState(486);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(483);
        match(DaricParser::IDENTIFIER);
        setState(484);
        match(DaricParser::EQ);
        setState(485);
        expression(0);
      }
      setState(494);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(488);
        match(DaricParser::COMMA);
        setState(489);
        match(DaricParser::IDENTIFIER);
        setState(490);
        match(DaricParser::EQ);
        setState(491);
        expression(0);
        setState(496);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(497);
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
    setState(500);
    match(DaricParser::SWAP);
    setState(501);
    variable();
    setState(502);
    match(DaricParser::COMMA);
    setState(503);
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
    setState(505);
    match(DaricParser::WHEN);
    setState(506);
    expression(0);
    setState(511);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(507);
      match(DaricParser::COMMA);
      setState(508);
      expression(0);
      setState(513);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(514);
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
    setState(516);
    match(DaricParser::WHILE);
    setState(517);
    expression(0);
    setState(518);
    statements();
    setState(519);
    match(DaricParser::END);
    setState(520);
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
    setState(522);
    match(DaricParser::IDENTIFIER);
    setState(535);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(523);
      match(DaricParser::SOPEN);
      setState(525);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 9223354410443210752) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 8671589310471) != 0) {
        setState(524);
        expression(0);
      }
      setState(531);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(527);
        match(DaricParser::COMMA);
        setState(528);
        expression(0);
        setState(533);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(534);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(541);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(537);
        match(DaricParser::DOT);
        setState(538);
        match(DaricParser::IDENTIFIER); 
      }
      setState(543);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
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
    setState(670);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      setState(545);
      match(DaricParser::LPAREN);
      setState(546);
      expression(0);
      setState(547);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(549);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(550);
      literal();
      break;
    }

    case 4: {
      setState(551);
      exprcall();
      break;
    }

    case 5: {
      setState(552);
      variable();
      break;
    }

    case 6: {
      setState(553);
      match(DaricParser::MINUS);
      setState(554);
      expression(52);
      break;
    }

    case 7: {
      setState(555);
      match(DaricParser::PLUS);
      setState(556);
      expression(51);
      break;
    }

    case 8: {
      setState(557);
      match(DaricParser::INT);
      setState(558);
      expression(50);
      break;
    }

    case 9: {
      setState(559);
      match(DaricParser::FLOAT);
      setState(560);
      expression(49);
      break;
    }

    case 10: {
      setState(561);
      match(DaricParser::STRING);
      setState(563);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(562);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(565);
      expression(0);
      setState(568);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(566);
        match(DaricParser::WITH);
        setState(567);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(571);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(570);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(573);
      match(DaricParser::ABS);
      setState(574);
      expression(47);
      break;
    }

    case 12: {
      setState(575);
      match(DaricParser::COMP);
      setState(576);
      expression(46);
      break;
    }

    case 13: {
      setState(577);
      match(DaricParser::NOT);
      setState(578);
      expression(45);
      break;
    }

    case 14: {
      setState(579);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(580);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(581);
      match(DaricParser::PI);
      break;
    }

    case 17: {
      setState(582);
      match(DaricParser::DEG);
      setState(583);
      expression(41);
      break;
    }

    case 18: {
      setState(584);
      match(DaricParser::RAD);
      setState(585);
      expression(40);
      break;
    }

    case 19: {
      setState(586);
      match(DaricParser::SGN);
      setState(587);
      expression(39);
      break;
    }

    case 20: {
      setState(588);
      match(DaricParser::ACS);
      setState(589);
      expression(38);
      break;
    }

    case 21: {
      setState(590);
      match(DaricParser::ASN);
      setState(591);
      expression(37);
      break;
    }

    case 22: {
      setState(592);
      match(DaricParser::ATN);
      setState(593);
      expression(36);
      break;
    }

    case 23: {
      setState(594);
      match(DaricParser::COS);
      setState(595);
      expression(35);
      break;
    }

    case 24: {
      setState(596);
      match(DaricParser::EXP);
      setState(597);
      expression(34);
      break;
    }

    case 25: {
      setState(598);
      match(DaricParser::FLOOR);
      setState(599);
      expression(33);
      break;
    }

    case 26: {
      setState(600);
      match(DaricParser::ROUND);
      setState(601);
      expression(32);
      break;
    }

    case 27: {
      setState(602);
      match(DaricParser::LN);
      setState(603);
      expression(31);
      break;
    }

    case 28: {
      setState(604);
      match(DaricParser::LOG);
      setState(605);
      expression(30);
      break;
    }

    case 29: {
      setState(606);
      match(DaricParser::SIN);
      setState(607);
      expression(29);
      break;
    }

    case 30: {
      setState(608);
      match(DaricParser::SQR);
      setState(609);
      expression(28);
      break;
    }

    case 31: {
      setState(610);
      match(DaricParser::TAN);
      setState(611);
      expression(27);
      break;
    }

    case 32: {
      setState(612);
      match(DaricParser::ASC);
      setState(613);
      expression(26);
      break;
    }

    case 33: {
      setState(614);
      match(DaricParser::CHR);
      setState(615);
      expression(25);
      break;
    }

    case 34: {
      setState(616);
      match(DaricParser::INSTR);
      setState(618);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(617);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(620);
      expression(0);
      setState(621);
      match(DaricParser::COMMA);
      setState(622);
      expression(0);
      setState(623);
      match(DaricParser::COMMA);
      setState(624);
      expression(0);
      setState(626);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(625);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 35: {
      setState(628);
      match(DaricParser::LEFT);
      setState(630);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
      case 1: {
        setState(629);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(632);
      expression(0);
      setState(633);
      match(DaricParser::COMMA);
      setState(634);
      expression(0);
      setState(636);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(635);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 36: {
      setState(638);
      match(DaricParser::MID);
      setState(640);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(639);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(642);
      expression(0);
      setState(643);
      match(DaricParser::COMMA);
      setState(644);
      expression(0);
      setState(645);
      match(DaricParser::COMMA);
      setState(646);
      expression(0);
      setState(648);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
      case 1: {
        setState(647);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(650);
      match(DaricParser::RIGHT);
      setState(652);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
      case 1: {
        setState(651);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(654);
      expression(0);
      setState(655);
      match(DaricParser::COMMA);
      setState(656);
      expression(0);
      setState(658);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
      case 1: {
        setState(657);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(660);
      match(DaricParser::LEN);
      setState(661);
      expression(20);
      break;
    }

    case 39: {
      setState(662);
      match(DaricParser::SIZE);
      setState(664);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(663);
        match(DaricParser::LPAREN);
      }
      setState(666);
      match(DaricParser::IDENTIFIER);
      setState(668);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(667);
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
    setState(728);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(726);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(672);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(673);
          match(DaricParser::HAT);
          setState(674);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(675);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(676);
          match(DaricParser::DIVIDE);
          setState(677);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(678);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(679);
          match(DaricParser::MULTIPLY);
          setState(680);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(681);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(682);
          match(DaricParser::DIV);
          setState(683);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(684);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(685);
          match(DaricParser::MOD);
          setState(686);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(687);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(688);
          match(DaricParser::PLUS);
          setState(689);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(690);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(691);
          match(DaricParser::MINUS);
          setState(692);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(693);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(694);
          match(DaricParser::SHL);
          setState(695);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(696);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(697);
          match(DaricParser::SHR);
          setState(698);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(699);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(700);
          match(DaricParser::EQ);
          setState(701);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(702);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(703);
          match(DaricParser::NE);
          setState(704);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(705);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(706);
          match(DaricParser::GT);
          setState(707);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(708);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(709);
          match(DaricParser::GE);
          setState(710);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(711);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(712);
          match(DaricParser::LT);
          setState(713);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(714);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(715);
          match(DaricParser::LE);
          setState(716);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(717);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(718);
          match(DaricParser::AND);
          setState(719);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(720);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(721);
          match(DaricParser::OR);
          setState(722);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(723);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(724);
          match(DaricParser::EOR);
          setState(725);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(730);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
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
    setState(731);
    _la = _input->LA(1);
    if (!((((_la - 63) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 63)) & 15) != 0)) {
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
    setState(733);
    _la = _input->LA(1);
    if (!((((_la - 63) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 63)) & 8796093022223) != 0)) {
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
    setState(738);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
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

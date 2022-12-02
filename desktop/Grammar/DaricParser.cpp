
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
      "", "", "", "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", 
      "','", "'''", "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", 
      "'<>'", "'>'", "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", 
      "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "ENDCASE", "ENDDEF", "ENDIF", "ENDWHILE", 
      "FOR", "IF", "IMPORT", "NEXT", "OF", "OPTION", "OTHERWISE", "PRINT", 
      "READ", "REF", "REM", "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", 
      "STEP", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "DEFRECORD", 
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
  	4,1,116,768,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	8,1,8,5,8,199,8,8,10,8,12,8,202,9,8,1,8,1,8,3,8,206,8,8,1,8,1,8,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,218,8,9,10,9,12,9,221,9,9,1,9,3,9,224,8,
  	9,1,9,3,9,227,8,9,1,10,1,10,1,10,1,10,5,10,233,8,10,10,10,12,10,236,9,
  	10,1,11,1,11,1,11,1,12,1,12,1,12,3,12,244,8,12,1,12,1,12,1,12,3,12,249,
  	8,12,1,12,1,12,5,12,253,8,12,10,12,12,12,256,9,12,1,12,1,12,1,13,1,13,
  	1,13,3,13,263,8,13,1,13,1,13,5,13,267,8,13,10,13,12,13,270,9,13,1,13,
  	1,13,1,14,1,14,1,15,1,15,1,15,3,15,279,8,15,1,15,3,15,282,8,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,3,15,290,8,15,1,15,1,15,1,15,1,16,1,16,1,16,1,
  	17,1,17,1,17,3,17,301,8,17,1,17,1,17,1,17,3,17,306,8,17,1,18,1,18,1,18,
  	3,18,311,8,18,1,18,1,18,1,18,1,18,1,18,3,18,318,8,18,1,18,1,18,1,18,1,
  	19,1,19,1,19,1,19,3,19,327,8,19,1,20,3,20,330,8,20,1,20,1,20,3,20,334,
  	8,20,1,20,3,20,337,8,20,1,20,1,20,1,20,3,20,342,8,20,1,20,3,20,345,8,
  	20,1,21,1,21,1,21,3,21,350,8,21,1,21,3,21,353,8,21,1,21,3,21,356,8,21,
  	3,21,358,8,21,1,22,1,22,1,22,3,22,363,8,22,1,22,5,22,366,8,22,10,22,12,
  	22,369,9,22,1,22,3,22,372,8,22,1,22,1,22,5,22,376,8,22,10,22,12,22,379,
  	9,22,1,22,5,22,382,8,22,10,22,12,22,385,9,22,1,22,3,22,388,8,22,1,22,
  	3,22,391,8,22,1,22,3,22,394,8,22,1,22,5,22,397,8,22,10,22,12,22,400,9,
  	22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,5,24,414,
  	8,24,10,24,12,24,417,9,24,1,25,1,25,1,25,1,26,1,26,3,26,424,8,26,1,27,
  	1,27,1,27,5,27,429,8,27,10,27,12,27,432,9,27,1,27,1,27,3,27,436,8,27,
  	1,27,1,27,4,27,440,8,27,11,27,12,27,441,1,27,1,27,3,27,446,8,27,1,27,
  	1,27,5,27,450,8,27,10,27,12,27,453,9,27,1,27,5,27,456,8,27,10,27,12,27,
  	459,9,27,1,27,1,27,1,28,1,28,1,28,1,28,3,28,467,8,28,1,28,1,28,1,28,3,
  	28,472,8,28,1,28,1,28,5,28,476,8,28,10,28,12,28,479,9,28,1,28,1,28,1,
  	29,3,29,484,8,29,1,29,1,29,1,29,1,29,3,29,490,8,29,1,29,1,29,1,29,1,29,
  	1,29,3,29,497,8,29,1,29,1,29,1,29,1,29,5,29,503,8,29,10,29,12,29,506,
  	9,29,1,29,3,29,509,8,29,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,
  	5,31,520,8,31,10,31,12,31,523,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,
  	1,33,1,33,1,33,3,33,535,8,33,1,33,1,33,5,33,539,8,33,10,33,12,33,542,
  	9,33,1,33,3,33,545,8,33,1,33,1,33,5,33,549,8,33,10,33,12,33,552,9,33,
  	1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,
  	1,34,1,34,1,34,1,34,1,34,3,34,573,8,34,1,34,1,34,1,34,3,34,578,8,34,1,
  	34,3,34,581,8,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,631,8,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,3,34,639,8,34,1,34,1,34,3,34,643,8,34,1,34,1,34,
  	1,34,1,34,3,34,649,8,34,1,34,1,34,3,34,653,8,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,3,34,661,8,34,1,34,1,34,3,34,665,8,34,1,34,1,34,1,34,1,34,3,34,
  	671,8,34,1,34,1,34,1,34,1,34,3,34,677,8,34,1,34,1,34,3,34,681,8,34,3,
  	34,683,8,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,5,34,739,8,34,10,34,12,34,742,9,34,1,35,1,35,1,36,1,36,1,37,1,37,1,
  	37,3,37,751,8,37,1,38,3,38,754,8,38,1,38,1,38,1,39,1,39,1,39,3,39,761,
  	8,39,1,39,3,39,764,8,39,1,40,1,40,1,40,0,1,68,41,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,0,5,1,1,78,78,2,0,78,78,83,83,1,0,72,75,2,
  	0,72,75,115,115,1,0,97,98,904,0,82,1,0,0,0,2,106,1,0,0,0,4,118,1,0,0,
  	0,6,146,1,0,0,0,8,149,1,0,0,0,10,154,1,0,0,0,12,170,1,0,0,0,14,174,1,
  	0,0,0,16,191,1,0,0,0,18,209,1,0,0,0,20,228,1,0,0,0,22,237,1,0,0,0,24,
  	240,1,0,0,0,26,259,1,0,0,0,28,273,1,0,0,0,30,275,1,0,0,0,32,294,1,0,0,
  	0,34,297,1,0,0,0,36,307,1,0,0,0,38,322,1,0,0,0,40,329,1,0,0,0,42,346,
  	1,0,0,0,44,359,1,0,0,0,46,404,1,0,0,0,48,409,1,0,0,0,50,418,1,0,0,0,52,
  	421,1,0,0,0,54,425,1,0,0,0,56,462,1,0,0,0,58,483,1,0,0,0,60,510,1,0,0,
  	0,62,515,1,0,0,0,64,526,1,0,0,0,66,531,1,0,0,0,68,682,1,0,0,0,70,743,
  	1,0,0,0,72,745,1,0,0,0,74,750,1,0,0,0,76,753,1,0,0,0,78,763,1,0,0,0,80,
  	765,1,0,0,0,82,83,3,2,1,0,83,84,5,0,0,1,84,1,1,0,0,0,85,87,3,8,4,0,86,
  	85,1,0,0,0,87,88,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,107,1,0,0,0,90,
  	92,3,8,4,0,91,90,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,
  	96,1,0,0,0,95,93,1,0,0,0,96,99,3,6,3,0,97,100,3,8,4,0,98,100,5,0,0,1,
  	99,97,1,0,0,0,99,98,1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,93,1,0,
  	0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,107,1,0,0,0,105,
  	103,1,0,0,0,106,86,1,0,0,0,106,103,1,0,0,0,107,3,1,0,0,0,108,110,5,78,
  	0,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,
  	114,1,0,0,0,113,111,1,0,0,0,114,116,3,6,3,0,115,117,7,0,0,0,116,115,1,
  	0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,111,1,0,0,0,119,120,1,0,0,0,
  	120,118,1,0,0,0,120,121,1,0,0,0,121,5,1,0,0,0,122,147,3,10,5,0,123,147,
  	3,14,7,0,124,147,3,16,8,0,125,147,3,18,9,0,126,147,3,20,10,0,127,147,
  	3,22,11,0,128,147,3,24,12,0,129,147,3,28,14,0,130,147,3,30,15,0,131,147,
  	3,34,17,0,132,147,3,36,18,0,133,147,3,32,16,0,134,147,3,38,19,0,135,147,
  	3,44,22,0,136,147,3,42,21,0,137,147,3,48,24,0,138,147,3,46,23,0,139,147,
  	3,50,25,0,140,147,3,52,26,0,141,147,3,54,27,0,142,147,3,56,28,0,143,147,
  	3,58,29,0,144,147,3,60,30,0,145,147,3,64,32,0,146,122,1,0,0,0,146,123,
  	1,0,0,0,146,124,1,0,0,0,146,125,1,0,0,0,146,126,1,0,0,0,146,127,1,0,0,
  	0,146,128,1,0,0,0,146,129,1,0,0,0,146,130,1,0,0,0,146,131,1,0,0,0,146,
  	132,1,0,0,0,146,133,1,0,0,0,146,134,1,0,0,0,146,135,1,0,0,0,146,136,1,
  	0,0,0,146,137,1,0,0,0,146,138,1,0,0,0,146,139,1,0,0,0,146,140,1,0,0,0,
  	146,141,1,0,0,0,146,142,1,0,0,0,146,143,1,0,0,0,146,144,1,0,0,0,146,145,
  	1,0,0,0,147,7,1,0,0,0,148,150,7,1,0,0,149,148,1,0,0,0,150,151,1,0,0,0,
  	151,149,1,0,0,0,151,152,1,0,0,0,152,9,1,0,0,0,153,155,5,53,0,0,154,153,
  	1,0,0,0,154,155,1,0,0,0,155,156,1,0,0,0,156,161,3,12,6,0,157,158,5,81,
  	0,0,158,160,3,12,6,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,
  	161,162,1,0,0,0,162,168,1,0,0,0,163,161,1,0,0,0,164,166,5,19,0,0,165,
  	164,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,167,169,3,70,35,0,168,165,
  	1,0,0,0,168,169,1,0,0,0,169,11,1,0,0,0,170,171,3,66,33,0,171,172,5,90,
  	0,0,172,173,3,68,34,0,173,13,1,0,0,0,174,176,5,115,0,0,175,177,5,86,0,
  	0,176,175,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,180,3,68,34,0,179,
  	178,1,0,0,0,179,180,1,0,0,0,180,185,1,0,0,0,181,182,5,81,0,0,182,184,
  	3,68,34,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,
  	0,0,186,189,1,0,0,0,187,185,1,0,0,0,188,190,5,87,0,0,189,188,1,0,0,0,
  	189,190,1,0,0,0,190,15,1,0,0,0,191,192,5,3,0,0,192,193,3,68,34,0,193,
  	195,5,19,0,0,194,196,3,8,4,0,195,194,1,0,0,0,195,196,1,0,0,0,196,200,
  	1,0,0,0,197,199,3,62,31,0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,
  	0,0,200,201,1,0,0,0,201,205,1,0,0,0,202,200,1,0,0,0,203,204,5,21,0,0,
  	204,206,3,2,1,0,205,203,1,0,0,0,205,206,1,0,0,0,206,207,1,0,0,0,207,208,
  	5,11,0,0,208,17,1,0,0,0,209,210,5,4,0,0,210,211,5,115,0,0,211,212,5,90,
  	0,0,212,219,3,74,37,0,213,214,5,81,0,0,214,215,5,115,0,0,215,216,5,90,
  	0,0,216,218,3,74,37,0,217,213,1,0,0,0,218,221,1,0,0,0,219,217,1,0,0,0,
  	219,220,1,0,0,0,220,226,1,0,0,0,221,219,1,0,0,0,222,224,5,19,0,0,223,
  	222,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,225,227,3,70,35,0,226,223,
  	1,0,0,0,226,227,1,0,0,0,227,19,1,0,0,0,228,229,5,5,0,0,229,234,3,78,39,
  	0,230,231,5,81,0,0,231,233,3,78,39,0,232,230,1,0,0,0,233,236,1,0,0,0,
  	234,232,1,0,0,0,234,235,1,0,0,0,235,21,1,0,0,0,236,234,1,0,0,0,237,238,
  	5,6,0,0,238,239,3,80,40,0,239,23,1,0,0,0,240,241,5,8,0,0,241,243,5,115,
  	0,0,242,244,5,19,0,0,243,242,1,0,0,0,243,244,1,0,0,0,244,245,1,0,0,0,
  	245,246,3,70,35,0,246,248,5,88,0,0,247,249,3,68,34,0,248,247,1,0,0,0,
  	248,249,1,0,0,0,249,254,1,0,0,0,250,251,5,81,0,0,251,253,3,68,34,0,252,
  	250,1,0,0,0,253,256,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,257,1,
  	0,0,0,256,254,1,0,0,0,257,258,5,89,0,0,258,25,1,0,0,0,259,260,5,115,0,
  	0,260,262,5,86,0,0,261,263,3,68,34,0,262,261,1,0,0,0,262,263,1,0,0,0,
  	263,268,1,0,0,0,264,265,5,81,0,0,265,267,3,68,34,0,266,264,1,0,0,0,267,
  	270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,271,1,0,0,0,270,268,1,
  	0,0,0,271,272,5,87,0,0,272,27,1,0,0,0,273,274,5,10,0,0,274,29,1,0,0,0,
  	275,276,5,15,0,0,276,281,5,115,0,0,277,279,5,19,0,0,278,277,1,0,0,0,278,
  	279,1,0,0,0,279,280,1,0,0,0,280,282,3,70,35,0,281,278,1,0,0,0,281,282,
  	1,0,0,0,282,283,1,0,0,0,283,284,5,90,0,0,284,285,3,68,34,0,285,286,5,
  	33,0,0,286,289,3,68,34,0,287,288,5,31,0,0,288,290,3,68,34,0,289,287,1,
  	0,0,0,289,290,1,0,0,0,290,291,1,0,0,0,291,292,3,2,1,0,292,293,5,18,0,
  	0,293,31,1,0,0,0,294,295,5,17,0,0,295,296,3,80,40,0,296,33,1,0,0,0,297,
  	298,5,16,0,0,298,300,3,68,34,0,299,301,5,29,0,0,300,299,1,0,0,0,300,301,
  	1,0,0,0,301,302,1,0,0,0,302,305,3,4,2,0,303,304,5,9,0,0,304,306,3,4,2,
  	0,305,303,1,0,0,0,305,306,1,0,0,0,306,35,1,0,0,0,307,308,5,16,0,0,308,
  	310,3,68,34,0,309,311,5,29,0,0,310,309,1,0,0,0,310,311,1,0,0,0,311,312,
  	1,0,0,0,312,313,5,83,0,0,313,317,3,2,1,0,314,315,5,9,0,0,315,316,5,83,
  	0,0,316,318,3,2,1,0,317,314,1,0,0,0,317,318,1,0,0,0,318,319,1,0,0,0,319,
  	320,5,83,0,0,320,321,5,13,0,0,321,37,1,0,0,0,322,323,5,20,0,0,323,326,
  	5,115,0,0,324,327,5,115,0,0,325,327,3,78,39,0,326,324,1,0,0,0,326,325,
  	1,0,0,0,327,39,1,0,0,0,328,330,5,24,0,0,329,328,1,0,0,0,329,330,1,0,0,
  	0,330,344,1,0,0,0,331,336,5,115,0,0,332,334,5,19,0,0,333,332,1,0,0,0,
  	333,334,1,0,0,0,334,335,1,0,0,0,335,337,3,70,35,0,336,333,1,0,0,0,336,
  	337,1,0,0,0,337,345,1,0,0,0,338,339,5,115,0,0,339,341,5,40,0,0,340,342,
  	5,19,0,0,341,340,1,0,0,0,341,342,1,0,0,0,342,343,1,0,0,0,343,345,5,115,
  	0,0,344,331,1,0,0,0,344,338,1,0,0,0,345,41,1,0,0,0,346,357,5,22,0,0,347,
  	352,3,68,34,0,348,350,5,36,0,0,349,348,1,0,0,0,349,350,1,0,0,0,350,351,
  	1,0,0,0,351,353,3,68,34,0,352,349,1,0,0,0,352,353,1,0,0,0,353,355,1,0,
  	0,0,354,356,5,79,0,0,355,354,1,0,0,0,355,356,1,0,0,0,356,358,1,0,0,0,
  	357,347,1,0,0,0,357,358,1,0,0,0,358,43,1,0,0,0,359,360,5,7,0,0,360,362,
  	5,115,0,0,361,363,5,86,0,0,362,361,1,0,0,0,362,363,1,0,0,0,363,367,1,
  	0,0,0,364,366,5,83,0,0,365,364,1,0,0,0,366,369,1,0,0,0,367,365,1,0,0,
  	0,367,368,1,0,0,0,368,371,1,0,0,0,369,367,1,0,0,0,370,372,3,40,20,0,371,
  	370,1,0,0,0,371,372,1,0,0,0,372,383,1,0,0,0,373,377,5,81,0,0,374,376,
  	5,83,0,0,375,374,1,0,0,0,376,379,1,0,0,0,377,375,1,0,0,0,377,378,1,0,
  	0,0,378,380,1,0,0,0,379,377,1,0,0,0,380,382,3,40,20,0,381,373,1,0,0,0,
  	382,385,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,387,1,0,0,0,385,383,
  	1,0,0,0,386,388,5,87,0,0,387,386,1,0,0,0,387,388,1,0,0,0,388,393,1,0,
  	0,0,389,391,5,19,0,0,390,389,1,0,0,0,390,391,1,0,0,0,391,392,1,0,0,0,
  	392,394,3,70,35,0,393,390,1,0,0,0,393,394,1,0,0,0,394,398,1,0,0,0,395,
  	397,3,8,4,0,396,395,1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,398,399,1,
  	0,0,0,399,401,1,0,0,0,400,398,1,0,0,0,401,402,3,2,1,0,402,403,5,12,0,
  	0,403,45,1,0,0,0,404,405,5,26,0,0,405,406,3,2,1,0,406,407,5,34,0,0,407,
  	408,3,68,34,0,408,47,1,0,0,0,409,410,5,23,0,0,410,415,3,66,33,0,411,412,
  	5,81,0,0,412,414,3,66,33,0,413,411,1,0,0,0,414,417,1,0,0,0,415,413,1,
  	0,0,0,415,416,1,0,0,0,416,49,1,0,0,0,417,415,1,0,0,0,418,419,5,27,0,0,
  	419,420,3,80,40,0,420,51,1,0,0,0,421,423,5,28,0,0,422,424,3,68,34,0,423,
  	422,1,0,0,0,423,424,1,0,0,0,424,53,1,0,0,0,425,426,5,39,0,0,426,430,5,
  	115,0,0,427,429,3,8,4,0,428,427,1,0,0,0,429,432,1,0,0,0,430,428,1,0,0,
  	0,430,431,1,0,0,0,431,433,1,0,0,0,432,430,1,0,0,0,433,435,5,115,0,0,434,
  	436,5,19,0,0,435,434,1,0,0,0,435,436,1,0,0,0,436,437,1,0,0,0,437,451,
  	3,72,36,0,438,440,3,8,4,0,439,438,1,0,0,0,440,441,1,0,0,0,441,439,1,0,
  	0,0,441,442,1,0,0,0,442,443,1,0,0,0,443,445,5,115,0,0,444,446,5,19,0,
  	0,445,444,1,0,0,0,445,446,1,0,0,0,446,447,1,0,0,0,447,448,3,72,36,0,448,
  	450,1,0,0,0,449,439,1,0,0,0,450,453,1,0,0,0,451,449,1,0,0,0,451,452,1,
  	0,0,0,452,457,1,0,0,0,453,451,1,0,0,0,454,456,3,8,4,0,455,454,1,0,0,0,
  	456,459,1,0,0,0,457,455,1,0,0,0,457,458,1,0,0,0,458,460,1,0,0,0,459,457,
  	1,0,0,0,460,461,5,41,0,0,461,55,1,0,0,0,462,463,5,8,0,0,463,464,5,40,
  	0,0,464,466,5,115,0,0,465,467,5,19,0,0,466,465,1,0,0,0,466,467,1,0,0,
  	0,467,468,1,0,0,0,468,469,5,115,0,0,469,471,5,88,0,0,470,472,3,68,34,
  	0,471,470,1,0,0,0,471,472,1,0,0,0,472,477,1,0,0,0,473,474,5,81,0,0,474,
  	476,3,68,34,0,475,473,1,0,0,0,476,479,1,0,0,0,477,475,1,0,0,0,477,478,
  	1,0,0,0,478,480,1,0,0,0,479,477,1,0,0,0,480,481,5,89,0,0,481,57,1,0,0,
  	0,482,484,5,53,0,0,483,482,1,0,0,0,483,484,1,0,0,0,484,485,1,0,0,0,485,
  	486,5,115,0,0,486,487,5,90,0,0,487,489,5,40,0,0,488,490,5,19,0,0,489,
  	488,1,0,0,0,489,490,1,0,0,0,490,491,1,0,0,0,491,508,5,115,0,0,492,496,
  	5,86,0,0,493,494,5,115,0,0,494,495,5,90,0,0,495,497,3,68,34,0,496,493,
  	1,0,0,0,496,497,1,0,0,0,497,504,1,0,0,0,498,499,5,81,0,0,499,500,5,115,
  	0,0,500,501,5,90,0,0,501,503,3,68,34,0,502,498,1,0,0,0,503,506,1,0,0,
  	0,504,502,1,0,0,0,504,505,1,0,0,0,505,507,1,0,0,0,506,504,1,0,0,0,507,
  	509,5,87,0,0,508,492,1,0,0,0,508,509,1,0,0,0,509,59,1,0,0,0,510,511,5,
  	32,0,0,511,512,3,66,33,0,512,513,5,81,0,0,513,514,3,66,33,0,514,61,1,
  	0,0,0,515,516,5,35,0,0,516,521,3,68,34,0,517,518,5,81,0,0,518,520,3,68,
  	34,0,519,517,1,0,0,0,520,523,1,0,0,0,521,519,1,0,0,0,521,522,1,0,0,0,
  	522,524,1,0,0,0,523,521,1,0,0,0,524,525,3,2,1,0,525,63,1,0,0,0,526,527,
  	5,37,0,0,527,528,3,68,34,0,528,529,3,2,1,0,529,530,5,14,0,0,530,65,1,
  	0,0,0,531,544,5,115,0,0,532,534,5,88,0,0,533,535,3,68,34,0,534,533,1,
  	0,0,0,534,535,1,0,0,0,535,540,1,0,0,0,536,537,5,81,0,0,537,539,3,68,34,
  	0,538,536,1,0,0,0,539,542,1,0,0,0,540,538,1,0,0,0,540,541,1,0,0,0,541,
  	543,1,0,0,0,542,540,1,0,0,0,543,545,5,89,0,0,544,532,1,0,0,0,544,545,
  	1,0,0,0,545,550,1,0,0,0,546,547,5,80,0,0,547,549,5,115,0,0,548,546,1,
  	0,0,0,549,552,1,0,0,0,550,548,1,0,0,0,550,551,1,0,0,0,551,67,1,0,0,0,
  	552,550,1,0,0,0,553,554,6,34,-1,0,554,555,5,86,0,0,555,556,3,68,34,0,
  	556,557,5,87,0,0,557,683,1,0,0,0,558,683,5,38,0,0,559,683,3,74,37,0,560,
  	683,3,26,13,0,561,683,3,66,33,0,562,563,5,98,0,0,563,683,3,68,34,55,564,
  	565,5,97,0,0,565,683,3,68,34,54,566,567,5,73,0,0,567,683,3,68,34,53,568,
  	569,5,74,0,0,569,683,3,68,34,52,570,572,5,75,0,0,571,573,5,86,0,0,572,
  	571,1,0,0,0,572,573,1,0,0,0,573,574,1,0,0,0,574,577,3,68,34,0,575,576,
  	5,36,0,0,576,578,3,68,34,0,577,575,1,0,0,0,577,578,1,0,0,0,578,580,1,
  	0,0,0,579,581,5,87,0,0,580,579,1,0,0,0,580,581,1,0,0,0,581,683,1,0,0,
  	0,582,583,5,45,0,0,583,683,3,68,34,50,584,585,5,105,0,0,585,683,3,68,
  	34,49,586,587,5,106,0,0,587,683,3,68,34,48,588,683,5,64,0,0,589,683,5,
  	63,0,0,590,683,5,42,0,0,591,683,5,43,0,0,592,683,5,44,0,0,593,683,5,56,
  	0,0,594,595,5,50,0,0,595,683,3,68,34,41,596,597,5,57,0,0,597,683,3,68,
  	34,40,598,599,5,59,0,0,599,683,3,68,34,39,600,601,5,46,0,0,601,683,3,
  	68,34,38,602,603,5,47,0,0,603,683,3,68,34,37,604,605,5,48,0,0,605,683,
  	3,68,34,36,606,607,5,49,0,0,607,683,3,68,34,35,608,609,5,51,0,0,609,683,
  	3,68,34,34,610,611,5,52,0,0,611,683,3,68,34,33,612,613,5,58,0,0,613,683,
  	3,68,34,32,614,615,5,54,0,0,615,683,3,68,34,31,616,617,5,55,0,0,617,683,
  	3,68,34,30,618,619,5,60,0,0,619,683,3,68,34,29,620,621,5,61,0,0,621,683,
  	3,68,34,28,622,623,5,62,0,0,623,683,3,68,34,27,624,625,5,65,0,0,625,683,
  	3,68,34,26,626,627,5,66,0,0,627,683,3,68,34,25,628,630,5,67,0,0,629,631,
  	5,86,0,0,630,629,1,0,0,0,630,631,1,0,0,0,631,632,1,0,0,0,632,633,3,68,
  	34,0,633,634,5,81,0,0,634,635,3,68,34,0,635,636,5,81,0,0,636,638,3,68,
  	34,0,637,639,5,87,0,0,638,637,1,0,0,0,638,639,1,0,0,0,639,683,1,0,0,0,
  	640,642,5,68,0,0,641,643,5,86,0,0,642,641,1,0,0,0,642,643,1,0,0,0,643,
  	644,1,0,0,0,644,645,3,68,34,0,645,646,5,81,0,0,646,648,3,68,34,0,647,
  	649,5,87,0,0,648,647,1,0,0,0,648,649,1,0,0,0,649,683,1,0,0,0,650,652,
  	5,69,0,0,651,653,5,86,0,0,652,651,1,0,0,0,652,653,1,0,0,0,653,654,1,0,
  	0,0,654,655,3,68,34,0,655,656,5,81,0,0,656,657,3,68,34,0,657,658,5,81,
  	0,0,658,660,3,68,34,0,659,661,5,87,0,0,660,659,1,0,0,0,660,661,1,0,0,
  	0,661,683,1,0,0,0,662,664,5,70,0,0,663,665,5,86,0,0,664,663,1,0,0,0,664,
  	665,1,0,0,0,665,666,1,0,0,0,666,667,3,68,34,0,667,668,5,81,0,0,668,670,
  	3,68,34,0,669,671,5,87,0,0,670,669,1,0,0,0,670,671,1,0,0,0,671,683,1,
  	0,0,0,672,673,5,71,0,0,673,683,3,68,34,20,674,676,5,30,0,0,675,677,5,
  	86,0,0,676,675,1,0,0,0,676,677,1,0,0,0,677,678,1,0,0,0,678,680,5,115,
  	0,0,679,681,5,87,0,0,680,679,1,0,0,0,680,681,1,0,0,0,681,683,1,0,0,0,
  	682,553,1,0,0,0,682,558,1,0,0,0,682,559,1,0,0,0,682,560,1,0,0,0,682,561,
  	1,0,0,0,682,562,1,0,0,0,682,564,1,0,0,0,682,566,1,0,0,0,682,568,1,0,0,
  	0,682,570,1,0,0,0,682,582,1,0,0,0,682,584,1,0,0,0,682,586,1,0,0,0,682,
  	588,1,0,0,0,682,589,1,0,0,0,682,590,1,0,0,0,682,591,1,0,0,0,682,592,1,
  	0,0,0,682,593,1,0,0,0,682,594,1,0,0,0,682,596,1,0,0,0,682,598,1,0,0,0,
  	682,600,1,0,0,0,682,602,1,0,0,0,682,604,1,0,0,0,682,606,1,0,0,0,682,608,
  	1,0,0,0,682,610,1,0,0,0,682,612,1,0,0,0,682,614,1,0,0,0,682,616,1,0,0,
  	0,682,618,1,0,0,0,682,620,1,0,0,0,682,622,1,0,0,0,682,624,1,0,0,0,682,
  	626,1,0,0,0,682,628,1,0,0,0,682,640,1,0,0,0,682,650,1,0,0,0,682,662,1,
  	0,0,0,682,672,1,0,0,0,682,674,1,0,0,0,683,740,1,0,0,0,684,685,10,18,0,
  	0,685,686,5,96,0,0,686,739,3,68,34,18,687,688,10,17,0,0,688,689,5,100,
  	0,0,689,739,3,68,34,18,690,691,10,16,0,0,691,692,5,99,0,0,692,739,3,68,
  	34,17,693,694,10,15,0,0,694,695,5,104,0,0,695,739,3,68,34,16,696,697,
  	10,14,0,0,697,698,5,103,0,0,698,739,3,68,34,15,699,700,10,13,0,0,700,
  	701,5,97,0,0,701,739,3,68,34,14,702,703,10,12,0,0,703,704,5,98,0,0,704,
  	739,3,68,34,13,705,706,10,11,0,0,706,707,5,101,0,0,707,739,3,68,34,12,
  	708,709,10,10,0,0,709,710,5,102,0,0,710,739,3,68,34,11,711,712,10,9,0,
  	0,712,713,5,90,0,0,713,739,3,68,34,10,714,715,10,8,0,0,715,716,5,91,0,
  	0,716,739,3,68,34,9,717,718,10,7,0,0,718,719,5,92,0,0,719,739,3,68,34,
  	8,720,721,10,6,0,0,721,722,5,93,0,0,722,739,3,68,34,7,723,724,10,5,0,
  	0,724,725,5,94,0,0,725,739,3,68,34,6,726,727,10,4,0,0,727,728,5,95,0,
  	0,728,739,3,68,34,5,729,730,10,3,0,0,730,731,5,107,0,0,731,739,3,68,34,
  	4,732,733,10,2,0,0,733,734,5,108,0,0,734,739,3,68,34,3,735,736,10,1,0,
  	0,736,737,5,109,0,0,737,739,3,68,34,2,738,684,1,0,0,0,738,687,1,0,0,0,
  	738,690,1,0,0,0,738,693,1,0,0,0,738,696,1,0,0,0,738,699,1,0,0,0,738,702,
  	1,0,0,0,738,705,1,0,0,0,738,708,1,0,0,0,738,711,1,0,0,0,738,714,1,0,0,
  	0,738,717,1,0,0,0,738,720,1,0,0,0,738,723,1,0,0,0,738,726,1,0,0,0,738,
  	729,1,0,0,0,738,732,1,0,0,0,738,735,1,0,0,0,739,742,1,0,0,0,740,738,1,
  	0,0,0,740,741,1,0,0,0,741,69,1,0,0,0,742,740,1,0,0,0,743,744,7,2,0,0,
  	744,71,1,0,0,0,745,746,7,3,0,0,746,73,1,0,0,0,747,751,3,76,38,0,748,751,
  	3,78,39,0,749,751,3,80,40,0,750,747,1,0,0,0,750,748,1,0,0,0,750,749,1,
  	0,0,0,751,75,1,0,0,0,752,754,7,4,0,0,753,752,1,0,0,0,753,754,1,0,0,0,
  	754,755,1,0,0,0,755,756,5,113,0,0,756,77,1,0,0,0,757,764,5,111,0,0,758,
  	764,5,112,0,0,759,761,7,4,0,0,760,759,1,0,0,0,760,761,1,0,0,0,761,762,
  	1,0,0,0,762,764,5,114,0,0,763,757,1,0,0,0,763,758,1,0,0,0,763,760,1,0,
  	0,0,764,79,1,0,0,0,765,766,5,110,0,0,766,81,1,0,0,0,97,88,93,99,103,106,
  	111,116,120,146,151,154,161,165,168,176,179,185,189,195,200,205,219,223,
  	226,234,243,248,254,262,268,278,281,289,300,305,310,317,326,329,333,336,
  	341,344,349,352,355,357,362,367,371,377,383,387,390,393,398,415,423,430,
  	435,441,445,451,457,466,471,477,483,489,496,504,508,521,534,540,544,550,
  	572,577,580,630,638,642,648,652,660,664,670,676,680,682,738,740,750,753,
  	760,763
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
    if ((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 135107988821114881) != 0) {
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

tree::TerminalNode* DaricParser::CaseContext::CASE() {
  return getToken(DaricParser::CASE, 0);
}

DaricParser::ExpressionContext* DaricParser::CaseContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

tree::TerminalNode* DaricParser::CaseContext::OF() {
  return getToken(DaricParser::OF, 0);
}

tree::TerminalNode* DaricParser::CaseContext::ENDCASE() {
  return getToken(DaricParser::ENDCASE, 0);
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
    match(DaricParser::ENDCASE);
   
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
    setState(209);
    match(DaricParser::CONST);
    setState(210);
    match(DaricParser::IDENTIFIER);
    setState(211);
    match(DaricParser::EQ);
    setState(212);
    literal();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(213);
      match(DaricParser::COMMA);
      setState(214);
      match(DaricParser::IDENTIFIER);
      setState(215);
      match(DaricParser::EQ);
      setState(216);
      literal();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 135107988821114881) != 0) {
      setState(223);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(222);
        match(DaricParser::OF);
      }
      setState(225);
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
    setState(228);
    match(DaricParser::DATA);
    setState(229);
    integerLiteral();
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(230);
      match(DaricParser::COMMA);
      setState(231);
      integerLiteral();
      setState(236);
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
    setState(237);
    match(DaricParser::DATALABEL);
    setState(238);
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
    setState(240);
    match(DaricParser::DIM);
    setState(241);
    match(DaricParser::IDENTIFIER);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(242);
      match(DaricParser::OF);
    }
    setState(245);
    type();
    setState(246);
    match(DaricParser::SOPEN);
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9011321349603328) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4439853726961407) != 0) {
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
    setState(259);
    match(DaricParser::IDENTIFIER);
    setState(260);
    match(DaricParser::LPAREN);
    setState(262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9011321349603328) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4439853726961407) != 0) {
      setState(261);
      expression(0);
    }
    setState(268);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(264);
      match(DaricParser::COMMA);
      setState(265);
      expression(0);
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(271);
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
    setState(273);
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
    setState(275);
    match(DaricParser::FOR);
    setState(276);
    match(DaricParser::IDENTIFIER);
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 135107988821114881) != 0) {
      setState(278);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(277);
        match(DaricParser::OF);
      }
      setState(280);
      type();
    }
    setState(283);
    match(DaricParser::EQ);
    setState(284);
    expression(0);
    setState(285);
    match(DaricParser::TO);
    setState(286);
    expression(0);
    setState(289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(287);
      match(DaricParser::STEP);
      setState(288);
      expression(0);
    }
    setState(291);
    statements();
    setState(292);
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
    setState(294);
    match(DaricParser::IMPORT);
    setState(295);
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
    setState(297);
    match(DaricParser::IF);
    setState(298);
    expression(0);
    setState(300);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(299);
      match(DaricParser::THEN);
    }
    setState(302);
    statementsl();
    setState(305);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(303);
      match(DaricParser::ELSE);
      setState(304);
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

tree::TerminalNode* DaricParser::IfmlContext::IF() {
  return getToken(DaricParser::IF, 0);
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

tree::TerminalNode* DaricParser::IfmlContext::ENDIF() {
  return getToken(DaricParser::ENDIF, 0);
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
    setState(307);
    match(DaricParser::IF);
    setState(308);
    expression(0);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(309);
      match(DaricParser::THEN);
    }
    setState(312);
    match(DaricParser::NEWLINE);
    setState(313);
    statements();
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(314);
      match(DaricParser::ELSE);
      setState(315);
      match(DaricParser::NEWLINE);
      setState(316);
      statements();
    }
    setState(319);
    match(DaricParser::NEWLINE);
    setState(320);
    match(DaricParser::ENDIF);
   
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
    setState(322);
    match(DaricParser::OPTION);
    setState(323);
    match(DaricParser::IDENTIFIER);
    setState(326);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::IDENTIFIER: {
        setState(324);
        match(DaricParser::IDENTIFIER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::HEXNUMBER:
      case DaricParser::BINARYNUMBER:
      case DaricParser::INTEGERLITERAL: {
        setState(325);
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

tree::TerminalNode* DaricParser::ParameterContext::REF() {
  return getToken(DaricParser::REF, 0);
}

std::vector<tree::TerminalNode *> DaricParser::ParameterContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::ParameterContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

tree::TerminalNode* DaricParser::ParameterContext::RECORD() {
  return getToken(DaricParser::RECORD, 0);
}

DaricParser::TypeContext* DaricParser::ParameterContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
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
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(328);
      match(DaricParser::REF);
    }
    setState(344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(331);
      match(DaricParser::IDENTIFIER);
      setState(336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(333);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(332);
          match(DaricParser::OF);
        }
        setState(335);
        type();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(338);
      match(DaricParser::IDENTIFIER);
      setState(339);
      match(DaricParser::RECORD);
      setState(341);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(340);
        match(DaricParser::OF);
      }
      setState(343);
      match(DaricParser::IDENTIFIER);
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
    setState(346);
    match(DaricParser::PRINT);
    setState(357);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(347);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(352);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
      case 1: {
        setState(349);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(348);
          match(DaricParser::WITH);
        }
        setState(351);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(355);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(354);
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

tree::TerminalNode* DaricParser::ProcedureContext::DEF() {
  return getToken(DaricParser::DEF, 0);
}

tree::TerminalNode* DaricParser::ProcedureContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}

DaricParser::StatementsContext* DaricParser::ProcedureContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::ProcedureContext::ENDDEF() {
  return getToken(DaricParser::ENDDEF, 0);
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
    setState(359);
    match(DaricParser::DEF);
    setState(360);
    match(DaricParser::IDENTIFIER);
    setState(362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(361);
      match(DaricParser::LPAREN);
    }
    setState(367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(364);
        match(DaricParser::NEWLINE); 
      }
      setState(369);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
    setState(371);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(370);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(373);
      match(DaricParser::COMMA);
      setState(377);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(374);
        match(DaricParser::NEWLINE);
        setState(379);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(380);
      parameter();
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(386);
      match(DaricParser::RPAREN);
    }
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 135107988821114881) != 0) {
      setState(390);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(389);
        match(DaricParser::OF);
      }
      setState(392);
      type();
    }
    setState(398);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(395);
        separator(); 
      }
      setState(400);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
    setState(401);
    statements();
    setState(402);
    match(DaricParser::ENDDEF);
   
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
    setState(404);
    match(DaricParser::REPEAT);
    setState(405);
    statements();
    setState(406);
    match(DaricParser::UNTIL);
    setState(407);
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
    setState(409);
    match(DaricParser::READ);
    setState(410);
    variable();
    setState(415);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(411);
      match(DaricParser::COMMA);
      setState(412);
      variable();
      setState(417);
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
    setState(418);
    match(DaricParser::RESTORE);
    setState(419);
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
    setState(421);
    match(DaricParser::RETURN);
    setState(423);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(422);
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

tree::TerminalNode* DaricParser::StructContext::DEFRECORD() {
  return getToken(DaricParser::DEFRECORD, 0);
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

tree::TerminalNode* DaricParser::StructContext::ENDRECORD() {
  return getToken(DaricParser::ENDRECORD, 0);
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
    setState(425);
    match(DaricParser::DEFRECORD);
    setState(426);
    match(DaricParser::IDENTIFIER);
    setState(430);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(427);
      separator();
      setState(432);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(433);
    match(DaricParser::IDENTIFIER);
    setState(435);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(434);
      match(DaricParser::OF);
    }
    setState(437);
    typeOrStruct();
    setState(451);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(439); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(438);
          separator();
          setState(441); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(443);
        match(DaricParser::IDENTIFIER);
        setState(445);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(444);
          match(DaricParser::OF);
        }
        setState(447);
        typeOrStruct(); 
      }
      setState(453);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
    setState(457);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(454);
      separator();
      setState(459);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(460);
    match(DaricParser::ENDRECORD);
   
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

tree::TerminalNode* DaricParser::StructDimContext::RECORD() {
  return getToken(DaricParser::RECORD, 0);
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
    setState(462);
    match(DaricParser::DIM);
    setState(463);
    match(DaricParser::RECORD);
    setState(464);
    match(DaricParser::IDENTIFIER);
    setState(466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(465);
      match(DaricParser::OF);
    }
    setState(468);
    match(DaricParser::IDENTIFIER);
    setState(469);
    match(DaricParser::SOPEN);
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9011321349603328) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 4439853726961407) != 0) {
      setState(470);
      expression(0);
    }
    setState(477);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(473);
      match(DaricParser::COMMA);
      setState(474);
      expression(0);
      setState(479);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(480);
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

std::vector<tree::TerminalNode *> DaricParser::StructInstanceContext::IDENTIFIER() {
  return getTokens(DaricParser::IDENTIFIER);
}

tree::TerminalNode* DaricParser::StructInstanceContext::IDENTIFIER(size_t i) {
  return getToken(DaricParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> DaricParser::StructInstanceContext::EQ() {
  return getTokens(DaricParser::EQ);
}

tree::TerminalNode* DaricParser::StructInstanceContext::EQ(size_t i) {
  return getToken(DaricParser::EQ, i);
}

tree::TerminalNode* DaricParser::StructInstanceContext::RECORD() {
  return getToken(DaricParser::RECORD, 0);
}

tree::TerminalNode* DaricParser::StructInstanceContext::LET() {
  return getToken(DaricParser::LET, 0);
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
    setState(483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(482);
      match(DaricParser::LET);
    }
    setState(485);
    match(DaricParser::IDENTIFIER);
    setState(486);
    match(DaricParser::EQ);
    setState(487);
    match(DaricParser::RECORD);
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(488);
      match(DaricParser::OF);
    }
    setState(491);
    match(DaricParser::IDENTIFIER);
    setState(508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(492);
      match(DaricParser::LPAREN);
      setState(496);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(493);
        match(DaricParser::IDENTIFIER);
        setState(494);
        match(DaricParser::EQ);
        setState(495);
        expression(0);
      }
      setState(504);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(498);
        match(DaricParser::COMMA);
        setState(499);
        match(DaricParser::IDENTIFIER);
        setState(500);
        match(DaricParser::EQ);
        setState(501);
        expression(0);
        setState(506);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(507);
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
    setState(510);
    match(DaricParser::SWAP);
    setState(511);
    variable();
    setState(512);
    match(DaricParser::COMMA);
    setState(513);
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
    setState(515);
    match(DaricParser::WHEN);
    setState(516);
    expression(0);
    setState(521);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(517);
      match(DaricParser::COMMA);
      setState(518);
      expression(0);
      setState(523);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(524);
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

tree::TerminalNode* DaricParser::WhileContext::WHILE() {
  return getToken(DaricParser::WHILE, 0);
}

DaricParser::ExpressionContext* DaricParser::WhileContext::expression() {
  return getRuleContext<DaricParser::ExpressionContext>(0);
}

DaricParser::StatementsContext* DaricParser::WhileContext::statements() {
  return getRuleContext<DaricParser::StatementsContext>(0);
}

tree::TerminalNode* DaricParser::WhileContext::ENDWHILE() {
  return getToken(DaricParser::ENDWHILE, 0);
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
    setState(526);
    match(DaricParser::WHILE);
    setState(527);
    expression(0);
    setState(528);
    statements();
    setState(529);
    match(DaricParser::ENDWHILE);
   
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
    setState(531);
    match(DaricParser::IDENTIFIER);
    setState(544);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(532);
      match(DaricParser::SOPEN);
      setState(534);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -9011321349603328) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 4439853726961407) != 0) {
        setState(533);
        expression(0);
      }
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(536);
        match(DaricParser::COMMA);
        setState(537);
        expression(0);
        setState(542);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(543);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(550);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(546);
        match(DaricParser::DOT);
        setState(547);
        match(DaricParser::IDENTIFIER); 
      }
      setState(552);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
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

tree::TerminalNode* DaricParser::ExpressionContext::HPTIME() {
  return getToken(DaricParser::HPTIME, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::TIME() {
  return getToken(DaricParser::TIME, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::TIMES() {
  return getToken(DaricParser::TIMES, 0);
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

tree::TerminalNode* DaricParser::ExpressionContext::CHRS() {
  return getToken(DaricParser::CHRS, 0);
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

tree::TerminalNode* DaricParser::ExpressionContext::LEFTS() {
  return getToken(DaricParser::LEFTS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::MIDS() {
  return getToken(DaricParser::MIDS, 0);
}

tree::TerminalNode* DaricParser::ExpressionContext::RIGHTS() {
  return getToken(DaricParser::RIGHTS, 0);
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
    setState(682);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      setState(554);
      match(DaricParser::LPAREN);
      setState(555);
      expression(0);
      setState(556);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(558);
      match(DaricParser::MAIN);
      break;
    }

    case 3: {
      setState(559);
      literal();
      break;
    }

    case 4: {
      setState(560);
      exprcall();
      break;
    }

    case 5: {
      setState(561);
      variable();
      break;
    }

    case 6: {
      setState(562);
      match(DaricParser::MINUS);
      setState(563);
      expression(55);
      break;
    }

    case 7: {
      setState(564);
      match(DaricParser::PLUS);
      setState(565);
      expression(54);
      break;
    }

    case 8: {
      setState(566);
      match(DaricParser::INT);
      setState(567);
      expression(53);
      break;
    }

    case 9: {
      setState(568);
      match(DaricParser::FLOAT);
      setState(569);
      expression(52);
      break;
    }

    case 10: {
      setState(570);
      match(DaricParser::STRING);
      setState(572);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(571);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(574);
      expression(0);
      setState(577);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
      case 1: {
        setState(575);
        match(DaricParser::WITH);
        setState(576);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(580);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(579);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      setState(582);
      match(DaricParser::ABS);
      setState(583);
      expression(50);
      break;
    }

    case 12: {
      setState(584);
      match(DaricParser::COMP);
      setState(585);
      expression(49);
      break;
    }

    case 13: {
      setState(586);
      match(DaricParser::NOT);
      setState(587);
      expression(48);
      break;
    }

    case 14: {
      setState(588);
      match(DaricParser::TRUE);
      break;
    }

    case 15: {
      setState(589);
      match(DaricParser::FALSE);
      break;
    }

    case 16: {
      setState(590);
      match(DaricParser::HPTIME);
      break;
    }

    case 17: {
      setState(591);
      match(DaricParser::TIME);
      break;
    }

    case 18: {
      setState(592);
      match(DaricParser::TIMES);
      break;
    }

    case 19: {
      setState(593);
      match(DaricParser::PI);
      break;
    }

    case 20: {
      setState(594);
      match(DaricParser::DEG);
      setState(595);
      expression(41);
      break;
    }

    case 21: {
      setState(596);
      match(DaricParser::RAD);
      setState(597);
      expression(40);
      break;
    }

    case 22: {
      setState(598);
      match(DaricParser::SGN);
      setState(599);
      expression(39);
      break;
    }

    case 23: {
      setState(600);
      match(DaricParser::ACS);
      setState(601);
      expression(38);
      break;
    }

    case 24: {
      setState(602);
      match(DaricParser::ASN);
      setState(603);
      expression(37);
      break;
    }

    case 25: {
      setState(604);
      match(DaricParser::ATN);
      setState(605);
      expression(36);
      break;
    }

    case 26: {
      setState(606);
      match(DaricParser::COS);
      setState(607);
      expression(35);
      break;
    }

    case 27: {
      setState(608);
      match(DaricParser::EXP);
      setState(609);
      expression(34);
      break;
    }

    case 28: {
      setState(610);
      match(DaricParser::FLOOR);
      setState(611);
      expression(33);
      break;
    }

    case 29: {
      setState(612);
      match(DaricParser::ROUND);
      setState(613);
      expression(32);
      break;
    }

    case 30: {
      setState(614);
      match(DaricParser::LN);
      setState(615);
      expression(31);
      break;
    }

    case 31: {
      setState(616);
      match(DaricParser::LOG);
      setState(617);
      expression(30);
      break;
    }

    case 32: {
      setState(618);
      match(DaricParser::SIN);
      setState(619);
      expression(29);
      break;
    }

    case 33: {
      setState(620);
      match(DaricParser::SQR);
      setState(621);
      expression(28);
      break;
    }

    case 34: {
      setState(622);
      match(DaricParser::TAN);
      setState(623);
      expression(27);
      break;
    }

    case 35: {
      setState(624);
      match(DaricParser::ASC);
      setState(625);
      expression(26);
      break;
    }

    case 36: {
      setState(626);
      match(DaricParser::CHRS);
      setState(627);
      expression(25);
      break;
    }

    case 37: {
      setState(628);
      match(DaricParser::INSTR);
      setState(630);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
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
      setState(635);
      match(DaricParser::COMMA);
      setState(636);
      expression(0);
      setState(638);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
      case 1: {
        setState(637);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(640);
      match(DaricParser::LEFTS);
      setState(642);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
      case 1: {
        setState(641);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(644);
      expression(0);
      setState(645);
      match(DaricParser::COMMA);
      setState(646);
      expression(0);
      setState(648);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
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

    case 39: {
      setState(650);
      match(DaricParser::MIDS);
      setState(652);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
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
      setState(657);
      match(DaricParser::COMMA);
      setState(658);
      expression(0);
      setState(660);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(659);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 40: {
      setState(662);
      match(DaricParser::RIGHTS);
      setState(664);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
      case 1: {
        setState(663);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(666);
      expression(0);
      setState(667);
      match(DaricParser::COMMA);
      setState(668);
      expression(0);
      setState(670);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
      case 1: {
        setState(669);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 41: {
      setState(672);
      match(DaricParser::LEN);
      setState(673);
      expression(20);
      break;
    }

    case 42: {
      setState(674);
      match(DaricParser::SIZE);
      setState(676);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(675);
        match(DaricParser::LPAREN);
      }
      setState(678);
      match(DaricParser::IDENTIFIER);
      setState(680);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
      case 1: {
        setState(679);
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
    setState(740);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(738);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(684);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(685);
          match(DaricParser::HAT);
          setState(686);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(687);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(688);
          match(DaricParser::DIVIDE);
          setState(689);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(690);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(691);
          match(DaricParser::MULTIPLY);
          setState(692);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(693);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(694);
          match(DaricParser::DIV);
          setState(695);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(696);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(697);
          match(DaricParser::MOD);
          setState(698);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(699);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(700);
          match(DaricParser::PLUS);
          setState(701);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(702);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(703);
          match(DaricParser::MINUS);
          setState(704);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(705);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(706);
          match(DaricParser::SHL);
          setState(707);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(708);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(709);
          match(DaricParser::SHR);
          setState(710);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(711);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(712);
          match(DaricParser::EQ);
          setState(713);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(714);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(715);
          match(DaricParser::NE);
          setState(716);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(717);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(718);
          match(DaricParser::GT);
          setState(719);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(720);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(721);
          match(DaricParser::GE);
          setState(722);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(723);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(724);
          match(DaricParser::LT);
          setState(725);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(726);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(727);
          match(DaricParser::LE);
          setState(728);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(729);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(730);
          match(DaricParser::AND);
          setState(731);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(732);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(733);
          match(DaricParser::OR);
          setState(734);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(735);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(736);
          match(DaricParser::EOR);
          setState(737);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(742);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
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
    setState(743);
    _la = _input->LA(1);
    if (!((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & 15) != 0)) {
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
    setState(745);
    _la = _input->LA(1);
    if (!((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & 8796093022223) != 0)) {
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
    setState(750);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(747);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(748);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(749);
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
    setState(753);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(752);
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
    setState(755);
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
    setState(763);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(757);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(758);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(760);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(759);
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
        setState(762);
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
    setState(765);
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

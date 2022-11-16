
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
      "assign", "assignment", "call", "case", "const", "dim", "exprcall", 
      "end", "for", "if", "ifml", "module", "parameter", "print", "procedure", 
      "repeat", "return", "struct", "structDim", "structInstance", "swap", 
      "when", "while", "variable", "expression", "type", "typeOrStruct", 
      "literal", "floatLiteral", "integerLiteral", "stringLiteral"
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
  	4,1,108,684,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,1,0,1,0,1,0,1,1,5,1,77,8,1,10,1,12,1,80,9,1,1,1,1,1,1,1,3,1,85,8,1,
  	5,1,87,8,1,10,1,12,1,90,9,1,1,2,5,2,93,8,2,10,2,12,2,96,9,2,1,2,1,2,3,
  	2,100,8,2,4,2,102,8,2,11,2,12,2,103,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,126,8,3,1,4,4,4,129,
  	8,4,11,4,12,4,130,1,5,3,5,134,8,5,1,5,1,5,1,5,5,5,139,8,5,10,5,12,5,142,
  	9,5,1,5,3,5,145,8,5,1,5,3,5,148,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,3,7,157,
  	8,7,1,7,1,7,5,7,161,8,7,10,7,12,7,164,9,7,1,7,1,7,1,8,1,8,1,8,1,8,3,8,
  	172,8,8,1,8,4,8,175,8,8,11,8,12,8,176,1,8,1,8,3,8,181,8,8,1,8,1,8,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,193,8,9,10,9,12,9,196,9,9,1,9,3,9,199,
  	8,9,1,9,3,9,202,8,9,1,10,1,10,1,10,3,10,207,8,10,1,10,1,10,1,10,3,10,
  	212,8,10,1,10,1,10,5,10,216,8,10,10,10,12,10,219,9,10,1,10,1,10,1,11,
  	1,11,1,11,3,11,226,8,11,1,11,1,11,5,11,230,8,11,10,11,12,11,233,9,11,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,13,3,13,242,8,13,1,13,3,13,245,8,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,3,13,253,8,13,1,13,1,13,1,13,1,14,1,14,1,
  	14,3,14,261,8,14,1,14,1,14,1,14,3,14,266,8,14,1,15,1,15,1,15,3,15,271,
  	8,15,1,15,1,15,1,15,1,15,1,15,3,15,278,8,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,17,1,17,3,17,288,8,17,1,17,3,17,291,8,17,1,18,1,18,1,18,3,18,296,
  	8,18,1,18,3,18,299,8,18,1,18,3,18,302,8,18,3,18,304,8,18,1,19,3,19,307,
  	8,19,1,19,1,19,1,19,3,19,312,8,19,1,19,3,19,315,8,19,1,19,3,19,318,8,
  	19,1,19,3,19,321,8,19,1,19,1,19,5,19,325,8,19,10,19,12,19,328,9,19,1,
  	19,3,19,331,8,19,1,19,5,19,334,8,19,10,19,12,19,337,9,19,1,19,1,19,1,
  	19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,3,21,349,8,21,1,22,1,22,1,22,5,
  	22,354,8,22,10,22,12,22,357,9,22,1,22,1,22,3,22,361,8,22,1,22,1,22,4,
  	22,365,8,22,11,22,12,22,366,1,22,1,22,3,22,371,8,22,1,22,1,22,5,22,375,
  	8,22,10,22,12,22,378,9,22,1,22,5,22,381,8,22,10,22,12,22,384,9,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,3,23,392,8,23,1,23,1,23,1,23,3,23,397,8,23,1,
  	23,1,23,5,23,401,8,23,10,23,12,23,404,9,23,1,23,1,23,1,24,3,24,409,8,
  	24,1,24,1,24,1,24,1,24,3,24,415,8,24,1,24,1,24,1,24,1,24,1,24,3,24,422,
  	8,24,1,24,1,24,1,24,1,24,5,24,428,8,24,10,24,12,24,431,9,24,1,24,3,24,
  	434,8,24,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,5,26,445,8,26,10,
  	26,12,26,448,9,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,3,
  	28,460,8,28,1,28,1,28,5,28,464,8,28,10,28,12,28,467,9,28,1,28,3,28,470,
  	8,28,1,28,1,28,5,28,474,8,28,10,28,12,28,477,9,28,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	3,29,497,8,29,1,29,1,29,1,29,3,29,502,8,29,1,29,3,29,505,8,29,1,29,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,29,1,29,1,29,3,29,555,8,29,1,29,1,29,1,29,1,29,1,29,1,29,3,
  	29,563,8,29,1,29,1,29,3,29,567,8,29,1,29,1,29,1,29,1,29,3,29,573,8,29,
  	1,29,1,29,3,29,577,8,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,585,8,29,1,
  	29,1,29,3,29,589,8,29,1,29,1,29,1,29,1,29,3,29,595,8,29,1,29,1,29,3,29,
  	599,8,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	5,29,655,8,29,10,29,12,29,658,9,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,
  	3,32,667,8,32,1,33,3,33,670,8,33,1,33,1,33,1,34,1,34,1,34,3,34,677,8,
  	34,1,34,3,34,680,8,34,1,35,1,35,1,35,0,1,58,36,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,0,5,1,1,70,70,2,0,70,70,75,75,1,0,64,67,2,0,64,67,107,107,
  	1,0,89,90,806,0,72,1,0,0,0,2,88,1,0,0,0,4,101,1,0,0,0,6,125,1,0,0,0,8,
  	128,1,0,0,0,10,133,1,0,0,0,12,149,1,0,0,0,14,153,1,0,0,0,16,167,1,0,0,
  	0,18,184,1,0,0,0,20,203,1,0,0,0,22,222,1,0,0,0,24,236,1,0,0,0,26,238,
  	1,0,0,0,28,257,1,0,0,0,30,267,1,0,0,0,32,282,1,0,0,0,34,285,1,0,0,0,36,
  	292,1,0,0,0,38,306,1,0,0,0,40,341,1,0,0,0,42,346,1,0,0,0,44,350,1,0,0,
  	0,46,387,1,0,0,0,48,408,1,0,0,0,50,435,1,0,0,0,52,440,1,0,0,0,54,451,
  	1,0,0,0,56,456,1,0,0,0,58,598,1,0,0,0,60,659,1,0,0,0,62,661,1,0,0,0,64,
  	666,1,0,0,0,66,669,1,0,0,0,68,679,1,0,0,0,70,681,1,0,0,0,72,73,3,2,1,
  	0,73,74,5,0,0,1,74,1,1,0,0,0,75,77,3,8,4,0,76,75,1,0,0,0,77,80,1,0,0,
  	0,78,76,1,0,0,0,78,79,1,0,0,0,79,81,1,0,0,0,80,78,1,0,0,0,81,84,3,6,3,
  	0,82,85,3,8,4,0,83,85,5,0,0,1,84,82,1,0,0,0,84,83,1,0,0,0,84,85,1,0,0,
  	0,85,87,1,0,0,0,86,78,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,
  	0,89,3,1,0,0,0,90,88,1,0,0,0,91,93,5,70,0,0,92,91,1,0,0,0,93,96,1,0,0,
  	0,94,92,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,94,1,0,0,0,97,99,3,6,3,
  	0,98,100,7,0,0,0,99,98,1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,94,
  	1,0,0,0,102,103,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,5,1,0,0,0,
  	105,126,5,1,0,0,106,126,3,10,5,0,107,126,3,14,7,0,108,126,3,16,8,0,109,
  	126,3,18,9,0,110,126,3,20,10,0,111,126,3,24,12,0,112,126,3,26,13,0,113,
  	126,3,28,14,0,114,126,3,30,15,0,115,126,3,32,16,0,116,126,3,38,19,0,117,
  	126,3,36,18,0,118,126,3,40,20,0,119,126,3,42,21,0,120,126,3,44,22,0,121,
  	126,3,46,23,0,122,126,3,48,24,0,123,126,3,50,25,0,124,126,3,54,27,0,125,
  	105,1,0,0,0,125,106,1,0,0,0,125,107,1,0,0,0,125,108,1,0,0,0,125,109,1,
  	0,0,0,125,110,1,0,0,0,125,111,1,0,0,0,125,112,1,0,0,0,125,113,1,0,0,0,
  	125,114,1,0,0,0,125,115,1,0,0,0,125,116,1,0,0,0,125,117,1,0,0,0,125,118,
  	1,0,0,0,125,119,1,0,0,0,125,120,1,0,0,0,125,121,1,0,0,0,125,122,1,0,0,
  	0,125,123,1,0,0,0,125,124,1,0,0,0,126,7,1,0,0,0,127,129,7,1,0,0,128,127,
  	1,0,0,0,129,130,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,9,1,0,0,0,
  	132,134,5,45,0,0,133,132,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,
  	140,3,12,6,0,136,137,5,73,0,0,137,139,3,12,6,0,138,136,1,0,0,0,139,142,
  	1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,0,141,147,1,0,0,0,142,140,1,0,0,
  	0,143,145,5,16,0,0,144,143,1,0,0,0,144,145,1,0,0,0,145,146,1,0,0,0,146,
  	148,3,60,30,0,147,144,1,0,0,0,147,148,1,0,0,0,148,11,1,0,0,0,149,150,
  	3,56,28,0,150,151,5,82,0,0,151,152,3,58,29,0,152,13,1,0,0,0,153,154,5,
  	107,0,0,154,156,5,78,0,0,155,157,3,58,29,0,156,155,1,0,0,0,156,157,1,
  	0,0,0,157,162,1,0,0,0,158,159,5,73,0,0,159,161,3,58,29,0,160,158,1,0,
  	0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,165,1,0,0,0,164,
  	162,1,0,0,0,165,166,5,79,0,0,166,15,1,0,0,0,167,168,5,2,0,0,168,169,3,
  	58,29,0,169,171,5,16,0,0,170,172,3,8,4,0,171,170,1,0,0,0,171,172,1,0,
  	0,0,172,174,1,0,0,0,173,175,3,52,26,0,174,173,1,0,0,0,175,176,1,0,0,0,
  	176,174,1,0,0,0,176,177,1,0,0,0,177,180,1,0,0,0,178,179,5,17,0,0,179,
  	181,3,2,1,0,180,178,1,0,0,0,180,181,1,0,0,0,181,182,1,0,0,0,182,183,5,
  	8,0,0,183,17,1,0,0,0,184,185,5,3,0,0,185,186,5,107,0,0,186,187,5,82,0,
  	0,187,194,3,64,32,0,188,189,5,73,0,0,189,190,5,107,0,0,190,191,5,82,0,
  	0,191,193,3,64,32,0,192,188,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,
  	195,1,0,0,0,195,201,1,0,0,0,196,194,1,0,0,0,197,199,5,16,0,0,198,197,
  	1,0,0,0,198,199,1,0,0,0,199,200,1,0,0,0,200,202,3,60,30,0,201,198,1,0,
  	0,0,201,202,1,0,0,0,202,19,1,0,0,0,203,204,5,5,0,0,204,206,5,107,0,0,
  	205,207,5,16,0,0,206,205,1,0,0,0,206,207,1,0,0,0,207,208,1,0,0,0,208,
  	209,3,60,30,0,209,211,5,80,0,0,210,212,3,58,29,0,211,210,1,0,0,0,211,
  	212,1,0,0,0,212,217,1,0,0,0,213,214,5,73,0,0,214,216,3,58,29,0,215,213,
  	1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,217,218,1,0,0,0,218,220,1,0,0,
  	0,219,217,1,0,0,0,220,221,5,81,0,0,221,21,1,0,0,0,222,223,5,107,0,0,223,
  	225,5,78,0,0,224,226,3,58,29,0,225,224,1,0,0,0,225,226,1,0,0,0,226,231,
  	1,0,0,0,227,228,5,73,0,0,228,230,3,58,29,0,229,227,1,0,0,0,230,233,1,
  	0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,234,1,0,0,0,233,231,1,0,0,0,
  	234,235,5,79,0,0,235,23,1,0,0,0,236,237,5,7,0,0,237,25,1,0,0,0,238,239,
  	5,12,0,0,239,244,5,107,0,0,240,242,5,16,0,0,241,240,1,0,0,0,241,242,1,
  	0,0,0,242,243,1,0,0,0,243,245,3,60,30,0,244,241,1,0,0,0,244,245,1,0,0,
  	0,245,246,1,0,0,0,246,247,5,82,0,0,247,248,3,58,29,0,248,249,5,26,0,0,
  	249,252,3,58,29,0,250,251,5,24,0,0,251,253,3,58,29,0,252,250,1,0,0,0,
  	252,253,1,0,0,0,253,254,1,0,0,0,254,255,3,2,1,0,255,256,5,15,0,0,256,
  	27,1,0,0,0,257,258,5,13,0,0,258,260,3,58,29,0,259,261,5,23,0,0,260,259,
  	1,0,0,0,260,261,1,0,0,0,261,262,1,0,0,0,262,265,3,4,2,0,263,264,5,6,0,
  	0,264,266,3,4,2,0,265,263,1,0,0,0,265,266,1,0,0,0,266,29,1,0,0,0,267,
  	268,5,13,0,0,268,270,3,58,29,0,269,271,5,23,0,0,270,269,1,0,0,0,270,271,
  	1,0,0,0,271,272,1,0,0,0,272,273,5,75,0,0,273,277,3,2,1,0,274,275,5,6,
  	0,0,275,276,5,75,0,0,276,278,3,2,1,0,277,274,1,0,0,0,277,278,1,0,0,0,
  	278,279,1,0,0,0,279,280,5,75,0,0,280,281,5,10,0,0,281,31,1,0,0,0,282,
  	283,5,14,0,0,283,284,5,107,0,0,284,33,1,0,0,0,285,290,5,107,0,0,286,288,
  	5,16,0,0,287,286,1,0,0,0,287,288,1,0,0,0,288,289,1,0,0,0,289,291,3,60,
  	30,0,290,287,1,0,0,0,290,291,1,0,0,0,291,35,1,0,0,0,292,303,5,18,0,0,
  	293,298,3,58,29,0,294,296,5,29,0,0,295,294,1,0,0,0,295,296,1,0,0,0,296,
  	297,1,0,0,0,297,299,3,58,29,0,298,295,1,0,0,0,298,299,1,0,0,0,299,301,
  	1,0,0,0,300,302,5,71,0,0,301,300,1,0,0,0,301,302,1,0,0,0,302,304,1,0,
  	0,0,303,293,1,0,0,0,303,304,1,0,0,0,304,37,1,0,0,0,305,307,5,19,0,0,306,
  	305,1,0,0,0,306,307,1,0,0,0,307,308,1,0,0,0,308,309,5,4,0,0,309,314,5,
  	107,0,0,310,312,5,16,0,0,311,310,1,0,0,0,311,312,1,0,0,0,312,313,1,0,
  	0,0,313,315,3,60,30,0,314,311,1,0,0,0,314,315,1,0,0,0,315,317,1,0,0,0,
  	316,318,5,78,0,0,317,316,1,0,0,0,317,318,1,0,0,0,318,320,1,0,0,0,319,
  	321,3,34,17,0,320,319,1,0,0,0,320,321,1,0,0,0,321,326,1,0,0,0,322,323,
  	5,73,0,0,323,325,3,34,17,0,324,322,1,0,0,0,325,328,1,0,0,0,326,324,1,
  	0,0,0,326,327,1,0,0,0,327,330,1,0,0,0,328,326,1,0,0,0,329,331,5,79,0,
  	0,330,329,1,0,0,0,330,331,1,0,0,0,331,335,1,0,0,0,332,334,3,8,4,0,333,
  	332,1,0,0,0,334,337,1,0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,336,338,1,
  	0,0,0,337,335,1,0,0,0,338,339,3,2,1,0,339,340,5,9,0,0,340,39,1,0,0,0,
  	341,342,5,21,0,0,342,343,3,2,1,0,343,344,5,27,0,0,344,345,3,58,29,0,345,
  	41,1,0,0,0,346,348,5,22,0,0,347,349,3,58,29,0,348,347,1,0,0,0,348,349,
  	1,0,0,0,349,43,1,0,0,0,350,351,5,31,0,0,351,355,5,107,0,0,352,354,3,8,
  	4,0,353,352,1,0,0,0,354,357,1,0,0,0,355,353,1,0,0,0,355,356,1,0,0,0,356,
  	358,1,0,0,0,357,355,1,0,0,0,358,360,5,107,0,0,359,361,5,16,0,0,360,359,
  	1,0,0,0,360,361,1,0,0,0,361,362,1,0,0,0,362,376,3,62,31,0,363,365,3,8,
  	4,0,364,363,1,0,0,0,365,366,1,0,0,0,366,364,1,0,0,0,366,367,1,0,0,0,367,
  	368,1,0,0,0,368,370,5,107,0,0,369,371,5,16,0,0,370,369,1,0,0,0,370,371,
  	1,0,0,0,371,372,1,0,0,0,372,373,3,62,31,0,373,375,1,0,0,0,374,364,1,0,
  	0,0,375,378,1,0,0,0,376,374,1,0,0,0,376,377,1,0,0,0,377,382,1,0,0,0,378,
  	376,1,0,0,0,379,381,3,8,4,0,380,379,1,0,0,0,381,384,1,0,0,0,382,380,1,
  	0,0,0,382,383,1,0,0,0,383,385,1,0,0,0,384,382,1,0,0,0,385,386,5,33,0,
  	0,386,45,1,0,0,0,387,388,5,5,0,0,388,389,5,32,0,0,389,391,5,107,0,0,390,
  	392,5,16,0,0,391,390,1,0,0,0,391,392,1,0,0,0,392,393,1,0,0,0,393,394,
  	5,107,0,0,394,396,5,80,0,0,395,397,3,58,29,0,396,395,1,0,0,0,396,397,
  	1,0,0,0,397,402,1,0,0,0,398,399,5,73,0,0,399,401,3,58,29,0,400,398,1,
  	0,0,0,401,404,1,0,0,0,402,400,1,0,0,0,402,403,1,0,0,0,403,405,1,0,0,0,
  	404,402,1,0,0,0,405,406,5,81,0,0,406,47,1,0,0,0,407,409,5,45,0,0,408,
  	407,1,0,0,0,408,409,1,0,0,0,409,410,1,0,0,0,410,411,5,107,0,0,411,412,
  	5,82,0,0,412,414,5,32,0,0,413,415,5,16,0,0,414,413,1,0,0,0,414,415,1,
  	0,0,0,415,416,1,0,0,0,416,433,5,107,0,0,417,421,5,78,0,0,418,419,5,107,
  	0,0,419,420,5,82,0,0,420,422,3,58,29,0,421,418,1,0,0,0,421,422,1,0,0,
  	0,422,429,1,0,0,0,423,424,5,73,0,0,424,425,5,107,0,0,425,426,5,82,0,0,
  	426,428,3,58,29,0,427,423,1,0,0,0,428,431,1,0,0,0,429,427,1,0,0,0,429,
  	430,1,0,0,0,430,432,1,0,0,0,431,429,1,0,0,0,432,434,5,79,0,0,433,417,
  	1,0,0,0,433,434,1,0,0,0,434,49,1,0,0,0,435,436,5,25,0,0,436,437,3,56,
  	28,0,437,438,5,73,0,0,438,439,3,56,28,0,439,51,1,0,0,0,440,441,5,28,0,
  	0,441,446,3,58,29,0,442,443,5,73,0,0,443,445,3,58,29,0,444,442,1,0,0,
  	0,445,448,1,0,0,0,446,444,1,0,0,0,446,447,1,0,0,0,447,449,1,0,0,0,448,
  	446,1,0,0,0,449,450,3,2,1,0,450,53,1,0,0,0,451,452,5,30,0,0,452,453,3,
  	58,29,0,453,454,3,2,1,0,454,455,5,11,0,0,455,55,1,0,0,0,456,469,5,107,
  	0,0,457,459,5,80,0,0,458,460,3,58,29,0,459,458,1,0,0,0,459,460,1,0,0,
  	0,460,465,1,0,0,0,461,462,5,73,0,0,462,464,3,58,29,0,463,461,1,0,0,0,
  	464,467,1,0,0,0,465,463,1,0,0,0,465,466,1,0,0,0,466,468,1,0,0,0,467,465,
  	1,0,0,0,468,470,5,81,0,0,469,457,1,0,0,0,469,470,1,0,0,0,470,475,1,0,
  	0,0,471,472,5,72,0,0,472,474,5,107,0,0,473,471,1,0,0,0,474,477,1,0,0,
  	0,475,473,1,0,0,0,475,476,1,0,0,0,476,57,1,0,0,0,477,475,1,0,0,0,478,
  	479,6,29,-1,0,479,480,5,78,0,0,480,481,3,58,29,0,481,482,5,79,0,0,482,
  	599,1,0,0,0,483,599,3,64,32,0,484,599,3,56,28,0,485,599,3,22,11,0,486,
  	487,5,90,0,0,487,599,3,58,29,54,488,489,5,89,0,0,489,599,3,58,29,53,490,
  	491,5,65,0,0,491,599,3,58,29,52,492,493,5,66,0,0,493,599,3,58,29,51,494,
  	496,5,67,0,0,495,497,5,78,0,0,496,495,1,0,0,0,496,497,1,0,0,0,497,498,
  	1,0,0,0,498,501,3,58,29,0,499,500,5,29,0,0,500,502,3,58,29,0,501,499,
  	1,0,0,0,501,502,1,0,0,0,502,504,1,0,0,0,503,505,5,79,0,0,504,503,1,0,
  	0,0,504,505,1,0,0,0,505,599,1,0,0,0,506,507,5,37,0,0,507,599,3,58,29,
  	49,508,509,5,97,0,0,509,599,3,58,29,48,510,511,5,98,0,0,511,599,3,58,
  	29,47,512,599,5,56,0,0,513,599,5,55,0,0,514,599,5,34,0,0,515,599,5,35,
  	0,0,516,599,5,36,0,0,517,599,5,48,0,0,518,519,5,42,0,0,519,599,3,58,29,
  	40,520,521,5,49,0,0,521,599,3,58,29,39,522,523,5,51,0,0,523,599,3,58,
  	29,38,524,525,5,38,0,0,525,599,3,58,29,37,526,527,5,39,0,0,527,599,3,
  	58,29,36,528,529,5,40,0,0,529,599,3,58,29,35,530,531,5,41,0,0,531,599,
  	3,58,29,34,532,533,5,43,0,0,533,599,3,58,29,33,534,535,5,44,0,0,535,599,
  	3,58,29,32,536,537,5,50,0,0,537,599,3,58,29,31,538,539,5,46,0,0,539,599,
  	3,58,29,30,540,541,5,47,0,0,541,599,3,58,29,29,542,543,5,52,0,0,543,599,
  	3,58,29,28,544,545,5,53,0,0,545,599,3,58,29,27,546,547,5,54,0,0,547,599,
  	3,58,29,26,548,549,5,57,0,0,549,599,3,58,29,25,550,551,5,58,0,0,551,599,
  	3,58,29,24,552,554,5,59,0,0,553,555,5,78,0,0,554,553,1,0,0,0,554,555,
  	1,0,0,0,555,556,1,0,0,0,556,557,3,58,29,0,557,558,5,73,0,0,558,559,3,
  	58,29,0,559,560,5,73,0,0,560,562,3,58,29,0,561,563,5,79,0,0,562,561,1,
  	0,0,0,562,563,1,0,0,0,563,599,1,0,0,0,564,566,5,60,0,0,565,567,5,78,0,
  	0,566,565,1,0,0,0,566,567,1,0,0,0,567,568,1,0,0,0,568,569,3,58,29,0,569,
  	570,5,73,0,0,570,572,3,58,29,0,571,573,5,79,0,0,572,571,1,0,0,0,572,573,
  	1,0,0,0,573,599,1,0,0,0,574,576,5,61,0,0,575,577,5,78,0,0,576,575,1,0,
  	0,0,576,577,1,0,0,0,577,578,1,0,0,0,578,579,3,58,29,0,579,580,5,73,0,
  	0,580,581,3,58,29,0,581,582,5,73,0,0,582,584,3,58,29,0,583,585,5,79,0,
  	0,584,583,1,0,0,0,584,585,1,0,0,0,585,599,1,0,0,0,586,588,5,62,0,0,587,
  	589,5,78,0,0,588,587,1,0,0,0,588,589,1,0,0,0,589,590,1,0,0,0,590,591,
  	3,58,29,0,591,592,5,73,0,0,592,594,3,58,29,0,593,595,5,79,0,0,594,593,
  	1,0,0,0,594,595,1,0,0,0,595,599,1,0,0,0,596,597,5,63,0,0,597,599,3,58,
  	29,19,598,478,1,0,0,0,598,483,1,0,0,0,598,484,1,0,0,0,598,485,1,0,0,0,
  	598,486,1,0,0,0,598,488,1,0,0,0,598,490,1,0,0,0,598,492,1,0,0,0,598,494,
  	1,0,0,0,598,506,1,0,0,0,598,508,1,0,0,0,598,510,1,0,0,0,598,512,1,0,0,
  	0,598,513,1,0,0,0,598,514,1,0,0,0,598,515,1,0,0,0,598,516,1,0,0,0,598,
  	517,1,0,0,0,598,518,1,0,0,0,598,520,1,0,0,0,598,522,1,0,0,0,598,524,1,
  	0,0,0,598,526,1,0,0,0,598,528,1,0,0,0,598,530,1,0,0,0,598,532,1,0,0,0,
  	598,534,1,0,0,0,598,536,1,0,0,0,598,538,1,0,0,0,598,540,1,0,0,0,598,542,
  	1,0,0,0,598,544,1,0,0,0,598,546,1,0,0,0,598,548,1,0,0,0,598,550,1,0,0,
  	0,598,552,1,0,0,0,598,564,1,0,0,0,598,574,1,0,0,0,598,586,1,0,0,0,598,
  	596,1,0,0,0,599,656,1,0,0,0,600,601,10,18,0,0,601,602,5,88,0,0,602,655,
  	3,58,29,18,603,604,10,17,0,0,604,605,5,92,0,0,605,655,3,58,29,18,606,
  	607,10,16,0,0,607,608,5,91,0,0,608,655,3,58,29,17,609,610,10,15,0,0,610,
  	611,5,96,0,0,611,655,3,58,29,16,612,613,10,14,0,0,613,614,5,95,0,0,614,
  	655,3,58,29,15,615,616,10,13,0,0,616,617,5,89,0,0,617,655,3,58,29,14,
  	618,619,10,12,0,0,619,620,5,90,0,0,620,655,3,58,29,13,621,622,10,11,0,
  	0,622,623,5,93,0,0,623,655,3,58,29,12,624,625,10,10,0,0,625,626,5,94,
  	0,0,626,655,3,58,29,11,627,628,10,9,0,0,628,629,5,82,0,0,629,655,3,58,
  	29,10,630,631,10,8,0,0,631,632,5,83,0,0,632,655,3,58,29,9,633,634,10,
  	7,0,0,634,635,5,84,0,0,635,655,3,58,29,8,636,637,10,6,0,0,637,638,5,85,
  	0,0,638,655,3,58,29,7,639,640,10,5,0,0,640,641,5,86,0,0,641,655,3,58,
  	29,6,642,643,10,4,0,0,643,644,5,87,0,0,644,655,3,58,29,5,645,646,10,3,
  	0,0,646,647,5,99,0,0,647,655,3,58,29,4,648,649,10,2,0,0,649,650,5,100,
  	0,0,650,655,3,58,29,3,651,652,10,1,0,0,652,653,5,101,0,0,653,655,3,58,
  	29,2,654,600,1,0,0,0,654,603,1,0,0,0,654,606,1,0,0,0,654,609,1,0,0,0,
  	654,612,1,0,0,0,654,615,1,0,0,0,654,618,1,0,0,0,654,621,1,0,0,0,654,624,
  	1,0,0,0,654,627,1,0,0,0,654,630,1,0,0,0,654,633,1,0,0,0,654,636,1,0,0,
  	0,654,639,1,0,0,0,654,642,1,0,0,0,654,645,1,0,0,0,654,648,1,0,0,0,654,
  	651,1,0,0,0,655,658,1,0,0,0,656,654,1,0,0,0,656,657,1,0,0,0,657,59,1,
  	0,0,0,658,656,1,0,0,0,659,660,7,2,0,0,660,61,1,0,0,0,661,662,7,3,0,0,
  	662,63,1,0,0,0,663,667,3,66,33,0,664,667,3,68,34,0,665,667,3,70,35,0,
  	666,663,1,0,0,0,666,664,1,0,0,0,666,665,1,0,0,0,667,65,1,0,0,0,668,670,
  	7,4,0,0,669,668,1,0,0,0,669,670,1,0,0,0,670,671,1,0,0,0,671,672,5,105,
  	0,0,672,67,1,0,0,0,673,680,5,103,0,0,674,680,5,104,0,0,675,677,7,4,0,
  	0,676,675,1,0,0,0,676,677,1,0,0,0,677,678,1,0,0,0,678,680,5,106,0,0,679,
  	673,1,0,0,0,679,674,1,0,0,0,679,676,1,0,0,0,680,69,1,0,0,0,681,682,5,
  	102,0,0,682,71,1,0,0,0,84,78,84,88,94,99,103,125,130,133,140,144,147,
  	156,162,171,176,180,194,198,201,206,211,217,225,231,241,244,252,260,265,
  	270,277,287,290,295,298,301,303,306,311,314,317,320,326,330,335,348,355,
  	360,366,370,376,382,391,396,402,408,414,421,429,433,446,459,465,469,475,
  	496,501,504,554,562,566,572,576,584,588,594,598,654,656,666,669,676,679
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
    setState(72);
    statements();
    setState(73);
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

std::vector<DaricParser::StatementContext *> DaricParser::StatementsContext::statement() {
  return getRuleContexts<DaricParser::StatementContext>();
}

DaricParser::StatementContext* DaricParser::StatementsContext::statement(size_t i) {
  return getRuleContext<DaricParser::StatementContext>(i);
}

std::vector<DaricParser::SeparatorContext *> DaricParser::StatementsContext::separator() {
  return getRuleContexts<DaricParser::SeparatorContext>();
}

DaricParser::SeparatorContext* DaricParser::StatementsContext::separator(size_t i) {
  return getRuleContext<DaricParser::SeparatorContext>(i);
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
    enterOuterAlt(_localctx, 1);
    setState(88);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(78);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE) {
          setState(75);
          separator();
          setState(80);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(81);
        statement();
        setState(84);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(82);
          separator();
          break;
        }

        case 2: {
          setState(83);
          match(DaricParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(90);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
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
    setState(101); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(94);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(91);
                match(DaricParser::COLON);
                setState(96);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(97);
              statement();
              setState(99);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(98);
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
      setState(103); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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

tree::TerminalNode* DaricParser::StatementContext::COMMENT() {
  return getToken(DaricParser::COMMENT, 0);
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

DaricParser::ModuleContext* DaricParser::StatementContext::module() {
  return getRuleContext<DaricParser::ModuleContext>(0);
}

DaricParser::ProcedureContext* DaricParser::StatementContext::procedure() {
  return getRuleContext<DaricParser::ProcedureContext>(0);
}

DaricParser::PrintContext* DaricParser::StatementContext::print() {
  return getRuleContext<DaricParser::PrintContext>(0);
}

DaricParser::RepeatContext* DaricParser::StatementContext::repeat() {
  return getRuleContext<DaricParser::RepeatContext>(0);
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
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(105);
      match(DaricParser::COMMENT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(106);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(107);
      call();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(108);
      case_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(109);
      const_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(110);
      dim();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(111);
      end();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(112);
      for_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(113);
      if_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(114);
      ifml();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(115);
      module();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(116);
      procedure();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(117);
      print();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(118);
      repeat();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(119);
      return_();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(120);
      struct_();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(121);
      structDim();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(122);
      structInstance();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(123);
      swap();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(124);
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
    setState(128); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(127);
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
      setState(130); 
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
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(132);
      match(DaricParser::LET);
    }
    setState(135);
    assignment();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(136);
      match(DaricParser::COMMA);
      setState(137);
      assignment();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & 4222124650659841) != 0) {
      setState(144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(143);
        match(DaricParser::OF);
      }
      setState(146);
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
    setState(149);
    variable();
    setState(150);
    match(DaricParser::EQ);
    setState(151);
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

tree::TerminalNode* DaricParser::CallContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
}

tree::TerminalNode* DaricParser::CallContext::RPAREN() {
  return getToken(DaricParser::RPAREN, 0);
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
    setState(153);
    match(DaricParser::IDENTIFIER);
    setState(154);
    match(DaricParser::LPAREN);
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -35201551958016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(155);
      expression(0);
    }
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(158);
      match(DaricParser::COMMA);
      setState(159);
      expression(0);
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    match(DaricParser::RPAREN);
   
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
    setState(167);
    match(DaricParser::CASE);
    setState(168);
    expression(0);
    setState(169);
    match(DaricParser::OF);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(170);
      separator();
    }
    setState(174); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(173);
      when();
      setState(176); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DaricParser::WHEN);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(178);
      match(DaricParser::OTHERWISE);
      setState(179);
      statements();
    }
    setState(182);
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
    setState(184);
    match(DaricParser::CONST);
    setState(185);
    match(DaricParser::IDENTIFIER);
    setState(186);
    match(DaricParser::EQ);
    setState(187);
    literal();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(188);
      match(DaricParser::COMMA);
      setState(189);
      match(DaricParser::IDENTIFIER);
      setState(190);
      match(DaricParser::EQ);
      setState(191);
      literal();
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & 4222124650659841) != 0) {
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(197);
        match(DaricParser::OF);
      }
      setState(200);
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
  enterRule(_localctx, 20, DaricParser::RuleDim);
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
    match(DaricParser::DIM);
    setState(204);
    match(DaricParser::IDENTIFIER);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(205);
      match(DaricParser::OF);
    }
    setState(208);
    type();
    setState(209);
    match(DaricParser::SOPEN);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -35201551958016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(210);
      expression(0);
    }
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(213);
      match(DaricParser::COMMA);
      setState(214);
      expression(0);
      setState(219);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(220);
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
  enterRule(_localctx, 22, DaricParser::RuleExprcall);
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
    setState(222);
    match(DaricParser::IDENTIFIER);
    setState(223);
    match(DaricParser::LPAREN);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -35201551958016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(224);
      expression(0);
    }
    setState(231);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(227);
      match(DaricParser::COMMA);
      setState(228);
      expression(0);
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(234);
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
  enterRule(_localctx, 24, DaricParser::RuleEnd);

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
  enterRule(_localctx, 26, DaricParser::RuleFor);
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
    setState(238);
    match(DaricParser::FOR);
    setState(239);
    match(DaricParser::IDENTIFIER);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & 4222124650659841) != 0) {
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(240);
        match(DaricParser::OF);
      }
      setState(243);
      type();
    }
    setState(246);
    match(DaricParser::EQ);
    setState(247);
    expression(0);
    setState(248);
    match(DaricParser::TO);
    setState(249);
    expression(0);
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(250);
      match(DaricParser::STEP);
      setState(251);
      expression(0);
    }
    setState(254);
    statements();
    setState(255);
    match(DaricParser::NEXT);
   
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
  enterRule(_localctx, 28, DaricParser::RuleIf);
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
    setState(257);
    match(DaricParser::IF);
    setState(258);
    expression(0);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(259);
      match(DaricParser::THEN);
    }
    setState(262);
    statementsl();
    setState(265);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(263);
      match(DaricParser::ELSE);
      setState(264);
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
  enterRule(_localctx, 30, DaricParser::RuleIfml);
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
    setState(267);
    match(DaricParser::IF);
    setState(268);
    expression(0);
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(269);
      match(DaricParser::THEN);
    }
    setState(272);
    match(DaricParser::NEWLINE);
    setState(273);
    statements();
    setState(277);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(274);
      match(DaricParser::ELSE);
      setState(275);
      match(DaricParser::NEWLINE);
      setState(276);
      statements();
    }
    setState(279);
    match(DaricParser::NEWLINE);
    setState(280);
    match(DaricParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

DaricParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DaricParser::ModuleContext::MODULE() {
  return getToken(DaricParser::MODULE, 0);
}

tree::TerminalNode* DaricParser::ModuleContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
}


size_t DaricParser::ModuleContext::getRuleIndex() const {
  return DaricParser::RuleModule;
}


std::any DaricParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DaricVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

DaricParser::ModuleContext* DaricParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 32, DaricParser::RuleModule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(DaricParser::MODULE);
    setState(283);
    match(DaricParser::IDENTIFIER);
   
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

tree::TerminalNode* DaricParser::ParameterContext::IDENTIFIER() {
  return getToken(DaricParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 34, DaricParser::RuleParameter);
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
    setState(285);
    match(DaricParser::IDENTIFIER);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & 4222124650659841) != 0) {
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(286);
        match(DaricParser::OF);
      }
      setState(289);
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
  enterRule(_localctx, 36, DaricParser::RulePrint);
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
    match(DaricParser::PRINT);
    setState(303);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(293);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(298);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(295);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(294);
          match(DaricParser::WITH);
        }
        setState(297);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(301);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(300);
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

tree::TerminalNode* DaricParser::ProcedureContext::PRIVATE() {
  return getToken(DaricParser::PRIVATE, 0);
}

DaricParser::TypeContext* DaricParser::ProcedureContext::type() {
  return getRuleContext<DaricParser::TypeContext>(0);
}

tree::TerminalNode* DaricParser::ProcedureContext::LPAREN() {
  return getToken(DaricParser::LPAREN, 0);
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
  enterRule(_localctx, 38, DaricParser::RuleProcedure);
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
    setState(306);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PRIVATE) {
      setState(305);
      match(DaricParser::PRIVATE);
    }
    setState(308);
    match(DaricParser::DEF);
    setState(309);
    match(DaricParser::IDENTIFIER);
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & 4222124650659841) != 0) {
      setState(311);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(310);
        match(DaricParser::OF);
      }
      setState(313);
      type();
    }
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(316);
      match(DaricParser::LPAREN);
    }
    setState(320);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(319);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(322);
      match(DaricParser::COMMA);
      setState(323);
      parameter();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(330);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(329);
      match(DaricParser::RPAREN);
    }
    setState(335);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(332);
        separator(); 
      }
      setState(337);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(338);
    statements();
    setState(339);
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
  enterRule(_localctx, 40, DaricParser::RuleRepeat);

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
    match(DaricParser::REPEAT);
    setState(342);
    statements();
    setState(343);
    match(DaricParser::UNTIL);
    setState(344);
    expression(0);
   
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
  enterRule(_localctx, 42, DaricParser::RuleReturn);

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
    match(DaricParser::RETURN);
    setState(348);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(347);
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
  enterRule(_localctx, 44, DaricParser::RuleStruct);
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
    setState(350);
    match(DaricParser::DEFRECORD);
    setState(351);
    match(DaricParser::IDENTIFIER);
    setState(355);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(352);
      separator();
      setState(357);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(358);
    match(DaricParser::IDENTIFIER);
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(359);
      match(DaricParser::OF);
    }
    setState(362);
    typeOrStruct();
    setState(376);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(364); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(363);
          separator();
          setState(366); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(368);
        match(DaricParser::IDENTIFIER);
        setState(370);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(369);
          match(DaricParser::OF);
        }
        setState(372);
        typeOrStruct(); 
      }
      setState(378);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
    setState(382);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(379);
      separator();
      setState(384);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(385);
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
  enterRule(_localctx, 46, DaricParser::RuleStructDim);
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
    setState(387);
    match(DaricParser::DIM);
    setState(388);
    match(DaricParser::RECORD);
    setState(389);
    match(DaricParser::IDENTIFIER);
    setState(391);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(390);
      match(DaricParser::OF);
    }
    setState(393);
    match(DaricParser::IDENTIFIER);
    setState(394);
    match(DaricParser::SOPEN);
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -35201551958016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 8671589310471) != 0) {
      setState(395);
      expression(0);
    }
    setState(402);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(398);
      match(DaricParser::COMMA);
      setState(399);
      expression(0);
      setState(404);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(405);
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
  enterRule(_localctx, 48, DaricParser::RuleStructInstance);
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
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(407);
      match(DaricParser::LET);
    }
    setState(410);
    match(DaricParser::IDENTIFIER);
    setState(411);
    match(DaricParser::EQ);
    setState(412);
    match(DaricParser::RECORD);
    setState(414);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(413);
      match(DaricParser::OF);
    }
    setState(416);
    match(DaricParser::IDENTIFIER);
    setState(433);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(417);
      match(DaricParser::LPAREN);
      setState(421);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(418);
        match(DaricParser::IDENTIFIER);
        setState(419);
        match(DaricParser::EQ);
        setState(420);
        expression(0);
      }
      setState(429);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(423);
        match(DaricParser::COMMA);
        setState(424);
        match(DaricParser::IDENTIFIER);
        setState(425);
        match(DaricParser::EQ);
        setState(426);
        expression(0);
        setState(431);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(432);
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
  enterRule(_localctx, 50, DaricParser::RuleSwap);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(DaricParser::SWAP);
    setState(436);
    variable();
    setState(437);
    match(DaricParser::COMMA);
    setState(438);
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
  enterRule(_localctx, 52, DaricParser::RuleWhen);
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
    setState(440);
    match(DaricParser::WHEN);
    setState(441);
    expression(0);
    setState(446);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(442);
      match(DaricParser::COMMA);
      setState(443);
      expression(0);
      setState(448);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(449);
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
  enterRule(_localctx, 54, DaricParser::RuleWhile);

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
    match(DaricParser::WHILE);
    setState(452);
    expression(0);
    setState(453);
    statements();
    setState(454);
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
  enterRule(_localctx, 56, DaricParser::RuleVariable);
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
    setState(456);
    match(DaricParser::IDENTIFIER);
    setState(469);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(457);
      match(DaricParser::SOPEN);
      setState(459);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -35201551958016) != 0 || (((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & 8671589310471) != 0) {
        setState(458);
        expression(0);
      }
      setState(465);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(461);
        match(DaricParser::COMMA);
        setState(462);
        expression(0);
        setState(467);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(468);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(475);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(471);
        match(DaricParser::DOT);
        setState(472);
        match(DaricParser::IDENTIFIER); 
      }
      setState(477);
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

DaricParser::LiteralContext* DaricParser::ExpressionContext::literal() {
  return getRuleContext<DaricParser::LiteralContext>(0);
}

DaricParser::VariableContext* DaricParser::ExpressionContext::variable() {
  return getRuleContext<DaricParser::VariableContext>(0);
}

DaricParser::ExprcallContext* DaricParser::ExpressionContext::exprcall() {
  return getRuleContext<DaricParser::ExprcallContext>(0);
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
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, DaricParser::RuleExpression, precedence);

    

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
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(479);
      match(DaricParser::LPAREN);
      setState(480);
      expression(0);
      setState(481);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(483);
      literal();
      break;
    }

    case 3: {
      setState(484);
      variable();
      break;
    }

    case 4: {
      setState(485);
      exprcall();
      break;
    }

    case 5: {
      setState(486);
      match(DaricParser::MINUS);
      setState(487);
      expression(54);
      break;
    }

    case 6: {
      setState(488);
      match(DaricParser::PLUS);
      setState(489);
      expression(53);
      break;
    }

    case 7: {
      setState(490);
      match(DaricParser::INT);
      setState(491);
      expression(52);
      break;
    }

    case 8: {
      setState(492);
      match(DaricParser::FLOAT);
      setState(493);
      expression(51);
      break;
    }

    case 9: {
      setState(494);
      match(DaricParser::STRING);
      setState(496);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
      case 1: {
        setState(495);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(498);
      expression(0);
      setState(501);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(499);
        match(DaricParser::WITH);
        setState(500);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(504);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(503);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      setState(506);
      match(DaricParser::ABS);
      setState(507);
      expression(49);
      break;
    }

    case 11: {
      setState(508);
      match(DaricParser::COMP);
      setState(509);
      expression(48);
      break;
    }

    case 12: {
      setState(510);
      match(DaricParser::NOT);
      setState(511);
      expression(47);
      break;
    }

    case 13: {
      setState(512);
      match(DaricParser::TRUE);
      break;
    }

    case 14: {
      setState(513);
      match(DaricParser::FALSE);
      break;
    }

    case 15: {
      setState(514);
      match(DaricParser::HPTIME);
      break;
    }

    case 16: {
      setState(515);
      match(DaricParser::TIME);
      break;
    }

    case 17: {
      setState(516);
      match(DaricParser::TIMES);
      break;
    }

    case 18: {
      setState(517);
      match(DaricParser::PI);
      break;
    }

    case 19: {
      setState(518);
      match(DaricParser::DEG);
      setState(519);
      expression(40);
      break;
    }

    case 20: {
      setState(520);
      match(DaricParser::RAD);
      setState(521);
      expression(39);
      break;
    }

    case 21: {
      setState(522);
      match(DaricParser::SGN);
      setState(523);
      expression(38);
      break;
    }

    case 22: {
      setState(524);
      match(DaricParser::ACS);
      setState(525);
      expression(37);
      break;
    }

    case 23: {
      setState(526);
      match(DaricParser::ASN);
      setState(527);
      expression(36);
      break;
    }

    case 24: {
      setState(528);
      match(DaricParser::ATN);
      setState(529);
      expression(35);
      break;
    }

    case 25: {
      setState(530);
      match(DaricParser::COS);
      setState(531);
      expression(34);
      break;
    }

    case 26: {
      setState(532);
      match(DaricParser::EXP);
      setState(533);
      expression(33);
      break;
    }

    case 27: {
      setState(534);
      match(DaricParser::FLOOR);
      setState(535);
      expression(32);
      break;
    }

    case 28: {
      setState(536);
      match(DaricParser::ROUND);
      setState(537);
      expression(31);
      break;
    }

    case 29: {
      setState(538);
      match(DaricParser::LN);
      setState(539);
      expression(30);
      break;
    }

    case 30: {
      setState(540);
      match(DaricParser::LOG);
      setState(541);
      expression(29);
      break;
    }

    case 31: {
      setState(542);
      match(DaricParser::SIN);
      setState(543);
      expression(28);
      break;
    }

    case 32: {
      setState(544);
      match(DaricParser::SQR);
      setState(545);
      expression(27);
      break;
    }

    case 33: {
      setState(546);
      match(DaricParser::TAN);
      setState(547);
      expression(26);
      break;
    }

    case 34: {
      setState(548);
      match(DaricParser::ASC);
      setState(549);
      expression(25);
      break;
    }

    case 35: {
      setState(550);
      match(DaricParser::CHRS);
      setState(551);
      expression(24);
      break;
    }

    case 36: {
      setState(552);
      match(DaricParser::INSTR);
      setState(554);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(553);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(556);
      expression(0);
      setState(557);
      match(DaricParser::COMMA);
      setState(558);
      expression(0);
      setState(559);
      match(DaricParser::COMMA);
      setState(560);
      expression(0);
      setState(562);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(561);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(564);
      match(DaricParser::LEFTS);
      setState(566);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(565);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(568);
      expression(0);
      setState(569);
      match(DaricParser::COMMA);
      setState(570);
      expression(0);
      setState(572);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
      case 1: {
        setState(571);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(574);
      match(DaricParser::MIDS);
      setState(576);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(575);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(578);
      expression(0);
      setState(579);
      match(DaricParser::COMMA);
      setState(580);
      expression(0);
      setState(581);
      match(DaricParser::COMMA);
      setState(582);
      expression(0);
      setState(584);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(583);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 39: {
      setState(586);
      match(DaricParser::RIGHTS);
      setState(588);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(587);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(590);
      expression(0);
      setState(591);
      match(DaricParser::COMMA);
      setState(592);
      expression(0);
      setState(594);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(593);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 40: {
      setState(596);
      match(DaricParser::LEN);
      setState(597);
      expression(19);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(656);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(654);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(600);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(601);
          match(DaricParser::HAT);
          setState(602);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(603);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(604);
          match(DaricParser::DIVIDE);
          setState(605);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(606);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(607);
          match(DaricParser::MULTIPLY);
          setState(608);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(609);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(610);
          match(DaricParser::DIV);
          setState(611);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(612);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(613);
          match(DaricParser::MOD);
          setState(614);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(615);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(616);
          match(DaricParser::PLUS);
          setState(617);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(618);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(619);
          match(DaricParser::MINUS);
          setState(620);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(621);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(622);
          match(DaricParser::SHL);
          setState(623);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(624);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(625);
          match(DaricParser::SHR);
          setState(626);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(627);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(628);
          match(DaricParser::EQ);
          setState(629);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(630);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(631);
          match(DaricParser::NE);
          setState(632);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(633);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(634);
          match(DaricParser::GT);
          setState(635);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(636);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(637);
          match(DaricParser::GE);
          setState(638);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(639);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(640);
          match(DaricParser::LT);
          setState(641);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(642);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(643);
          match(DaricParser::LE);
          setState(644);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(645);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(646);
          match(DaricParser::AND);
          setState(647);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(648);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(649);
          match(DaricParser::OR);
          setState(650);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(651);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(652);
          match(DaricParser::EOR);
          setState(653);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(658);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
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
  enterRule(_localctx, 60, DaricParser::RuleType);
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
    setState(659);
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
  enterRule(_localctx, 62, DaricParser::RuleTypeOrStruct);
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
    setState(661);
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
  enterRule(_localctx, 64, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(663);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(664);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(665);
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
  enterRule(_localctx, 66, DaricParser::RuleFloatLiteral);
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
    setState(669);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(668);
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
    setState(671);
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
  enterRule(_localctx, 68, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(679);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(673);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(674);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(676);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(675);
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
        setState(678);
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
  enterRule(_localctx, 70, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(681);
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
    case 29: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

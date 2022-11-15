
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
      "assign", "assignment", "call", "const", "dim", "exprcall", "end", 
      "if", "ifml", "module", "parameter", "print", "procedure", "repeat", 
      "return", "struct", "structDim", "structInstance", "swap", "while", 
      "variable", "expression", "type", "typeOrStruct", "literal", "floatLiteral", 
      "integerLiteral", "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", 
      "','", "'''", "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", 
      "'<>'", "'>'", "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", 
      "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "COMMENT", "CONST", "DEF", "DIM", "ELSE", "END", "ENDDEF", "ENDIF", 
      "ENDWHILE", "IF", "MODULE", "OF", "PRINT", "PRIVATE", "REM", "REPEAT", 
      "RETURN", "THEN", "SWAP", "UNTIL", "WITH", "WHILE", "DEFRECORD", "RECORD", 
      "ENDRECORD", "HPTIME", "TIME", "TIMES", "ABS", "ACS", "ASN", "ATN", 
      "COS", "DEG", "EXP", "FLOOR", "LET", "LN", "LOG", "PI", "RAD", "ROUND", 
      "SGN", "SIN", "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHRS", "INSTR", 
      "LEFTS", "MIDS", "RIGHTS", "LEN", "BYTE", "INT", "FLOAT", "STRING", 
      "DOLLAR", "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", 
      "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", 
      "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", 
      "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", 
      "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
      "INTEGERLITERAL", "IDENTIFIER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,100,629,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,1,1,5,1,71,8,1,
  	10,1,12,1,74,9,1,1,1,1,1,1,1,3,1,79,8,1,5,1,81,8,1,10,1,12,1,84,9,1,1,
  	2,5,2,87,8,2,10,2,12,2,90,9,2,1,2,1,2,3,2,94,8,2,4,2,96,8,2,11,2,12,2,
  	97,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,118,8,3,1,4,4,4,121,8,4,11,4,12,4,122,1,5,3,5,126,8,5,1,5,1,
  	5,1,5,5,5,131,8,5,10,5,12,5,134,9,5,1,5,3,5,137,8,5,1,5,3,5,140,8,5,1,
  	6,1,6,1,6,1,6,1,7,1,7,1,7,3,7,149,8,7,1,7,1,7,5,7,153,8,7,10,7,12,7,156,
  	9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,168,8,8,10,8,12,8,171,
  	9,8,1,8,3,8,174,8,8,1,8,3,8,177,8,8,1,9,1,9,1,9,3,9,182,8,9,1,9,1,9,1,
  	9,3,9,187,8,9,1,9,1,9,5,9,191,8,9,10,9,12,9,194,9,9,1,9,1,9,1,10,1,10,
  	1,10,3,10,201,8,10,1,10,1,10,5,10,205,8,10,10,10,12,10,208,9,10,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,12,3,12,217,8,12,1,12,1,12,1,12,3,12,222,8,
  	12,1,13,1,13,1,13,3,13,227,8,13,1,13,1,13,1,13,1,13,1,13,3,13,234,8,13,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,3,15,244,8,15,1,15,3,15,247,8,
  	15,1,16,1,16,1,16,3,16,252,8,16,1,16,3,16,255,8,16,1,16,3,16,258,8,16,
  	3,16,260,8,16,1,17,3,17,263,8,17,1,17,1,17,1,17,3,17,268,8,17,1,17,3,
  	17,271,8,17,1,17,3,17,274,8,17,1,17,3,17,277,8,17,1,17,1,17,5,17,281,
  	8,17,10,17,12,17,284,9,17,1,17,3,17,287,8,17,1,17,5,17,290,8,17,10,17,
  	12,17,293,9,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,3,19,
  	305,8,19,1,20,1,20,1,20,5,20,310,8,20,10,20,12,20,313,9,20,1,20,1,20,
  	3,20,317,8,20,1,20,1,20,4,20,321,8,20,11,20,12,20,322,1,20,1,20,3,20,
  	327,8,20,1,20,1,20,5,20,331,8,20,10,20,12,20,334,9,20,1,20,5,20,337,8,
  	20,10,20,12,20,340,9,20,1,20,1,20,1,21,1,21,1,21,1,21,3,21,348,8,21,1,
  	21,1,21,1,21,3,21,353,8,21,1,21,1,21,5,21,357,8,21,10,21,12,21,360,9,
  	21,1,21,1,21,1,22,3,22,365,8,22,1,22,1,22,1,22,1,22,3,22,371,8,22,1,22,
  	1,22,1,22,1,22,1,22,3,22,378,8,22,1,22,1,22,1,22,1,22,5,22,384,8,22,10,
  	22,12,22,387,9,22,1,22,3,22,390,8,22,1,23,1,23,1,23,1,23,1,23,1,24,1,
  	24,1,24,1,24,1,24,1,25,1,25,1,25,3,25,405,8,25,1,25,1,25,5,25,409,8,25,
  	10,25,12,25,412,9,25,1,25,3,25,415,8,25,1,25,1,25,5,25,419,8,25,10,25,
  	12,25,422,9,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,442,8,26,1,26,1,26,1,26,3,26,
  	447,8,26,1,26,3,26,450,8,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,500,8,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,508,8,26,1,26,1,26,3,26,512,8,26,
  	1,26,1,26,1,26,1,26,3,26,518,8,26,1,26,1,26,3,26,522,8,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,3,26,530,8,26,1,26,1,26,3,26,534,8,26,1,26,1,26,1,26,
  	1,26,3,26,540,8,26,1,26,1,26,3,26,544,8,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,5,26,600,8,26,10,26,12,26,603,9,26,1,
  	27,1,27,1,28,1,28,1,29,1,29,1,29,3,29,612,8,29,1,30,3,30,615,8,30,1,30,
  	1,30,1,31,1,31,1,31,3,31,622,8,31,1,31,3,31,625,8,31,1,32,1,32,1,32,0,
  	1,52,33,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,0,5,1,1,62,62,2,0,62,62,67,67,1,0,56,
  	59,2,0,56,59,99,99,1,0,81,82,745,0,66,1,0,0,0,2,82,1,0,0,0,4,95,1,0,0,
  	0,6,117,1,0,0,0,8,120,1,0,0,0,10,125,1,0,0,0,12,141,1,0,0,0,14,145,1,
  	0,0,0,16,159,1,0,0,0,18,178,1,0,0,0,20,197,1,0,0,0,22,211,1,0,0,0,24,
  	213,1,0,0,0,26,223,1,0,0,0,28,238,1,0,0,0,30,241,1,0,0,0,32,248,1,0,0,
  	0,34,262,1,0,0,0,36,297,1,0,0,0,38,302,1,0,0,0,40,306,1,0,0,0,42,343,
  	1,0,0,0,44,364,1,0,0,0,46,391,1,0,0,0,48,396,1,0,0,0,50,401,1,0,0,0,52,
  	543,1,0,0,0,54,604,1,0,0,0,56,606,1,0,0,0,58,611,1,0,0,0,60,614,1,0,0,
  	0,62,624,1,0,0,0,64,626,1,0,0,0,66,67,3,2,1,0,67,68,5,0,0,1,68,1,1,0,
  	0,0,69,71,3,8,4,0,70,69,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,
  	0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,78,3,6,3,0,76,79,3,8,4,0,77,79,5,0,
  	0,1,78,76,1,0,0,0,78,77,1,0,0,0,78,79,1,0,0,0,79,81,1,0,0,0,80,72,1,0,
  	0,0,81,84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,3,1,0,0,0,84,82,1,0,
  	0,0,85,87,5,62,0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,
  	0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,93,3,6,3,0,92,94,7,0,0,0,93,92,1,
  	0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,88,1,0,0,0,96,97,1,0,0,0,97,95,1,
  	0,0,0,97,98,1,0,0,0,98,5,1,0,0,0,99,118,5,1,0,0,100,118,3,10,5,0,101,
  	118,3,14,7,0,102,118,3,16,8,0,103,118,3,18,9,0,104,118,3,22,11,0,105,
  	118,3,24,12,0,106,118,3,26,13,0,107,118,3,28,14,0,108,118,3,34,17,0,109,
  	118,3,32,16,0,110,118,3,36,18,0,111,118,3,38,19,0,112,118,3,40,20,0,113,
  	118,3,42,21,0,114,118,3,44,22,0,115,118,3,46,23,0,116,118,3,48,24,0,117,
  	99,1,0,0,0,117,100,1,0,0,0,117,101,1,0,0,0,117,102,1,0,0,0,117,103,1,
  	0,0,0,117,104,1,0,0,0,117,105,1,0,0,0,117,106,1,0,0,0,117,107,1,0,0,0,
  	117,108,1,0,0,0,117,109,1,0,0,0,117,110,1,0,0,0,117,111,1,0,0,0,117,112,
  	1,0,0,0,117,113,1,0,0,0,117,114,1,0,0,0,117,115,1,0,0,0,117,116,1,0,0,
  	0,118,7,1,0,0,0,119,121,7,1,0,0,120,119,1,0,0,0,121,122,1,0,0,0,122,120,
  	1,0,0,0,122,123,1,0,0,0,123,9,1,0,0,0,124,126,5,37,0,0,125,124,1,0,0,
  	0,125,126,1,0,0,0,126,127,1,0,0,0,127,132,3,12,6,0,128,129,5,65,0,0,129,
  	131,3,12,6,0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,
  	1,0,0,0,133,139,1,0,0,0,134,132,1,0,0,0,135,137,5,12,0,0,136,135,1,0,
  	0,0,136,137,1,0,0,0,137,138,1,0,0,0,138,140,3,54,27,0,139,136,1,0,0,0,
  	139,140,1,0,0,0,140,11,1,0,0,0,141,142,3,50,25,0,142,143,5,74,0,0,143,
  	144,3,52,26,0,144,13,1,0,0,0,145,146,5,99,0,0,146,148,5,70,0,0,147,149,
  	3,52,26,0,148,147,1,0,0,0,148,149,1,0,0,0,149,154,1,0,0,0,150,151,5,65,
  	0,0,151,153,3,52,26,0,152,150,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,
  	154,155,1,0,0,0,155,157,1,0,0,0,156,154,1,0,0,0,157,158,5,71,0,0,158,
  	15,1,0,0,0,159,160,5,2,0,0,160,161,5,99,0,0,161,162,5,74,0,0,162,169,
  	3,58,29,0,163,164,5,65,0,0,164,165,5,99,0,0,165,166,5,74,0,0,166,168,
  	3,58,29,0,167,163,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,
  	0,0,170,176,1,0,0,0,171,169,1,0,0,0,172,174,5,12,0,0,173,172,1,0,0,0,
  	173,174,1,0,0,0,174,175,1,0,0,0,175,177,3,54,27,0,176,173,1,0,0,0,176,
  	177,1,0,0,0,177,17,1,0,0,0,178,179,5,4,0,0,179,181,5,99,0,0,180,182,5,
  	12,0,0,181,180,1,0,0,0,181,182,1,0,0,0,182,183,1,0,0,0,183,184,3,54,27,
  	0,184,186,5,72,0,0,185,187,3,52,26,0,186,185,1,0,0,0,186,187,1,0,0,0,
  	187,192,1,0,0,0,188,189,5,65,0,0,189,191,3,52,26,0,190,188,1,0,0,0,191,
  	194,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,195,1,0,0,0,194,192,1,
  	0,0,0,195,196,5,73,0,0,196,19,1,0,0,0,197,198,5,99,0,0,198,200,5,70,0,
  	0,199,201,3,52,26,0,200,199,1,0,0,0,200,201,1,0,0,0,201,206,1,0,0,0,202,
  	203,5,65,0,0,203,205,3,52,26,0,204,202,1,0,0,0,205,208,1,0,0,0,206,204,
  	1,0,0,0,206,207,1,0,0,0,207,209,1,0,0,0,208,206,1,0,0,0,209,210,5,71,
  	0,0,210,21,1,0,0,0,211,212,5,6,0,0,212,23,1,0,0,0,213,214,5,10,0,0,214,
  	216,3,52,26,0,215,217,5,18,0,0,216,215,1,0,0,0,216,217,1,0,0,0,217,218,
  	1,0,0,0,218,221,3,4,2,0,219,220,5,5,0,0,220,222,3,4,2,0,221,219,1,0,0,
  	0,221,222,1,0,0,0,222,25,1,0,0,0,223,224,5,10,0,0,224,226,3,52,26,0,225,
  	227,5,18,0,0,226,225,1,0,0,0,226,227,1,0,0,0,227,228,1,0,0,0,228,229,
  	5,67,0,0,229,233,3,2,1,0,230,231,5,5,0,0,231,232,5,67,0,0,232,234,3,2,
  	1,0,233,230,1,0,0,0,233,234,1,0,0,0,234,235,1,0,0,0,235,236,5,67,0,0,
  	236,237,5,8,0,0,237,27,1,0,0,0,238,239,5,11,0,0,239,240,5,99,0,0,240,
  	29,1,0,0,0,241,246,5,99,0,0,242,244,5,12,0,0,243,242,1,0,0,0,243,244,
  	1,0,0,0,244,245,1,0,0,0,245,247,3,54,27,0,246,243,1,0,0,0,246,247,1,0,
  	0,0,247,31,1,0,0,0,248,259,5,13,0,0,249,254,3,52,26,0,250,252,5,21,0,
  	0,251,250,1,0,0,0,251,252,1,0,0,0,252,253,1,0,0,0,253,255,3,52,26,0,254,
  	251,1,0,0,0,254,255,1,0,0,0,255,257,1,0,0,0,256,258,5,63,0,0,257,256,
  	1,0,0,0,257,258,1,0,0,0,258,260,1,0,0,0,259,249,1,0,0,0,259,260,1,0,0,
  	0,260,33,1,0,0,0,261,263,5,14,0,0,262,261,1,0,0,0,262,263,1,0,0,0,263,
  	264,1,0,0,0,264,265,5,3,0,0,265,270,5,99,0,0,266,268,5,12,0,0,267,266,
  	1,0,0,0,267,268,1,0,0,0,268,269,1,0,0,0,269,271,3,54,27,0,270,267,1,0,
  	0,0,270,271,1,0,0,0,271,273,1,0,0,0,272,274,5,70,0,0,273,272,1,0,0,0,
  	273,274,1,0,0,0,274,276,1,0,0,0,275,277,3,30,15,0,276,275,1,0,0,0,276,
  	277,1,0,0,0,277,282,1,0,0,0,278,279,5,65,0,0,279,281,3,30,15,0,280,278,
  	1,0,0,0,281,284,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,286,1,0,0,
  	0,284,282,1,0,0,0,285,287,5,71,0,0,286,285,1,0,0,0,286,287,1,0,0,0,287,
  	291,1,0,0,0,288,290,3,8,4,0,289,288,1,0,0,0,290,293,1,0,0,0,291,289,1,
  	0,0,0,291,292,1,0,0,0,292,294,1,0,0,0,293,291,1,0,0,0,294,295,3,2,1,0,
  	295,296,5,7,0,0,296,35,1,0,0,0,297,298,5,16,0,0,298,299,3,2,1,0,299,300,
  	5,20,0,0,300,301,3,52,26,0,301,37,1,0,0,0,302,304,5,17,0,0,303,305,3,
  	52,26,0,304,303,1,0,0,0,304,305,1,0,0,0,305,39,1,0,0,0,306,307,5,23,0,
  	0,307,311,5,99,0,0,308,310,3,8,4,0,309,308,1,0,0,0,310,313,1,0,0,0,311,
  	309,1,0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,311,1,0,0,0,314,316,5,
  	99,0,0,315,317,5,12,0,0,316,315,1,0,0,0,316,317,1,0,0,0,317,318,1,0,0,
  	0,318,332,3,56,28,0,319,321,3,8,4,0,320,319,1,0,0,0,321,322,1,0,0,0,322,
  	320,1,0,0,0,322,323,1,0,0,0,323,324,1,0,0,0,324,326,5,99,0,0,325,327,
  	5,12,0,0,326,325,1,0,0,0,326,327,1,0,0,0,327,328,1,0,0,0,328,329,3,56,
  	28,0,329,331,1,0,0,0,330,320,1,0,0,0,331,334,1,0,0,0,332,330,1,0,0,0,
  	332,333,1,0,0,0,333,338,1,0,0,0,334,332,1,0,0,0,335,337,3,8,4,0,336,335,
  	1,0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,341,1,0,0,
  	0,340,338,1,0,0,0,341,342,5,25,0,0,342,41,1,0,0,0,343,344,5,4,0,0,344,
  	345,5,24,0,0,345,347,5,99,0,0,346,348,5,12,0,0,347,346,1,0,0,0,347,348,
  	1,0,0,0,348,349,1,0,0,0,349,350,5,99,0,0,350,352,5,72,0,0,351,353,3,52,
  	26,0,352,351,1,0,0,0,352,353,1,0,0,0,353,358,1,0,0,0,354,355,5,65,0,0,
  	355,357,3,52,26,0,356,354,1,0,0,0,357,360,1,0,0,0,358,356,1,0,0,0,358,
  	359,1,0,0,0,359,361,1,0,0,0,360,358,1,0,0,0,361,362,5,73,0,0,362,43,1,
  	0,0,0,363,365,5,37,0,0,364,363,1,0,0,0,364,365,1,0,0,0,365,366,1,0,0,
  	0,366,367,5,99,0,0,367,368,5,74,0,0,368,370,5,24,0,0,369,371,5,12,0,0,
  	370,369,1,0,0,0,370,371,1,0,0,0,371,372,1,0,0,0,372,389,5,99,0,0,373,
  	377,5,70,0,0,374,375,5,99,0,0,375,376,5,74,0,0,376,378,3,52,26,0,377,
  	374,1,0,0,0,377,378,1,0,0,0,378,385,1,0,0,0,379,380,5,65,0,0,380,381,
  	5,99,0,0,381,382,5,74,0,0,382,384,3,52,26,0,383,379,1,0,0,0,384,387,1,
  	0,0,0,385,383,1,0,0,0,385,386,1,0,0,0,386,388,1,0,0,0,387,385,1,0,0,0,
  	388,390,5,71,0,0,389,373,1,0,0,0,389,390,1,0,0,0,390,45,1,0,0,0,391,392,
  	5,19,0,0,392,393,3,50,25,0,393,394,5,65,0,0,394,395,3,50,25,0,395,47,
  	1,0,0,0,396,397,5,22,0,0,397,398,3,52,26,0,398,399,3,2,1,0,399,400,5,
  	9,0,0,400,49,1,0,0,0,401,414,5,99,0,0,402,404,5,72,0,0,403,405,3,52,26,
  	0,404,403,1,0,0,0,404,405,1,0,0,0,405,410,1,0,0,0,406,407,5,65,0,0,407,
  	409,3,52,26,0,408,406,1,0,0,0,409,412,1,0,0,0,410,408,1,0,0,0,410,411,
  	1,0,0,0,411,413,1,0,0,0,412,410,1,0,0,0,413,415,5,73,0,0,414,402,1,0,
  	0,0,414,415,1,0,0,0,415,420,1,0,0,0,416,417,5,64,0,0,417,419,5,99,0,0,
  	418,416,1,0,0,0,419,422,1,0,0,0,420,418,1,0,0,0,420,421,1,0,0,0,421,51,
  	1,0,0,0,422,420,1,0,0,0,423,424,6,26,-1,0,424,425,5,70,0,0,425,426,3,
  	52,26,0,426,427,5,71,0,0,427,544,1,0,0,0,428,544,3,58,29,0,429,544,3,
  	50,25,0,430,544,3,20,10,0,431,432,5,82,0,0,432,544,3,52,26,54,433,434,
  	5,81,0,0,434,544,3,52,26,53,435,436,5,57,0,0,436,544,3,52,26,52,437,438,
  	5,58,0,0,438,544,3,52,26,51,439,441,5,59,0,0,440,442,5,70,0,0,441,440,
  	1,0,0,0,441,442,1,0,0,0,442,443,1,0,0,0,443,446,3,52,26,0,444,445,5,21,
  	0,0,445,447,3,52,26,0,446,444,1,0,0,0,446,447,1,0,0,0,447,449,1,0,0,0,
  	448,450,5,71,0,0,449,448,1,0,0,0,449,450,1,0,0,0,450,544,1,0,0,0,451,
  	452,5,29,0,0,452,544,3,52,26,49,453,454,5,89,0,0,454,544,3,52,26,48,455,
  	456,5,90,0,0,456,544,3,52,26,47,457,544,5,48,0,0,458,544,5,47,0,0,459,
  	544,5,26,0,0,460,544,5,27,0,0,461,544,5,28,0,0,462,544,5,40,0,0,463,464,
  	5,34,0,0,464,544,3,52,26,40,465,466,5,41,0,0,466,544,3,52,26,39,467,468,
  	5,43,0,0,468,544,3,52,26,38,469,470,5,30,0,0,470,544,3,52,26,37,471,472,
  	5,31,0,0,472,544,3,52,26,36,473,474,5,32,0,0,474,544,3,52,26,35,475,476,
  	5,33,0,0,476,544,3,52,26,34,477,478,5,35,0,0,478,544,3,52,26,33,479,480,
  	5,36,0,0,480,544,3,52,26,32,481,482,5,42,0,0,482,544,3,52,26,31,483,484,
  	5,38,0,0,484,544,3,52,26,30,485,486,5,39,0,0,486,544,3,52,26,29,487,488,
  	5,44,0,0,488,544,3,52,26,28,489,490,5,45,0,0,490,544,3,52,26,27,491,492,
  	5,46,0,0,492,544,3,52,26,26,493,494,5,49,0,0,494,544,3,52,26,25,495,496,
  	5,50,0,0,496,544,3,52,26,24,497,499,5,51,0,0,498,500,5,70,0,0,499,498,
  	1,0,0,0,499,500,1,0,0,0,500,501,1,0,0,0,501,502,3,52,26,0,502,503,5,65,
  	0,0,503,504,3,52,26,0,504,505,5,65,0,0,505,507,3,52,26,0,506,508,5,71,
  	0,0,507,506,1,0,0,0,507,508,1,0,0,0,508,544,1,0,0,0,509,511,5,52,0,0,
  	510,512,5,70,0,0,511,510,1,0,0,0,511,512,1,0,0,0,512,513,1,0,0,0,513,
  	514,3,52,26,0,514,515,5,65,0,0,515,517,3,52,26,0,516,518,5,71,0,0,517,
  	516,1,0,0,0,517,518,1,0,0,0,518,544,1,0,0,0,519,521,5,53,0,0,520,522,
  	5,70,0,0,521,520,1,0,0,0,521,522,1,0,0,0,522,523,1,0,0,0,523,524,3,52,
  	26,0,524,525,5,65,0,0,525,526,3,52,26,0,526,527,5,65,0,0,527,529,3,52,
  	26,0,528,530,5,71,0,0,529,528,1,0,0,0,529,530,1,0,0,0,530,544,1,0,0,0,
  	531,533,5,54,0,0,532,534,5,70,0,0,533,532,1,0,0,0,533,534,1,0,0,0,534,
  	535,1,0,0,0,535,536,3,52,26,0,536,537,5,65,0,0,537,539,3,52,26,0,538,
  	540,5,71,0,0,539,538,1,0,0,0,539,540,1,0,0,0,540,544,1,0,0,0,541,542,
  	5,55,0,0,542,544,3,52,26,19,543,423,1,0,0,0,543,428,1,0,0,0,543,429,1,
  	0,0,0,543,430,1,0,0,0,543,431,1,0,0,0,543,433,1,0,0,0,543,435,1,0,0,0,
  	543,437,1,0,0,0,543,439,1,0,0,0,543,451,1,0,0,0,543,453,1,0,0,0,543,455,
  	1,0,0,0,543,457,1,0,0,0,543,458,1,0,0,0,543,459,1,0,0,0,543,460,1,0,0,
  	0,543,461,1,0,0,0,543,462,1,0,0,0,543,463,1,0,0,0,543,465,1,0,0,0,543,
  	467,1,0,0,0,543,469,1,0,0,0,543,471,1,0,0,0,543,473,1,0,0,0,543,475,1,
  	0,0,0,543,477,1,0,0,0,543,479,1,0,0,0,543,481,1,0,0,0,543,483,1,0,0,0,
  	543,485,1,0,0,0,543,487,1,0,0,0,543,489,1,0,0,0,543,491,1,0,0,0,543,493,
  	1,0,0,0,543,495,1,0,0,0,543,497,1,0,0,0,543,509,1,0,0,0,543,519,1,0,0,
  	0,543,531,1,0,0,0,543,541,1,0,0,0,544,601,1,0,0,0,545,546,10,18,0,0,546,
  	547,5,80,0,0,547,600,3,52,26,18,548,549,10,17,0,0,549,550,5,84,0,0,550,
  	600,3,52,26,18,551,552,10,16,0,0,552,553,5,83,0,0,553,600,3,52,26,17,
  	554,555,10,15,0,0,555,556,5,88,0,0,556,600,3,52,26,16,557,558,10,14,0,
  	0,558,559,5,87,0,0,559,600,3,52,26,15,560,561,10,13,0,0,561,562,5,81,
  	0,0,562,600,3,52,26,14,563,564,10,12,0,0,564,565,5,82,0,0,565,600,3,52,
  	26,13,566,567,10,11,0,0,567,568,5,85,0,0,568,600,3,52,26,12,569,570,10,
  	10,0,0,570,571,5,86,0,0,571,600,3,52,26,11,572,573,10,9,0,0,573,574,5,
  	74,0,0,574,600,3,52,26,10,575,576,10,8,0,0,576,577,5,75,0,0,577,600,3,
  	52,26,9,578,579,10,7,0,0,579,580,5,76,0,0,580,600,3,52,26,8,581,582,10,
  	6,0,0,582,583,5,77,0,0,583,600,3,52,26,7,584,585,10,5,0,0,585,586,5,78,
  	0,0,586,600,3,52,26,6,587,588,10,4,0,0,588,589,5,79,0,0,589,600,3,52,
  	26,5,590,591,10,3,0,0,591,592,5,91,0,0,592,600,3,52,26,4,593,594,10,2,
  	0,0,594,595,5,92,0,0,595,600,3,52,26,3,596,597,10,1,0,0,597,598,5,93,
  	0,0,598,600,3,52,26,2,599,545,1,0,0,0,599,548,1,0,0,0,599,551,1,0,0,0,
  	599,554,1,0,0,0,599,557,1,0,0,0,599,560,1,0,0,0,599,563,1,0,0,0,599,566,
  	1,0,0,0,599,569,1,0,0,0,599,572,1,0,0,0,599,575,1,0,0,0,599,578,1,0,0,
  	0,599,581,1,0,0,0,599,584,1,0,0,0,599,587,1,0,0,0,599,590,1,0,0,0,599,
  	593,1,0,0,0,599,596,1,0,0,0,600,603,1,0,0,0,601,599,1,0,0,0,601,602,1,
  	0,0,0,602,53,1,0,0,0,603,601,1,0,0,0,604,605,7,2,0,0,605,55,1,0,0,0,606,
  	607,7,3,0,0,607,57,1,0,0,0,608,612,3,60,30,0,609,612,3,62,31,0,610,612,
  	3,64,32,0,611,608,1,0,0,0,611,609,1,0,0,0,611,610,1,0,0,0,612,59,1,0,
  	0,0,613,615,7,4,0,0,614,613,1,0,0,0,614,615,1,0,0,0,615,616,1,0,0,0,616,
  	617,5,97,0,0,617,61,1,0,0,0,618,625,5,95,0,0,619,625,5,96,0,0,620,622,
  	7,4,0,0,621,620,1,0,0,0,621,622,1,0,0,0,622,623,1,0,0,0,623,625,5,98,
  	0,0,624,618,1,0,0,0,624,619,1,0,0,0,624,621,1,0,0,0,625,63,1,0,0,0,626,
  	627,5,94,0,0,627,65,1,0,0,0,77,72,78,82,88,93,97,117,122,125,132,136,
  	139,148,154,169,173,176,181,186,192,200,206,216,221,226,233,243,246,251,
  	254,257,259,262,267,270,273,276,282,286,291,304,311,316,322,326,332,338,
  	347,352,358,364,370,377,385,389,404,410,414,420,441,446,449,499,507,511,
  	517,521,529,533,539,543,599,601,611,614,621,624
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
    setState(66);
    statements();
    setState(67);
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
    setState(82);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(72);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE) {
          setState(69);
          separator();
          setState(74);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(75);
        statement();
        setState(78);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(76);
          separator();
          break;
        }

        case 2: {
          setState(77);
          match(DaricParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(84);
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
    setState(95); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(88);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(85);
                match(DaricParser::COLON);
                setState(90);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(91);
              statement();
              setState(93);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(92);
                _la = _input->LA(1);
                if (!(_la == DaricParser::EOF

                || _la == DaricParser::COLON)) {
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
      setState(97); 
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

DaricParser::ConstContext* DaricParser::StatementContext::const_() {
  return getRuleContext<DaricParser::ConstContext>(0);
}

DaricParser::DimContext* DaricParser::StatementContext::dim() {
  return getRuleContext<DaricParser::DimContext>(0);
}

DaricParser::EndContext* DaricParser::StatementContext::end() {
  return getRuleContext<DaricParser::EndContext>(0);
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
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      match(DaricParser::COMMENT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(101);
      call();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(102);
      const_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(103);
      dim();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(104);
      end();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(105);
      if_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(106);
      ifml();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(107);
      module();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(108);
      procedure();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(109);
      print();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(110);
      repeat();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(111);
      return_();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(112);
      struct_();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(113);
      structDim();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(114);
      structInstance();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(115);
      swap();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(116);
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
    setState(120); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(119);
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
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(124);
      match(DaricParser::LET);
    }
    setState(127);
    assignment();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(128);
      match(DaricParser::COMMA);
      setState(129);
      assignment();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863910568923136) != 0) {
      setState(136);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(135);
        match(DaricParser::OF);
      }
      setState(138);
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
    setState(141);
    variable();
    setState(142);
    match(DaricParser::EQ);
    setState(143);
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
    setState(145);
    match(DaricParser::IDENTIFIER);
    setState(146);
    match(DaricParser::LPAREN);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863773062856704) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 1058543617) != 0) {
      setState(147);
      expression(0);
    }
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(150);
      match(DaricParser::COMMA);
      setState(151);
      expression(0);
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    match(DaricParser::RPAREN);
   
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
    setState(159);
    match(DaricParser::CONST);
    setState(160);
    match(DaricParser::IDENTIFIER);
    setState(161);
    match(DaricParser::EQ);
    setState(162);
    literal();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(163);
      match(DaricParser::COMMA);
      setState(164);
      match(DaricParser::IDENTIFIER);
      setState(165);
      match(DaricParser::EQ);
      setState(166);
      literal();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863910568923136) != 0) {
      setState(173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(172);
        match(DaricParser::OF);
      }
      setState(175);
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
  enterRule(_localctx, 18, DaricParser::RuleDim);
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
    setState(178);
    match(DaricParser::DIM);
    setState(179);
    match(DaricParser::IDENTIFIER);
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(180);
      match(DaricParser::OF);
    }
    setState(183);
    type();
    setState(184);
    match(DaricParser::SOPEN);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863773062856704) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 1058543617) != 0) {
      setState(185);
      expression(0);
    }
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(188);
      match(DaricParser::COMMA);
      setState(189);
      expression(0);
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(195);
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
  enterRule(_localctx, 20, DaricParser::RuleExprcall);
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
    setState(197);
    match(DaricParser::IDENTIFIER);
    setState(198);
    match(DaricParser::LPAREN);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863773062856704) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 1058543617) != 0) {
      setState(199);
      expression(0);
    }
    setState(206);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(202);
      match(DaricParser::COMMA);
      setState(203);
      expression(0);
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(209);
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
  enterRule(_localctx, 22, DaricParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(DaricParser::END);
   
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
  enterRule(_localctx, 24, DaricParser::RuleIf);
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
    match(DaricParser::IF);
    setState(214);
    expression(0);
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(215);
      match(DaricParser::THEN);
    }
    setState(218);
    statementsl();
    setState(221);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(219);
      match(DaricParser::ELSE);
      setState(220);
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
  enterRule(_localctx, 26, DaricParser::RuleIfml);
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
    setState(223);
    match(DaricParser::IF);
    setState(224);
    expression(0);
    setState(226);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(225);
      match(DaricParser::THEN);
    }
    setState(228);
    match(DaricParser::NEWLINE);
    setState(229);
    statements();
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(230);
      match(DaricParser::ELSE);
      setState(231);
      match(DaricParser::NEWLINE);
      setState(232);
      statements();
    }
    setState(235);
    match(DaricParser::NEWLINE);
    setState(236);
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
  enterRule(_localctx, 28, DaricParser::RuleModule);

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
    match(DaricParser::MODULE);
    setState(239);
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
  enterRule(_localctx, 30, DaricParser::RuleParameter);
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
    match(DaricParser::IDENTIFIER);
    setState(246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863910568923136) != 0) {
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(242);
        match(DaricParser::OF);
      }
      setState(245);
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
  enterRule(_localctx, 32, DaricParser::RulePrint);
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
    match(DaricParser::PRINT);
    setState(259);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(249);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(254);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(251);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(250);
          match(DaricParser::WITH);
        }
        setState(253);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(257);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(256);
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
  enterRule(_localctx, 34, DaricParser::RuleProcedure);
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
    setState(262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PRIVATE) {
      setState(261);
      match(DaricParser::PRIVATE);
    }
    setState(264);
    match(DaricParser::DEF);
    setState(265);
    match(DaricParser::IDENTIFIER);
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863910568923136) != 0) {
      setState(267);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(266);
        match(DaricParser::OF);
      }
      setState(269);
      type();
    }
    setState(273);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(272);
      match(DaricParser::LPAREN);
    }
    setState(276);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(275);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(278);
      match(DaricParser::COMMA);
      setState(279);
      parameter();
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(286);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(285);
      match(DaricParser::RPAREN);
    }
    setState(291);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(288);
        separator(); 
      }
      setState(293);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
    setState(294);
    statements();
    setState(295);
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
  enterRule(_localctx, 36, DaricParser::RuleRepeat);

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
    match(DaricParser::REPEAT);
    setState(298);
    statements();
    setState(299);
    match(DaricParser::UNTIL);
    setState(300);
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
  enterRule(_localctx, 38, DaricParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(DaricParser::RETURN);
    setState(304);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(303);
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
  enterRule(_localctx, 40, DaricParser::RuleStruct);
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
    match(DaricParser::DEFRECORD);
    setState(307);
    match(DaricParser::IDENTIFIER);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(308);
      separator();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    match(DaricParser::IDENTIFIER);
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(315);
      match(DaricParser::OF);
    }
    setState(318);
    typeOrStruct();
    setState(332);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(320); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(319);
          separator();
          setState(322); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(324);
        match(DaricParser::IDENTIFIER);
        setState(326);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(325);
          match(DaricParser::OF);
        }
        setState(328);
        typeOrStruct(); 
      }
      setState(334);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(335);
      separator();
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(341);
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
  enterRule(_localctx, 42, DaricParser::RuleStructDim);
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
    setState(343);
    match(DaricParser::DIM);
    setState(344);
    match(DaricParser::RECORD);
    setState(345);
    match(DaricParser::IDENTIFIER);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(346);
      match(DaricParser::OF);
    }
    setState(349);
    match(DaricParser::IDENTIFIER);
    setState(350);
    match(DaricParser::SOPEN);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863773062856704) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 1058543617) != 0) {
      setState(351);
      expression(0);
    }
    setState(358);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(354);
      match(DaricParser::COMMA);
      setState(355);
      expression(0);
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(361);
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
  enterRule(_localctx, 44, DaricParser::RuleStructInstance);
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
    if (_la == DaricParser::LET) {
      setState(363);
      match(DaricParser::LET);
    }
    setState(366);
    match(DaricParser::IDENTIFIER);
    setState(367);
    match(DaricParser::EQ);
    setState(368);
    match(DaricParser::RECORD);
    setState(370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(369);
      match(DaricParser::OF);
    }
    setState(372);
    match(DaricParser::IDENTIFIER);
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(373);
      match(DaricParser::LPAREN);
      setState(377);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(374);
        match(DaricParser::IDENTIFIER);
        setState(375);
        match(DaricParser::EQ);
        setState(376);
        expression(0);
      }
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(379);
        match(DaricParser::COMMA);
        setState(380);
        match(DaricParser::IDENTIFIER);
        setState(381);
        match(DaricParser::EQ);
        setState(382);
        expression(0);
        setState(387);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(388);
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
  enterRule(_localctx, 46, DaricParser::RuleSwap);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(DaricParser::SWAP);
    setState(392);
    variable();
    setState(393);
    match(DaricParser::COMMA);
    setState(394);
    variable();
   
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
  enterRule(_localctx, 48, DaricParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    match(DaricParser::WHILE);
    setState(397);
    expression(0);
    setState(398);
    statements();
    setState(399);
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
  enterRule(_localctx, 50, DaricParser::RuleVariable);
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
    setState(401);
    match(DaricParser::IDENTIFIER);
    setState(414);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(402);
      match(DaricParser::SOPEN);
      setState(404);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1080863773062856704) != 0 || (((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & 1058543617) != 0) {
        setState(403);
        expression(0);
      }
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(406);
        match(DaricParser::COMMA);
        setState(407);
        expression(0);
        setState(412);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(413);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(420);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(416);
        match(DaricParser::DOT);
        setState(417);
        match(DaricParser::IDENTIFIER); 
      }
      setState(422);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
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
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, DaricParser::RuleExpression, precedence);

    

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
    setState(543);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(424);
      match(DaricParser::LPAREN);
      setState(425);
      expression(0);
      setState(426);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(428);
      literal();
      break;
    }

    case 3: {
      setState(429);
      variable();
      break;
    }

    case 4: {
      setState(430);
      exprcall();
      break;
    }

    case 5: {
      setState(431);
      match(DaricParser::MINUS);
      setState(432);
      expression(54);
      break;
    }

    case 6: {
      setState(433);
      match(DaricParser::PLUS);
      setState(434);
      expression(53);
      break;
    }

    case 7: {
      setState(435);
      match(DaricParser::INT);
      setState(436);
      expression(52);
      break;
    }

    case 8: {
      setState(437);
      match(DaricParser::FLOAT);
      setState(438);
      expression(51);
      break;
    }

    case 9: {
      setState(439);
      match(DaricParser::STRING);
      setState(441);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
      case 1: {
        setState(440);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(443);
      expression(0);
      setState(446);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
      case 1: {
        setState(444);
        match(DaricParser::WITH);
        setState(445);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(449);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
      case 1: {
        setState(448);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      setState(451);
      match(DaricParser::ABS);
      setState(452);
      expression(49);
      break;
    }

    case 11: {
      setState(453);
      match(DaricParser::COMP);
      setState(454);
      expression(48);
      break;
    }

    case 12: {
      setState(455);
      match(DaricParser::NOT);
      setState(456);
      expression(47);
      break;
    }

    case 13: {
      setState(457);
      match(DaricParser::TRUE);
      break;
    }

    case 14: {
      setState(458);
      match(DaricParser::FALSE);
      break;
    }

    case 15: {
      setState(459);
      match(DaricParser::HPTIME);
      break;
    }

    case 16: {
      setState(460);
      match(DaricParser::TIME);
      break;
    }

    case 17: {
      setState(461);
      match(DaricParser::TIMES);
      break;
    }

    case 18: {
      setState(462);
      match(DaricParser::PI);
      break;
    }

    case 19: {
      setState(463);
      match(DaricParser::DEG);
      setState(464);
      expression(40);
      break;
    }

    case 20: {
      setState(465);
      match(DaricParser::RAD);
      setState(466);
      expression(39);
      break;
    }

    case 21: {
      setState(467);
      match(DaricParser::SGN);
      setState(468);
      expression(38);
      break;
    }

    case 22: {
      setState(469);
      match(DaricParser::ACS);
      setState(470);
      expression(37);
      break;
    }

    case 23: {
      setState(471);
      match(DaricParser::ASN);
      setState(472);
      expression(36);
      break;
    }

    case 24: {
      setState(473);
      match(DaricParser::ATN);
      setState(474);
      expression(35);
      break;
    }

    case 25: {
      setState(475);
      match(DaricParser::COS);
      setState(476);
      expression(34);
      break;
    }

    case 26: {
      setState(477);
      match(DaricParser::EXP);
      setState(478);
      expression(33);
      break;
    }

    case 27: {
      setState(479);
      match(DaricParser::FLOOR);
      setState(480);
      expression(32);
      break;
    }

    case 28: {
      setState(481);
      match(DaricParser::ROUND);
      setState(482);
      expression(31);
      break;
    }

    case 29: {
      setState(483);
      match(DaricParser::LN);
      setState(484);
      expression(30);
      break;
    }

    case 30: {
      setState(485);
      match(DaricParser::LOG);
      setState(486);
      expression(29);
      break;
    }

    case 31: {
      setState(487);
      match(DaricParser::SIN);
      setState(488);
      expression(28);
      break;
    }

    case 32: {
      setState(489);
      match(DaricParser::SQR);
      setState(490);
      expression(27);
      break;
    }

    case 33: {
      setState(491);
      match(DaricParser::TAN);
      setState(492);
      expression(26);
      break;
    }

    case 34: {
      setState(493);
      match(DaricParser::ASC);
      setState(494);
      expression(25);
      break;
    }

    case 35: {
      setState(495);
      match(DaricParser::CHRS);
      setState(496);
      expression(24);
      break;
    }

    case 36: {
      setState(497);
      match(DaricParser::INSTR);
      setState(499);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
      case 1: {
        setState(498);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(501);
      expression(0);
      setState(502);
      match(DaricParser::COMMA);
      setState(503);
      expression(0);
      setState(504);
      match(DaricParser::COMMA);
      setState(505);
      expression(0);
      setState(507);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
      case 1: {
        setState(506);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(509);
      match(DaricParser::LEFTS);
      setState(511);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
      case 1: {
        setState(510);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(513);
      expression(0);
      setState(514);
      match(DaricParser::COMMA);
      setState(515);
      expression(0);
      setState(517);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
      case 1: {
        setState(516);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(519);
      match(DaricParser::MIDS);
      setState(521);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
      case 1: {
        setState(520);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(523);
      expression(0);
      setState(524);
      match(DaricParser::COMMA);
      setState(525);
      expression(0);
      setState(526);
      match(DaricParser::COMMA);
      setState(527);
      expression(0);
      setState(529);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(528);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 39: {
      setState(531);
      match(DaricParser::RIGHTS);
      setState(533);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
      case 1: {
        setState(532);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(535);
      expression(0);
      setState(536);
      match(DaricParser::COMMA);
      setState(537);
      expression(0);
      setState(539);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
      case 1: {
        setState(538);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 40: {
      setState(541);
      match(DaricParser::LEN);
      setState(542);
      expression(19);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(601);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(599);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(545);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(546);
          match(DaricParser::HAT);
          setState(547);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(548);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(549);
          match(DaricParser::DIVIDE);
          setState(550);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(551);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(552);
          match(DaricParser::MULTIPLY);
          setState(553);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(554);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(555);
          match(DaricParser::DIV);
          setState(556);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(557);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(558);
          match(DaricParser::MOD);
          setState(559);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(560);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(561);
          match(DaricParser::PLUS);
          setState(562);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(563);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(564);
          match(DaricParser::MINUS);
          setState(565);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(566);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(567);
          match(DaricParser::SHL);
          setState(568);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(569);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(570);
          match(DaricParser::SHR);
          setState(571);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(572);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(573);
          match(DaricParser::EQ);
          setState(574);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(575);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(576);
          match(DaricParser::NE);
          setState(577);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(578);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(579);
          match(DaricParser::GT);
          setState(580);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(581);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(582);
          match(DaricParser::GE);
          setState(583);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(584);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(585);
          match(DaricParser::LT);
          setState(586);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(587);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(588);
          match(DaricParser::LE);
          setState(589);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(590);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(591);
          match(DaricParser::AND);
          setState(592);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(593);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(594);
          match(DaricParser::OR);
          setState(595);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(596);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(597);
          match(DaricParser::EOR);
          setState(598);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(603);
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
  enterRule(_localctx, 54, DaricParser::RuleType);
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
    setState(604);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1080863910568919040) != 0)) {
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
  enterRule(_localctx, 56, DaricParser::RuleTypeOrStruct);
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
    setState(606);
    _la = _input->LA(1);
    if (!((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 58, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(611);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(608);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(609);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(610);
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
  enterRule(_localctx, 60, DaricParser::RuleFloatLiteral);
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
    setState(614);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(613);
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
    setState(616);
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
  enterRule(_localctx, 62, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(624);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(618);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(619);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(621);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(620);
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
        setState(623);
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
  enterRule(_localctx, 64, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
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
    case 26: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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


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
      "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "FOR", "IF", "IMPORT", "INPUT", "LET", 
      "NEXT", "OF", "OPTION", "OTHERWISE", "PRINT", "QUIT", "READ", "RECORD", 
      "REF", "REM", "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", "STEP", 
      "SYS", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "ABS", 
      "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", "PI", 
      "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", "VECTOR", "LIST", "MAP", 
      "STACK", "QUEUE", "SET", "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", 
      "MID", "RIGHT", "LEN", "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", 
      "HASH", "COLON", "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", 
      "PERCENT", "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", 
      "NE", "GT", "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", 
      "DIVIDE", "SHL", "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", 
      "EOR", "STRINGLITERAL", "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", 
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
      "", "", "", "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", 
      "','", "'''", "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", 
      "'<>'", "'>'", "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", 
      "'/'", "'<<'", "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "BlockComment", "LineComment", "CASE", "CONST", "DATA", "DATALABEL", 
      "DEF", "DIM", "ELSE", "END", "FOR", "IF", "IMPORT", "INPUT", "LET", 
      "NEXT", "OF", "OPTION", "OTHERWISE", "PRINT", "QUIT", "READ", "RECORD", 
      "REF", "REM", "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", "STEP", 
      "SYS", "SWAP", "TO", "UNTIL", "WHEN", "WITH", "WHILE", "MAIN", "ABS", 
      "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", "LN", "LOG", "PI", 
      "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", "VECTOR", "LIST", "MAP", 
      "STACK", "QUEUE", "SET", "FALSE", "TRUE", "ASC", "CHR", "INSTR", "LEFT", 
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
  	4,0,116,1197,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
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
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,1,0,1,0,1,0,1,0,5,0,246,8,0,
  	10,0,12,0,249,9,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,3,1,258,8,1,1,1,5,1,261,
  	8,1,10,1,12,1,264,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,276,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,288,8,3,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,3,4,298,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,318,8,5,1,6,1,6,1,6,1,6,1,6,1,6,3,
  	6,326,8,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,334,8,7,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,3,8,344,8,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,352,8,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,3,10,360,8,10,1,11,1,11,1,11,1,11,3,11,366,8,11,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,380,8,12,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,392,8,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,3,14,400,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,3,15,410,8,15,1,16,1,16,1,16,1,16,3,16,416,8,16,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,430,8,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,3,18,450,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,3,19,462,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,472,8,
  	20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,482,8,21,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,496,8,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,508,8,23,1,24,1,24,1,
  	24,1,24,1,24,1,24,3,24,516,8,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,
  	25,1,25,1,25,1,25,1,25,3,25,530,8,25,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,546,8,26,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,560,8,27,1,28,1,28,1,
  	28,1,28,1,28,1,28,1,28,1,28,3,28,570,8,28,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,29,3,29,580,8,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,3,
  	30,590,8,30,1,31,1,31,1,31,1,31,1,31,1,31,3,31,598,8,31,1,32,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,3,32,609,8,32,1,33,1,33,1,33,1,33,3,33,
  	615,8,33,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,627,8,
  	34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,3,35,637,8,35,1,36,1,36,1,
  	36,1,36,1,36,1,36,1,36,1,36,3,36,647,8,36,1,37,1,37,1,37,1,37,1,37,1,
  	37,1,37,1,37,1,37,1,37,3,37,659,8,37,1,38,1,38,1,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,38,3,38,671,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,679,
  	8,39,1,40,1,40,1,40,1,40,1,40,1,40,3,40,687,8,40,1,41,1,41,1,41,1,41,
  	1,41,1,41,3,41,695,8,41,1,42,1,42,1,42,1,42,1,42,1,42,3,42,703,8,42,1,
  	43,1,43,1,43,1,43,1,43,1,43,3,43,711,8,43,1,44,1,44,1,44,1,44,1,44,1,
  	44,3,44,719,8,44,1,45,1,45,1,45,1,45,1,45,1,45,3,45,727,8,45,1,46,1,46,
  	1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,46,3,46,739,8,46,1,47,1,47,1,47,
  	1,47,3,47,745,8,47,1,48,1,48,1,48,1,48,1,48,1,48,3,48,753,8,48,1,49,1,
  	49,1,49,1,49,3,49,759,8,49,1,50,1,50,1,50,1,50,1,50,1,50,3,50,767,8,50,
  	1,51,1,51,1,51,1,51,1,51,1,51,1,51,1,51,1,51,1,51,3,51,779,8,51,1,52,
  	1,52,1,52,1,52,1,52,1,52,3,52,787,8,52,1,53,1,53,1,53,1,53,1,53,1,53,
  	3,53,795,8,53,1,54,1,54,1,54,1,54,1,54,1,54,3,54,803,8,54,1,55,1,55,1,
  	55,1,55,1,55,1,55,3,55,811,8,55,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,
  	56,1,56,1,56,1,56,1,56,3,56,825,8,56,1,57,1,57,1,57,1,57,1,57,1,57,1,
  	57,1,57,3,57,835,8,57,1,58,1,58,1,58,1,58,1,58,1,58,3,58,843,8,58,1,59,
  	1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,3,59,855,8,59,1,60,1,60,
  	1,60,1,60,1,60,1,60,1,60,1,60,1,60,1,60,3,60,867,8,60,1,61,1,61,1,61,
  	1,61,1,61,1,61,3,61,875,8,61,1,62,1,62,1,62,1,62,1,62,1,62,1,62,1,62,
  	1,62,1,62,3,62,887,8,62,1,63,1,63,1,63,1,63,1,63,1,63,1,63,1,63,3,63,
  	897,8,63,1,64,1,64,1,64,1,64,1,64,1,64,3,64,905,8,64,1,65,1,65,1,65,1,
  	65,1,65,1,65,3,65,913,8,65,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,66,1,
  	66,1,66,3,66,925,8,66,1,67,1,67,1,67,1,67,1,67,1,67,1,67,1,67,3,67,935,
  	8,67,1,68,1,68,1,68,1,68,1,68,1,68,3,68,943,8,68,1,69,1,69,1,69,1,69,
  	1,69,1,69,1,69,1,69,1,69,1,69,3,69,955,8,69,1,70,1,70,1,70,1,70,1,70,
  	1,70,3,70,963,8,70,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,71,3,71,973,8,
  	71,1,72,1,72,1,72,1,72,1,72,1,72,3,72,981,8,72,1,73,1,73,1,73,1,73,1,
  	73,1,73,1,73,1,73,1,73,1,73,3,73,993,8,73,1,74,1,74,1,74,1,74,1,74,1,
  	74,1,74,1,74,1,74,1,74,1,74,1,74,3,74,1007,8,74,1,75,1,75,1,76,1,76,1,
  	77,1,77,1,78,1,78,1,79,1,79,1,80,1,80,1,81,1,81,1,82,4,82,1024,8,82,11,
  	82,12,82,1025,1,83,1,83,1,84,1,84,1,85,1,85,1,86,1,86,1,87,1,87,1,88,
  	1,88,1,89,1,89,1,90,1,90,1,90,1,91,1,91,1,92,1,92,1,92,1,93,1,93,1,94,
  	1,94,1,94,1,95,1,95,1,96,1,96,1,97,1,97,1,98,1,98,1,99,1,99,1,100,1,100,
  	1,100,1,101,1,101,1,101,1,102,1,102,1,102,1,102,1,102,1,102,3,102,1077,
  	8,102,1,103,1,103,1,103,1,103,1,103,1,103,1,103,1,103,3,103,1087,8,103,
  	1,104,1,104,1,105,1,105,1,105,1,105,1,105,1,105,3,105,1097,8,105,1,106,
  	1,106,1,106,1,106,1,106,1,106,3,106,1105,8,106,1,107,1,107,1,107,1,107,
  	3,107,1111,8,107,1,108,1,108,1,108,1,108,1,108,1,108,3,108,1119,8,108,
  	1,109,1,109,5,109,1123,8,109,10,109,12,109,1126,9,109,1,109,1,109,1,110,
  	1,110,4,110,1132,8,110,11,110,12,110,1133,1,111,1,111,4,111,1138,8,111,
  	11,111,12,111,1139,1,112,4,112,1143,8,112,11,112,12,112,1144,1,112,1,
  	112,4,112,1149,8,112,11,112,12,112,1150,1,112,1,112,4,112,1155,8,112,
  	11,112,12,112,1156,5,112,1159,8,112,10,112,12,112,1162,9,112,1,113,4,
  	113,1165,8,113,11,113,12,113,1166,1,114,1,114,1,115,1,115,1,116,1,116,
  	1,116,1,116,5,116,1177,8,116,10,116,12,116,1180,9,116,1,116,1,116,1,116,
  	3,116,1185,8,116,1,117,1,117,1,118,1,118,1,119,4,119,1192,8,119,11,119,
  	12,119,1193,1,119,1,119,1,247,0,120,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,
  	63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,
  	43,87,44,89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,
  	54,109,55,111,56,113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,
  	64,129,65,131,66,133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,
  	74,149,75,151,76,153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,
  	84,169,85,171,86,173,87,175,88,177,89,179,90,181,91,183,92,185,93,187,
  	94,189,95,191,96,193,97,195,98,197,99,199,100,201,101,203,102,205,103,
  	207,104,209,105,211,106,213,107,215,108,217,109,219,110,221,111,223,112,
  	225,113,227,114,229,115,231,0,233,0,235,0,237,0,239,116,1,0,8,2,0,10,
  	10,13,13,3,0,10,10,13,13,34,34,2,0,48,49,124,124,3,0,69,69,101,101,124,
  	124,1,0,48,57,3,0,48,57,65,70,97,102,2,0,65,90,97,122,3,0,9,9,13,13,32,
  	32,1291,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,
  	0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,
  	0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,
  	75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,
  	0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,
  	0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,
  	0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,
  	0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,
  	0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,
  	0,137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,
  	0,147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,
  	0,157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,
  	0,167,1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,
  	0,177,1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,
  	0,187,1,0,0,0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,
  	0,197,1,0,0,0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,
  	0,207,1,0,0,0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,
  	0,217,1,0,0,0,0,219,1,0,0,0,0,221,1,0,0,0,0,223,1,0,0,0,0,225,1,0,0,0,
  	0,227,1,0,0,0,0,229,1,0,0,0,0,239,1,0,0,0,1,241,1,0,0,0,3,257,1,0,0,0,
  	5,275,1,0,0,0,7,287,1,0,0,0,9,297,1,0,0,0,11,317,1,0,0,0,13,325,1,0,0,
  	0,15,333,1,0,0,0,17,343,1,0,0,0,19,351,1,0,0,0,21,359,1,0,0,0,23,365,
  	1,0,0,0,25,379,1,0,0,0,27,391,1,0,0,0,29,399,1,0,0,0,31,409,1,0,0,0,33,
  	415,1,0,0,0,35,429,1,0,0,0,37,449,1,0,0,0,39,461,1,0,0,0,41,471,1,0,0,
  	0,43,481,1,0,0,0,45,495,1,0,0,0,47,507,1,0,0,0,49,515,1,0,0,0,51,529,
  	1,0,0,0,53,545,1,0,0,0,55,559,1,0,0,0,57,569,1,0,0,0,59,579,1,0,0,0,61,
  	589,1,0,0,0,63,597,1,0,0,0,65,608,1,0,0,0,67,614,1,0,0,0,69,626,1,0,0,
  	0,71,636,1,0,0,0,73,646,1,0,0,0,75,658,1,0,0,0,77,670,1,0,0,0,79,678,
  	1,0,0,0,81,686,1,0,0,0,83,694,1,0,0,0,85,702,1,0,0,0,87,710,1,0,0,0,89,
  	718,1,0,0,0,91,726,1,0,0,0,93,738,1,0,0,0,95,744,1,0,0,0,97,752,1,0,0,
  	0,99,758,1,0,0,0,101,766,1,0,0,0,103,778,1,0,0,0,105,786,1,0,0,0,107,
  	794,1,0,0,0,109,802,1,0,0,0,111,810,1,0,0,0,113,824,1,0,0,0,115,834,1,
  	0,0,0,117,842,1,0,0,0,119,854,1,0,0,0,121,866,1,0,0,0,123,874,1,0,0,0,
  	125,886,1,0,0,0,127,896,1,0,0,0,129,904,1,0,0,0,131,912,1,0,0,0,133,924,
  	1,0,0,0,135,934,1,0,0,0,137,942,1,0,0,0,139,954,1,0,0,0,141,962,1,0,0,
  	0,143,972,1,0,0,0,145,980,1,0,0,0,147,992,1,0,0,0,149,1006,1,0,0,0,151,
  	1008,1,0,0,0,153,1010,1,0,0,0,155,1012,1,0,0,0,157,1014,1,0,0,0,159,1016,
  	1,0,0,0,161,1018,1,0,0,0,163,1020,1,0,0,0,165,1023,1,0,0,0,167,1027,1,
  	0,0,0,169,1029,1,0,0,0,171,1031,1,0,0,0,173,1033,1,0,0,0,175,1035,1,0,
  	0,0,177,1037,1,0,0,0,179,1039,1,0,0,0,181,1041,1,0,0,0,183,1044,1,0,0,
  	0,185,1046,1,0,0,0,187,1049,1,0,0,0,189,1051,1,0,0,0,191,1054,1,0,0,0,
  	193,1056,1,0,0,0,195,1058,1,0,0,0,197,1060,1,0,0,0,199,1062,1,0,0,0,201,
  	1064,1,0,0,0,203,1067,1,0,0,0,205,1076,1,0,0,0,207,1086,1,0,0,0,209,1088,
  	1,0,0,0,211,1096,1,0,0,0,213,1104,1,0,0,0,215,1110,1,0,0,0,217,1118,1,
  	0,0,0,219,1120,1,0,0,0,221,1129,1,0,0,0,223,1135,1,0,0,0,225,1142,1,0,
  	0,0,227,1164,1,0,0,0,229,1168,1,0,0,0,231,1170,1,0,0,0,233,1172,1,0,0,
  	0,235,1186,1,0,0,0,237,1188,1,0,0,0,239,1191,1,0,0,0,241,242,5,35,0,0,
  	242,243,5,123,0,0,243,247,1,0,0,0,244,246,9,0,0,0,245,244,1,0,0,0,246,
  	249,1,0,0,0,247,248,1,0,0,0,247,245,1,0,0,0,248,250,1,0,0,0,249,247,1,
  	0,0,0,250,251,5,125,0,0,251,252,5,35,0,0,252,253,1,0,0,0,253,254,6,0,
  	0,0,254,2,1,0,0,0,255,258,3,49,24,0,256,258,5,39,0,0,257,255,1,0,0,0,
  	257,256,1,0,0,0,258,262,1,0,0,0,259,261,8,0,0,0,260,259,1,0,0,0,261,264,
  	1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,265,1,0,0,0,264,262,1,0,0,
  	0,265,266,6,1,0,0,266,4,1,0,0,0,267,268,5,67,0,0,268,269,5,65,0,0,269,
  	270,5,83,0,0,270,276,5,69,0,0,271,272,5,67,0,0,272,273,5,97,0,0,273,274,
  	5,115,0,0,274,276,5,101,0,0,275,267,1,0,0,0,275,271,1,0,0,0,276,6,1,0,
  	0,0,277,278,5,67,0,0,278,279,5,79,0,0,279,280,5,78,0,0,280,281,5,83,0,
  	0,281,288,5,84,0,0,282,283,5,67,0,0,283,284,5,111,0,0,284,285,5,110,0,
  	0,285,286,5,115,0,0,286,288,5,116,0,0,287,277,1,0,0,0,287,282,1,0,0,0,
  	288,8,1,0,0,0,289,290,5,68,0,0,290,291,5,65,0,0,291,292,5,84,0,0,292,
  	298,5,65,0,0,293,294,5,68,0,0,294,295,5,97,0,0,295,296,5,116,0,0,296,
  	298,5,97,0,0,297,289,1,0,0,0,297,293,1,0,0,0,298,10,1,0,0,0,299,300,5,
  	68,0,0,300,301,5,65,0,0,301,302,5,84,0,0,302,303,5,65,0,0,303,304,5,76,
  	0,0,304,305,5,65,0,0,305,306,5,66,0,0,306,307,5,69,0,0,307,318,5,76,0,
  	0,308,309,5,68,0,0,309,310,5,97,0,0,310,311,5,116,0,0,311,312,5,97,0,
  	0,312,313,5,76,0,0,313,314,5,97,0,0,314,315,5,98,0,0,315,316,5,101,0,
  	0,316,318,5,108,0,0,317,299,1,0,0,0,317,308,1,0,0,0,318,12,1,0,0,0,319,
  	320,5,68,0,0,320,321,5,69,0,0,321,326,5,70,0,0,322,323,5,68,0,0,323,324,
  	5,101,0,0,324,326,5,102,0,0,325,319,1,0,0,0,325,322,1,0,0,0,326,14,1,
  	0,0,0,327,328,5,68,0,0,328,329,5,73,0,0,329,334,5,77,0,0,330,331,5,68,
  	0,0,331,332,5,105,0,0,332,334,5,109,0,0,333,327,1,0,0,0,333,330,1,0,0,
  	0,334,16,1,0,0,0,335,336,5,69,0,0,336,337,5,76,0,0,337,338,5,83,0,0,338,
  	344,5,69,0,0,339,340,5,69,0,0,340,341,5,108,0,0,341,342,5,115,0,0,342,
  	344,5,101,0,0,343,335,1,0,0,0,343,339,1,0,0,0,344,18,1,0,0,0,345,346,
  	5,69,0,0,346,347,5,78,0,0,347,352,5,68,0,0,348,349,5,69,0,0,349,350,5,
  	110,0,0,350,352,5,100,0,0,351,345,1,0,0,0,351,348,1,0,0,0,352,20,1,0,
  	0,0,353,354,5,70,0,0,354,355,5,79,0,0,355,360,5,82,0,0,356,357,5,70,0,
  	0,357,358,5,111,0,0,358,360,5,114,0,0,359,353,1,0,0,0,359,356,1,0,0,0,
  	360,22,1,0,0,0,361,362,5,73,0,0,362,366,5,70,0,0,363,364,5,73,0,0,364,
  	366,5,102,0,0,365,361,1,0,0,0,365,363,1,0,0,0,366,24,1,0,0,0,367,368,
  	5,73,0,0,368,369,5,77,0,0,369,370,5,80,0,0,370,371,5,79,0,0,371,372,5,
  	82,0,0,372,380,5,84,0,0,373,374,5,73,0,0,374,375,5,109,0,0,375,376,5,
  	112,0,0,376,377,5,111,0,0,377,378,5,114,0,0,378,380,5,116,0,0,379,367,
  	1,0,0,0,379,373,1,0,0,0,380,26,1,0,0,0,381,382,5,73,0,0,382,383,5,78,
  	0,0,383,384,5,80,0,0,384,385,5,85,0,0,385,392,5,84,0,0,386,387,5,73,0,
  	0,387,388,5,110,0,0,388,389,5,112,0,0,389,390,5,117,0,0,390,392,5,116,
  	0,0,391,381,1,0,0,0,391,386,1,0,0,0,392,28,1,0,0,0,393,394,5,76,0,0,394,
  	395,5,69,0,0,395,400,5,84,0,0,396,397,5,76,0,0,397,398,5,101,0,0,398,
  	400,5,116,0,0,399,393,1,0,0,0,399,396,1,0,0,0,400,30,1,0,0,0,401,402,
  	5,78,0,0,402,403,5,69,0,0,403,404,5,88,0,0,404,410,5,84,0,0,405,406,5,
  	78,0,0,406,407,5,101,0,0,407,408,5,120,0,0,408,410,5,116,0,0,409,401,
  	1,0,0,0,409,405,1,0,0,0,410,32,1,0,0,0,411,412,5,79,0,0,412,416,5,70,
  	0,0,413,414,5,79,0,0,414,416,5,102,0,0,415,411,1,0,0,0,415,413,1,0,0,
  	0,416,34,1,0,0,0,417,418,5,79,0,0,418,419,5,80,0,0,419,420,5,84,0,0,420,
  	421,5,73,0,0,421,422,5,79,0,0,422,430,5,78,0,0,423,424,5,79,0,0,424,425,
  	5,112,0,0,425,426,5,116,0,0,426,427,5,105,0,0,427,428,5,111,0,0,428,430,
  	5,110,0,0,429,417,1,0,0,0,429,423,1,0,0,0,430,36,1,0,0,0,431,432,5,79,
  	0,0,432,433,5,84,0,0,433,434,5,72,0,0,434,435,5,69,0,0,435,436,5,82,0,
  	0,436,437,5,87,0,0,437,438,5,73,0,0,438,439,5,83,0,0,439,450,5,69,0,0,
  	440,441,5,79,0,0,441,442,5,116,0,0,442,443,5,104,0,0,443,444,5,101,0,
  	0,444,445,5,114,0,0,445,446,5,119,0,0,446,447,5,105,0,0,447,448,5,115,
  	0,0,448,450,5,101,0,0,449,431,1,0,0,0,449,440,1,0,0,0,450,38,1,0,0,0,
  	451,452,5,80,0,0,452,453,5,82,0,0,453,454,5,73,0,0,454,455,5,78,0,0,455,
  	462,5,84,0,0,456,457,5,80,0,0,457,458,5,114,0,0,458,459,5,105,0,0,459,
  	460,5,110,0,0,460,462,5,116,0,0,461,451,1,0,0,0,461,456,1,0,0,0,462,40,
  	1,0,0,0,463,464,5,81,0,0,464,465,5,85,0,0,465,466,5,73,0,0,466,472,5,
  	84,0,0,467,468,5,81,0,0,468,469,5,117,0,0,469,470,5,105,0,0,470,472,5,
  	116,0,0,471,463,1,0,0,0,471,467,1,0,0,0,472,42,1,0,0,0,473,474,5,82,0,
  	0,474,475,5,69,0,0,475,476,5,65,0,0,476,482,5,68,0,0,477,478,5,82,0,0,
  	478,479,5,101,0,0,479,480,5,97,0,0,480,482,5,100,0,0,481,473,1,0,0,0,
  	481,477,1,0,0,0,482,44,1,0,0,0,483,484,5,82,0,0,484,485,5,69,0,0,485,
  	486,5,67,0,0,486,487,5,79,0,0,487,488,5,82,0,0,488,496,5,68,0,0,489,490,
  	5,82,0,0,490,491,5,101,0,0,491,492,5,99,0,0,492,493,5,111,0,0,493,494,
  	5,114,0,0,494,496,5,100,0,0,495,483,1,0,0,0,495,489,1,0,0,0,496,46,1,
  	0,0,0,497,498,5,66,0,0,498,499,5,89,0,0,499,500,5,82,0,0,500,501,5,69,
  	0,0,501,508,5,70,0,0,502,503,5,66,0,0,503,504,5,121,0,0,504,505,5,82,
  	0,0,505,506,5,101,0,0,506,508,5,102,0,0,507,497,1,0,0,0,507,502,1,0,0,
  	0,508,48,1,0,0,0,509,510,5,82,0,0,510,511,5,69,0,0,511,516,5,77,0,0,512,
  	513,5,82,0,0,513,514,5,101,0,0,514,516,5,109,0,0,515,509,1,0,0,0,515,
  	512,1,0,0,0,516,50,1,0,0,0,517,518,5,82,0,0,518,519,5,69,0,0,519,520,
  	5,80,0,0,520,521,5,69,0,0,521,522,5,65,0,0,522,530,5,84,0,0,523,524,5,
  	82,0,0,524,525,5,101,0,0,525,526,5,112,0,0,526,527,5,101,0,0,527,528,
  	5,97,0,0,528,530,5,116,0,0,529,517,1,0,0,0,529,523,1,0,0,0,530,52,1,0,
  	0,0,531,532,5,82,0,0,532,533,5,69,0,0,533,534,5,83,0,0,534,535,5,84,0,
  	0,535,536,5,79,0,0,536,537,5,82,0,0,537,546,5,69,0,0,538,539,5,82,0,0,
  	539,540,5,101,0,0,540,541,5,115,0,0,541,542,5,116,0,0,542,543,5,111,0,
  	0,543,544,5,114,0,0,544,546,5,101,0,0,545,531,1,0,0,0,545,538,1,0,0,0,
  	546,54,1,0,0,0,547,548,5,82,0,0,548,549,5,69,0,0,549,550,5,84,0,0,550,
  	551,5,85,0,0,551,552,5,82,0,0,552,560,5,78,0,0,553,554,5,82,0,0,554,555,
  	5,101,0,0,555,556,5,116,0,0,556,557,5,117,0,0,557,558,5,114,0,0,558,560,
  	5,110,0,0,559,547,1,0,0,0,559,553,1,0,0,0,560,56,1,0,0,0,561,562,5,84,
  	0,0,562,563,5,72,0,0,563,564,5,69,0,0,564,570,5,78,0,0,565,566,5,84,0,
  	0,566,567,5,104,0,0,567,568,5,101,0,0,568,570,5,110,0,0,569,561,1,0,0,
  	0,569,565,1,0,0,0,570,58,1,0,0,0,571,572,5,83,0,0,572,573,5,73,0,0,573,
  	574,5,90,0,0,574,580,5,69,0,0,575,576,5,83,0,0,576,577,5,105,0,0,577,
  	578,5,122,0,0,578,580,5,101,0,0,579,571,1,0,0,0,579,575,1,0,0,0,580,60,
  	1,0,0,0,581,582,5,83,0,0,582,583,5,84,0,0,583,584,5,69,0,0,584,590,5,
  	80,0,0,585,586,5,83,0,0,586,587,5,116,0,0,587,588,5,101,0,0,588,590,5,
  	112,0,0,589,581,1,0,0,0,589,585,1,0,0,0,590,62,1,0,0,0,591,592,5,83,0,
  	0,592,593,5,89,0,0,593,598,5,83,0,0,594,595,5,83,0,0,595,596,5,121,0,
  	0,596,598,5,115,0,0,597,591,1,0,0,0,597,594,1,0,0,0,598,64,1,0,0,0,599,
  	600,5,83,0,0,600,601,5,87,0,0,601,602,5,65,0,0,602,609,5,80,0,0,603,604,
  	5,83,0,0,604,605,5,119,0,0,605,606,5,97,0,0,606,607,5,112,0,0,607,609,
  	5,32,0,0,608,599,1,0,0,0,608,603,1,0,0,0,609,66,1,0,0,0,610,611,5,84,
  	0,0,611,615,5,79,0,0,612,613,5,84,0,0,613,615,5,111,0,0,614,610,1,0,0,
  	0,614,612,1,0,0,0,615,68,1,0,0,0,616,617,5,85,0,0,617,618,5,78,0,0,618,
  	619,5,84,0,0,619,620,5,73,0,0,620,627,5,76,0,0,621,622,5,85,0,0,622,623,
  	5,110,0,0,623,624,5,116,0,0,624,625,5,105,0,0,625,627,5,108,0,0,626,616,
  	1,0,0,0,626,621,1,0,0,0,627,70,1,0,0,0,628,629,5,87,0,0,629,630,5,72,
  	0,0,630,631,5,69,0,0,631,637,5,78,0,0,632,633,5,87,0,0,633,634,5,104,
  	0,0,634,635,5,101,0,0,635,637,5,110,0,0,636,628,1,0,0,0,636,632,1,0,0,
  	0,637,72,1,0,0,0,638,639,5,87,0,0,639,640,5,73,0,0,640,641,5,84,0,0,641,
  	647,5,72,0,0,642,643,5,87,0,0,643,644,5,105,0,0,644,645,5,116,0,0,645,
  	647,5,104,0,0,646,638,1,0,0,0,646,642,1,0,0,0,647,74,1,0,0,0,648,649,
  	5,87,0,0,649,650,5,72,0,0,650,651,5,73,0,0,651,652,5,76,0,0,652,659,5,
  	69,0,0,653,654,5,87,0,0,654,655,5,104,0,0,655,656,5,105,0,0,656,657,5,
  	108,0,0,657,659,5,101,0,0,658,648,1,0,0,0,658,653,1,0,0,0,659,76,1,0,
  	0,0,660,661,5,64,0,0,661,662,5,77,0,0,662,663,5,65,0,0,663,664,5,73,0,
  	0,664,671,5,78,0,0,665,666,5,64,0,0,666,667,5,77,0,0,667,668,5,97,0,0,
  	668,669,5,105,0,0,669,671,5,110,0,0,670,660,1,0,0,0,670,665,1,0,0,0,671,
  	78,1,0,0,0,672,673,5,65,0,0,673,674,5,66,0,0,674,679,5,83,0,0,675,676,
  	5,65,0,0,676,677,5,98,0,0,677,679,5,115,0,0,678,672,1,0,0,0,678,675,1,
  	0,0,0,679,80,1,0,0,0,680,681,5,65,0,0,681,682,5,67,0,0,682,687,5,83,0,
  	0,683,684,5,65,0,0,684,685,5,99,0,0,685,687,5,115,0,0,686,680,1,0,0,0,
  	686,683,1,0,0,0,687,82,1,0,0,0,688,689,5,65,0,0,689,690,5,83,0,0,690,
  	695,5,78,0,0,691,692,5,65,0,0,692,693,5,115,0,0,693,695,5,110,0,0,694,
  	688,1,0,0,0,694,691,1,0,0,0,695,84,1,0,0,0,696,697,5,65,0,0,697,698,5,
  	84,0,0,698,703,5,78,0,0,699,700,5,65,0,0,700,701,5,116,0,0,701,703,5,
  	110,0,0,702,696,1,0,0,0,702,699,1,0,0,0,703,86,1,0,0,0,704,705,5,67,0,
  	0,705,706,5,79,0,0,706,711,5,83,0,0,707,708,5,67,0,0,708,709,5,111,0,
  	0,709,711,5,115,0,0,710,704,1,0,0,0,710,707,1,0,0,0,711,88,1,0,0,0,712,
  	713,5,68,0,0,713,714,5,69,0,0,714,719,5,71,0,0,715,716,5,68,0,0,716,717,
  	5,101,0,0,717,719,5,103,0,0,718,712,1,0,0,0,718,715,1,0,0,0,719,90,1,
  	0,0,0,720,721,5,69,0,0,721,722,5,88,0,0,722,727,5,80,0,0,723,724,5,69,
  	0,0,724,725,5,120,0,0,725,727,5,112,0,0,726,720,1,0,0,0,726,723,1,0,0,
  	0,727,92,1,0,0,0,728,729,5,70,0,0,729,730,5,76,0,0,730,731,5,79,0,0,731,
  	732,5,79,0,0,732,739,5,82,0,0,733,734,5,70,0,0,734,735,5,108,0,0,735,
  	736,5,111,0,0,736,737,5,111,0,0,737,739,5,114,0,0,738,728,1,0,0,0,738,
  	733,1,0,0,0,739,94,1,0,0,0,740,741,5,76,0,0,741,745,5,78,0,0,742,743,
  	5,76,0,0,743,745,5,110,0,0,744,740,1,0,0,0,744,742,1,0,0,0,745,96,1,0,
  	0,0,746,747,5,76,0,0,747,748,5,79,0,0,748,753,5,71,0,0,749,750,5,76,0,
  	0,750,751,5,111,0,0,751,753,5,103,0,0,752,746,1,0,0,0,752,749,1,0,0,0,
  	753,98,1,0,0,0,754,755,5,80,0,0,755,759,5,73,0,0,756,757,5,80,0,0,757,
  	759,5,105,0,0,758,754,1,0,0,0,758,756,1,0,0,0,759,100,1,0,0,0,760,761,
  	5,82,0,0,761,762,5,65,0,0,762,767,5,68,0,0,763,764,5,82,0,0,764,765,5,
  	97,0,0,765,767,5,100,0,0,766,760,1,0,0,0,766,763,1,0,0,0,767,102,1,0,
  	0,0,768,769,5,82,0,0,769,770,5,79,0,0,770,771,5,85,0,0,771,772,5,78,0,
  	0,772,779,5,68,0,0,773,774,5,82,0,0,774,775,5,111,0,0,775,776,5,117,0,
  	0,776,777,5,110,0,0,777,779,5,100,0,0,778,768,1,0,0,0,778,773,1,0,0,0,
  	779,104,1,0,0,0,780,781,5,83,0,0,781,782,5,71,0,0,782,787,5,78,0,0,783,
  	784,5,83,0,0,784,785,5,103,0,0,785,787,5,110,0,0,786,780,1,0,0,0,786,
  	783,1,0,0,0,787,106,1,0,0,0,788,789,5,83,0,0,789,790,5,73,0,0,790,795,
  	5,78,0,0,791,792,5,83,0,0,792,793,5,105,0,0,793,795,5,110,0,0,794,788,
  	1,0,0,0,794,791,1,0,0,0,795,108,1,0,0,0,796,797,5,83,0,0,797,798,5,81,
  	0,0,798,803,5,82,0,0,799,800,5,83,0,0,800,801,5,113,0,0,801,803,5,114,
  	0,0,802,796,1,0,0,0,802,799,1,0,0,0,803,110,1,0,0,0,804,805,5,84,0,0,
  	805,806,5,65,0,0,806,811,5,78,0,0,807,808,5,84,0,0,808,809,5,97,0,0,809,
  	811,5,110,0,0,810,804,1,0,0,0,810,807,1,0,0,0,811,112,1,0,0,0,812,813,
  	5,86,0,0,813,814,5,69,0,0,814,815,5,67,0,0,815,816,5,84,0,0,816,817,5,
  	79,0,0,817,825,5,82,0,0,818,819,5,86,0,0,819,820,5,101,0,0,820,821,5,
  	99,0,0,821,822,5,116,0,0,822,823,5,111,0,0,823,825,5,114,0,0,824,812,
  	1,0,0,0,824,818,1,0,0,0,825,114,1,0,0,0,826,827,5,76,0,0,827,828,5,73,
  	0,0,828,829,5,83,0,0,829,835,5,84,0,0,830,831,5,76,0,0,831,832,5,105,
  	0,0,832,833,5,115,0,0,833,835,5,116,0,0,834,826,1,0,0,0,834,830,1,0,0,
  	0,835,116,1,0,0,0,836,837,5,77,0,0,837,838,5,65,0,0,838,843,5,80,0,0,
  	839,840,5,77,0,0,840,841,5,97,0,0,841,843,5,112,0,0,842,836,1,0,0,0,842,
  	839,1,0,0,0,843,118,1,0,0,0,844,845,5,83,0,0,845,846,5,84,0,0,846,847,
  	5,65,0,0,847,848,5,67,0,0,848,855,5,75,0,0,849,850,5,83,0,0,850,851,5,
  	116,0,0,851,852,5,97,0,0,852,853,5,99,0,0,853,855,5,107,0,0,854,844,1,
  	0,0,0,854,849,1,0,0,0,855,120,1,0,0,0,856,857,5,81,0,0,857,858,5,85,0,
  	0,858,859,5,69,0,0,859,860,5,85,0,0,860,867,5,69,0,0,861,862,5,81,0,0,
  	862,863,5,117,0,0,863,864,5,101,0,0,864,865,5,117,0,0,865,867,5,101,0,
  	0,866,856,1,0,0,0,866,861,1,0,0,0,867,122,1,0,0,0,868,869,5,83,0,0,869,
  	870,5,69,0,0,870,875,5,84,0,0,871,872,5,83,0,0,872,873,5,101,0,0,873,
  	875,5,116,0,0,874,868,1,0,0,0,874,871,1,0,0,0,875,124,1,0,0,0,876,877,
  	5,70,0,0,877,878,5,65,0,0,878,879,5,76,0,0,879,880,5,83,0,0,880,887,5,
  	69,0,0,881,882,5,70,0,0,882,883,5,97,0,0,883,884,5,108,0,0,884,885,5,
  	115,0,0,885,887,5,101,0,0,886,876,1,0,0,0,886,881,1,0,0,0,887,126,1,0,
  	0,0,888,889,5,84,0,0,889,890,5,82,0,0,890,891,5,85,0,0,891,897,5,69,0,
  	0,892,893,5,84,0,0,893,894,5,114,0,0,894,895,5,117,0,0,895,897,5,101,
  	0,0,896,888,1,0,0,0,896,892,1,0,0,0,897,128,1,0,0,0,898,899,5,65,0,0,
  	899,900,5,83,0,0,900,905,5,67,0,0,901,902,5,65,0,0,902,903,5,115,0,0,
  	903,905,5,99,0,0,904,898,1,0,0,0,904,901,1,0,0,0,905,130,1,0,0,0,906,
  	907,5,67,0,0,907,908,5,72,0,0,908,913,5,82,0,0,909,910,5,67,0,0,910,911,
  	5,104,0,0,911,913,5,114,0,0,912,906,1,0,0,0,912,909,1,0,0,0,913,132,1,
  	0,0,0,914,915,5,73,0,0,915,916,5,78,0,0,916,917,5,83,0,0,917,918,5,84,
  	0,0,918,925,5,82,0,0,919,920,5,73,0,0,920,921,5,110,0,0,921,922,5,115,
  	0,0,922,923,5,116,0,0,923,925,5,114,0,0,924,914,1,0,0,0,924,919,1,0,0,
  	0,925,134,1,0,0,0,926,927,5,76,0,0,927,928,5,69,0,0,928,929,5,70,0,0,
  	929,935,5,84,0,0,930,931,5,76,0,0,931,932,5,101,0,0,932,933,5,102,0,0,
  	933,935,5,116,0,0,934,926,1,0,0,0,934,930,1,0,0,0,935,136,1,0,0,0,936,
  	937,5,77,0,0,937,938,5,73,0,0,938,943,5,68,0,0,939,940,5,77,0,0,940,941,
  	5,105,0,0,941,943,5,100,0,0,942,936,1,0,0,0,942,939,1,0,0,0,943,138,1,
  	0,0,0,944,945,5,82,0,0,945,946,5,73,0,0,946,947,5,71,0,0,947,948,5,72,
  	0,0,948,955,5,84,0,0,949,950,5,82,0,0,950,951,5,105,0,0,951,952,5,103,
  	0,0,952,953,5,104,0,0,953,955,5,116,0,0,954,944,1,0,0,0,954,949,1,0,0,
  	0,955,140,1,0,0,0,956,957,5,76,0,0,957,958,5,69,0,0,958,963,5,78,0,0,
  	959,960,5,76,0,0,960,961,5,101,0,0,961,963,5,110,0,0,962,956,1,0,0,0,
  	962,959,1,0,0,0,963,142,1,0,0,0,964,965,5,66,0,0,965,966,5,89,0,0,966,
  	967,5,84,0,0,967,973,5,69,0,0,968,969,5,66,0,0,969,970,5,121,0,0,970,
  	971,5,116,0,0,971,973,5,101,0,0,972,964,1,0,0,0,972,968,1,0,0,0,973,144,
  	1,0,0,0,974,975,5,73,0,0,975,976,5,78,0,0,976,981,5,84,0,0,977,978,5,
  	73,0,0,978,979,5,110,0,0,979,981,5,116,0,0,980,974,1,0,0,0,980,977,1,
  	0,0,0,981,146,1,0,0,0,982,983,5,70,0,0,983,984,5,76,0,0,984,985,5,79,
  	0,0,985,986,5,65,0,0,986,993,5,84,0,0,987,988,5,70,0,0,988,989,5,108,
  	0,0,989,990,5,111,0,0,990,991,5,97,0,0,991,993,5,116,0,0,992,982,1,0,
  	0,0,992,987,1,0,0,0,993,148,1,0,0,0,994,995,5,83,0,0,995,996,5,84,0,0,
  	996,997,5,82,0,0,997,998,5,73,0,0,998,999,5,78,0,0,999,1007,5,71,0,0,
  	1000,1001,5,83,0,0,1001,1002,5,116,0,0,1002,1003,5,114,0,0,1003,1004,
  	5,105,0,0,1004,1005,5,110,0,0,1005,1007,5,103,0,0,1006,994,1,0,0,0,1006,
  	1000,1,0,0,0,1007,150,1,0,0,0,1008,1009,5,36,0,0,1009,152,1,0,0,0,1010,
  	1011,5,35,0,0,1011,154,1,0,0,0,1012,1013,5,58,0,0,1013,156,1,0,0,0,1014,
  	1015,5,59,0,0,1015,158,1,0,0,0,1016,1017,5,46,0,0,1017,160,1,0,0,0,1018,
  	1019,5,44,0,0,1019,162,1,0,0,0,1020,1021,5,39,0,0,1021,164,1,0,0,0,1022,
  	1024,5,10,0,0,1023,1022,1,0,0,0,1024,1025,1,0,0,0,1025,1023,1,0,0,0,1025,
  	1026,1,0,0,0,1026,166,1,0,0,0,1027,1028,5,37,0,0,1028,168,1,0,0,0,1029,
  	1030,5,95,0,0,1030,170,1,0,0,0,1031,1032,5,40,0,0,1032,172,1,0,0,0,1033,
  	1034,5,41,0,0,1034,174,1,0,0,0,1035,1036,5,91,0,0,1036,176,1,0,0,0,1037,
  	1038,5,93,0,0,1038,178,1,0,0,0,1039,1040,5,61,0,0,1040,180,1,0,0,0,1041,
  	1042,5,60,0,0,1042,1043,5,62,0,0,1043,182,1,0,0,0,1044,1045,5,62,0,0,
  	1045,184,1,0,0,0,1046,1047,5,62,0,0,1047,1048,5,61,0,0,1048,186,1,0,0,
  	0,1049,1050,5,60,0,0,1050,188,1,0,0,0,1051,1052,5,60,0,0,1052,1053,5,
  	61,0,0,1053,190,1,0,0,0,1054,1055,5,94,0,0,1055,192,1,0,0,0,1056,1057,
  	5,43,0,0,1057,194,1,0,0,0,1058,1059,5,45,0,0,1059,196,1,0,0,0,1060,1061,
  	5,42,0,0,1061,198,1,0,0,0,1062,1063,5,47,0,0,1063,200,1,0,0,0,1064,1065,
  	5,60,0,0,1065,1066,5,60,0,0,1066,202,1,0,0,0,1067,1068,5,62,0,0,1068,
  	1069,5,62,0,0,1069,204,1,0,0,0,1070,1071,5,77,0,0,1071,1072,5,79,0,0,
  	1072,1077,5,68,0,0,1073,1074,5,77,0,0,1074,1075,5,111,0,0,1075,1077,5,
  	100,0,0,1076,1070,1,0,0,0,1076,1073,1,0,0,0,1077,206,1,0,0,0,1078,1079,
  	5,68,0,0,1079,1080,5,73,0,0,1080,1087,5,86,0,0,1081,1082,5,68,0,0,1082,
  	1083,5,105,0,0,1083,1087,5,118,0,0,1084,1085,5,47,0,0,1085,1087,5,47,
  	0,0,1086,1078,1,0,0,0,1086,1081,1,0,0,0,1086,1084,1,0,0,0,1087,208,1,
  	0,0,0,1088,1089,5,126,0,0,1089,210,1,0,0,0,1090,1091,5,78,0,0,1091,1092,
  	5,79,0,0,1092,1097,5,84,0,0,1093,1094,5,78,0,0,1094,1095,5,111,0,0,1095,
  	1097,5,116,0,0,1096,1090,1,0,0,0,1096,1093,1,0,0,0,1097,212,1,0,0,0,1098,
  	1099,5,65,0,0,1099,1100,5,78,0,0,1100,1105,5,68,0,0,1101,1102,5,65,0,
  	0,1102,1103,5,110,0,0,1103,1105,5,100,0,0,1104,1098,1,0,0,0,1104,1101,
  	1,0,0,0,1105,214,1,0,0,0,1106,1107,5,79,0,0,1107,1111,5,82,0,0,1108,1109,
  	5,79,0,0,1109,1111,5,114,0,0,1110,1106,1,0,0,0,1110,1108,1,0,0,0,1111,
  	216,1,0,0,0,1112,1113,5,69,0,0,1113,1114,5,79,0,0,1114,1119,5,82,0,0,
  	1115,1116,5,69,0,0,1116,1117,5,111,0,0,1117,1119,5,114,0,0,1118,1112,
  	1,0,0,0,1118,1115,1,0,0,0,1119,218,1,0,0,0,1120,1124,5,34,0,0,1121,1123,
  	8,1,0,0,1122,1121,1,0,0,0,1123,1126,1,0,0,0,1124,1122,1,0,0,0,1124,1125,
  	1,0,0,0,1125,1127,1,0,0,0,1126,1124,1,0,0,0,1127,1128,5,34,0,0,1128,220,
  	1,0,0,0,1129,1131,5,38,0,0,1130,1132,3,231,115,0,1131,1130,1,0,0,0,1132,
  	1133,1,0,0,0,1133,1131,1,0,0,0,1133,1134,1,0,0,0,1134,222,1,0,0,0,1135,
  	1137,3,167,83,0,1136,1138,7,2,0,0,1137,1136,1,0,0,0,1138,1139,1,0,0,0,
  	1139,1137,1,0,0,0,1139,1140,1,0,0,0,1140,224,1,0,0,0,1141,1143,3,237,
  	118,0,1142,1141,1,0,0,0,1143,1144,1,0,0,0,1144,1142,1,0,0,0,1144,1145,
  	1,0,0,0,1145,1146,1,0,0,0,1146,1148,5,46,0,0,1147,1149,3,237,118,0,1148,
  	1147,1,0,0,0,1149,1150,1,0,0,0,1150,1148,1,0,0,0,1150,1151,1,0,0,0,1151,
  	1160,1,0,0,0,1152,1154,7,3,0,0,1153,1155,7,4,0,0,1154,1153,1,0,0,0,1155,
  	1156,1,0,0,0,1156,1154,1,0,0,0,1156,1157,1,0,0,0,1157,1159,1,0,0,0,1158,
  	1152,1,0,0,0,1159,1162,1,0,0,0,1160,1158,1,0,0,0,1160,1161,1,0,0,0,1161,
  	226,1,0,0,0,1162,1160,1,0,0,0,1163,1165,3,237,118,0,1164,1163,1,0,0,0,
  	1165,1166,1,0,0,0,1166,1164,1,0,0,0,1166,1167,1,0,0,0,1167,228,1,0,0,
  	0,1168,1169,3,233,116,0,1169,230,1,0,0,0,1170,1171,7,5,0,0,1171,232,1,
  	0,0,0,1172,1178,3,235,117,0,1173,1177,3,235,117,0,1174,1177,3,237,118,
  	0,1175,1177,3,169,84,0,1176,1173,1,0,0,0,1176,1174,1,0,0,0,1176,1175,
  	1,0,0,0,1177,1180,1,0,0,0,1178,1176,1,0,0,0,1178,1179,1,0,0,0,1179,1184,
  	1,0,0,0,1180,1178,1,0,0,0,1181,1185,3,167,83,0,1182,1185,3,151,75,0,1183,
  	1185,3,153,76,0,1184,1181,1,0,0,0,1184,1182,1,0,0,0,1184,1183,1,0,0,0,
  	1184,1185,1,0,0,0,1185,234,1,0,0,0,1186,1187,7,6,0,0,1187,236,1,0,0,0,
  	1188,1189,7,4,0,0,1189,238,1,0,0,0,1190,1192,7,7,0,0,1191,1190,1,0,0,
  	0,1192,1193,1,0,0,0,1193,1191,1,0,0,0,1193,1194,1,0,0,0,1194,1195,1,0,
  	0,0,1195,1196,6,119,1,0,1196,240,1,0,0,0,96,0,247,257,262,275,287,297,
  	317,325,333,343,351,359,365,379,391,399,409,415,429,449,461,471,481,495,
  	507,515,529,545,559,569,579,589,597,608,614,626,636,646,658,670,678,686,
  	694,702,710,718,726,738,744,752,758,766,778,786,794,802,810,824,834,842,
  	854,866,874,886,896,904,912,924,934,942,954,962,972,980,992,1006,1025,
  	1076,1086,1096,1104,1110,1118,1124,1133,1139,1144,1150,1156,1160,1166,
  	1176,1178,1184,1193,2,6,0,0,0,1,0
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

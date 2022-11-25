
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
      "dim", "exprcall", "end", "for", "if", "ifml", "module", "parameter", 
      "print", "procedure", "repeat", "read", "restore", "return", "struct", 
      "structDim", "structInstance", "swap", "when", "while", "variable", 
      "expression", "type", "typeOrStruct", "literal", "floatLiteral", "integerLiteral", 
      "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", "','", "'''", 
      "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", "'<>'", "'>'", 
      "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", 
      "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "COMMENT", "CASE", "CONST", "DATA", "DATALABEL", "DEF", "DIM", 
      "ELSE", "END", "ENDCASE", "ENDDEF", "ENDIF", "ENDWHILE", "FOR", "IF", 
      "MODULE", "NEXT", "OF", "OTHERWISE", "PRINT", "READ", "REF", "REM", 
      "REPEAT", "RESTORE", "RETURN", "THEN", "SIZE", "STEP", "SWAP", "TO", 
      "UNTIL", "WHEN", "WITH", "WHILE", "DEFRECORD", "RECORD", "ENDRECORD", 
      "HPTIME", "TIME", "TIMES", "ABS", "ACS", "ASN", "ATN", "COS", "DEG", 
      "EXP", "FLOOR", "LET", "LN", "LOG", "PI", "RAD", "ROUND", "SGN", "SIN", 
      "SQR", "TAN", "FALSE", "TRUE", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", 
      "RIGHTS", "LEN", "BYTE", "INT", "FLOAT", "STRING", "DOLLAR", "HASH", 
      "COLON", "SEMICOLON", "DOT", "COMMA", "QUOTE", "NEWLINE", "PERCENT", 
      "UNDERSCORE", "LPAREN", "RPAREN", "SOPEN", "SCLOSE", "EQ", "NE", "GT", 
      "GE", "LT", "LE", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", 
      "SHR", "MOD", "DIV", "COMP", "NOT", "AND", "OR", "EOR", "STRINGLITERAL", 
      "HEXNUMBER", "BINARYNUMBER", "FLOATLITERAL", "INTEGERLITERAL", "IDENTIFIER", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,113,751,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,1,0,1,0,1,1,5,1,85,8,1,
  	10,1,12,1,88,9,1,1,1,1,1,1,1,3,1,93,8,1,5,1,95,8,1,10,1,12,1,98,9,1,1,
  	2,5,2,101,8,2,10,2,12,2,104,9,2,1,2,1,2,3,2,108,8,2,4,2,110,8,2,11,2,
  	12,2,111,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,138,8,3,1,4,4,4,141,8,4,11,4,
  	12,4,142,1,5,3,5,146,8,5,1,5,1,5,1,5,5,5,151,8,5,10,5,12,5,154,9,5,1,
  	5,3,5,157,8,5,1,5,3,5,160,8,5,1,6,1,6,1,6,1,6,1,7,1,7,3,7,168,8,7,1,7,
  	3,7,171,8,7,1,7,1,7,5,7,175,8,7,10,7,12,7,178,9,7,1,7,3,7,181,8,7,1,8,
  	1,8,1,8,1,8,3,8,187,8,8,1,8,4,8,190,8,8,11,8,12,8,191,1,8,1,8,3,8,196,
  	8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,208,8,9,10,9,12,9,211,
  	9,9,1,9,3,9,214,8,9,1,9,3,9,217,8,9,1,10,1,10,1,10,1,10,5,10,223,8,10,
  	10,10,12,10,226,9,10,1,11,1,11,1,11,1,12,1,12,1,12,3,12,234,8,12,1,12,
  	1,12,1,12,3,12,239,8,12,1,12,1,12,5,12,243,8,12,10,12,12,12,246,9,12,
  	1,12,1,12,1,13,1,13,1,13,3,13,253,8,13,1,13,1,13,5,13,257,8,13,10,13,
  	12,13,260,9,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,3,15,269,8,15,1,15,
  	3,15,272,8,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,280,8,15,1,15,1,15,1,
  	15,1,16,1,16,1,16,3,16,288,8,16,1,16,1,16,1,16,3,16,293,8,16,1,17,1,17,
  	1,17,3,17,298,8,17,1,17,1,17,1,17,1,17,1,17,3,17,305,8,17,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,19,3,19,314,8,19,1,19,1,19,3,19,318,8,19,1,19,3,19,
  	321,8,19,1,19,1,19,1,19,3,19,326,8,19,1,19,3,19,329,8,19,1,20,1,20,1,
  	20,3,20,334,8,20,1,20,3,20,337,8,20,1,20,3,20,340,8,20,3,20,342,8,20,
  	1,21,1,21,1,21,3,21,347,8,21,1,21,5,21,350,8,21,10,21,12,21,353,9,21,
  	1,21,3,21,356,8,21,1,21,1,21,5,21,360,8,21,10,21,12,21,363,9,21,1,21,
  	5,21,366,8,21,10,21,12,21,369,9,21,1,21,3,21,372,8,21,1,21,3,21,375,8,
  	21,1,21,3,21,378,8,21,1,21,5,21,381,8,21,10,21,12,21,384,9,21,1,21,1,
  	21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,398,8,23,10,
  	23,12,23,401,9,23,1,24,1,24,1,24,1,25,1,25,3,25,408,8,25,1,26,1,26,1,
  	26,5,26,413,8,26,10,26,12,26,416,9,26,1,26,1,26,3,26,420,8,26,1,26,1,
  	26,4,26,424,8,26,11,26,12,26,425,1,26,1,26,3,26,430,8,26,1,26,1,26,5,
  	26,434,8,26,10,26,12,26,437,9,26,1,26,5,26,440,8,26,10,26,12,26,443,9,
  	26,1,26,1,26,1,27,1,27,1,27,1,27,3,27,451,8,27,1,27,1,27,1,27,3,27,456,
  	8,27,1,27,1,27,5,27,460,8,27,10,27,12,27,463,9,27,1,27,1,27,1,28,3,28,
  	468,8,28,1,28,1,28,1,28,1,28,3,28,474,8,28,1,28,1,28,1,28,1,28,1,28,3,
  	28,481,8,28,1,28,1,28,1,28,1,28,5,28,487,8,28,10,28,12,28,490,9,28,1,
  	28,3,28,493,8,28,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,5,30,504,
  	8,30,10,30,12,30,507,9,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,32,1,32,
  	1,32,3,32,519,8,32,1,32,1,32,5,32,523,8,32,10,32,12,32,526,9,32,1,32,
  	3,32,529,8,32,1,32,1,32,5,32,533,8,32,10,32,12,32,536,9,32,1,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	1,33,1,33,3,33,556,8,33,1,33,1,33,1,33,3,33,561,8,33,1,33,3,33,564,8,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,614,8,33,1,33,1,33,1,33,1,33,1,
  	33,1,33,3,33,622,8,33,1,33,1,33,3,33,626,8,33,1,33,1,33,1,33,1,33,3,33,
  	632,8,33,1,33,1,33,3,33,636,8,33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,644,
  	8,33,1,33,1,33,3,33,648,8,33,1,33,1,33,1,33,1,33,3,33,654,8,33,1,33,1,
  	33,1,33,1,33,3,33,660,8,33,1,33,1,33,3,33,664,8,33,3,33,666,8,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,
  	1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,5,33,722,8,33,
  	10,33,12,33,725,9,33,1,34,1,34,1,35,1,35,1,36,1,36,1,36,3,36,734,8,36,
  	1,37,3,37,737,8,37,1,37,1,37,1,38,1,38,1,38,3,38,744,8,38,1,38,3,38,747,
  	8,38,1,39,1,39,1,39,0,1,66,40,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,
  	76,78,0,5,1,1,75,75,2,0,75,75,80,80,1,0,69,72,2,0,69,72,112,112,1,0,94,
  	95,884,0,80,1,0,0,0,2,96,1,0,0,0,4,109,1,0,0,0,6,137,1,0,0,0,8,140,1,
  	0,0,0,10,145,1,0,0,0,12,161,1,0,0,0,14,165,1,0,0,0,16,182,1,0,0,0,18,
  	199,1,0,0,0,20,218,1,0,0,0,22,227,1,0,0,0,24,230,1,0,0,0,26,249,1,0,0,
  	0,28,263,1,0,0,0,30,265,1,0,0,0,32,284,1,0,0,0,34,294,1,0,0,0,36,309,
  	1,0,0,0,38,313,1,0,0,0,40,330,1,0,0,0,42,343,1,0,0,0,44,388,1,0,0,0,46,
  	393,1,0,0,0,48,402,1,0,0,0,50,405,1,0,0,0,52,409,1,0,0,0,54,446,1,0,0,
  	0,56,467,1,0,0,0,58,494,1,0,0,0,60,499,1,0,0,0,62,510,1,0,0,0,64,515,
  	1,0,0,0,66,665,1,0,0,0,68,726,1,0,0,0,70,728,1,0,0,0,72,733,1,0,0,0,74,
  	736,1,0,0,0,76,746,1,0,0,0,78,748,1,0,0,0,80,81,3,2,1,0,81,82,5,0,0,1,
  	82,1,1,0,0,0,83,85,3,8,4,0,84,83,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,
  	86,87,1,0,0,0,87,89,1,0,0,0,88,86,1,0,0,0,89,92,3,6,3,0,90,93,3,8,4,0,
  	91,93,5,0,0,1,92,90,1,0,0,0,92,91,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,
  	94,86,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,3,1,0,0,0,
  	98,96,1,0,0,0,99,101,5,75,0,0,100,99,1,0,0,0,101,104,1,0,0,0,102,100,
  	1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,0,104,102,1,0,0,0,105,107,3,6,3,
  	0,106,108,7,0,0,0,107,106,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,0,109,
  	102,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,5,1,0,
  	0,0,113,138,5,1,0,0,114,138,3,10,5,0,115,138,3,14,7,0,116,138,3,16,8,
  	0,117,138,3,18,9,0,118,138,3,20,10,0,119,138,3,22,11,0,120,138,3,24,12,
  	0,121,138,3,28,14,0,122,138,3,30,15,0,123,138,3,32,16,0,124,138,3,34,
  	17,0,125,138,3,36,18,0,126,138,3,42,21,0,127,138,3,40,20,0,128,138,3,
  	46,23,0,129,138,3,44,22,0,130,138,3,48,24,0,131,138,3,50,25,0,132,138,
  	3,52,26,0,133,138,3,54,27,0,134,138,3,56,28,0,135,138,3,58,29,0,136,138,
  	3,62,31,0,137,113,1,0,0,0,137,114,1,0,0,0,137,115,1,0,0,0,137,116,1,0,
  	0,0,137,117,1,0,0,0,137,118,1,0,0,0,137,119,1,0,0,0,137,120,1,0,0,0,137,
  	121,1,0,0,0,137,122,1,0,0,0,137,123,1,0,0,0,137,124,1,0,0,0,137,125,1,
  	0,0,0,137,126,1,0,0,0,137,127,1,0,0,0,137,128,1,0,0,0,137,129,1,0,0,0,
  	137,130,1,0,0,0,137,131,1,0,0,0,137,132,1,0,0,0,137,133,1,0,0,0,137,134,
  	1,0,0,0,137,135,1,0,0,0,137,136,1,0,0,0,138,7,1,0,0,0,139,141,7,1,0,0,
  	140,139,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,9,
  	1,0,0,0,144,146,5,50,0,0,145,144,1,0,0,0,145,146,1,0,0,0,146,147,1,0,
  	0,0,147,152,3,12,6,0,148,149,5,78,0,0,149,151,3,12,6,0,150,148,1,0,0,
  	0,151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,159,1,0,0,0,154,
  	152,1,0,0,0,155,157,5,18,0,0,156,155,1,0,0,0,156,157,1,0,0,0,157,158,
  	1,0,0,0,158,160,3,68,34,0,159,156,1,0,0,0,159,160,1,0,0,0,160,11,1,0,
  	0,0,161,162,3,64,32,0,162,163,5,87,0,0,163,164,3,66,33,0,164,13,1,0,0,
  	0,165,167,5,112,0,0,166,168,5,83,0,0,167,166,1,0,0,0,167,168,1,0,0,0,
  	168,170,1,0,0,0,169,171,3,66,33,0,170,169,1,0,0,0,170,171,1,0,0,0,171,
  	176,1,0,0,0,172,173,5,78,0,0,173,175,3,66,33,0,174,172,1,0,0,0,175,178,
  	1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,
  	0,179,181,5,84,0,0,180,179,1,0,0,0,180,181,1,0,0,0,181,15,1,0,0,0,182,
  	183,5,2,0,0,183,184,3,66,33,0,184,186,5,18,0,0,185,187,3,8,4,0,186,185,
  	1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,190,3,60,30,0,189,188,1,0,
  	0,0,190,191,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,195,1,0,0,0,193,
  	194,5,19,0,0,194,196,3,2,1,0,195,193,1,0,0,0,195,196,1,0,0,0,196,197,
  	1,0,0,0,197,198,5,10,0,0,198,17,1,0,0,0,199,200,5,3,0,0,200,201,5,112,
  	0,0,201,202,5,87,0,0,202,209,3,72,36,0,203,204,5,78,0,0,204,205,5,112,
  	0,0,205,206,5,87,0,0,206,208,3,72,36,0,207,203,1,0,0,0,208,211,1,0,0,
  	0,209,207,1,0,0,0,209,210,1,0,0,0,210,216,1,0,0,0,211,209,1,0,0,0,212,
  	214,5,18,0,0,213,212,1,0,0,0,213,214,1,0,0,0,214,215,1,0,0,0,215,217,
  	3,68,34,0,216,213,1,0,0,0,216,217,1,0,0,0,217,19,1,0,0,0,218,219,5,4,
  	0,0,219,224,3,76,38,0,220,221,5,78,0,0,221,223,3,76,38,0,222,220,1,0,
  	0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,21,1,0,0,0,226,
  	224,1,0,0,0,227,228,5,5,0,0,228,229,3,78,39,0,229,23,1,0,0,0,230,231,
  	5,7,0,0,231,233,5,112,0,0,232,234,5,18,0,0,233,232,1,0,0,0,233,234,1,
  	0,0,0,234,235,1,0,0,0,235,236,3,68,34,0,236,238,5,85,0,0,237,239,3,66,
  	33,0,238,237,1,0,0,0,238,239,1,0,0,0,239,244,1,0,0,0,240,241,5,78,0,0,
  	241,243,3,66,33,0,242,240,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,
  	245,1,0,0,0,245,247,1,0,0,0,246,244,1,0,0,0,247,248,5,86,0,0,248,25,1,
  	0,0,0,249,250,5,112,0,0,250,252,5,83,0,0,251,253,3,66,33,0,252,251,1,
  	0,0,0,252,253,1,0,0,0,253,258,1,0,0,0,254,255,5,78,0,0,255,257,3,66,33,
  	0,256,254,1,0,0,0,257,260,1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,
  	261,1,0,0,0,260,258,1,0,0,0,261,262,5,84,0,0,262,27,1,0,0,0,263,264,5,
  	9,0,0,264,29,1,0,0,0,265,266,5,14,0,0,266,271,5,112,0,0,267,269,5,18,
  	0,0,268,267,1,0,0,0,268,269,1,0,0,0,269,270,1,0,0,0,270,272,3,68,34,0,
  	271,268,1,0,0,0,271,272,1,0,0,0,272,273,1,0,0,0,273,274,5,87,0,0,274,
  	275,3,66,33,0,275,276,5,31,0,0,276,279,3,66,33,0,277,278,5,29,0,0,278,
  	280,3,66,33,0,279,277,1,0,0,0,279,280,1,0,0,0,280,281,1,0,0,0,281,282,
  	3,2,1,0,282,283,5,17,0,0,283,31,1,0,0,0,284,285,5,15,0,0,285,287,3,66,
  	33,0,286,288,5,27,0,0,287,286,1,0,0,0,287,288,1,0,0,0,288,289,1,0,0,0,
  	289,292,3,4,2,0,290,291,5,8,0,0,291,293,3,4,2,0,292,290,1,0,0,0,292,293,
  	1,0,0,0,293,33,1,0,0,0,294,295,5,15,0,0,295,297,3,66,33,0,296,298,5,27,
  	0,0,297,296,1,0,0,0,297,298,1,0,0,0,298,299,1,0,0,0,299,300,5,80,0,0,
  	300,304,3,2,1,0,301,302,5,8,0,0,302,303,5,80,0,0,303,305,3,2,1,0,304,
  	301,1,0,0,0,304,305,1,0,0,0,305,306,1,0,0,0,306,307,5,80,0,0,307,308,
  	5,12,0,0,308,35,1,0,0,0,309,310,5,16,0,0,310,311,5,112,0,0,311,37,1,0,
  	0,0,312,314,5,22,0,0,313,312,1,0,0,0,313,314,1,0,0,0,314,328,1,0,0,0,
  	315,320,5,112,0,0,316,318,5,18,0,0,317,316,1,0,0,0,317,318,1,0,0,0,318,
  	319,1,0,0,0,319,321,3,68,34,0,320,317,1,0,0,0,320,321,1,0,0,0,321,329,
  	1,0,0,0,322,323,5,112,0,0,323,325,5,37,0,0,324,326,5,18,0,0,325,324,1,
  	0,0,0,325,326,1,0,0,0,326,327,1,0,0,0,327,329,5,112,0,0,328,315,1,0,0,
  	0,328,322,1,0,0,0,329,39,1,0,0,0,330,341,5,20,0,0,331,336,3,66,33,0,332,
  	334,5,34,0,0,333,332,1,0,0,0,333,334,1,0,0,0,334,335,1,0,0,0,335,337,
  	3,66,33,0,336,333,1,0,0,0,336,337,1,0,0,0,337,339,1,0,0,0,338,340,5,76,
  	0,0,339,338,1,0,0,0,339,340,1,0,0,0,340,342,1,0,0,0,341,331,1,0,0,0,341,
  	342,1,0,0,0,342,41,1,0,0,0,343,344,5,6,0,0,344,346,5,112,0,0,345,347,
  	5,83,0,0,346,345,1,0,0,0,346,347,1,0,0,0,347,351,1,0,0,0,348,350,5,80,
  	0,0,349,348,1,0,0,0,350,353,1,0,0,0,351,349,1,0,0,0,351,352,1,0,0,0,352,
  	355,1,0,0,0,353,351,1,0,0,0,354,356,3,38,19,0,355,354,1,0,0,0,355,356,
  	1,0,0,0,356,367,1,0,0,0,357,361,5,78,0,0,358,360,5,80,0,0,359,358,1,0,
  	0,0,360,363,1,0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,364,1,0,0,0,363,
  	361,1,0,0,0,364,366,3,38,19,0,365,357,1,0,0,0,366,369,1,0,0,0,367,365,
  	1,0,0,0,367,368,1,0,0,0,368,371,1,0,0,0,369,367,1,0,0,0,370,372,5,84,
  	0,0,371,370,1,0,0,0,371,372,1,0,0,0,372,377,1,0,0,0,373,375,5,18,0,0,
  	374,373,1,0,0,0,374,375,1,0,0,0,375,376,1,0,0,0,376,378,3,68,34,0,377,
  	374,1,0,0,0,377,378,1,0,0,0,378,382,1,0,0,0,379,381,3,8,4,0,380,379,1,
  	0,0,0,381,384,1,0,0,0,382,380,1,0,0,0,382,383,1,0,0,0,383,385,1,0,0,0,
  	384,382,1,0,0,0,385,386,3,2,1,0,386,387,5,11,0,0,387,43,1,0,0,0,388,389,
  	5,24,0,0,389,390,3,2,1,0,390,391,5,32,0,0,391,392,3,66,33,0,392,45,1,
  	0,0,0,393,394,5,21,0,0,394,399,3,64,32,0,395,396,5,78,0,0,396,398,3,64,
  	32,0,397,395,1,0,0,0,398,401,1,0,0,0,399,397,1,0,0,0,399,400,1,0,0,0,
  	400,47,1,0,0,0,401,399,1,0,0,0,402,403,5,25,0,0,403,404,3,78,39,0,404,
  	49,1,0,0,0,405,407,5,26,0,0,406,408,3,66,33,0,407,406,1,0,0,0,407,408,
  	1,0,0,0,408,51,1,0,0,0,409,410,5,36,0,0,410,414,5,112,0,0,411,413,3,8,
  	4,0,412,411,1,0,0,0,413,416,1,0,0,0,414,412,1,0,0,0,414,415,1,0,0,0,415,
  	417,1,0,0,0,416,414,1,0,0,0,417,419,5,112,0,0,418,420,5,18,0,0,419,418,
  	1,0,0,0,419,420,1,0,0,0,420,421,1,0,0,0,421,435,3,70,35,0,422,424,3,8,
  	4,0,423,422,1,0,0,0,424,425,1,0,0,0,425,423,1,0,0,0,425,426,1,0,0,0,426,
  	427,1,0,0,0,427,429,5,112,0,0,428,430,5,18,0,0,429,428,1,0,0,0,429,430,
  	1,0,0,0,430,431,1,0,0,0,431,432,3,70,35,0,432,434,1,0,0,0,433,423,1,0,
  	0,0,434,437,1,0,0,0,435,433,1,0,0,0,435,436,1,0,0,0,436,441,1,0,0,0,437,
  	435,1,0,0,0,438,440,3,8,4,0,439,438,1,0,0,0,440,443,1,0,0,0,441,439,1,
  	0,0,0,441,442,1,0,0,0,442,444,1,0,0,0,443,441,1,0,0,0,444,445,5,38,0,
  	0,445,53,1,0,0,0,446,447,5,7,0,0,447,448,5,37,0,0,448,450,5,112,0,0,449,
  	451,5,18,0,0,450,449,1,0,0,0,450,451,1,0,0,0,451,452,1,0,0,0,452,453,
  	5,112,0,0,453,455,5,85,0,0,454,456,3,66,33,0,455,454,1,0,0,0,455,456,
  	1,0,0,0,456,461,1,0,0,0,457,458,5,78,0,0,458,460,3,66,33,0,459,457,1,
  	0,0,0,460,463,1,0,0,0,461,459,1,0,0,0,461,462,1,0,0,0,462,464,1,0,0,0,
  	463,461,1,0,0,0,464,465,5,86,0,0,465,55,1,0,0,0,466,468,5,50,0,0,467,
  	466,1,0,0,0,467,468,1,0,0,0,468,469,1,0,0,0,469,470,5,112,0,0,470,471,
  	5,87,0,0,471,473,5,37,0,0,472,474,5,18,0,0,473,472,1,0,0,0,473,474,1,
  	0,0,0,474,475,1,0,0,0,475,492,5,112,0,0,476,480,5,83,0,0,477,478,5,112,
  	0,0,478,479,5,87,0,0,479,481,3,66,33,0,480,477,1,0,0,0,480,481,1,0,0,
  	0,481,488,1,0,0,0,482,483,5,78,0,0,483,484,5,112,0,0,484,485,5,87,0,0,
  	485,487,3,66,33,0,486,482,1,0,0,0,487,490,1,0,0,0,488,486,1,0,0,0,488,
  	489,1,0,0,0,489,491,1,0,0,0,490,488,1,0,0,0,491,493,5,84,0,0,492,476,
  	1,0,0,0,492,493,1,0,0,0,493,57,1,0,0,0,494,495,5,30,0,0,495,496,3,64,
  	32,0,496,497,5,78,0,0,497,498,3,64,32,0,498,59,1,0,0,0,499,500,5,33,0,
  	0,500,505,3,66,33,0,501,502,5,78,0,0,502,504,3,66,33,0,503,501,1,0,0,
  	0,504,507,1,0,0,0,505,503,1,0,0,0,505,506,1,0,0,0,506,508,1,0,0,0,507,
  	505,1,0,0,0,508,509,3,2,1,0,509,61,1,0,0,0,510,511,5,35,0,0,511,512,3,
  	66,33,0,512,513,3,2,1,0,513,514,5,13,0,0,514,63,1,0,0,0,515,528,5,112,
  	0,0,516,518,5,85,0,0,517,519,3,66,33,0,518,517,1,0,0,0,518,519,1,0,0,
  	0,519,524,1,0,0,0,520,521,5,78,0,0,521,523,3,66,33,0,522,520,1,0,0,0,
  	523,526,1,0,0,0,524,522,1,0,0,0,524,525,1,0,0,0,525,527,1,0,0,0,526,524,
  	1,0,0,0,527,529,5,86,0,0,528,516,1,0,0,0,528,529,1,0,0,0,529,534,1,0,
  	0,0,530,531,5,77,0,0,531,533,5,112,0,0,532,530,1,0,0,0,533,536,1,0,0,
  	0,534,532,1,0,0,0,534,535,1,0,0,0,535,65,1,0,0,0,536,534,1,0,0,0,537,
  	538,6,33,-1,0,538,539,5,83,0,0,539,540,3,66,33,0,540,541,5,84,0,0,541,
  	666,1,0,0,0,542,666,3,72,36,0,543,666,3,26,13,0,544,666,3,64,32,0,545,
  	546,5,95,0,0,546,666,3,66,33,55,547,548,5,94,0,0,548,666,3,66,33,54,549,
  	550,5,70,0,0,550,666,3,66,33,53,551,552,5,71,0,0,552,666,3,66,33,52,553,
  	555,5,72,0,0,554,556,5,83,0,0,555,554,1,0,0,0,555,556,1,0,0,0,556,557,
  	1,0,0,0,557,560,3,66,33,0,558,559,5,34,0,0,559,561,3,66,33,0,560,558,
  	1,0,0,0,560,561,1,0,0,0,561,563,1,0,0,0,562,564,5,84,0,0,563,562,1,0,
  	0,0,563,564,1,0,0,0,564,666,1,0,0,0,565,566,5,42,0,0,566,666,3,66,33,
  	50,567,568,5,102,0,0,568,666,3,66,33,49,569,570,5,103,0,0,570,666,3,66,
  	33,48,571,666,5,61,0,0,572,666,5,60,0,0,573,666,5,39,0,0,574,666,5,40,
  	0,0,575,666,5,41,0,0,576,666,5,53,0,0,577,578,5,47,0,0,578,666,3,66,33,
  	41,579,580,5,54,0,0,580,666,3,66,33,40,581,582,5,56,0,0,582,666,3,66,
  	33,39,583,584,5,43,0,0,584,666,3,66,33,38,585,586,5,44,0,0,586,666,3,
  	66,33,37,587,588,5,45,0,0,588,666,3,66,33,36,589,590,5,46,0,0,590,666,
  	3,66,33,35,591,592,5,48,0,0,592,666,3,66,33,34,593,594,5,49,0,0,594,666,
  	3,66,33,33,595,596,5,55,0,0,596,666,3,66,33,32,597,598,5,51,0,0,598,666,
  	3,66,33,31,599,600,5,52,0,0,600,666,3,66,33,30,601,602,5,57,0,0,602,666,
  	3,66,33,29,603,604,5,58,0,0,604,666,3,66,33,28,605,606,5,59,0,0,606,666,
  	3,66,33,27,607,608,5,62,0,0,608,666,3,66,33,26,609,610,5,63,0,0,610,666,
  	3,66,33,25,611,613,5,64,0,0,612,614,5,83,0,0,613,612,1,0,0,0,613,614,
  	1,0,0,0,614,615,1,0,0,0,615,616,3,66,33,0,616,617,5,78,0,0,617,618,3,
  	66,33,0,618,619,5,78,0,0,619,621,3,66,33,0,620,622,5,84,0,0,621,620,1,
  	0,0,0,621,622,1,0,0,0,622,666,1,0,0,0,623,625,5,65,0,0,624,626,5,83,0,
  	0,625,624,1,0,0,0,625,626,1,0,0,0,626,627,1,0,0,0,627,628,3,66,33,0,628,
  	629,5,78,0,0,629,631,3,66,33,0,630,632,5,84,0,0,631,630,1,0,0,0,631,632,
  	1,0,0,0,632,666,1,0,0,0,633,635,5,66,0,0,634,636,5,83,0,0,635,634,1,0,
  	0,0,635,636,1,0,0,0,636,637,1,0,0,0,637,638,3,66,33,0,638,639,5,78,0,
  	0,639,640,3,66,33,0,640,641,5,78,0,0,641,643,3,66,33,0,642,644,5,84,0,
  	0,643,642,1,0,0,0,643,644,1,0,0,0,644,666,1,0,0,0,645,647,5,67,0,0,646,
  	648,5,83,0,0,647,646,1,0,0,0,647,648,1,0,0,0,648,649,1,0,0,0,649,650,
  	3,66,33,0,650,651,5,78,0,0,651,653,3,66,33,0,652,654,5,84,0,0,653,652,
  	1,0,0,0,653,654,1,0,0,0,654,666,1,0,0,0,655,656,5,68,0,0,656,666,3,66,
  	33,20,657,659,5,28,0,0,658,660,5,83,0,0,659,658,1,0,0,0,659,660,1,0,0,
  	0,660,661,1,0,0,0,661,663,5,112,0,0,662,664,5,84,0,0,663,662,1,0,0,0,
  	663,664,1,0,0,0,664,666,1,0,0,0,665,537,1,0,0,0,665,542,1,0,0,0,665,543,
  	1,0,0,0,665,544,1,0,0,0,665,545,1,0,0,0,665,547,1,0,0,0,665,549,1,0,0,
  	0,665,551,1,0,0,0,665,553,1,0,0,0,665,565,1,0,0,0,665,567,1,0,0,0,665,
  	569,1,0,0,0,665,571,1,0,0,0,665,572,1,0,0,0,665,573,1,0,0,0,665,574,1,
  	0,0,0,665,575,1,0,0,0,665,576,1,0,0,0,665,577,1,0,0,0,665,579,1,0,0,0,
  	665,581,1,0,0,0,665,583,1,0,0,0,665,585,1,0,0,0,665,587,1,0,0,0,665,589,
  	1,0,0,0,665,591,1,0,0,0,665,593,1,0,0,0,665,595,1,0,0,0,665,597,1,0,0,
  	0,665,599,1,0,0,0,665,601,1,0,0,0,665,603,1,0,0,0,665,605,1,0,0,0,665,
  	607,1,0,0,0,665,609,1,0,0,0,665,611,1,0,0,0,665,623,1,0,0,0,665,633,1,
  	0,0,0,665,645,1,0,0,0,665,655,1,0,0,0,665,657,1,0,0,0,666,723,1,0,0,0,
  	667,668,10,18,0,0,668,669,5,93,0,0,669,722,3,66,33,18,670,671,10,17,0,
  	0,671,672,5,97,0,0,672,722,3,66,33,18,673,674,10,16,0,0,674,675,5,96,
  	0,0,675,722,3,66,33,17,676,677,10,15,0,0,677,678,5,101,0,0,678,722,3,
  	66,33,16,679,680,10,14,0,0,680,681,5,100,0,0,681,722,3,66,33,15,682,683,
  	10,13,0,0,683,684,5,94,0,0,684,722,3,66,33,14,685,686,10,12,0,0,686,687,
  	5,95,0,0,687,722,3,66,33,13,688,689,10,11,0,0,689,690,5,98,0,0,690,722,
  	3,66,33,12,691,692,10,10,0,0,692,693,5,99,0,0,693,722,3,66,33,11,694,
  	695,10,9,0,0,695,696,5,87,0,0,696,722,3,66,33,10,697,698,10,8,0,0,698,
  	699,5,88,0,0,699,722,3,66,33,9,700,701,10,7,0,0,701,702,5,89,0,0,702,
  	722,3,66,33,8,703,704,10,6,0,0,704,705,5,90,0,0,705,722,3,66,33,7,706,
  	707,10,5,0,0,707,708,5,91,0,0,708,722,3,66,33,6,709,710,10,4,0,0,710,
  	711,5,92,0,0,711,722,3,66,33,5,712,713,10,3,0,0,713,714,5,104,0,0,714,
  	722,3,66,33,4,715,716,10,2,0,0,716,717,5,105,0,0,717,722,3,66,33,3,718,
  	719,10,1,0,0,719,720,5,106,0,0,720,722,3,66,33,2,721,667,1,0,0,0,721,
  	670,1,0,0,0,721,673,1,0,0,0,721,676,1,0,0,0,721,679,1,0,0,0,721,682,1,
  	0,0,0,721,685,1,0,0,0,721,688,1,0,0,0,721,691,1,0,0,0,721,694,1,0,0,0,
  	721,697,1,0,0,0,721,700,1,0,0,0,721,703,1,0,0,0,721,706,1,0,0,0,721,709,
  	1,0,0,0,721,712,1,0,0,0,721,715,1,0,0,0,721,718,1,0,0,0,722,725,1,0,0,
  	0,723,721,1,0,0,0,723,724,1,0,0,0,724,67,1,0,0,0,725,723,1,0,0,0,726,
  	727,7,2,0,0,727,69,1,0,0,0,728,729,7,3,0,0,729,71,1,0,0,0,730,734,3,74,
  	37,0,731,734,3,76,38,0,732,734,3,78,39,0,733,730,1,0,0,0,733,731,1,0,
  	0,0,733,732,1,0,0,0,734,73,1,0,0,0,735,737,7,4,0,0,736,735,1,0,0,0,736,
  	737,1,0,0,0,737,738,1,0,0,0,738,739,5,110,0,0,739,75,1,0,0,0,740,747,
  	5,108,0,0,741,747,5,109,0,0,742,744,7,4,0,0,743,742,1,0,0,0,743,744,1,
  	0,0,0,744,745,1,0,0,0,745,747,5,111,0,0,746,740,1,0,0,0,746,741,1,0,0,
  	0,746,743,1,0,0,0,747,77,1,0,0,0,748,749,5,107,0,0,749,79,1,0,0,0,94,
  	86,92,96,102,107,111,137,142,145,152,156,159,167,170,176,180,186,191,
  	195,209,213,216,224,233,238,244,252,258,268,271,279,287,292,297,304,313,
  	317,320,325,328,333,336,339,341,346,351,355,361,367,371,374,377,382,399,
  	407,414,419,425,429,435,441,450,455,461,467,473,480,488,492,505,518,524,
  	528,534,555,560,563,613,621,625,631,635,643,647,653,659,663,665,721,723,
  	733,736,743,746
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
    setState(80);
    statements();
    setState(81);
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
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(86);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE) {
          setState(83);
          separator();
          setState(88);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(89);
        statement();
        setState(92);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(90);
          separator();
          break;
        }

        case 2: {
          setState(91);
          match(DaricParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(98);
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
    setState(109); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(102);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == DaricParser::COLON) {
                setState(99);
                match(DaricParser::COLON);
                setState(104);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(105);
              statement();
              setState(107);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(106);
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
      setState(111); 
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

DaricParser::ModuleContext* DaricParser::StatementContext::module() {
  return getRuleContext<DaricParser::ModuleContext>(0);
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
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(113);
      match(DaricParser::COMMENT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(114);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(115);
      call();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(116);
      case_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(117);
      const_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(118);
      data();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(119);
      dataLabel();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(120);
      dim();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(121);
      end();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(122);
      for_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(123);
      if_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(124);
      ifml();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(125);
      module();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(126);
      procedure();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(127);
      print();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(128);
      read();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(129);
      repeat();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(130);
      restore();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(131);
      return_();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(132);
      struct_();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(133);
      structDim();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(134);
      structInstance();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(135);
      swap();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(136);
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
    setState(140); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(139);
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
      setState(142); 
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
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(144);
      match(DaricParser::LET);
    }
    setState(147);
    assignment();
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(148);
      match(DaricParser::COMMA);
      setState(149);
      assignment();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & 33776997205278721) != 0) {
      setState(156);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(155);
        match(DaricParser::OF);
      }
      setState(158);
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
    setState(161);
    variable();
    setState(162);
    match(DaricParser::EQ);
    setState(163);
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
    setState(165);
    match(DaricParser::IDENTIFIER);
    setState(167);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(166);
      antlrcpp::downCast<CallContext *>(_localctx)->name = match(DaricParser::LPAREN);
      break;
    }

    default:
      break;
    }
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(169);
      expression(0);
      break;
    }

    default:
      break;
    }
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(172);
      match(DaricParser::COMMA);
      setState(173);
      expression(0);
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(179);
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
    setState(182);
    match(DaricParser::CASE);
    setState(183);
    expression(0);
    setState(184);
    match(DaricParser::OF);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(185);
      separator();
    }
    setState(189); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(188);
      when();
      setState(191); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DaricParser::WHEN);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OTHERWISE) {
      setState(193);
      match(DaricParser::OTHERWISE);
      setState(194);
      statements();
    }
    setState(197);
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
    setState(199);
    match(DaricParser::CONST);
    setState(200);
    match(DaricParser::IDENTIFIER);
    setState(201);
    match(DaricParser::EQ);
    setState(202);
    literal();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(203);
      match(DaricParser::COMMA);
      setState(204);
      match(DaricParser::IDENTIFIER);
      setState(205);
      match(DaricParser::EQ);
      setState(206);
      literal();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & 33776997205278721) != 0) {
      setState(213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(212);
        match(DaricParser::OF);
      }
      setState(215);
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
    setState(218);
    match(DaricParser::DATA);
    setState(219);
    integerLiteral();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(220);
      match(DaricParser::COMMA);
      setState(221);
      integerLiteral();
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
    setState(227);
    match(DaricParser::DATALABEL);
    setState(228);
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
    setState(230);
    match(DaricParser::DIM);
    setState(231);
    match(DaricParser::IDENTIFIER);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(232);
      match(DaricParser::OF);
    }
    setState(235);
    type();
    setState(236);
    match(DaricParser::SOPEN);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1126449394221056) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 554981715870175) != 0) {
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
    setState(249);
    match(DaricParser::IDENTIFIER);
    setState(250);
    match(DaricParser::LPAREN);
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1126449394221056) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 554981715870175) != 0) {
      setState(251);
      expression(0);
    }
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(254);
      match(DaricParser::COMMA);
      setState(255);
      expression(0);
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(261);
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
    setState(263);
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
    setState(265);
    match(DaricParser::FOR);
    setState(266);
    match(DaricParser::IDENTIFIER);
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & 33776997205278721) != 0) {
      setState(268);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(267);
        match(DaricParser::OF);
      }
      setState(270);
      type();
    }
    setState(273);
    match(DaricParser::EQ);
    setState(274);
    expression(0);
    setState(275);
    match(DaricParser::TO);
    setState(276);
    expression(0);
    setState(279);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::STEP) {
      setState(277);
      match(DaricParser::STEP);
      setState(278);
      expression(0);
    }
    setState(281);
    statements();
    setState(282);
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
    setState(284);
    match(DaricParser::IF);
    setState(285);
    expression(0);
    setState(287);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(286);
      match(DaricParser::THEN);
    }
    setState(289);
    statementsl();
    setState(292);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(290);
      match(DaricParser::ELSE);
      setState(291);
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
    setState(294);
    match(DaricParser::IF);
    setState(295);
    expression(0);
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::THEN) {
      setState(296);
      match(DaricParser::THEN);
    }
    setState(299);
    match(DaricParser::NEWLINE);
    setState(300);
    statements();
    setState(304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(301);
      match(DaricParser::ELSE);
      setState(302);
      match(DaricParser::NEWLINE);
      setState(303);
      statements();
    }
    setState(306);
    match(DaricParser::NEWLINE);
    setState(307);
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
  enterRule(_localctx, 36, DaricParser::RuleModule);

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
    match(DaricParser::MODULE);
    setState(310);
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
  enterRule(_localctx, 38, DaricParser::RuleParameter);
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
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::REF) {
      setState(312);
      match(DaricParser::REF);
    }
    setState(328);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(315);
      match(DaricParser::IDENTIFIER);
      setState(320);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(317);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(316);
          match(DaricParser::OF);
        }
        setState(319);
        type();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(322);
      match(DaricParser::IDENTIFIER);
      setState(323);
      match(DaricParser::RECORD);
      setState(325);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(324);
        match(DaricParser::OF);
      }
      setState(327);
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
  enterRule(_localctx, 40, DaricParser::RulePrint);
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
    setState(330);
    match(DaricParser::PRINT);
    setState(341);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(331);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(333);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(332);
          match(DaricParser::WITH);
        }
        setState(335);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(339);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(338);
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
  enterRule(_localctx, 42, DaricParser::RuleProcedure);
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
    setState(343);
    match(DaricParser::DEF);
    setState(344);
    match(DaricParser::IDENTIFIER);
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(345);
      match(DaricParser::LPAREN);
    }
    setState(351);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(348);
        match(DaricParser::NEWLINE); 
      }
      setState(353);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(355);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(354);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(367);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(357);
      match(DaricParser::COMMA);
      setState(361);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::NEWLINE) {
        setState(358);
        match(DaricParser::NEWLINE);
        setState(363);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(364);
      parameter();
      setState(369);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(370);
      match(DaricParser::RPAREN);
    }
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & 33776997205278721) != 0) {
      setState(374);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(373);
        match(DaricParser::OF);
      }
      setState(376);
      type();
    }
    setState(382);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(379);
        separator(); 
      }
      setState(384);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
    setState(385);
    statements();
    setState(386);
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
  enterRule(_localctx, 44, DaricParser::RuleRepeat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(DaricParser::REPEAT);
    setState(389);
    statements();
    setState(390);
    match(DaricParser::UNTIL);
    setState(391);
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
  enterRule(_localctx, 46, DaricParser::RuleRead);
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
    setState(393);
    match(DaricParser::READ);
    setState(394);
    variable();
    setState(399);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(395);
      match(DaricParser::COMMA);
      setState(396);
      variable();
      setState(401);
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
  enterRule(_localctx, 48, DaricParser::RuleRestore);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(DaricParser::RESTORE);
    setState(403);
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
  enterRule(_localctx, 50, DaricParser::RuleReturn);

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
    match(DaricParser::RETURN);
    setState(407);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(406);
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
  enterRule(_localctx, 52, DaricParser::RuleStruct);
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
    setState(409);
    match(DaricParser::DEFRECORD);
    setState(410);
    match(DaricParser::IDENTIFIER);
    setState(414);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(411);
      separator();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(417);
    match(DaricParser::IDENTIFIER);
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(418);
      match(DaricParser::OF);
    }
    setState(421);
    typeOrStruct();
    setState(435);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(423); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(422);
          separator();
          setState(425); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(427);
        match(DaricParser::IDENTIFIER);
        setState(429);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(428);
          match(DaricParser::OF);
        }
        setState(431);
        typeOrStruct(); 
      }
      setState(437);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(438);
      separator();
      setState(443);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(444);
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
  enterRule(_localctx, 54, DaricParser::RuleStructDim);
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
    setState(446);
    match(DaricParser::DIM);
    setState(447);
    match(DaricParser::RECORD);
    setState(448);
    match(DaricParser::IDENTIFIER);
    setState(450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(449);
      match(DaricParser::OF);
    }
    setState(452);
    match(DaricParser::IDENTIFIER);
    setState(453);
    match(DaricParser::SOPEN);
    setState(455);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1126449394221056) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 554981715870175) != 0) {
      setState(454);
      expression(0);
    }
    setState(461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(457);
      match(DaricParser::COMMA);
      setState(458);
      expression(0);
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(464);
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
  enterRule(_localctx, 56, DaricParser::RuleStructInstance);
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
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LET) {
      setState(466);
      match(DaricParser::LET);
    }
    setState(469);
    match(DaricParser::IDENTIFIER);
    setState(470);
    match(DaricParser::EQ);
    setState(471);
    match(DaricParser::RECORD);
    setState(473);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(472);
      match(DaricParser::OF);
    }
    setState(475);
    match(DaricParser::IDENTIFIER);
    setState(492);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(476);
      match(DaricParser::LPAREN);
      setState(480);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::IDENTIFIER) {
        setState(477);
        match(DaricParser::IDENTIFIER);
        setState(478);
        match(DaricParser::EQ);
        setState(479);
        expression(0);
      }
      setState(488);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(482);
        match(DaricParser::COMMA);
        setState(483);
        match(DaricParser::IDENTIFIER);
        setState(484);
        match(DaricParser::EQ);
        setState(485);
        expression(0);
        setState(490);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(491);
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
  enterRule(_localctx, 58, DaricParser::RuleSwap);

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
    match(DaricParser::SWAP);
    setState(495);
    variable();
    setState(496);
    match(DaricParser::COMMA);
    setState(497);
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
  enterRule(_localctx, 60, DaricParser::RuleWhen);
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
    setState(499);
    match(DaricParser::WHEN);
    setState(500);
    expression(0);
    setState(505);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(501);
      match(DaricParser::COMMA);
      setState(502);
      expression(0);
      setState(507);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(508);
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
  enterRule(_localctx, 62, DaricParser::RuleWhile);

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
    match(DaricParser::WHILE);
    setState(511);
    expression(0);
    setState(512);
    statements();
    setState(513);
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
  enterRule(_localctx, 64, DaricParser::RuleVariable);
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
    setState(515);
    match(DaricParser::IDENTIFIER);
    setState(528);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(516);
      match(DaricParser::SOPEN);
      setState(518);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -1126449394221056) != 0 || (((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 554981715870175) != 0) {
        setState(517);
        expression(0);
      }
      setState(524);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(520);
        match(DaricParser::COMMA);
        setState(521);
        expression(0);
        setState(526);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(527);
      match(DaricParser::SCLOSE);
      break;
    }

    default:
      break;
    }
    setState(534);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(530);
        match(DaricParser::DOT);
        setState(531);
        match(DaricParser::IDENTIFIER); 
      }
      setState(536);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
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
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, DaricParser::RuleExpression, precedence);

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
    setState(665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      setState(538);
      match(DaricParser::LPAREN);
      setState(539);
      expression(0);
      setState(540);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(542);
      literal();
      break;
    }

    case 3: {
      setState(543);
      exprcall();
      break;
    }

    case 4: {
      setState(544);
      variable();
      break;
    }

    case 5: {
      setState(545);
      match(DaricParser::MINUS);
      setState(546);
      expression(55);
      break;
    }

    case 6: {
      setState(547);
      match(DaricParser::PLUS);
      setState(548);
      expression(54);
      break;
    }

    case 7: {
      setState(549);
      match(DaricParser::INT);
      setState(550);
      expression(53);
      break;
    }

    case 8: {
      setState(551);
      match(DaricParser::FLOAT);
      setState(552);
      expression(52);
      break;
    }

    case 9: {
      setState(553);
      match(DaricParser::STRING);
      setState(555);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(554);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(557);
      expression(0);
      setState(560);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(558);
        match(DaricParser::WITH);
        setState(559);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(563);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(562);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      setState(565);
      match(DaricParser::ABS);
      setState(566);
      expression(50);
      break;
    }

    case 11: {
      setState(567);
      match(DaricParser::COMP);
      setState(568);
      expression(49);
      break;
    }

    case 12: {
      setState(569);
      match(DaricParser::NOT);
      setState(570);
      expression(48);
      break;
    }

    case 13: {
      setState(571);
      match(DaricParser::TRUE);
      break;
    }

    case 14: {
      setState(572);
      match(DaricParser::FALSE);
      break;
    }

    case 15: {
      setState(573);
      match(DaricParser::HPTIME);
      break;
    }

    case 16: {
      setState(574);
      match(DaricParser::TIME);
      break;
    }

    case 17: {
      setState(575);
      match(DaricParser::TIMES);
      break;
    }

    case 18: {
      setState(576);
      match(DaricParser::PI);
      break;
    }

    case 19: {
      setState(577);
      match(DaricParser::DEG);
      setState(578);
      expression(41);
      break;
    }

    case 20: {
      setState(579);
      match(DaricParser::RAD);
      setState(580);
      expression(40);
      break;
    }

    case 21: {
      setState(581);
      match(DaricParser::SGN);
      setState(582);
      expression(39);
      break;
    }

    case 22: {
      setState(583);
      match(DaricParser::ACS);
      setState(584);
      expression(38);
      break;
    }

    case 23: {
      setState(585);
      match(DaricParser::ASN);
      setState(586);
      expression(37);
      break;
    }

    case 24: {
      setState(587);
      match(DaricParser::ATN);
      setState(588);
      expression(36);
      break;
    }

    case 25: {
      setState(589);
      match(DaricParser::COS);
      setState(590);
      expression(35);
      break;
    }

    case 26: {
      setState(591);
      match(DaricParser::EXP);
      setState(592);
      expression(34);
      break;
    }

    case 27: {
      setState(593);
      match(DaricParser::FLOOR);
      setState(594);
      expression(33);
      break;
    }

    case 28: {
      setState(595);
      match(DaricParser::ROUND);
      setState(596);
      expression(32);
      break;
    }

    case 29: {
      setState(597);
      match(DaricParser::LN);
      setState(598);
      expression(31);
      break;
    }

    case 30: {
      setState(599);
      match(DaricParser::LOG);
      setState(600);
      expression(30);
      break;
    }

    case 31: {
      setState(601);
      match(DaricParser::SIN);
      setState(602);
      expression(29);
      break;
    }

    case 32: {
      setState(603);
      match(DaricParser::SQR);
      setState(604);
      expression(28);
      break;
    }

    case 33: {
      setState(605);
      match(DaricParser::TAN);
      setState(606);
      expression(27);
      break;
    }

    case 34: {
      setState(607);
      match(DaricParser::ASC);
      setState(608);
      expression(26);
      break;
    }

    case 35: {
      setState(609);
      match(DaricParser::CHRS);
      setState(610);
      expression(25);
      break;
    }

    case 36: {
      setState(611);
      match(DaricParser::INSTR);
      setState(613);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
      case 1: {
        setState(612);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(615);
      expression(0);
      setState(616);
      match(DaricParser::COMMA);
      setState(617);
      expression(0);
      setState(618);
      match(DaricParser::COMMA);
      setState(619);
      expression(0);
      setState(621);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
      case 1: {
        setState(620);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(623);
      match(DaricParser::LEFTS);
      setState(625);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
      case 1: {
        setState(624);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(627);
      expression(0);
      setState(628);
      match(DaricParser::COMMA);
      setState(629);
      expression(0);
      setState(631);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
      case 1: {
        setState(630);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(633);
      match(DaricParser::MIDS);
      setState(635);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
      case 1: {
        setState(634);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(637);
      expression(0);
      setState(638);
      match(DaricParser::COMMA);
      setState(639);
      expression(0);
      setState(640);
      match(DaricParser::COMMA);
      setState(641);
      expression(0);
      setState(643);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
      case 1: {
        setState(642);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 39: {
      setState(645);
      match(DaricParser::RIGHTS);
      setState(647);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
      case 1: {
        setState(646);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(649);
      expression(0);
      setState(650);
      match(DaricParser::COMMA);
      setState(651);
      expression(0);
      setState(653);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
      case 1: {
        setState(652);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 40: {
      setState(655);
      match(DaricParser::LEN);
      setState(656);
      expression(20);
      break;
    }

    case 41: {
      setState(657);
      match(DaricParser::SIZE);
      setState(659);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::LPAREN) {
        setState(658);
        match(DaricParser::LPAREN);
      }
      setState(661);
      match(DaricParser::IDENTIFIER);
      setState(663);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
      case 1: {
        setState(662);
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
    setState(723);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(721);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(667);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(668);
          match(DaricParser::HAT);
          setState(669);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(670);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(671);
          match(DaricParser::DIVIDE);
          setState(672);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(673);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(674);
          match(DaricParser::MULTIPLY);
          setState(675);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(676);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(677);
          match(DaricParser::DIV);
          setState(678);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(679);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(680);
          match(DaricParser::MOD);
          setState(681);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(682);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(683);
          match(DaricParser::PLUS);
          setState(684);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(685);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(686);
          match(DaricParser::MINUS);
          setState(687);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(688);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(689);
          match(DaricParser::SHL);
          setState(690);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(691);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(692);
          match(DaricParser::SHR);
          setState(693);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(694);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(695);
          match(DaricParser::EQ);
          setState(696);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(697);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(698);
          match(DaricParser::NE);
          setState(699);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(700);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(701);
          match(DaricParser::GT);
          setState(702);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(703);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(704);
          match(DaricParser::GE);
          setState(705);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(706);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(707);
          match(DaricParser::LT);
          setState(708);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(709);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(710);
          match(DaricParser::LE);
          setState(711);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(712);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(713);
          match(DaricParser::AND);
          setState(714);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(715);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(716);
          match(DaricParser::OR);
          setState(717);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(718);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(719);
          match(DaricParser::EOR);
          setState(720);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(725);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
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
  enterRule(_localctx, 68, DaricParser::RuleType);
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
    setState(726);
    _la = _input->LA(1);
    if (!((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 15) != 0)) {
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
  enterRule(_localctx, 70, DaricParser::RuleTypeOrStruct);
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
    setState(728);
    _la = _input->LA(1);
    if (!((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 72, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(733);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(730);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(731);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(732);
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
  enterRule(_localctx, 74, DaricParser::RuleFloatLiteral);
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
    setState(736);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(735);
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
    setState(738);
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
  enterRule(_localctx, 76, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(746);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(740);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(741);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(743);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(742);
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
        setState(745);
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
  enterRule(_localctx, 78, DaricParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
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
    case 33: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

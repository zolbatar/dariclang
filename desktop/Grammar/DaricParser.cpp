
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
      "if", "ifml", "module", "parameter", "print", "procedure", "return", 
      "struct", "structDim", "structInstance", "swap", "variable", "expression", 
      "type", "typeOrStruct", "literal", "floatLiteral", "integerLiteral", 
      "stringLiteral"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "'$'", "'#'", "':'", "';'", "'.'", "','", "'''", 
      "", "'%'", "'_'", "'('", "')'", "'['", "']'", "'='", "'<>'", "'>'", 
      "'>='", "'<'", "'<='", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", 
      "'>>'", "", "", "'~'"
    },
    std::vector<std::string>{
      "", "COMMENT", "CONST", "DEF", "DIM", "ELSE", "END", "ENDDEF", "ENDIF", 
      "IF", "MODULE", "OF", "PRINT", "PRIVATE", "REM", "RETURN", "THEN", 
      "SWAP", "WITH", "DEFRECORD", "RECORD", "ENDRECORD", "HPTIME", "TIME", 
      "TIMES", "ABS", "ACS", "ASN", "ATN", "COS", "DEG", "EXP", "FLOOR", 
      "LET", "LN", "LOG", "PI", "RAD", "ROUND", "SGN", "SIN", "SQR", "TAN", 
      "FALSE", "TRUE", "ASC", "CHRS", "INSTR", "LEFTS", "MIDS", "RIGHTS", 
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
  	4,1,96,607,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,1,5,1,67,8,1,10,1,12,1,70,9,1,1,
  	1,1,1,1,1,3,1,75,8,1,5,1,77,8,1,10,1,12,1,80,9,1,1,2,5,2,83,8,2,10,2,
  	12,2,86,9,2,1,2,1,2,4,2,90,8,2,11,2,12,2,91,1,2,3,2,95,8,2,5,2,97,8,2,
  	10,2,12,2,100,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,3,3,118,8,3,1,4,4,4,121,8,4,11,4,12,4,122,1,5,3,5,126,8,5,
  	1,5,1,5,1,5,5,5,131,8,5,10,5,12,5,134,9,5,1,5,3,5,137,8,5,1,5,3,5,140,
  	8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,3,7,149,8,7,1,7,1,7,5,7,153,8,7,10,7,
  	12,7,156,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,168,8,8,10,8,
  	12,8,171,9,8,1,8,3,8,174,8,8,1,8,3,8,177,8,8,1,9,1,9,1,9,3,9,182,8,9,
  	1,9,1,9,1,9,3,9,187,8,9,1,9,1,9,5,9,191,8,9,10,9,12,9,194,9,9,1,9,1,9,
  	1,10,1,10,1,10,3,10,201,8,10,1,10,1,10,5,10,205,8,10,10,10,12,10,208,
  	9,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,3,12,217,8,12,1,12,1,12,1,12,
  	3,12,222,8,12,1,13,1,13,1,13,3,13,227,8,13,1,13,1,13,1,13,3,13,232,8,
  	13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,3,15,241,8,15,1,15,3,15,244,8,15,
  	1,16,1,16,1,16,3,16,249,8,16,1,16,3,16,252,8,16,1,16,3,16,255,8,16,3,
  	16,257,8,16,1,17,3,17,260,8,17,1,17,1,17,1,17,3,17,265,8,17,1,17,3,17,
  	268,8,17,1,17,3,17,271,8,17,1,17,3,17,274,8,17,1,17,1,17,5,17,278,8,17,
  	10,17,12,17,281,9,17,1,17,3,17,284,8,17,1,17,5,17,287,8,17,10,17,12,17,
  	290,9,17,1,17,1,17,1,17,1,18,1,18,3,18,297,8,18,1,19,1,19,1,19,5,19,302,
  	8,19,10,19,12,19,305,9,19,1,19,1,19,3,19,309,8,19,1,19,1,19,4,19,313,
  	8,19,11,19,12,19,314,1,19,1,19,3,19,319,8,19,1,19,1,19,5,19,323,8,19,
  	10,19,12,19,326,9,19,1,19,5,19,329,8,19,10,19,12,19,332,9,19,1,19,1,19,
  	1,20,1,20,1,20,3,20,339,8,20,1,20,1,20,1,20,3,20,344,8,20,1,20,1,20,5,
  	20,348,8,20,10,20,12,20,351,9,20,1,20,1,20,1,21,1,21,1,21,3,21,358,8,
  	21,1,21,1,21,1,21,3,21,363,8,21,1,21,1,21,5,21,367,8,21,10,21,12,21,370,
  	9,21,1,21,3,21,373,8,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,5,23,
  	383,8,23,10,23,12,23,386,9,23,1,23,1,23,3,23,390,8,23,1,23,1,23,5,23,
  	394,8,23,10,23,12,23,397,9,23,1,23,3,23,400,8,23,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	3,24,420,8,24,1,24,1,24,1,24,3,24,425,8,24,1,24,3,24,428,8,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,3,24,478,8,24,1,24,1,24,1,24,1,24,1,24,1,24,3,
  	24,486,8,24,1,24,1,24,3,24,490,8,24,1,24,1,24,1,24,1,24,3,24,496,8,24,
  	1,24,1,24,3,24,500,8,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,508,8,24,1,
  	24,1,24,3,24,512,8,24,1,24,1,24,1,24,1,24,3,24,518,8,24,1,24,1,24,3,24,
  	522,8,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	5,24,578,8,24,10,24,12,24,581,9,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,
  	3,27,590,8,27,1,28,3,28,593,8,28,1,28,1,28,1,29,1,29,1,29,3,29,600,8,
  	29,1,29,3,29,603,8,29,1,30,1,30,1,30,0,1,48,31,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,0,4,
  	2,0,58,58,63,63,1,0,52,55,2,0,52,55,95,95,1,0,77,78,724,0,62,1,0,0,0,
  	2,78,1,0,0,0,4,98,1,0,0,0,6,117,1,0,0,0,8,120,1,0,0,0,10,125,1,0,0,0,
  	12,141,1,0,0,0,14,145,1,0,0,0,16,159,1,0,0,0,18,178,1,0,0,0,20,197,1,
  	0,0,0,22,211,1,0,0,0,24,213,1,0,0,0,26,223,1,0,0,0,28,235,1,0,0,0,30,
  	238,1,0,0,0,32,245,1,0,0,0,34,259,1,0,0,0,36,294,1,0,0,0,38,298,1,0,0,
  	0,40,335,1,0,0,0,42,354,1,0,0,0,44,374,1,0,0,0,46,379,1,0,0,0,48,521,
  	1,0,0,0,50,582,1,0,0,0,52,584,1,0,0,0,54,589,1,0,0,0,56,592,1,0,0,0,58,
  	602,1,0,0,0,60,604,1,0,0,0,62,63,3,2,1,0,63,64,5,0,0,1,64,1,1,0,0,0,65,
  	67,5,58,0,0,66,65,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,
  	71,1,0,0,0,70,68,1,0,0,0,71,74,3,6,3,0,72,75,3,8,4,0,73,75,5,0,0,1,74,
  	72,1,0,0,0,74,73,1,0,0,0,74,75,1,0,0,0,75,77,1,0,0,0,76,68,1,0,0,0,77,
  	80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,3,1,0,0,0,80,78,1,0,0,0,81,
  	83,5,58,0,0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,0,85,
  	87,1,0,0,0,86,84,1,0,0,0,87,94,3,6,3,0,88,90,5,58,0,0,89,88,1,0,0,0,90,
  	91,1,0,0,0,91,89,1,0,0,0,91,92,1,0,0,0,92,95,1,0,0,0,93,95,5,0,0,1,94,
  	89,1,0,0,0,94,93,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,84,1,0,0,0,97,
  	100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,5,1,0,0,0,100,98,1,0,0,0,101,
  	118,5,1,0,0,102,118,3,10,5,0,103,118,3,14,7,0,104,118,3,16,8,0,105,118,
  	3,18,9,0,106,118,3,22,11,0,107,118,3,24,12,0,108,118,3,26,13,0,109,118,
  	3,28,14,0,110,118,3,34,17,0,111,118,3,32,16,0,112,118,3,36,18,0,113,118,
  	3,38,19,0,114,118,3,40,20,0,115,118,3,42,21,0,116,118,3,44,22,0,117,101,
  	1,0,0,0,117,102,1,0,0,0,117,103,1,0,0,0,117,104,1,0,0,0,117,105,1,0,0,
  	0,117,106,1,0,0,0,117,107,1,0,0,0,117,108,1,0,0,0,117,109,1,0,0,0,117,
  	110,1,0,0,0,117,111,1,0,0,0,117,112,1,0,0,0,117,113,1,0,0,0,117,114,1,
  	0,0,0,117,115,1,0,0,0,117,116,1,0,0,0,118,7,1,0,0,0,119,121,7,0,0,0,120,
  	119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,9,1,0,
  	0,0,124,126,5,33,0,0,125,124,1,0,0,0,125,126,1,0,0,0,126,127,1,0,0,0,
  	127,132,3,12,6,0,128,129,5,61,0,0,129,131,3,12,6,0,130,128,1,0,0,0,131,
  	134,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,139,1,0,0,0,134,132,1,
  	0,0,0,135,137,5,11,0,0,136,135,1,0,0,0,136,137,1,0,0,0,137,138,1,0,0,
  	0,138,140,3,50,25,0,139,136,1,0,0,0,139,140,1,0,0,0,140,11,1,0,0,0,141,
  	142,3,46,23,0,142,143,5,70,0,0,143,144,3,48,24,0,144,13,1,0,0,0,145,146,
  	5,95,0,0,146,148,5,66,0,0,147,149,3,48,24,0,148,147,1,0,0,0,148,149,1,
  	0,0,0,149,154,1,0,0,0,150,151,5,61,0,0,151,153,3,48,24,0,152,150,1,0,
  	0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,157,1,0,0,0,156,
  	154,1,0,0,0,157,158,5,67,0,0,158,15,1,0,0,0,159,160,5,2,0,0,160,161,5,
  	95,0,0,161,162,5,70,0,0,162,169,3,54,27,0,163,164,5,61,0,0,164,165,5,
  	95,0,0,165,166,5,70,0,0,166,168,3,54,27,0,167,163,1,0,0,0,168,171,1,0,
  	0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,176,1,0,0,0,171,169,1,0,0,0,172,
  	174,5,11,0,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,177,
  	3,50,25,0,176,173,1,0,0,0,176,177,1,0,0,0,177,17,1,0,0,0,178,179,5,4,
  	0,0,179,181,5,95,0,0,180,182,5,11,0,0,181,180,1,0,0,0,181,182,1,0,0,0,
  	182,183,1,0,0,0,183,184,3,50,25,0,184,186,5,68,0,0,185,187,3,48,24,0,
  	186,185,1,0,0,0,186,187,1,0,0,0,187,192,1,0,0,0,188,189,5,61,0,0,189,
  	191,3,48,24,0,190,188,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,
  	1,0,0,0,193,195,1,0,0,0,194,192,1,0,0,0,195,196,5,69,0,0,196,19,1,0,0,
  	0,197,198,5,95,0,0,198,200,5,66,0,0,199,201,3,48,24,0,200,199,1,0,0,0,
  	200,201,1,0,0,0,201,206,1,0,0,0,202,203,5,61,0,0,203,205,3,48,24,0,204,
  	202,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,209,1,
  	0,0,0,208,206,1,0,0,0,209,210,5,67,0,0,210,21,1,0,0,0,211,212,5,6,0,0,
  	212,23,1,0,0,0,213,214,5,9,0,0,214,216,3,48,24,0,215,217,5,16,0,0,216,
  	215,1,0,0,0,216,217,1,0,0,0,217,218,1,0,0,0,218,221,3,4,2,0,219,220,5,
  	5,0,0,220,222,3,4,2,0,221,219,1,0,0,0,221,222,1,0,0,0,222,25,1,0,0,0,
  	223,224,5,9,0,0,224,226,3,48,24,0,225,227,5,16,0,0,226,225,1,0,0,0,226,
  	227,1,0,0,0,227,228,1,0,0,0,228,231,3,2,1,0,229,230,5,5,0,0,230,232,3,
  	2,1,0,231,229,1,0,0,0,231,232,1,0,0,0,232,233,1,0,0,0,233,234,5,8,0,0,
  	234,27,1,0,0,0,235,236,5,10,0,0,236,237,5,95,0,0,237,29,1,0,0,0,238,243,
  	5,95,0,0,239,241,5,11,0,0,240,239,1,0,0,0,240,241,1,0,0,0,241,242,1,0,
  	0,0,242,244,3,50,25,0,243,240,1,0,0,0,243,244,1,0,0,0,244,31,1,0,0,0,
  	245,256,5,12,0,0,246,251,3,48,24,0,247,249,5,18,0,0,248,247,1,0,0,0,248,
  	249,1,0,0,0,249,250,1,0,0,0,250,252,3,48,24,0,251,248,1,0,0,0,251,252,
  	1,0,0,0,252,254,1,0,0,0,253,255,5,59,0,0,254,253,1,0,0,0,254,255,1,0,
  	0,0,255,257,1,0,0,0,256,246,1,0,0,0,256,257,1,0,0,0,257,33,1,0,0,0,258,
  	260,5,13,0,0,259,258,1,0,0,0,259,260,1,0,0,0,260,261,1,0,0,0,261,262,
  	5,3,0,0,262,267,5,95,0,0,263,265,5,11,0,0,264,263,1,0,0,0,264,265,1,0,
  	0,0,265,266,1,0,0,0,266,268,3,50,25,0,267,264,1,0,0,0,267,268,1,0,0,0,
  	268,270,1,0,0,0,269,271,5,66,0,0,270,269,1,0,0,0,270,271,1,0,0,0,271,
  	273,1,0,0,0,272,274,3,30,15,0,273,272,1,0,0,0,273,274,1,0,0,0,274,279,
  	1,0,0,0,275,276,5,61,0,0,276,278,3,30,15,0,277,275,1,0,0,0,278,281,1,
  	0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,283,1,0,0,0,281,279,1,0,0,0,
  	282,284,5,67,0,0,283,282,1,0,0,0,283,284,1,0,0,0,284,288,1,0,0,0,285,
  	287,3,8,4,0,286,285,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,288,289,1,
  	0,0,0,289,291,1,0,0,0,290,288,1,0,0,0,291,292,3,2,1,0,292,293,5,7,0,0,
  	293,35,1,0,0,0,294,296,5,15,0,0,295,297,3,48,24,0,296,295,1,0,0,0,296,
  	297,1,0,0,0,297,37,1,0,0,0,298,299,5,19,0,0,299,303,5,95,0,0,300,302,
  	3,8,4,0,301,300,1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,
  	0,304,306,1,0,0,0,305,303,1,0,0,0,306,308,5,95,0,0,307,309,5,11,0,0,308,
  	307,1,0,0,0,308,309,1,0,0,0,309,310,1,0,0,0,310,324,3,52,26,0,311,313,
  	3,8,4,0,312,311,1,0,0,0,313,314,1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,
  	0,315,316,1,0,0,0,316,318,5,95,0,0,317,319,5,11,0,0,318,317,1,0,0,0,318,
  	319,1,0,0,0,319,320,1,0,0,0,320,321,3,52,26,0,321,323,1,0,0,0,322,312,
  	1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,330,1,0,0,
  	0,326,324,1,0,0,0,327,329,3,8,4,0,328,327,1,0,0,0,329,332,1,0,0,0,330,
  	328,1,0,0,0,330,331,1,0,0,0,331,333,1,0,0,0,332,330,1,0,0,0,333,334,5,
  	21,0,0,334,39,1,0,0,0,335,336,5,20,0,0,336,338,5,95,0,0,337,339,5,11,
  	0,0,338,337,1,0,0,0,338,339,1,0,0,0,339,340,1,0,0,0,340,341,5,95,0,0,
  	341,343,5,68,0,0,342,344,3,48,24,0,343,342,1,0,0,0,343,344,1,0,0,0,344,
  	349,1,0,0,0,345,346,5,61,0,0,346,348,3,48,24,0,347,345,1,0,0,0,348,351,
  	1,0,0,0,349,347,1,0,0,0,349,350,1,0,0,0,350,352,1,0,0,0,351,349,1,0,0,
  	0,352,353,5,69,0,0,353,41,1,0,0,0,354,355,5,20,0,0,355,357,5,95,0,0,356,
  	358,5,11,0,0,357,356,1,0,0,0,357,358,1,0,0,0,358,359,1,0,0,0,359,372,
  	5,95,0,0,360,362,5,66,0,0,361,363,3,48,24,0,362,361,1,0,0,0,362,363,1,
  	0,0,0,363,368,1,0,0,0,364,365,5,61,0,0,365,367,3,48,24,0,366,364,1,0,
  	0,0,367,370,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,0,369,371,1,0,0,0,370,
  	368,1,0,0,0,371,373,5,67,0,0,372,360,1,0,0,0,372,373,1,0,0,0,373,43,1,
  	0,0,0,374,375,5,17,0,0,375,376,3,46,23,0,376,377,5,61,0,0,377,378,3,46,
  	23,0,378,45,1,0,0,0,379,384,5,95,0,0,380,381,5,60,0,0,381,383,5,95,0,
  	0,382,380,1,0,0,0,383,386,1,0,0,0,384,382,1,0,0,0,384,385,1,0,0,0,385,
  	399,1,0,0,0,386,384,1,0,0,0,387,389,5,68,0,0,388,390,3,48,24,0,389,388,
  	1,0,0,0,389,390,1,0,0,0,390,395,1,0,0,0,391,392,5,61,0,0,392,394,3,48,
  	24,0,393,391,1,0,0,0,394,397,1,0,0,0,395,393,1,0,0,0,395,396,1,0,0,0,
  	396,398,1,0,0,0,397,395,1,0,0,0,398,400,5,69,0,0,399,387,1,0,0,0,399,
  	400,1,0,0,0,400,47,1,0,0,0,401,402,6,24,-1,0,402,403,5,66,0,0,403,404,
  	3,48,24,0,404,405,5,67,0,0,405,522,1,0,0,0,406,522,3,54,27,0,407,522,
  	3,46,23,0,408,522,3,20,10,0,409,410,5,78,0,0,410,522,3,48,24,54,411,412,
  	5,77,0,0,412,522,3,48,24,53,413,414,5,53,0,0,414,522,3,48,24,52,415,416,
  	5,54,0,0,416,522,3,48,24,51,417,419,5,55,0,0,418,420,5,66,0,0,419,418,
  	1,0,0,0,419,420,1,0,0,0,420,421,1,0,0,0,421,424,3,48,24,0,422,423,5,18,
  	0,0,423,425,3,48,24,0,424,422,1,0,0,0,424,425,1,0,0,0,425,427,1,0,0,0,
  	426,428,5,67,0,0,427,426,1,0,0,0,427,428,1,0,0,0,428,522,1,0,0,0,429,
  	430,5,25,0,0,430,522,3,48,24,49,431,432,5,85,0,0,432,522,3,48,24,48,433,
  	434,5,86,0,0,434,522,3,48,24,47,435,522,5,44,0,0,436,522,5,43,0,0,437,
  	522,5,22,0,0,438,522,5,23,0,0,439,522,5,24,0,0,440,522,5,36,0,0,441,442,
  	5,30,0,0,442,522,3,48,24,40,443,444,5,37,0,0,444,522,3,48,24,39,445,446,
  	5,39,0,0,446,522,3,48,24,38,447,448,5,26,0,0,448,522,3,48,24,37,449,450,
  	5,27,0,0,450,522,3,48,24,36,451,452,5,28,0,0,452,522,3,48,24,35,453,454,
  	5,29,0,0,454,522,3,48,24,34,455,456,5,31,0,0,456,522,3,48,24,33,457,458,
  	5,32,0,0,458,522,3,48,24,32,459,460,5,38,0,0,460,522,3,48,24,31,461,462,
  	5,34,0,0,462,522,3,48,24,30,463,464,5,35,0,0,464,522,3,48,24,29,465,466,
  	5,40,0,0,466,522,3,48,24,28,467,468,5,41,0,0,468,522,3,48,24,27,469,470,
  	5,42,0,0,470,522,3,48,24,26,471,472,5,45,0,0,472,522,3,48,24,25,473,474,
  	5,46,0,0,474,522,3,48,24,24,475,477,5,47,0,0,476,478,5,66,0,0,477,476,
  	1,0,0,0,477,478,1,0,0,0,478,479,1,0,0,0,479,480,3,48,24,0,480,481,5,61,
  	0,0,481,482,3,48,24,0,482,483,5,61,0,0,483,485,3,48,24,0,484,486,5,67,
  	0,0,485,484,1,0,0,0,485,486,1,0,0,0,486,522,1,0,0,0,487,489,5,48,0,0,
  	488,490,5,66,0,0,489,488,1,0,0,0,489,490,1,0,0,0,490,491,1,0,0,0,491,
  	492,3,48,24,0,492,493,5,61,0,0,493,495,3,48,24,0,494,496,5,67,0,0,495,
  	494,1,0,0,0,495,496,1,0,0,0,496,522,1,0,0,0,497,499,5,49,0,0,498,500,
  	5,66,0,0,499,498,1,0,0,0,499,500,1,0,0,0,500,501,1,0,0,0,501,502,3,48,
  	24,0,502,503,5,61,0,0,503,504,3,48,24,0,504,505,5,61,0,0,505,507,3,48,
  	24,0,506,508,5,67,0,0,507,506,1,0,0,0,507,508,1,0,0,0,508,522,1,0,0,0,
  	509,511,5,50,0,0,510,512,5,66,0,0,511,510,1,0,0,0,511,512,1,0,0,0,512,
  	513,1,0,0,0,513,514,3,48,24,0,514,515,5,61,0,0,515,517,3,48,24,0,516,
  	518,5,67,0,0,517,516,1,0,0,0,517,518,1,0,0,0,518,522,1,0,0,0,519,520,
  	5,51,0,0,520,522,3,48,24,19,521,401,1,0,0,0,521,406,1,0,0,0,521,407,1,
  	0,0,0,521,408,1,0,0,0,521,409,1,0,0,0,521,411,1,0,0,0,521,413,1,0,0,0,
  	521,415,1,0,0,0,521,417,1,0,0,0,521,429,1,0,0,0,521,431,1,0,0,0,521,433,
  	1,0,0,0,521,435,1,0,0,0,521,436,1,0,0,0,521,437,1,0,0,0,521,438,1,0,0,
  	0,521,439,1,0,0,0,521,440,1,0,0,0,521,441,1,0,0,0,521,443,1,0,0,0,521,
  	445,1,0,0,0,521,447,1,0,0,0,521,449,1,0,0,0,521,451,1,0,0,0,521,453,1,
  	0,0,0,521,455,1,0,0,0,521,457,1,0,0,0,521,459,1,0,0,0,521,461,1,0,0,0,
  	521,463,1,0,0,0,521,465,1,0,0,0,521,467,1,0,0,0,521,469,1,0,0,0,521,471,
  	1,0,0,0,521,473,1,0,0,0,521,475,1,0,0,0,521,487,1,0,0,0,521,497,1,0,0,
  	0,521,509,1,0,0,0,521,519,1,0,0,0,522,579,1,0,0,0,523,524,10,18,0,0,524,
  	525,5,76,0,0,525,578,3,48,24,18,526,527,10,17,0,0,527,528,5,80,0,0,528,
  	578,3,48,24,18,529,530,10,16,0,0,530,531,5,79,0,0,531,578,3,48,24,17,
  	532,533,10,15,0,0,533,534,5,84,0,0,534,578,3,48,24,16,535,536,10,14,0,
  	0,536,537,5,83,0,0,537,578,3,48,24,15,538,539,10,13,0,0,539,540,5,77,
  	0,0,540,578,3,48,24,14,541,542,10,12,0,0,542,543,5,78,0,0,543,578,3,48,
  	24,13,544,545,10,11,0,0,545,546,5,81,0,0,546,578,3,48,24,12,547,548,10,
  	10,0,0,548,549,5,82,0,0,549,578,3,48,24,11,550,551,10,9,0,0,551,552,5,
  	70,0,0,552,578,3,48,24,10,553,554,10,8,0,0,554,555,5,71,0,0,555,578,3,
  	48,24,9,556,557,10,7,0,0,557,558,5,72,0,0,558,578,3,48,24,8,559,560,10,
  	6,0,0,560,561,5,73,0,0,561,578,3,48,24,7,562,563,10,5,0,0,563,564,5,74,
  	0,0,564,578,3,48,24,6,565,566,10,4,0,0,566,567,5,75,0,0,567,578,3,48,
  	24,5,568,569,10,3,0,0,569,570,5,87,0,0,570,578,3,48,24,4,571,572,10,2,
  	0,0,572,573,5,88,0,0,573,578,3,48,24,3,574,575,10,1,0,0,575,576,5,89,
  	0,0,576,578,3,48,24,2,577,523,1,0,0,0,577,526,1,0,0,0,577,529,1,0,0,0,
  	577,532,1,0,0,0,577,535,1,0,0,0,577,538,1,0,0,0,577,541,1,0,0,0,577,544,
  	1,0,0,0,577,547,1,0,0,0,577,550,1,0,0,0,577,553,1,0,0,0,577,556,1,0,0,
  	0,577,559,1,0,0,0,577,562,1,0,0,0,577,565,1,0,0,0,577,568,1,0,0,0,577,
  	571,1,0,0,0,577,574,1,0,0,0,578,581,1,0,0,0,579,577,1,0,0,0,579,580,1,
  	0,0,0,580,49,1,0,0,0,581,579,1,0,0,0,582,583,7,1,0,0,583,51,1,0,0,0,584,
  	585,7,2,0,0,585,53,1,0,0,0,586,590,3,56,28,0,587,590,3,58,29,0,588,590,
  	3,60,30,0,589,586,1,0,0,0,589,587,1,0,0,0,589,588,1,0,0,0,590,55,1,0,
  	0,0,591,593,7,3,0,0,592,591,1,0,0,0,592,593,1,0,0,0,593,594,1,0,0,0,594,
  	595,5,93,0,0,595,57,1,0,0,0,596,603,5,91,0,0,597,603,5,92,0,0,598,600,
  	7,3,0,0,599,598,1,0,0,0,599,600,1,0,0,0,600,601,1,0,0,0,601,603,5,94,
  	0,0,602,596,1,0,0,0,602,597,1,0,0,0,602,599,1,0,0,0,603,59,1,0,0,0,604,
  	605,5,90,0,0,605,61,1,0,0,0,77,68,74,78,84,91,94,98,117,122,125,132,136,
  	139,148,154,169,173,176,181,186,192,200,206,216,221,226,231,240,243,248,
  	251,254,256,259,264,267,270,273,279,283,288,296,303,308,314,318,324,330,
  	338,343,349,357,362,368,372,384,389,395,399,419,424,427,477,485,489,495,
  	499,507,511,517,521,577,579,589,592,599,602
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
    setState(62);
    statements();
    setState(63);
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

std::vector<tree::TerminalNode *> DaricParser::StatementsContext::COLON() {
  return getTokens(DaricParser::COLON);
}

tree::TerminalNode* DaricParser::StatementsContext::COLON(size_t i) {
  return getToken(DaricParser::COLON, i);
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
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 288230384743396958) != 0 || _la == DaricParser::IDENTIFIER) {
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COLON) {
        setState(65);
        match(DaricParser::COLON);
        setState(70);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(71);
      statement();
      setState(74);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(72);
        separator();
        break;
      }

      case 2: {
        setState(73);
        match(DaricParser::EOF);
        break;
      }

      default:
        break;
      }
      setState(80);
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
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(84);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DaricParser::COLON) {
          setState(81);
          match(DaricParser::COLON);
          setState(86);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(87);
        statement();
        setState(94);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(89); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(88);
                    match(DaricParser::COLON);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(91); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

        case 2: {
          setState(93);
          match(DaricParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(101);
      match(DaricParser::COMMENT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(103);
      call();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(104);
      const_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(105);
      dim();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(106);
      end();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(107);
      if_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(108);
      ifml();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(109);
      module();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(110);
      procedure();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(111);
      print();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(112);
      return_();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(113);
      struct_();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(114);
      structDim();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(115);
      structInstance();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(116);
      swap();
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
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
      ((1ULL << _la) & 67553994410559488) != 0) {
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
      ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 1058543617) != 0) {
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
      ((1ULL << _la) & 67553994410559488) != 0) {
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
      ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 1058543617) != 0) {
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
      ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 1058543617) != 0) {
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

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
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
    statements();
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::ELSE) {
      setState(229);
      match(DaricParser::ELSE);
      setState(230);
      statements();
    }
    setState(233);
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
    setState(235);
    match(DaricParser::MODULE);
    setState(236);
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
    setState(238);
    match(DaricParser::IDENTIFIER);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67553994410559488) != 0) {
      setState(240);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(239);
        match(DaricParser::OF);
      }
      setState(242);
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
    setState(245);
    match(DaricParser::PRINT);
    setState(256);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(246);
      antlrcpp::downCast<PrintContext *>(_localctx)->value = expression(0);
      setState(251);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(248);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::WITH) {
          setState(247);
          match(DaricParser::WITH);
        }
        setState(250);
        antlrcpp::downCast<PrintContext *>(_localctx)->format = expression(0);
        break;
      }

      default:
        break;
      }
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::SEMICOLON) {
        setState(253);
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
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PRIVATE) {
      setState(258);
      match(DaricParser::PRIVATE);
    }
    setState(261);
    match(DaricParser::DEF);
    setState(262);
    match(DaricParser::IDENTIFIER);
    setState(267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67553994410559488) != 0) {
      setState(264);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DaricParser::OF) {
        setState(263);
        match(DaricParser::OF);
      }
      setState(266);
      type();
    }
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(269);
      match(DaricParser::LPAREN);
    }
    setState(273);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(272);
      parameter();
      break;
    }

    default:
      break;
    }
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(275);
      match(DaricParser::COMMA);
      setState(276);
      parameter();
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::RPAREN) {
      setState(282);
      match(DaricParser::RPAREN);
    }
    setState(288);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(285);
        separator(); 
      }
      setState(290);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(291);
    statements();
    setState(292);
    match(DaricParser::ENDDEF);
   
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
  enterRule(_localctx, 36, DaricParser::RuleReturn);

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
    match(DaricParser::RETURN);
    setState(296);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(295);
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
  enterRule(_localctx, 38, DaricParser::RuleStruct);
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
    setState(298);
    match(DaricParser::DEFRECORD);
    setState(299);
    match(DaricParser::IDENTIFIER);
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(300);
      separator();
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(306);
    match(DaricParser::IDENTIFIER);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(307);
      match(DaricParser::OF);
    }
    setState(310);
    typeOrStruct();
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(312); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(311);
          separator();
          setState(314); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == DaricParser::COLON

        || _la == DaricParser::NEWLINE);
        setState(316);
        match(DaricParser::IDENTIFIER);
        setState(318);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::OF) {
          setState(317);
          match(DaricParser::OF);
        }
        setState(320);
        typeOrStruct(); 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(330);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COLON

    || _la == DaricParser::NEWLINE) {
      setState(327);
      separator();
      setState(332);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(333);
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
  enterRule(_localctx, 40, DaricParser::RuleStructDim);
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
    match(DaricParser::RECORD);
    setState(336);
    match(DaricParser::IDENTIFIER);
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(337);
      match(DaricParser::OF);
    }
    setState(340);
    match(DaricParser::IDENTIFIER);
    setState(341);
    match(DaricParser::SOPEN);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 1058543617) != 0) {
      setState(342);
      expression(0);
    }
    setState(349);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DaricParser::COMMA) {
      setState(345);
      match(DaricParser::COMMA);
      setState(346);
      expression(0);
      setState(351);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(352);
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

tree::TerminalNode* DaricParser::StructInstanceContext::RECORD() {
  return getToken(DaricParser::RECORD, 0);
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
  enterRule(_localctx, 42, DaricParser::RuleStructInstance);
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
    setState(354);
    match(DaricParser::RECORD);
    setState(355);
    match(DaricParser::IDENTIFIER);
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::OF) {
      setState(356);
      match(DaricParser::OF);
    }
    setState(359);
    match(DaricParser::IDENTIFIER);
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::LPAREN) {
      setState(360);
      match(DaricParser::LPAREN);
      setState(362);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & 1058543617) != 0) {
        setState(361);
        expression(0);
      }
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(364);
        match(DaricParser::COMMA);
        setState(365);
        expression(0);
        setState(370);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(371);
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
  enterRule(_localctx, 44, DaricParser::RuleSwap);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(DaricParser::SWAP);
    setState(375);
    variable();
    setState(376);
    match(DaricParser::COMMA);
    setState(377);
    variable();
   
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

std::vector<tree::TerminalNode *> DaricParser::VariableContext::DOT() {
  return getTokens(DaricParser::DOT);
}

tree::TerminalNode* DaricParser::VariableContext::DOT(size_t i) {
  return getToken(DaricParser::DOT, i);
}

tree::TerminalNode* DaricParser::VariableContext::SOPEN() {
  return getToken(DaricParser::SOPEN, 0);
}

tree::TerminalNode* DaricParser::VariableContext::SCLOSE() {
  return getToken(DaricParser::SCLOSE, 0);
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
  enterRule(_localctx, 46, DaricParser::RuleVariable);
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
    setState(379);
    match(DaricParser::IDENTIFIER);
    setState(384);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(380);
        match(DaricParser::DOT);
        setState(381);
        match(DaricParser::IDENTIFIER); 
      }
      setState(386);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
    setState(399);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(387);
      match(DaricParser::SOPEN);
      setState(389);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 67553985816428544) != 0 || (((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & 1058543617) != 0) {
        setState(388);
        expression(0);
      }
      setState(395);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DaricParser::COMMA) {
        setState(391);
        match(DaricParser::COMMA);
        setState(392);
        expression(0);
        setState(397);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(398);
      match(DaricParser::SCLOSE);
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
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, DaricParser::RuleExpression, precedence);

    

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
    setState(521);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(402);
      match(DaricParser::LPAREN);
      setState(403);
      expression(0);
      setState(404);
      match(DaricParser::RPAREN);
      break;
    }

    case 2: {
      setState(406);
      literal();
      break;
    }

    case 3: {
      setState(407);
      variable();
      break;
    }

    case 4: {
      setState(408);
      exprcall();
      break;
    }

    case 5: {
      setState(409);
      match(DaricParser::MINUS);
      setState(410);
      expression(54);
      break;
    }

    case 6: {
      setState(411);
      match(DaricParser::PLUS);
      setState(412);
      expression(53);
      break;
    }

    case 7: {
      setState(413);
      match(DaricParser::INT);
      setState(414);
      expression(52);
      break;
    }

    case 8: {
      setState(415);
      match(DaricParser::FLOAT);
      setState(416);
      expression(51);
      break;
    }

    case 9: {
      setState(417);
      match(DaricParser::STRING);
      setState(419);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
      case 1: {
        setState(418);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(421);
      expression(0);
      setState(424);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
      case 1: {
        setState(422);
        match(DaricParser::WITH);
        setState(423);
        expression(0);
        break;
      }

      default:
        break;
      }
      setState(427);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
      case 1: {
        setState(426);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      setState(429);
      match(DaricParser::ABS);
      setState(430);
      expression(49);
      break;
    }

    case 11: {
      setState(431);
      match(DaricParser::COMP);
      setState(432);
      expression(48);
      break;
    }

    case 12: {
      setState(433);
      match(DaricParser::NOT);
      setState(434);
      expression(47);
      break;
    }

    case 13: {
      setState(435);
      match(DaricParser::TRUE);
      break;
    }

    case 14: {
      setState(436);
      match(DaricParser::FALSE);
      break;
    }

    case 15: {
      setState(437);
      match(DaricParser::HPTIME);
      break;
    }

    case 16: {
      setState(438);
      match(DaricParser::TIME);
      break;
    }

    case 17: {
      setState(439);
      match(DaricParser::TIMES);
      break;
    }

    case 18: {
      setState(440);
      match(DaricParser::PI);
      break;
    }

    case 19: {
      setState(441);
      match(DaricParser::DEG);
      setState(442);
      expression(40);
      break;
    }

    case 20: {
      setState(443);
      match(DaricParser::RAD);
      setState(444);
      expression(39);
      break;
    }

    case 21: {
      setState(445);
      match(DaricParser::SGN);
      setState(446);
      expression(38);
      break;
    }

    case 22: {
      setState(447);
      match(DaricParser::ACS);
      setState(448);
      expression(37);
      break;
    }

    case 23: {
      setState(449);
      match(DaricParser::ASN);
      setState(450);
      expression(36);
      break;
    }

    case 24: {
      setState(451);
      match(DaricParser::ATN);
      setState(452);
      expression(35);
      break;
    }

    case 25: {
      setState(453);
      match(DaricParser::COS);
      setState(454);
      expression(34);
      break;
    }

    case 26: {
      setState(455);
      match(DaricParser::EXP);
      setState(456);
      expression(33);
      break;
    }

    case 27: {
      setState(457);
      match(DaricParser::FLOOR);
      setState(458);
      expression(32);
      break;
    }

    case 28: {
      setState(459);
      match(DaricParser::ROUND);
      setState(460);
      expression(31);
      break;
    }

    case 29: {
      setState(461);
      match(DaricParser::LN);
      setState(462);
      expression(30);
      break;
    }

    case 30: {
      setState(463);
      match(DaricParser::LOG);
      setState(464);
      expression(29);
      break;
    }

    case 31: {
      setState(465);
      match(DaricParser::SIN);
      setState(466);
      expression(28);
      break;
    }

    case 32: {
      setState(467);
      match(DaricParser::SQR);
      setState(468);
      expression(27);
      break;
    }

    case 33: {
      setState(469);
      match(DaricParser::TAN);
      setState(470);
      expression(26);
      break;
    }

    case 34: {
      setState(471);
      match(DaricParser::ASC);
      setState(472);
      expression(25);
      break;
    }

    case 35: {
      setState(473);
      match(DaricParser::CHRS);
      setState(474);
      expression(24);
      break;
    }

    case 36: {
      setState(475);
      match(DaricParser::INSTR);
      setState(477);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
      case 1: {
        setState(476);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(479);
      expression(0);
      setState(480);
      match(DaricParser::COMMA);
      setState(481);
      expression(0);
      setState(482);
      match(DaricParser::COMMA);
      setState(483);
      expression(0);
      setState(485);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
      case 1: {
        setState(484);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 37: {
      setState(487);
      match(DaricParser::LEFTS);
      setState(489);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
      case 1: {
        setState(488);
        match(DaricParser::LPAREN);
        break;
      }

      default:
        break;
      }
      setState(491);
      expression(0);
      setState(492);
      match(DaricParser::COMMA);
      setState(493);
      expression(0);
      setState(495);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
      case 1: {
        setState(494);
        match(DaricParser::RPAREN);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 38: {
      setState(497);
      match(DaricParser::MIDS);
      setState(499);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
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

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
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

    case 39: {
      setState(509);
      match(DaricParser::RIGHTS);
      setState(511);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
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

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
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

    case 40: {
      setState(519);
      match(DaricParser::LEN);
      setState(520);
      expression(19);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(579);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(577);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(523);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(524);
          match(DaricParser::HAT);
          setState(525);
          expression(18);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(526);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(527);
          match(DaricParser::DIVIDE);
          setState(528);
          expression(18);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(529);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(530);
          match(DaricParser::MULTIPLY);
          setState(531);
          expression(17);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(532);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(533);
          match(DaricParser::DIV);
          setState(534);
          expression(16);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(535);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(536);
          match(DaricParser::MOD);
          setState(537);
          expression(15);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(538);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(539);
          match(DaricParser::PLUS);
          setState(540);
          expression(14);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(541);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(542);
          match(DaricParser::MINUS);
          setState(543);
          expression(13);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(544);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(545);
          match(DaricParser::SHL);
          setState(546);
          expression(12);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(547);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(548);
          match(DaricParser::SHR);
          setState(549);
          expression(11);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(550);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(551);
          match(DaricParser::EQ);
          setState(552);
          expression(10);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(553);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(554);
          match(DaricParser::NE);
          setState(555);
          expression(9);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(556);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(557);
          match(DaricParser::GT);
          setState(558);
          expression(8);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(559);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(560);
          match(DaricParser::GE);
          setState(561);
          expression(7);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(562);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(563);
          match(DaricParser::LT);
          setState(564);
          expression(6);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(565);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(566);
          match(DaricParser::LE);
          setState(567);
          expression(5);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(568);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(569);
          match(DaricParser::AND);
          setState(570);
          expression(4);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(571);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(572);
          match(DaricParser::OR);
          setState(573);
          expression(3);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(574);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(575);
          match(DaricParser::EOR);
          setState(576);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(581);
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
  enterRule(_localctx, 50, DaricParser::RuleType);
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
    setState(582);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 67553994410557440) != 0)) {
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
  enterRule(_localctx, 52, DaricParser::RuleTypeOrStruct);
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
    setState(584);
    _la = _input->LA(1);
    if (!((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 8796093022223) != 0)) {
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
  enterRule(_localctx, 54, DaricParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(589);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(586);
      floatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(587);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(588);
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
  enterRule(_localctx, 56, DaricParser::RuleFloatLiteral);
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
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DaricParser::PLUS

    || _la == DaricParser::MINUS) {
      setState(591);
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
    setState(594);
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
  enterRule(_localctx, 58, DaricParser::RuleIntegerLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DaricParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(596);
        match(DaricParser::HEXNUMBER);
        break;
      }

      case DaricParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(597);
        match(DaricParser::BINARYNUMBER);
        break;
      }

      case DaricParser::PLUS:
      case DaricParser::MINUS:
      case DaricParser::INTEGERLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(599);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DaricParser::PLUS

        || _la == DaricParser::MINUS) {
          setState(598);
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
        setState(601);
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
  enterRule(_localctx, 60, DaricParser::RuleStringLiteral);

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
    case 24: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

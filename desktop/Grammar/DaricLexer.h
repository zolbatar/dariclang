
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, CASE = 3, CONST = 4, DATA = 5, DATALABEL = 6, 
    DEF = 7, DIM = 8, ELSE = 9, END = 10, FOR = 11, IF = 12, IMPORT = 13, 
    LET = 14, NEXT = 15, OF = 16, OPTION = 17, OTHERWISE = 18, PRINT = 19, 
    READ = 20, RECORD = 21, REF = 22, REM = 23, REPEAT = 24, RESTORE = 25, 
    RETURN = 26, THEN = 27, SIZE = 28, STEP = 29, SYS = 30, SWAP = 31, TO = 32, 
    UNTIL = 33, WHEN = 34, WITH = 35, WHILE = 36, MAIN = 37, ABS = 38, ACS = 39, 
    ASN = 40, ATN = 41, COS = 42, DEG = 43, EXP = 44, FLOOR = 45, LN = 46, 
    LOG = 47, PI = 48, RAD = 49, ROUND = 50, SGN = 51, SIN = 52, SQR = 53, 
    TAN = 54, FALSE = 55, TRUE = 56, ASC = 57, CHR = 58, INSTR = 59, LEFT = 60, 
    MID = 61, RIGHT = 62, LEN = 63, BYTE = 64, INT = 65, FLOAT = 66, STRING = 67, 
    DOLLAR = 68, HASH = 69, COLON = 70, SEMICOLON = 71, DOT = 72, COMMA = 73, 
    QUOTE = 74, NEWLINE = 75, PERCENT = 76, UNDERSCORE = 77, LPAREN = 78, 
    RPAREN = 79, SOPEN = 80, SCLOSE = 81, EQ = 82, NE = 83, GT = 84, GE = 85, 
    LT = 86, LE = 87, HAT = 88, PLUS = 89, MINUS = 90, MULTIPLY = 91, DIVIDE = 92, 
    SHL = 93, SHR = 94, MOD = 95, DIV = 96, COMP = 97, NOT = 98, AND = 99, 
    OR = 100, EOR = 101, STRINGLITERAL = 102, HEXNUMBER = 103, BINARYNUMBER = 104, 
    FLOATLITERAL = 105, INTEGERLITERAL = 106, IDENTIFIER = 107, WS = 108
  };

  explicit DaricLexer(antlr4::CharStream *input);

  ~DaricLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};


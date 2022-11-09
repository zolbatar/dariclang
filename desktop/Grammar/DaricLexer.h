
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CONST = 2, DEF = 3, DIM = 4, ELSE = 5, END = 6, ENDDEF = 7, 
    ENDIF = 8, IF = 9, MODULE = 10, OF = 11, PRINT = 12, PRIVATE = 13, REM = 14, 
    RETURN = 15, THEN = 16, SWAP = 17, WITH = 18, STRUCT = 19, ENDSTRUCT = 20, 
    HPTIME = 21, TIME = 22, TIMES = 23, ABS = 24, ACS = 25, ASN = 26, ATN = 27, 
    COS = 28, DEG = 29, EXP = 30, FLOOR = 31, LET = 32, LN = 33, LOG = 34, 
    PI = 35, RAD = 36, ROUND = 37, SGN = 38, SIN = 39, SQR = 40, TAN = 41, 
    FALSE = 42, TRUE = 43, ASC = 44, CHRS = 45, INSTR = 46, LEFTS = 47, 
    MIDS = 48, RIGHTS = 49, LEN = 50, BYTE = 51, INT = 52, FLOAT = 53, STRING = 54, 
    DOLLAR = 55, HASH = 56, COLON = 57, SEMICOLON = 58, DOT = 59, COMMA = 60, 
    QUOTE = 61, NEWLINE = 62, PERCENT = 63, UNDERSCORE = 64, LPAREN = 65, 
    RPAREN = 66, SOPEN = 67, SCLOSE = 68, EQ = 69, NE = 70, GT = 71, GE = 72, 
    LT = 73, LE = 74, HAT = 75, PLUS = 76, MINUS = 77, MULTIPLY = 78, DIVIDE = 79, 
    SHL = 80, SHR = 81, MOD = 82, DIV = 83, COMP = 84, NOT = 85, AND = 86, 
    OR = 87, EOR = 88, STRINGLITERAL = 89, HEXNUMBER = 90, BINARYNUMBER = 91, 
    FLOATLITERAL = 92, INTEGERLITERAL = 93, IDENTIFIER = 94, WS = 95
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


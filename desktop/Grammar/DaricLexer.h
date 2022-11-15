
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CONST = 2, DEF = 3, DIM = 4, ELSE = 5, END = 6, ENDDEF = 7, 
    ENDIF = 8, ENDWHILE = 9, IF = 10, MODULE = 11, OF = 12, PRINT = 13, 
    PRIVATE = 14, REM = 15, REPEAT = 16, RETURN = 17, THEN = 18, SWAP = 19, 
    UNTIL = 20, WITH = 21, WHILE = 22, DEFRECORD = 23, RECORD = 24, ENDRECORD = 25, 
    HPTIME = 26, TIME = 27, TIMES = 28, ABS = 29, ACS = 30, ASN = 31, ATN = 32, 
    COS = 33, DEG = 34, EXP = 35, FLOOR = 36, LET = 37, LN = 38, LOG = 39, 
    PI = 40, RAD = 41, ROUND = 42, SGN = 43, SIN = 44, SQR = 45, TAN = 46, 
    FALSE = 47, TRUE = 48, ASC = 49, CHRS = 50, INSTR = 51, LEFTS = 52, 
    MIDS = 53, RIGHTS = 54, LEN = 55, BYTE = 56, INT = 57, FLOAT = 58, STRING = 59, 
    DOLLAR = 60, HASH = 61, COLON = 62, SEMICOLON = 63, DOT = 64, COMMA = 65, 
    QUOTE = 66, NEWLINE = 67, PERCENT = 68, UNDERSCORE = 69, LPAREN = 70, 
    RPAREN = 71, SOPEN = 72, SCLOSE = 73, EQ = 74, NE = 75, GT = 76, GE = 77, 
    LT = 78, LE = 79, HAT = 80, PLUS = 81, MINUS = 82, MULTIPLY = 83, DIVIDE = 84, 
    SHL = 85, SHR = 86, MOD = 87, DIV = 88, COMP = 89, NOT = 90, AND = 91, 
    OR = 92, EOR = 93, STRINGLITERAL = 94, HEXNUMBER = 95, BINARYNUMBER = 96, 
    FLOATLITERAL = 97, INTEGERLITERAL = 98, IDENTIFIER = 99, WS = 100
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


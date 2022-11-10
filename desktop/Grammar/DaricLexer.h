
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CONST = 2, DEF = 3, DIM = 4, ELSE = 5, END = 6, ENDDEF = 7, 
    ENDIF = 8, IF = 9, MODULE = 10, OF = 11, PRINT = 12, PRIVATE = 13, REM = 14, 
    RETURN = 15, THEN = 16, SWAP = 17, WITH = 18, DEFRECORD = 19, RECORD = 20, 
    ENDRECORD = 21, HPTIME = 22, TIME = 23, TIMES = 24, ABS = 25, ACS = 26, 
    ASN = 27, ATN = 28, COS = 29, DEG = 30, EXP = 31, FLOOR = 32, LET = 33, 
    LN = 34, LOG = 35, PI = 36, RAD = 37, ROUND = 38, SGN = 39, SIN = 40, 
    SQR = 41, TAN = 42, FALSE = 43, TRUE = 44, ASC = 45, CHRS = 46, INSTR = 47, 
    LEFTS = 48, MIDS = 49, RIGHTS = 50, LEN = 51, BYTE = 52, INT = 53, FLOAT = 54, 
    STRING = 55, DOLLAR = 56, HASH = 57, COLON = 58, SEMICOLON = 59, DOT = 60, 
    COMMA = 61, QUOTE = 62, NEWLINE = 63, PERCENT = 64, UNDERSCORE = 65, 
    LPAREN = 66, RPAREN = 67, SOPEN = 68, SCLOSE = 69, EQ = 70, NE = 71, 
    GT = 72, GE = 73, LT = 74, LE = 75, HAT = 76, PLUS = 77, MINUS = 78, 
    MULTIPLY = 79, DIVIDE = 80, SHL = 81, SHR = 82, MOD = 83, DIV = 84, 
    COMP = 85, NOT = 86, AND = 87, OR = 88, EOR = 89, STRINGLITERAL = 90, 
    HEXNUMBER = 91, BINARYNUMBER = 92, FLOATLITERAL = 93, INTEGERLITERAL = 94, 
    IDENTIFIER = 95, WS = 96
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


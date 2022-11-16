
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CONST = 2, DEF = 3, DIM = 4, ELSE = 5, END = 6, ENDDEF = 7, 
    ENDIF = 8, ENDWHILE = 9, FOR = 10, IF = 11, MODULE = 12, NEXT = 13, 
    OF = 14, PRINT = 15, PRIVATE = 16, REM = 17, REPEAT = 18, RETURN = 19, 
    THEN = 20, STEP = 21, SWAP = 22, TO = 23, UNTIL = 24, WITH = 25, WHILE = 26, 
    DEFRECORD = 27, RECORD = 28, ENDRECORD = 29, HPTIME = 30, TIME = 31, 
    TIMES = 32, ABS = 33, ACS = 34, ASN = 35, ATN = 36, COS = 37, DEG = 38, 
    EXP = 39, FLOOR = 40, LET = 41, LN = 42, LOG = 43, PI = 44, RAD = 45, 
    ROUND = 46, SGN = 47, SIN = 48, SQR = 49, TAN = 50, FALSE = 51, TRUE = 52, 
    ASC = 53, CHRS = 54, INSTR = 55, LEFTS = 56, MIDS = 57, RIGHTS = 58, 
    LEN = 59, BYTE = 60, INT = 61, FLOAT = 62, STRING = 63, DOLLAR = 64, 
    HASH = 65, COLON = 66, SEMICOLON = 67, DOT = 68, COMMA = 69, QUOTE = 70, 
    NEWLINE = 71, PERCENT = 72, UNDERSCORE = 73, LPAREN = 74, RPAREN = 75, 
    SOPEN = 76, SCLOSE = 77, EQ = 78, NE = 79, GT = 80, GE = 81, LT = 82, 
    LE = 83, HAT = 84, PLUS = 85, MINUS = 86, MULTIPLY = 87, DIVIDE = 88, 
    SHL = 89, SHR = 90, MOD = 91, DIV = 92, COMP = 93, NOT = 94, AND = 95, 
    OR = 96, EOR = 97, STRINGLITERAL = 98, HEXNUMBER = 99, BINARYNUMBER = 100, 
    FLOATLITERAL = 101, INTEGERLITERAL = 102, IDENTIFIER = 103, WS = 104
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


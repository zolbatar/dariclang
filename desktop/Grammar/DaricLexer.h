
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CASE = 2, CONST = 3, DEF = 4, DIM = 5, ELSE = 6, END = 7, 
    ENDCASE = 8, ENDDEF = 9, ENDIF = 10, ENDWHILE = 11, FOR = 12, IF = 13, 
    MODULE = 14, NEXT = 15, OF = 16, OTHERWISE = 17, PRINT = 18, PRIVATE = 19, 
    REM = 20, REPEAT = 21, RETURN = 22, THEN = 23, STEP = 24, SWAP = 25, 
    TO = 26, UNTIL = 27, WHEN = 28, WITH = 29, WHILE = 30, DEFRECORD = 31, 
    RECORD = 32, ENDRECORD = 33, HPTIME = 34, TIME = 35, TIMES = 36, ABS = 37, 
    ACS = 38, ASN = 39, ATN = 40, COS = 41, DEG = 42, EXP = 43, FLOOR = 44, 
    LET = 45, LN = 46, LOG = 47, PI = 48, RAD = 49, ROUND = 50, SGN = 51, 
    SIN = 52, SQR = 53, TAN = 54, FALSE = 55, TRUE = 56, ASC = 57, CHRS = 58, 
    INSTR = 59, LEFTS = 60, MIDS = 61, RIGHTS = 62, LEN = 63, BYTE = 64, 
    INT = 65, FLOAT = 66, STRING = 67, DOLLAR = 68, HASH = 69, COLON = 70, 
    SEMICOLON = 71, DOT = 72, COMMA = 73, QUOTE = 74, NEWLINE = 75, PERCENT = 76, 
    UNDERSCORE = 77, LPAREN = 78, RPAREN = 79, SOPEN = 80, SCLOSE = 81, 
    EQ = 82, NE = 83, GT = 84, GE = 85, LT = 86, LE = 87, HAT = 88, PLUS = 89, 
    MINUS = 90, MULTIPLY = 91, DIVIDE = 92, SHL = 93, SHR = 94, MOD = 95, 
    DIV = 96, COMP = 97, NOT = 98, AND = 99, OR = 100, EOR = 101, STRINGLITERAL = 102, 
    HEXNUMBER = 103, BINARYNUMBER = 104, FLOATLITERAL = 105, INTEGERLITERAL = 106, 
    IDENTIFIER = 107, WS = 108
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


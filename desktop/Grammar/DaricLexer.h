
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CASE = 2, CONST = 3, DATA = 4, DATALABEL = 5, DEF = 6, 
    DIM = 7, ELSE = 8, END = 9, ENDCASE = 10, ENDDEF = 11, ENDIF = 12, ENDWHILE = 13, 
    FOR = 14, IF = 15, MODULE = 16, NEXT = 17, OF = 18, OTHERWISE = 19, 
    PRINT = 20, READ = 21, REF = 22, REM = 23, REPEAT = 24, RESTORE = 25, 
    RETURN = 26, THEN = 27, SIZE = 28, STEP = 29, SWAP = 30, TO = 31, UNTIL = 32, 
    WHEN = 33, WITH = 34, WHILE = 35, DEFRECORD = 36, RECORD = 37, ENDRECORD = 38, 
    HPTIME = 39, TIME = 40, TIMES = 41, ABS = 42, ACS = 43, ASN = 44, ATN = 45, 
    COS = 46, DEG = 47, EXP = 48, FLOOR = 49, LET = 50, LN = 51, LOG = 52, 
    PI = 53, RAD = 54, ROUND = 55, SGN = 56, SIN = 57, SQR = 58, TAN = 59, 
    FALSE = 60, TRUE = 61, ASC = 62, CHRS = 63, INSTR = 64, LEFTS = 65, 
    MIDS = 66, RIGHTS = 67, LEN = 68, BYTE = 69, INT = 70, FLOAT = 71, STRING = 72, 
    DOLLAR = 73, HASH = 74, COLON = 75, SEMICOLON = 76, DOT = 77, COMMA = 78, 
    QUOTE = 79, NEWLINE = 80, PERCENT = 81, UNDERSCORE = 82, LPAREN = 83, 
    RPAREN = 84, SOPEN = 85, SCLOSE = 86, EQ = 87, NE = 88, GT = 89, GE = 90, 
    LT = 91, LE = 92, HAT = 93, PLUS = 94, MINUS = 95, MULTIPLY = 96, DIVIDE = 97, 
    SHL = 98, SHR = 99, MOD = 100, DIV = 101, COMP = 102, NOT = 103, AND = 104, 
    OR = 105, EOR = 106, STRINGLITERAL = 107, HEXNUMBER = 108, BINARYNUMBER = 109, 
    FLOATLITERAL = 110, INTEGERLITERAL = 111, IDENTIFIER = 112, WS = 113
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


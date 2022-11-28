
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CASE = 2, CONST = 3, DATA = 4, DATALABEL = 5, DEF = 6, 
    DIM = 7, ELSE = 8, END = 9, ENDCASE = 10, ENDDEF = 11, ENDIF = 12, ENDWHILE = 13, 
    FOR = 14, IF = 15, MODULE = 16, NEXT = 17, OF = 18, OPTION = 19, OTHERWISE = 20, 
    PRINT = 21, READ = 22, REF = 23, REM = 24, REPEAT = 25, RESTORE = 26, 
    RETURN = 27, THEN = 28, SIZE = 29, STEP = 30, SWAP = 31, TO = 32, UNTIL = 33, 
    WHEN = 34, WITH = 35, WHILE = 36, DEFRECORD = 37, RECORD = 38, ENDRECORD = 39, 
    HPTIME = 40, TIME = 41, TIMES = 42, ABS = 43, ACS = 44, ASN = 45, ATN = 46, 
    COS = 47, DEG = 48, EXP = 49, FLOOR = 50, LET = 51, LN = 52, LOG = 53, 
    PI = 54, RAD = 55, ROUND = 56, SGN = 57, SIN = 58, SQR = 59, TAN = 60, 
    FALSE = 61, TRUE = 62, ASC = 63, CHRS = 64, INSTR = 65, LEFTS = 66, 
    MIDS = 67, RIGHTS = 68, LEN = 69, BYTE = 70, INT = 71, FLOAT = 72, STRING = 73, 
    DOLLAR = 74, HASH = 75, COLON = 76, SEMICOLON = 77, DOT = 78, COMMA = 79, 
    QUOTE = 80, NEWLINE = 81, PERCENT = 82, UNDERSCORE = 83, LPAREN = 84, 
    RPAREN = 85, SOPEN = 86, SCLOSE = 87, EQ = 88, NE = 89, GT = 90, GE = 91, 
    LT = 92, LE = 93, HAT = 94, PLUS = 95, MINUS = 96, MULTIPLY = 97, DIVIDE = 98, 
    SHL = 99, SHR = 100, MOD = 101, DIV = 102, COMP = 103, NOT = 104, AND = 105, 
    OR = 106, EOR = 107, STRINGLITERAL = 108, HEXNUMBER = 109, BINARYNUMBER = 110, 
    FLOATLITERAL = 111, INTEGERLITERAL = 112, IDENTIFIER = 113, WS = 114
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



// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, CASE = 3, CONST = 4, DATA = 5, DATALABEL = 6, 
    DEF = 7, DIM = 8, ELSE = 9, END = 10, ENDCASE = 11, ENDDEF = 12, ENDIF = 13, 
    ENDWHILE = 14, FOR = 15, IF = 16, IMPORT = 17, NEXT = 18, OF = 19, OPTION = 20, 
    OTHERWISE = 21, PRINT = 22, READ = 23, REF = 24, REM = 25, REPEAT = 26, 
    RESTORE = 27, RETURN = 28, THEN = 29, SIZE = 30, STEP = 31, SWAP = 32, 
    TO = 33, UNTIL = 34, WHEN = 35, WITH = 36, WHILE = 37, MAIN = 38, DEFRECORD = 39, 
    RECORD = 40, ENDRECORD = 41, HPTIME = 42, TIME = 43, TIMES = 44, ABS = 45, 
    ACS = 46, ASN = 47, ATN = 48, COS = 49, DEG = 50, EXP = 51, FLOOR = 52, 
    LET = 53, LN = 54, LOG = 55, PI = 56, RAD = 57, ROUND = 58, SGN = 59, 
    SIN = 60, SQR = 61, TAN = 62, FALSE = 63, TRUE = 64, ASC = 65, CHRS = 66, 
    INSTR = 67, LEFTS = 68, MIDS = 69, RIGHTS = 70, LEN = 71, BYTE = 72, 
    INT = 73, FLOAT = 74, STRING = 75, DOLLAR = 76, HASH = 77, COLON = 78, 
    SEMICOLON = 79, DOT = 80, COMMA = 81, QUOTE = 82, NEWLINE = 83, PERCENT = 84, 
    UNDERSCORE = 85, LPAREN = 86, RPAREN = 87, SOPEN = 88, SCLOSE = 89, 
    EQ = 90, NE = 91, GT = 92, GE = 93, LT = 94, LE = 95, HAT = 96, PLUS = 97, 
    MINUS = 98, MULTIPLY = 99, DIVIDE = 100, SHL = 101, SHR = 102, MOD = 103, 
    DIV = 104, COMP = 105, NOT = 106, AND = 107, OR = 108, EOR = 109, STRINGLITERAL = 110, 
    HEXNUMBER = 111, BINARYNUMBER = 112, FLOATLITERAL = 113, INTEGERLITERAL = 114, 
    IDENTIFIER = 115, WS = 116
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



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
    ENDRECORD = 40, ABS = 41, ACS = 42, ASN = 43, ATN = 44, COS = 45, DEG = 46, 
    EXP = 47, FLOOR = 48, LET = 49, LN = 50, LOG = 51, PI = 52, RAD = 53, 
    ROUND = 54, SGN = 55, SIN = 56, SQR = 57, TAN = 58, FALSE = 59, TRUE = 60, 
    ASC = 61, CHRS = 62, INSTR = 63, LEFTS = 64, MIDS = 65, RIGHTS = 66, 
    LEN = 67, BYTE = 68, INT = 69, FLOAT = 70, STRING = 71, DOLLAR = 72, 
    HASH = 73, COLON = 74, SEMICOLON = 75, DOT = 76, COMMA = 77, QUOTE = 78, 
    NEWLINE = 79, PERCENT = 80, UNDERSCORE = 81, LPAREN = 82, RPAREN = 83, 
    SOPEN = 84, SCLOSE = 85, EQ = 86, NE = 87, GT = 88, GE = 89, LT = 90, 
    LE = 91, HAT = 92, PLUS = 93, MINUS = 94, MULTIPLY = 95, DIVIDE = 96, 
    SHL = 97, SHR = 98, MOD = 99, DIV = 100, COMP = 101, NOT = 102, AND = 103, 
    OR = 104, EOR = 105, STRINGLITERAL = 106, HEXNUMBER = 107, BINARYNUMBER = 108, 
    FLOATLITERAL = 109, INTEGERLITERAL = 110, IDENTIFIER = 111, WS = 112
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


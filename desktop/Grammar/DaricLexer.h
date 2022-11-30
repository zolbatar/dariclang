
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, CASE = 2, CONST = 3, DATA = 4, DATALABEL = 5, DEF = 6, 
    DIM = 7, ELSE = 8, END = 9, ENDCASE = 10, ENDDEF = 11, ENDIF = 12, ENDWHILE = 13, 
    FOR = 14, IF = 15, IMPORT = 16, NEXT = 17, OF = 18, OPTION = 19, OTHERWISE = 20, 
    PRINT = 21, READ = 22, REF = 23, REM = 24, REPEAT = 25, RESTORE = 26, 
    RETURN = 27, THEN = 28, SIZE = 29, STEP = 30, SWAP = 31, TO = 32, UNTIL = 33, 
    WHEN = 34, WITH = 35, WHILE = 36, MAIN = 37, DEFRECORD = 38, RECORD = 39, 
    ENDRECORD = 40, HPTIME = 41, TIME = 42, TIMES = 43, ABS = 44, ACS = 45, 
    ASN = 46, ATN = 47, COS = 48, DEG = 49, EXP = 50, FLOOR = 51, LET = 52, 
    LN = 53, LOG = 54, PI = 55, RAD = 56, ROUND = 57, SGN = 58, SIN = 59, 
    SQR = 60, TAN = 61, FALSE = 62, TRUE = 63, ASC = 64, CHRS = 65, INSTR = 66, 
    LEFTS = 67, MIDS = 68, RIGHTS = 69, LEN = 70, BYTE = 71, INT = 72, FLOAT = 73, 
    STRING = 74, DOLLAR = 75, HASH = 76, COLON = 77, SEMICOLON = 78, DOT = 79, 
    COMMA = 80, QUOTE = 81, NEWLINE = 82, PERCENT = 83, UNDERSCORE = 84, 
    LPAREN = 85, RPAREN = 86, SOPEN = 87, SCLOSE = 88, EQ = 89, NE = 90, 
    GT = 91, GE = 92, LT = 93, LE = 94, HAT = 95, PLUS = 96, MINUS = 97, 
    MULTIPLY = 98, DIVIDE = 99, SHL = 100, SHR = 101, MOD = 102, DIV = 103, 
    COMP = 104, NOT = 105, AND = 106, OR = 107, EOR = 108, STRINGLITERAL = 109, 
    HEXNUMBER = 110, BINARYNUMBER = 111, FLOATLITERAL = 112, INTEGERLITERAL = 113, 
    IDENTIFIER = 114, WS = 115
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


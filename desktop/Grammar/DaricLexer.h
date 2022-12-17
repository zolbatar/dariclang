
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, CASE = 3, CONST = 4, DATA = 5, DATALABEL = 6, 
    DEF = 7, DIM = 8, ELSE = 9, END = 10, FOR = 11, IF = 12, IMPORT = 13, 
    INPUT = 14, LET = 15, NEXT = 16, OF = 17, OPTION = 18, OTHERWISE = 19, 
    PRINT = 20, READ = 21, RECORD = 22, REF = 23, REM = 24, REPEAT = 25, 
    RESTORE = 26, RETURN = 27, THEN = 28, SIZE = 29, STEP = 30, SYS = 31, 
    SWAP = 32, TO = 33, UNTIL = 34, WHEN = 35, WITH = 36, WHILE = 37, MAIN = 38, 
    ABS = 39, ACS = 40, ASN = 41, ATN = 42, COS = 43, DEG = 44, EXP = 45, 
    FLOOR = 46, LN = 47, LOG = 48, PI = 49, RAD = 50, ROUND = 51, SGN = 52, 
    SIN = 53, SQR = 54, TAN = 55, FALSE = 56, TRUE = 57, ASC = 58, CHR = 59, 
    INSTR = 60, LEFT = 61, MID = 62, RIGHT = 63, LEN = 64, BYTE = 65, INT = 66, 
    FLOAT = 67, STRING = 68, DOLLAR = 69, HASH = 70, COLON = 71, SEMICOLON = 72, 
    DOT = 73, COMMA = 74, QUOTE = 75, NEWLINE = 76, PERCENT = 77, UNDERSCORE = 78, 
    LPAREN = 79, RPAREN = 80, SOPEN = 81, SCLOSE = 82, EQ = 83, NE = 84, 
    GT = 85, GE = 86, LT = 87, LE = 88, HAT = 89, PLUS = 90, MINUS = 91, 
    MULTIPLY = 92, DIVIDE = 93, SHL = 94, SHR = 95, MOD = 96, DIV = 97, 
    COMP = 98, NOT = 99, AND = 100, OR = 101, EOR = 102, STRINGLITERAL = 103, 
    HEXNUMBER = 104, BINARYNUMBER = 105, FLOATLITERAL = 106, INTEGERLITERAL = 107, 
    IDENTIFIER = 108, WS = 109
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


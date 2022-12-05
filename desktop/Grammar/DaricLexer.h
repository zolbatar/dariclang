
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, CASE = 3, CONST = 4, DATA = 5, DATALABEL = 6, 
    DEF = 7, DIM = 8, ELSE = 9, END = 10, FOR = 11, IF = 12, IMPORT = 13, 
    NEXT = 14, OF = 15, OPTION = 16, OTHERWISE = 17, PRINT = 18, READ = 19, 
    RECORD = 20, REF = 21, REM = 22, REPEAT = 23, RESTORE = 24, RETURN = 25, 
    THEN = 26, SIZE = 27, STEP = 28, SWAP = 29, TO = 30, UNTIL = 31, WHEN = 32, 
    WITH = 33, WHILE = 34, MAIN = 35, ABS = 36, ACS = 37, ASN = 38, ATN = 39, 
    COS = 40, DEG = 41, EXP = 42, FLOOR = 43, LET = 44, LN = 45, LOG = 46, 
    PI = 47, RAD = 48, ROUND = 49, SGN = 50, SIN = 51, SQR = 52, TAN = 53, 
    FALSE = 54, TRUE = 55, ASC = 56, CHR = 57, INSTR = 58, LEFT = 59, MID = 60, 
    RIGHT = 61, LEN = 62, BYTE = 63, INT = 64, FLOAT = 65, STRING = 66, 
    DOLLAR = 67, HASH = 68, COLON = 69, SEMICOLON = 70, DOT = 71, COMMA = 72, 
    QUOTE = 73, NEWLINE = 74, PERCENT = 75, UNDERSCORE = 76, LPAREN = 77, 
    RPAREN = 78, SOPEN = 79, SCLOSE = 80, EQ = 81, NE = 82, GT = 83, GE = 84, 
    LT = 85, LE = 86, HAT = 87, PLUS = 88, MINUS = 89, MULTIPLY = 90, DIVIDE = 91, 
    SHL = 92, SHR = 93, MOD = 94, DIV = 95, COMP = 96, NOT = 97, AND = 98, 
    OR = 99, EOR = 100, STRINGLITERAL = 101, HEXNUMBER = 102, BINARYNUMBER = 103, 
    FLOATLITERAL = 104, INTEGERLITERAL = 105, IDENTIFIER = 106, WS = 107
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


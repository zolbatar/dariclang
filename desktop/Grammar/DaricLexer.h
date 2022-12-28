
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
    SIN = 53, SQR = 54, TAN = 55, VECTOR = 56, MAP = 57, STACK = 58, QUEUE = 59, 
    SET = 60, FALSE = 61, TRUE = 62, ASC = 63, CHR = 64, INSTR = 65, LEFT = 66, 
    MID = 67, RIGHT = 68, LEN = 69, BYTE = 70, INT = 71, FLOAT = 72, STRING = 73, 
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



// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, CASE = 3, CONST = 4, DATA = 5, DATALABEL = 6, 
    DEF = 7, DIM = 8, ELSE = 9, END = 10, FOR = 11, IF = 12, IMPORT = 13, 
    INPUT = 14, LET = 15, NEXT = 16, OF = 17, OPTION = 18, OTHERWISE = 19, 
    PRINT = 20, QUIT = 21, READ = 22, RECORD = 23, REF = 24, REM = 25, REPEAT = 26, 
    RESTORE = 27, RETURN = 28, THEN = 29, SIZE = 30, STEP = 31, SYS = 32, 
    SWAP = 33, TO = 34, UNTIL = 35, WHEN = 36, WITH = 37, WHILE = 38, MAIN = 39, 
    ABS = 40, ACS = 41, ASN = 42, ATN = 43, COS = 44, DEG = 45, EXP = 46, 
    FLOOR = 47, LN = 48, LOG = 49, PI = 50, RAD = 51, ROUND = 52, SGN = 53, 
    SIN = 54, SQR = 55, TAN = 56, VECTOR = 57, MAP = 58, STACK = 59, QUEUE = 60, 
    SET = 61, FALSE = 62, TRUE = 63, ASC = 64, CHR = 65, INSTR = 66, LEFT = 67, 
    MID = 68, RIGHT = 69, LEN = 70, BYTE = 71, INT = 72, FLOAT = 73, STRING = 74, 
    DOLLAR = 75, HASH = 76, COLON = 77, SEMICOLON = 78, DOT = 79, COMMA = 80, 
    QUOTE = 81, NEWLINE = 82, PERCENT = 83, UNDERSCORE = 84, LPAREN = 85, 
    RPAREN = 86, SOPEN = 87, SCLOSE = 88, EQ = 89, NE = 90, GT = 91, GE = 92, 
    LT = 93, LE = 94, HAT = 95, PLUS = 96, MINUS = 97, MULTIPLY = 98, DIVIDE = 99, 
    SHL = 100, SHR = 101, MOD = 102, DIV = 103, COMP = 104, NOT = 105, AND = 106, 
    OR = 107, EOR = 108, STRINGLITERAL = 109, HEXNUMBER = 110, BINARYNUMBER = 111, 
    FLOATLITERAL = 112, INTEGERLITERAL = 113, IDENTIFIER = 114, WS = 115
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


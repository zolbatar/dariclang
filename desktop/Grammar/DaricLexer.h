
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, ASSIGN = 3, CASE = 4, CONST = 5, 
    CLEAR = 6, DATA = 7, DATALABEL = 8, DEF = 9, DIM = 10, ELSE = 11, END = 12, 
    FOR = 13, FROM = 14, IF = 15, IMPORT = 16, INPUT = 17, INTO = 18, LET = 19, 
    NEXT = 20, OF = 21, OPTION = 22, OTHERWISE = 23, PRINT = 24, POP = 25, 
    PUSH = 26, QUIT = 27, READ = 28, RECORD = 29, REF = 30, REM = 31, REPEAT = 32, 
    RESTORE = 33, RETURN = 34, THEN = 35, SIZE = 36, STEP = 37, SYS = 38, 
    SWAP = 39, TO = 40, UNTIL = 41, WHEN = 42, WITH = 43, WHILE = 44, MAIN = 45, 
    ABS = 46, ACS = 47, ASN = 48, ATN = 49, COS = 50, DEG = 51, EXP = 52, 
    FLOOR = 53, LN = 54, LOG = 55, PI = 56, RAD = 57, ROUND = 58, SGN = 59, 
    SIN = 60, SQR = 61, TAN = 62, VECTOR = 63, LIST = 64, MAP = 65, STACK = 66, 
    QUEUE = 67, SET = 68, FALSE = 69, TRUE = 70, ASC = 71, CHR = 72, INSTR = 73, 
    LEFT = 74, MID = 75, RIGHT = 76, LEN = 77, BYTE = 78, INT = 79, FLOAT = 80, 
    STRING = 81, DOLLAR = 82, HASH = 83, COLON = 84, SEMICOLON = 85, DOT = 86, 
    COMMA = 87, QUOTE = 88, NEWLINE = 89, PERCENT = 90, UNDERSCORE = 91, 
    LPAREN = 92, RPAREN = 93, SOPEN = 94, SCLOSE = 95, EQ = 96, NE = 97, 
    GT = 98, GE = 99, LT = 100, LE = 101, HAT = 102, PLUS = 103, MINUS = 104, 
    MULTIPLY = 105, DIVIDE = 106, SHL = 107, SHR = 108, MOD = 109, DIV = 110, 
    COMP = 111, NOT = 112, AND = 113, OR = 114, EOR = 115, STRINGLITERAL = 116, 
    HEXNUMBER = 117, BINARYNUMBER = 118, FLOATLITERAL = 119, INTEGERLITERAL = 120, 
    IDENTIFIER = 121, WS = 122
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


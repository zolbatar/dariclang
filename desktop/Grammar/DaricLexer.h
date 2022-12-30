
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, ASSIGN = 3, AT = 4, CASE = 5, CONST = 6, 
    CLEAR = 7, DATA = 8, DATALABEL = 9, DEF = 10, DIM = 11, ELSE = 12, END = 13, 
    FOR = 14, FROM = 15, FETCH = 16, IF = 17, IMPORT = 18, INPUT = 19, INTO = 20, 
    LET = 21, NEXT = 22, OF = 23, OPTION = 24, OTHERWISE = 25, PRINT = 26, 
    PLACE = 27, POP = 28, PUSH = 29, QUIT = 30, READ = 31, RECORD = 32, 
    REF = 33, REM = 34, REPEAT = 35, RESTORE = 36, RETURN = 37, THEN = 38, 
    SIZE = 39, STEP = 40, SYS = 41, SWAP = 42, TO = 43, UNTIL = 44, WHEN = 45, 
    WITH = 46, WHILE = 47, MAIN = 48, ABS = 49, ACS = 50, ASN = 51, ATN = 52, 
    COS = 53, DEG = 54, EXP = 55, FLOOR = 56, LN = 57, LOG = 58, PI = 59, 
    RAD = 60, ROUND = 61, SGN = 62, SIN = 63, SQR = 64, TAN = 65, VECTOR = 66, 
    LIST = 67, MAP = 68, STACK = 69, QUEUE = 70, SET = 71, FALSE = 72, TRUE = 73, 
    ASC = 74, CHR = 75, INSTR = 76, LEFT = 77, MID = 78, RIGHT = 79, LEN = 80, 
    BYTE = 81, INT = 82, FLOAT = 83, STRING = 84, DOLLAR = 85, HASH = 86, 
    COLON = 87, SEMICOLON = 88, DOT = 89, COMMA = 90, QUOTE = 91, NEWLINE = 92, 
    PERCENT = 93, UNDERSCORE = 94, LPAREN = 95, RPAREN = 96, SOPEN = 97, 
    SCLOSE = 98, EQ = 99, NE = 100, GT = 101, GE = 102, LT = 103, LE = 104, 
    HAT = 105, PLUS = 106, MINUS = 107, MULTIPLY = 108, DIVIDE = 109, SHL = 110, 
    SHR = 111, MOD = 112, DIV = 113, COMP = 114, NOT = 115, AND = 116, OR = 117, 
    EOR = 118, STRINGLITERAL = 119, HEXNUMBER = 120, BINARYNUMBER = 121, 
    FLOATLITERAL = 122, INTEGERLITERAL = 123, IDENTIFIER = 124, WS = 125
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


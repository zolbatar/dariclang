
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, AT = 3, CASE = 4, CONST = 5, CLEAR = 6, 
    DATA = 7, DATALABEL = 8, DEF = 9, DIM = 10, ELSE = 11, END = 12, FOR = 13, 
    FROM = 14, IF = 15, IMPORT = 16, INPUT = 17, INTO = 18, LET = 19, NEXT = 20, 
    OF = 21, OPTION = 22, OTHERWISE = 23, PRINT = 24, QUIT = 25, READ = 26, 
    RECORD = 27, REF = 28, REM = 29, REPEAT = 30, RESTORE = 31, RETURN = 32, 
    THEN = 33, SIZE = 34, STEP = 35, SYS = 36, SWAP = 37, TO = 38, UNTIL = 39, 
    WHEN = 40, WITH = 41, WHILE = 42, MAIN = 43, ABS = 44, ACS = 45, ASN = 46, 
    ATN = 47, COS = 48, DEG = 49, EXP = 50, FLOOR = 51, LN = 52, LOG = 53, 
    PI = 54, RAD = 55, ROUND = 56, SGN = 57, SIN = 58, SQR = 59, TAN = 60, 
    VECTOR = 61, LIST = 62, MAP = 63, STACK = 64, QUEUE = 65, SET = 66, 
    FALSE = 67, TRUE = 68, ASC = 69, CHR = 70, INSTR = 71, LEFT = 72, MID = 73, 
    RIGHT = 74, LEN = 75, BYTE = 76, INT = 77, FLOAT = 78, STRING = 79, 
    DOLLAR = 80, HASH = 81, COLON = 82, SEMICOLON = 83, DOT = 84, COMMA = 85, 
    QUOTE = 86, NEWLINE = 87, PERCENT = 88, UNDERSCORE = 89, LPAREN = 90, 
    RPAREN = 91, SOPEN = 92, SCLOSE = 93, ASSIGNL = 94, ASSIGNR = 95, EQ = 96, 
    NE = 97, GT = 98, GE = 99, LT = 100, LE = 101, HAT = 102, PLUS = 103, 
    MINUS = 104, MULTIPLY = 105, DIVIDE = 106, SHL = 107, SHR = 108, MOD = 109, 
    DIV = 110, COMP = 111, NOT = 112, AND = 113, OR = 114, EOR = 115, STRINGLITERAL = 116, 
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


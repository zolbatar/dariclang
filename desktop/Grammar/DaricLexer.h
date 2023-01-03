
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, AT = 3, CASE = 4, CONST = 5, CLEAR = 6, 
    DATA = 7, DATALABEL = 8, DEF = 9, DIM = 10, ELSE = 11, END = 12, FOR = 13, 
    FROM = 14, HAS = 15, IF = 16, IMPORT = 17, INPUT = 18, INTO = 19, LET = 20, 
    NEXT = 21, OF = 22, OPTION = 23, OTHERWISE = 24, PRINT = 25, QUIT = 26, 
    READ = 27, RECORD = 28, REF = 29, REM = 30, REPEAT = 31, RESTORE = 32, 
    RETURN = 33, THEN = 34, SIZE = 35, STEP = 36, SYS = 37, SWAP = 38, TO = 39, 
    UNTIL = 40, WHEN = 41, WITH = 42, WHILE = 43, MAIN = 44, ABS = 45, ACS = 46, 
    ASN = 47, ATN = 48, COS = 49, DEG = 50, EXP = 51, FLOOR = 52, LN = 53, 
    LOG = 54, MIN = 55, MAX = 56, PI = 57, RAD = 58, ROUND = 59, SGN = 60, 
    SIN = 61, SQR = 62, TAN = 63, VECTOR = 64, LIST = 65, MAP = 66, STACK = 67, 
    QUEUE = 68, SET = 69, FALSE = 70, TRUE = 71, ASC = 72, CHR = 73, INSTR = 74, 
    LEFT = 75, MID = 76, RIGHT = 77, LEN = 78, BYTE = 79, INT = 80, FLOAT = 81, 
    STRING = 82, DOLLAR = 83, HASH = 84, COLON = 85, SEMICOLON = 86, DOT = 87, 
    COMMA = 88, QUOTE = 89, NEWLINE = 90, PERCENT = 91, UNDERSCORE = 92, 
    LPAREN = 93, RPAREN = 94, SOPEN = 95, SCLOSE = 96, ASSIGNL = 97, ASSIGNR = 98, 
    EQ = 99, NE = 100, GT = 101, GE = 102, LT = 103, LE = 104, HAT = 105, 
    PLUS = 106, MINUS = 107, MULTIPLY = 108, DIVIDE = 109, SHL = 110, SHR = 111, 
    MOD = 112, DIV = 113, COMP = 114, NOT = 115, AND = 116, OR = 117, EOR = 118, 
    STRINGLITERAL = 119, HEXNUMBER = 120, BINARYNUMBER = 121, FLOATLITERAL = 122, 
    INTEGERLITERAL = 123, IDENTIFIER = 124, WS = 125
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


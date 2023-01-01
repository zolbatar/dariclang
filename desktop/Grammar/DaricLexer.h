
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
    LOG = 54, PI = 55, RAD = 56, ROUND = 57, SGN = 58, SIN = 59, SQR = 60, 
    TAN = 61, VECTOR = 62, LIST = 63, MAP = 64, STACK = 65, QUEUE = 66, 
    SET = 67, FALSE = 68, TRUE = 69, ASC = 70, CHR = 71, INSTR = 72, LEFT = 73, 
    MID = 74, RIGHT = 75, LEN = 76, BYTE = 77, INT = 78, FLOAT = 79, STRING = 80, 
    DOLLAR = 81, HASH = 82, COLON = 83, SEMICOLON = 84, DOT = 85, COMMA = 86, 
    QUOTE = 87, NEWLINE = 88, PERCENT = 89, UNDERSCORE = 90, LPAREN = 91, 
    RPAREN = 92, SOPEN = 93, SCLOSE = 94, ASSIGNL = 95, ASSIGNR = 96, EQ = 97, 
    NE = 98, GT = 99, GE = 100, LT = 101, LE = 102, HAT = 103, PLUS = 104, 
    MINUS = 105, MULTIPLY = 106, DIVIDE = 107, SHL = 108, SHR = 109, MOD = 110, 
    DIV = 111, COMP = 112, NOT = 113, AND = 114, OR = 115, EOR = 116, STRINGLITERAL = 117, 
    HEXNUMBER = 118, BINARYNUMBER = 119, FLOATLITERAL = 120, INTEGERLITERAL = 121, 
    IDENTIFIER = 122, WS = 123
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


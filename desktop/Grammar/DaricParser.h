
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  DaricParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatements = 1, RuleStatementsl = 2, RuleStatement = 3, 
    RuleSeparator = 4, RuleAssign = 5, RuleAssignment = 6, RuleCall = 7, 
    RuleCase = 8, RuleConst = 9, RuleData = 10, RuleDataLabel = 11, RuleDim = 12, 
    RuleExprcall = 13, RuleEnd = 14, RuleFor = 15, RuleImportlib = 16, RuleIf = 17, 
    RuleIfml = 18, RuleInput = 19, RuleOption = 20, RuleParameter = 21, 
    RulePrint = 22, RuleProcedure = 23, RuleRepeat = 24, RuleRead = 25, 
    RuleRestore = 26, RuleReturn = 27, RuleStruct = 28, RuleStructDim = 29, 
    RuleStructInstance = 30, RuleSwap = 31, RuleWhen = 32, RuleWhile = 33, 
    RuleVariable = 34, RuleExpression = 35, RuleType = 36, RuleTypeOrStruct = 37, 
    RuleLiteral = 38, RuleFloatLiteral = 39, RuleIntegerLiteral = 40, RuleStringLiteral = 41
  };

  explicit DaricParser(antlr4::TokenStream *input);

  DaricParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~DaricParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementsContext;
  class StatementslContext;
  class StatementContext;
  class SeparatorContext;
  class AssignContext;
  class AssignmentContext;
  class CallContext;
  class CaseContext;
  class ConstContext;
  class DataContext;
  class DataLabelContext;
  class DimContext;
  class ExprcallContext;
  class EndContext;
  class ForContext;
  class ImportlibContext;
  class IfContext;
  class IfmlContext;
  class InputContext;
  class OptionContext;
  class ParameterContext;
  class PrintContext;
  class ProcedureContext;
  class RepeatContext;
  class ReadContext;
  class RestoreContext;
  class ReturnContext;
  class StructContext;
  class StructDimContext;
  class StructInstanceContext;
  class SwapContext;
  class WhenContext;
  class WhileContext;
  class VariableContext;
  class ExpressionContext;
  class TypeContext;
  class TypeOrStructContext;
  class LiteralContext;
  class FloatLiteralContext;
  class IntegerLiteralContext;
  class StringLiteralContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOF();
    antlr4::tree::TerminalNode* EOF(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementslContext : public antlr4::ParserRuleContext {
  public:
    StatementslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOF();
    antlr4::tree::TerminalNode* EOF(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementslContext* statementsl();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignContext *assign();
    CallContext *call();
    CaseContext *case_();
    ConstContext *const_();
    DataContext *data();
    DataLabelContext *dataLabel();
    DimContext *dim();
    EndContext *end();
    ForContext *for_();
    IfContext *if_();
    IfmlContext *ifml();
    InputContext *input();
    ImportlibContext *importlib();
    OptionContext *option();
    ProcedureContext *procedure();
    PrintContext *print();
    ReadContext *read();
    RepeatContext *repeat();
    RestoreContext *restore();
    ReturnContext *return_();
    StructContext *struct_();
    StructDimContext *structDim();
    StructInstanceContext *structInstance();
    SwapContext *swap();
    WhileContext *while_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  SeparatorContext : public antlr4::ParserRuleContext {
  public:
    SeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SeparatorContext* separator();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    antlr4::tree::TerminalNode *LET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  CaseContext : public antlr4::ParserRuleContext {
  public:
    CaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *END();
    SeparatorContext *separator();
    std::vector<WhenContext *> when();
    WhenContext* when(size_t i);
    antlr4::tree::TerminalNode *OTHERWISE();
    StatementsContext *statements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseContext* case_();

  class  ConstContext : public antlr4::ParserRuleContext {
  public:
    ConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstContext* const_();

  class  DataContext : public antlr4::ParserRuleContext {
  public:
    DataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    std::vector<IntegerLiteralContext *> integerLiteral();
    IntegerLiteralContext* integerLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataContext* data();

  class  DataLabelContext : public antlr4::ParserRuleContext {
  public:
    DataLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATALABEL();
    StringLiteralContext *stringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataLabelContext* dataLabel();

  class  DimContext : public antlr4::ParserRuleContext {
  public:
    DimContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    antlr4::tree::TerminalNode *SOPEN();
    antlr4::tree::TerminalNode *SCLOSE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimContext* dim();

  class  ExprcallContext : public antlr4::ParserRuleContext {
  public:
    ExprcallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprcallContext* exprcall();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndContext* end();

  class  ForContext : public antlr4::ParserRuleContext {
  public:
    ForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQ();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    antlr4::tree::TerminalNode *STEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForContext* for_();

  class  ImportlibContext : public antlr4::ParserRuleContext {
  public:
    ImportlibContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    StringLiteralContext *stringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportlibContext* importlib();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    std::vector<StatementslContext *> statementsl();
    StatementslContext* statementsl(size_t i);
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContext* if_();

  class  IfmlContext : public antlr4::ParserRuleContext {
  public:
    IfmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StatementsContext *> statements();
    StatementsContext* statements(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfmlContext* ifml();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    IntegerLiteralContext *integerLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    DaricParser::ExpressionContext *value = nullptr;
    DaricParser::ExpressionContext *format = nullptr;
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *SYS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DEF();
    antlr4::tree::TerminalNode* DEF(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureContext* procedure();

  class  RepeatContext : public antlr4::ParserRuleContext {
  public:
    RepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatContext* repeat();

  class  ReadContext : public antlr4::ParserRuleContext {
  public:
    ReadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadContext* read();

  class  RestoreContext : public antlr4::ParserRuleContext {
  public:
    RestoreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTORE();
    StringLiteralContext *stringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestoreContext* restore();

  class  ReturnContext : public antlr4::ParserRuleContext {
  public:
    ReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnContext* return_();

  class  StructContext : public antlr4::ParserRuleContext {
  public:
    StructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RECORD();
    antlr4::tree::TerminalNode* RECORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<TypeOrStructContext *> typeOrStruct();
    TypeOrStructContext* typeOrStruct(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructContext* struct_();

  class  StructDimContext : public antlr4::ParserRuleContext {
  public:
    StructDimContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SOPEN();
    antlr4::tree::TerminalNode *SCLOSE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDimContext* structDim();

  class  StructInstanceContext : public antlr4::ParserRuleContext {
  public:
    StructInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructInstanceContext* structInstance();

  class  SwapContext : public antlr4::ParserRuleContext {
  public:
    SwapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWAP();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwapContext* swap();

  class  WhenContext : public antlr4::ParserRuleContext {
  public:
    WhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    StatementsContext *statements();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenContext* when();

  class  WhileContext : public antlr4::ParserRuleContext {
  public:
    WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileContext* while_();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *SOPEN();
    antlr4::tree::TerminalNode *SCLOSE();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *MAIN();
    LiteralContext *literal();
    ExprcallContext *exprcall();
    VariableContext *variable();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *COMP();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *DEG();
    antlr4::tree::TerminalNode *RAD();
    antlr4::tree::TerminalNode *SGN();
    antlr4::tree::TerminalNode *ACS();
    antlr4::tree::TerminalNode *ASN();
    antlr4::tree::TerminalNode *ATN();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SQR();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *CHR();
    antlr4::tree::TerminalNode *INSTR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *HAT();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *EOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  TypeOrStructContext : public antlr4::ParserRuleContext {
  public:
    TypeOrStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeOrStructContext* typeOrStruct();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FloatLiteralContext *floatLiteral();
    IntegerLiteralContext *integerLiteral();
    StringLiteralContext *stringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOATLITERAL();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXNUMBER();
    antlr4::tree::TerminalNode *BINARYNUMBER();
    antlr4::tree::TerminalNode *INTEGERLITERAL();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRINGLITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


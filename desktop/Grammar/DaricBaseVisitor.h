
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "DaricVisitor.h"


/**
 * This class provides an empty implementation of DaricVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DaricBaseVisitor : public DaricVisitor {
public:

  virtual std::any visitProgram(DaricParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(DaricParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementsl(DaricParser::StatementslContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(DaricParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeparator(DaricParser::SeparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(DaricParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(DaricParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(DaricParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase(DaricParser::CaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst(DaricParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData(DaricParser::DataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataLabel(DaricParser::DataLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDim(DaricParser::DimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprcall(DaricParser::ExprcallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd(DaricParser::EndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(DaricParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(DaricParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfml(DaricParser::IfmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule(DaricParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(DaricParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(DaricParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure(DaricParser::ProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeat(DaricParser::RepeatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRead(DaricParser::ReadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestore(DaricParser::RestoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(DaricParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(DaricParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDim(DaricParser::StructDimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructInstance(DaricParser::StructInstanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwap(DaricParser::SwapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhen(DaricParser::WhenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile(DaricParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(DaricParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(DaricParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(DaricParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeOrStruct(DaricParser::TypeOrStructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(DaricParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(DaricParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(DaricParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(DaricParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};


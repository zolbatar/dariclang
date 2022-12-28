
// Generated from Daric.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "DaricParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DaricParser.
 */
class  DaricVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DaricParser.
   */
    virtual std::any visitProgram(DaricParser::ProgramContext *context) = 0;

    virtual std::any visitStatements(DaricParser::StatementsContext *context) = 0;

    virtual std::any visitStatementsl(DaricParser::StatementslContext *context) = 0;

    virtual std::any visitStatement(DaricParser::StatementContext *context) = 0;

    virtual std::any visitSeparator(DaricParser::SeparatorContext *context) = 0;

    virtual std::any visitAssign(DaricParser::AssignContext *context) = 0;

    virtual std::any visitCall(DaricParser::CallContext *context) = 0;

    virtual std::any visitCase(DaricParser::CaseContext *context) = 0;

    virtual std::any visitConst(DaricParser::ConstContext *context) = 0;

    virtual std::any visitData(DaricParser::DataContext *context) = 0;

    virtual std::any visitDataLabel(DaricParser::DataLabelContext *context) = 0;

    virtual std::any visitDim(DaricParser::DimContext *context) = 0;

    virtual std::any visitExprcall(DaricParser::ExprcallContext *context) = 0;

    virtual std::any visitEnd(DaricParser::EndContext *context) = 0;

    virtual std::any visitFor(DaricParser::ForContext *context) = 0;

    virtual std::any visitImportlib(DaricParser::ImportlibContext *context) = 0;

    virtual std::any visitIf(DaricParser::IfContext *context) = 0;

    virtual std::any visitIfml(DaricParser::IfmlContext *context) = 0;

    virtual std::any visitInput(DaricParser::InputContext *context) = 0;

    virtual std::any visitOption(DaricParser::OptionContext *context) = 0;

    virtual std::any visitParameter(DaricParser::ParameterContext *context) = 0;

    virtual std::any visitPrint(DaricParser::PrintContext *context) = 0;

    virtual std::any visitProcedure(DaricParser::ProcedureContext *context) = 0;

    virtual std::any visitRepeat(DaricParser::RepeatContext *context) = 0;

    virtual std::any visitRead(DaricParser::ReadContext *context) = 0;

    virtual std::any visitRestore(DaricParser::RestoreContext *context) = 0;

    virtual std::any visitReturn(DaricParser::ReturnContext *context) = 0;

    virtual std::any visitStruct(DaricParser::StructContext *context) = 0;

    virtual std::any visitStructDim(DaricParser::StructDimContext *context) = 0;

    virtual std::any visitStructInstance(DaricParser::StructInstanceContext *context) = 0;

    virtual std::any visitSwap(DaricParser::SwapContext *context) = 0;

    virtual std::any visitWhen(DaricParser::WhenContext *context) = 0;

    virtual std::any visitWhile(DaricParser::WhileContext *context) = 0;

    virtual std::any visitVariable(DaricParser::VariableContext *context) = 0;

    virtual std::any visitExpression(DaricParser::ExpressionContext *context) = 0;

    virtual std::any visitType(DaricParser::TypeContext *context) = 0;

    virtual std::any visitCollection(DaricParser::CollectionContext *context) = 0;

    virtual std::any visitTypeOrStruct(DaricParser::TypeOrStructContext *context) = 0;

    virtual std::any visitLiteral(DaricParser::LiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(DaricParser::FloatLiteralContext *context) = 0;

    virtual std::any visitIntegerLiteral(DaricParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(DaricParser::StringLiteralContext *context) = 0;


};


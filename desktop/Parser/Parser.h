#pragma once

#include <istream>
#include <list>
#include <sstream>
#include "../Grammar/DaricParser.h"
#include "../Grammar/DaricVisitor.h"
#include "../Exception/Exception.h"
#include "ParserToken.h"
#include "../Variables/PrimitiveTypes.h"
#include "../Variables/Shared.h"
#include "../Variables/Instance.h"
#include "../Variables/Reference.h"

class Procedure {
public:
    Procedure(std::string name)
            : name(name) {}

private:
    std::string name;
};

class Parser : DaricVisitor {
public:
    Parser(SharedState &state) : state(state) {}
    void Parse(std::istream *source);

    std::string GetModule() { return module; }

    std::vector<ParserToken> &GetStatements() {
        return statements;
    }

private:
    SharedState &state;
    std::vector<ParserToken> statements;
    std::string module = "Daric";
    std::unordered_map<std::string, Procedure> procedures;
    Procedure *current_procedure = nullptr;

    void RaiseException(std::string msg, antlr4::ParserRuleContext *context) {
        throw CustomException(ExceptionType::PARSER, context->getStart()->getLine(),
                              context->getStart()->getCharPositionInLine(), msg);
    }

    void TypeError(antlr4::ParserRuleContext *context) {
        throw CustomException(ExceptionType::PARSER, context->getStart()->getLine(),
                              context->getStart()->getCharPositionInLine(),
                              "Unexpected type");
    }

    void SyntaxError(antlr4::ParserRuleContext *context) {
        throw CustomException(ExceptionType::PARSER, context->getStart()->getLine(),
                              context->getStart()->getCharPositionInLine(),
                              "Syntax error");
    }

    ParserToken CreateToken(antlr4::ParserRuleContext *context) {
        ParserToken p;
        p.line = context->getStart()->getLine();
        p.char_position = context->getStart()->getCharPositionInLine();
        return p;
    }

    ParserToken CreateToken(antlr4::ParserRuleContext *context, ParserTokenType type) {
        ParserToken p;
        p.type = type;
        p.line = context->getStart()->getLine();
        p.char_position = context->getStart()->getCharPositionInLine();
        return p;
    }

protected:
    std::any visitAssign(DaricParser::AssignContext *context);
    std::any visitAssignment(DaricParser::AssignmentContext *context);
    std::any visitCall(DaricParser::CallContext *context);
    std::any visitConst(DaricParser::ConstContext *context);
    std::any visitEnd(DaricParser::EndContext *context);
    std::any visitExpression(DaricParser::ExpressionContext *context);
    std::any visitFloatLiteral(DaricParser::FloatLiteralContext *context);
    std::any visitIf(DaricParser::IfContext *context);
    std::any visitIfml(DaricParser::IfmlContext *context);
    std::any visitIntegerLiteral(DaricParser::IntegerLiteralContext *context);
    std::any visitLiteral(DaricParser::LiteralContext *context);
    std::any visitModule(DaricParser::ModuleContext *context);
    std::any visitParameter(DaricParser::ParameterContext *context);
    std::any visitPrint(DaricParser::PrintContext *context);
    std::any visitProcedure(DaricParser::ProcedureContext *context);
    std::any visitProgram(DaricParser::ProgramContext *context);
    std::any visitSeparator(DaricParser::SeparatorContext *context);
    std::any visitStatement(DaricParser::StatementContext *context);
    std::any visitStatements(DaricParser::StatementsContext *context);
    std::any visitStatementsl(DaricParser::StatementslContext *context);
    std::any visitStringLiteral(DaricParser::StringLiteralContext *context);
    std::any visitType(DaricParser::TypeContext *context);
    std::any visitTypeOrStruct(DaricParser::TypeOrStructContext *context);
    std::any visitReturn(DaricParser::ReturnContext *context);
    std::any visitExprcall(DaricParser::ExprcallContext *context);
    std::any visitSwap(DaricParser::SwapContext *context);
    std::any visitVariable(DaricParser::VariableContext *context);
    std::any visitDim(DaricParser::DimContext *context);
    std::any visitStruct(DaricParser::StructContext *context);
    std::any visitStructInstance(DaricParser::StructInstanceContext *context);
    std::any visitStructDim(DaricParser::StructDimContext *context);

    ParserToken SingleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
    ParserToken DoubleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
    ParserToken TripleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
};
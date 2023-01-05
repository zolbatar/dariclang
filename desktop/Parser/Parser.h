#pragma once

#include <istream>
#include <list>
#include <sstream>
#include "../Grammar/DaricParser.h"
#include "../Grammar/DaricVisitor.h"
#include "../Exception/Exception.h"
#include "ParserToken.h"
#include "../Variables/PrimitiveTypes.h"
#include "../Shared/Shared.h"
#include "../Variables/Instance.h"
#include "../Variables/InstanceConstant.h"
#include "../Variables/InstancePrimitive.h"
#include "../Variables/InstancePrimitiveArray.h"
#include "../Variables/InstanceRecord.h"
#include "../Variables/InstanceRecordArray.h"
#include "../Variables/Reference.h"

extern std::list<CaughtException> errors;

class Procedure {
public:
    Procedure(std::string name)
            : name(name) {}

private:
    std::string name;
};

class Parser : DaricVisitor {
public:
    Parser(SourceFileData &state, CompilerOptions &options) : state(state), options(options) {}
    std::vector<std::string> Parse(std::istream &source, CompileTarget target);
    void setFilename(std::string name) { filename = name; }
    std::string GetFilename() { return filename; }

    std::vector<ParserToken> &GetStatements() {
        return statements;
    }

private:
    CompilerOptions &options;
    SourceFileData &state;
    std::string filename;
    std::vector<std::string> additional_files;
    std::vector<ParserToken> statements;
    std::unordered_map<std::string, Procedure> procedures;
    Procedure *current_procedure = nullptr;

    Scope GetScope() {
        return current_procedure == nullptr ? Scope::GLOBAL : Scope::LOCAL;
    }

    void RaiseException(std::string msg, antlr4::ParserRuleContext *context) {
        throw CustomException(ExceptionType::PARSER, filename, context->getStart()->getLine(),
                              context->getStart()->getCharPositionInLine(), msg);
    }

    ParserToken CreateToken(antlr4::ParserRuleContext *context) {
        ParserToken p;
        p.scope = GetScope();
        p.file.line = context->getStart()->getLine();
        p.file.filename = this->filename;
        p.file.char_position = context->getStart()->getCharPositionInLine();
        return p;
    }

    ParserToken CreateToken(antlr4::ParserRuleContext *context, ParserTokenType type) {
        ParserToken p = CreateToken(context);
        p.type = type;
        return p;
    }

protected:
    std::any visitAssign(DaricParser::AssignContext *context) override;
    std::any visitCall(DaricParser::CallContext *context) override;
    std::any visitConst(DaricParser::ConstContext *context) override;
    std::any visitEnd(DaricParser::EndContext *context) override;
    std::any visitExpression(DaricParser::ExpressionContext *context) override;
    std::any visitFloatLiteral(DaricParser::FloatLiteralContext *context) override;
    std::any visitIf(DaricParser::IfContext *context) override;
    std::any visitIfml(DaricParser::IfmlContext *context) override;
    std::any visitIntegerLiteral(DaricParser::IntegerLiteralContext *context) override;
    std::any visitLiteral(DaricParser::LiteralContext *context) override;
    std::any visitParameter(DaricParser::ParameterContext *context) override;
    std::any visitPrint(DaricParser::PrintContext *context) override;
    std::any visitProcedure(DaricParser::ProcedureContext *context) override;
    std::any visitProgram(DaricParser::ProgramContext *context) override;
    std::any visitSeparator(DaricParser::SeparatorContext *context) override;
    std::any visitStatement(DaricParser::StatementContext *context) override;
    std::any visitStatements(DaricParser::StatementsContext *context) override;
    std::any visitStatementsl(DaricParser::StatementslContext *context) override;
    std::any visitStringLiteral(DaricParser::StringLiteralContext *context) override;
    std::any visitType(DaricParser::TypeContext *context) override;
    std::any visitTypeOrStruct(DaricParser::TypeOrStructContext *context) override;
    std::any visitReturn(DaricParser::ReturnContext *context) override;
    std::any visitExprcall(DaricParser::ExprcallContext *context) override;
    std::any visitSwap(DaricParser::SwapContext *context) override;
    std::any visitVariable(DaricParser::VariableContext *context) override;
    std::any visitDim(DaricParser::DimContext *context) override;
    std::any visitStruct(DaricParser::StructContext *context) override;
    std::any visitStructInstance(DaricParser::StructInstanceContext *context) override;
    std::any visitStructDim(DaricParser::StructDimContext *context) override;
    std::any visitRepeat(DaricParser::RepeatContext *context) override;
    std::any visitWhile(DaricParser::WhileContext *context) override;
    std::any visitFor(DaricParser::ForContext *context) override;
    std::any visitCase(DaricParser::CaseContext *context) override;
    std::any visitWhen(DaricParser::WhenContext *context) override;
    std::any visitData(DaricParser::DataContext *context) override;
    std::any visitDataLabel(DaricParser::DataLabelContext *context) override;
    std::any visitRestore(DaricParser::RestoreContext *context) override;
    std::any visitRead(DaricParser::ReadContext *context) override;
    std::any visitOption(DaricParser::OptionContext *context) override;
    std::any visitImportlib(DaricParser::ImportlibContext *context) override;
    std::any visitInput(DaricParser::InputContext *context) override;
    std::any visitClear(DaricParser::ClearContext *context) override;
    std::any visitSet(DaricParser::SetContext *context) override;
    std::any visitGet(DaricParser::GetContext *context) override;
    std::any visitTypeSignature(DaricParser::TypeSignatureContext *context) override;
    std::any visitTypeSignatureSingle(DaricParser::TypeSignatureSingleContext *context) override;
    std::any visitTypeSignatureArray(DaricParser::TypeSignatureArrayContext *context) override;
    std::any visitTypeSignatureRecord(DaricParser::TypeSignatureRecordContext *context) override;
    std::any visitTypeSignatureRecordArray(DaricParser::TypeSignatureRecordArrayContext *context) override;

    ParserToken SingleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
    ParserToken DoubleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
    ParserToken TripleExpression(DaricParser::ExpressionContext *context, ParserTokenType type);
};
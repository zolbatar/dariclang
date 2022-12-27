#include <filesystem>
#include "../Parser.h"

extern std::list<CaughtException> errors;

std::any Parser::visitImportlib(DaricParser::ImportlibContext *context) {
    ParserToken ps = CreateToken(context, ParserTokenType::IMPORT);
    auto value = std::any_cast<ParserToken>(visit(context->stringLiteral()));

    // Does this exist?
    const std::filesystem::path pth{value.sv + ".daric"};
    if (!std::filesystem::exists(pth)) {
        RaiseException("Imported file '" + value.sv + "' does not exist", context);
    }
    additional_files.push_back(pth.generic_string());

    ps.identifier = value.identifier;
    return ps;
}


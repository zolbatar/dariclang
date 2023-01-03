#include <iostream>
#include <fstream>
#include <memory>
#include <thread>
#include <chrono>
#include <filesystem>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Shared/SourceFile.h"
#include "../runtime/UI/UISDL.h"
#include "../runtime/Config/Config.h"
#include "../runtime/Config/json.hpp"

using json = nlohmann::json;
extern "C" void audio_init();
UISDL *ui = nullptr;
Config config;
CompilerOptions options;
std::atomic_bool done = false;
std::atomic_bool start_ui = false;
int screen_width;
int screen_height;
int screen_flags;
std::atomic_bool ui_started = false;
std::filesystem::path exe_path;
extern Input input;
std::list<CaughtException> errors;
std::string message;
extern std::atomic_bool escape_pressed;

void RunThread() {
    escape_pressed.store(false);
    if (ui_started.load())
        ui->Cls();
    input.Clear();
    Instance::ClearStatic();
    Reference::ClearStatic();
    errors.clear();
    SourceFile state(options);
    if (errors.size() == 0)
        state.ParseCompileAndRun();
    std::cout << "Message: " << message << std::endl;
    std::cout << "Errors (throwing back): " << errors.size() << std::endl;

    // Convert errors into suitable format
    json j = json::array();
    for (auto &error: errors) {
        json je;
        switch (error.type) {
            case ExceptionType::PARSER:
                je["type"] = "Parser";
                break;
            case ExceptionType::COMPILER:
                je["type"] = "Compiler";
                break;
            case ExceptionType::RUNTIME:
                je["type"] = "Runtime";
                break;
        }
        je["filename"] = error.filename;
        je["line_number"] = error.line_number;
        je["char_position"] = error.char_position;
        je["error"] = error.error;
        j.push_back(je);
    }

    // Now write out
    std::ofstream out(exe_path / "Throwback.json");
    out << j.dump(4) << std::endl;
    done.store(true);
    //while (1);
}

int main(int argc, char *argv[]) {
    exe_path = absolute(std::filesystem::path(argv[0])).parent_path();
    std::cout << "Welcome to Daric!" << std::endl;
    config.Load();
    Compiler::SetupLibrary();
    audio_init();

    if (argc == 1) {
        std::cout << "The source filename must be specified" << std::endl;
        exit(1);
    }

    options.file = argv[1];
    bool is_run_from_ide = false;
    if (options.file[0] == '@') {
        options.file = options.file.substr(1);
        is_run_from_ide = true;
        std::cout << "Running from IDE" << std::endl;
    }
    std::cout << "Filename: " << options.file << std::endl;

    // Set current path based on source file
    auto path = std::filesystem::path(options.file);
    path = path.parent_path();
    std::filesystem::current_path(path);

    // What sort of compile?
    if (argc == 2) {
        options.target = is_run_from_ide ? CompileTarget::INTERACTIVE : CompileTarget::JIT;
        options.use_exit_as_end = !is_run_from_ide;
    } else {
        options.target = CompileTarget::EXE;
        options.output_filename = std::string(argv[2]);
        options.use_exit_as_end = true;
    }
    options.run = argc == 2;
    ui = new UISDL();
    auto t = std::thread(&RunThread);
    t.detach();
    while (!done.load()) {
        if (start_ui.load()) {
            ui->Start(screen_width, screen_height, screen_flags & 1, screen_flags & 2);
            start_ui.store(false);
            ui_started.store(true);
        }
        if (ui_started.load()) {
            if (ui->Render([]() {})) {
                std::cout << "Shutdown requested" << std::endl;
                done.store(true);
            }
        }
    }
    delete ui;
    return 0;
}

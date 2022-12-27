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
    std::cout << "Errors: "  << errors.size() << std::endl;
    need to write out errors as json to be picked up by ide
    done = true;
}

void do_quit() {
    delete ui;
    exit(0);
}

int main(int argc, char *argv[]) {
    exe_path = std::filesystem::path{argv[0]}.parent_path();

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
    }

    // What sort of compile?
    if (argc == 2) {
        options.target = is_run_from_ide ? CompileTarget::INTERACTIVE : CompileTarget::JIT;
        options.use_exit_as_end = false;
    } else {
        options.target = CompileTarget::EXE;
        options.output_filename = std::string(argv[2]);
        options.use_exit_as_end = true;
    }
    options.run = argc == 2;
    auto t = std::thread(&RunThread);
    t.detach();
    while (!done) {
        if (start_ui) {
            ui = new UISDL();
            ui->Start(screen_width, screen_height, screen_flags & 1, screen_flags & 2);
            start_ui = false;
            ui_started.store(true);
        }
        if (ui_started.load()) {
            if (ui->Render([]() {})) {
                do_quit();
            }
        }
    }
    do_quit();
    return 0;
}

#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <filesystem>
#include "Parser/Parser.h"
#include "Compiler/Compiler.h"
#include "Variables/Shared.h"
#include "../runtime/UI/UISDL.h"

UISDL *ui;

CompilerOptions options;
std::atomic_bool done = false;
std::atomic_bool start_ui = false;
size_t screen_width;
size_t screen_height;
size_t screen_flags;
std::atomic_bool ui_started = false;
extern Console console;
extern Input input;
std::filesystem::path exe_path;

static void RunThread() {
    Instance::ClearStatic();
    Reference::ClearStatic();
    SharedState state;
    Parser parser(state);
    parser.Parse(options.file);
    Compiler c(state, &parser, std::move(options));
    auto t1 = std::chrono::steady_clock::now();
    if (c.Compile()) {
        if (options.run) {
            t1 = std::chrono::steady_clock::now();
            c.Run();
        } else
            c.CreateExecutable();
    }
    if (ui_started) {
        auto t2 = std::chrono::steady_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
        console.SetColour(0xFFFFFFFF);
//        console.WriteString("Program finished in " + std::to_string(time_span.count()) + "ms. Press a key to quit.");
        console.WriteString("Program finished. Press a key to quit.");
        ui->Flip(true);
        input.CheckForKeypress();
    }
    done = true;
}

void do_quit() {
    delete ui;
    exit(0);
}

int main(int argc, char *argv[]) {
    exe_path = std::filesystem::path{argv[0]}.parent_path();

    std::cout << "Welcome to Daric!\n" << std::endl;
    options.file = new std::ifstream(argv[1]);
    if (!options.file->is_open()) {
        std::cout << "Can't open source file\n";
        return 1;
    }

    // What sort of compile?
    options.output_ll_files = false;
    if (argc == 2) {
        options.target = CompileTarget::JIT;
        options.use_exit_as_end = true;
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
            ui_started = true;
        }
        if (ui_started) {
            if (ui->Render()) {
                do_quit();
            }
        }
    }
    do_quit();
    return 0;
}

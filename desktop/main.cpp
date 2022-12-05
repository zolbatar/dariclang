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
#include "../runtime/Sound/SoftSynth.h"

extern "C" void audio_init();
extern std::shared_ptr<SoftSynth> soft_synth;
UISDL *ui;

CompilerOptions options;
std::atomic_bool done = false;
std::atomic_bool start_ui = false;
size_t screen_width;
size_t screen_height;
size_t screen_flags;
std::atomic_bool ui_started = false;
std::filesystem::path exe_path;

static void RunThread() {
    Instance::ClearStatic();
    Reference::ClearStatic();
    SourceFile state(options);
    state.ParseCompileAndRun();
    done = true;
}

void do_quit() {
    delete ui;
    exit(0);
}

int main(int argc, char *argv[]) {
    exe_path = std::filesystem::path{argv[0]}.parent_path();

    std::cout << "Welcome to Daric!" << std::endl;
    options.file = argv[1];

    // What sort of compile?
    options.output_ll_files = true;
    if (argc == 2) {
        options.target = CompileTarget::JIT;
        options.use_exit_as_end = true;
    } else {
        options.target = CompileTarget::EXE;
        options.output_filename = std::string(argv[2]);
        options.use_exit_as_end = true;
    }
    options.run = argc == 2;
    if (options.target == CompileTarget::JIT)
        soft_synth = std::make_shared<SoftSynth>();
    audio_init();
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

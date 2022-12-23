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
#include "IDE/Edit.h"
#include "../runtime/Config/Config.h"

extern "C" void audio_init();
UISDL *ui;
Config config;
CompilerOptions options;
std::atomic_bool done = false;
std::atomic_bool start_ui = false;
int screen_width;
int screen_height;
int screen_flags;
std::atomic_bool ui_started = false;
std::atomic_bool running = false;
std::filesystem::path exe_path;
extern Input input;
extern std::list<CaughtException> errors;
extern std::atomic_bool escape_pressed;

void RunThread() {
    running.store(true);
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
    done = true;
    running.store(false);
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
    ui = new UISDL();

    if (argc == 1) {
        // Fire up IDE
        if (config.Windowed()) {
            ui->Start(config.WindowWidth(), config.WindowHeight(), true, false);
        } else {
            ui->Start(ui->GetScreenWidth(), ui->GetScreenHeight(), false, false);
        }
        std::cout << "UI Started" << std::endl;
        ui_started.store(true);

        Edit edit;
        while (true) {
            if (ui->Render([&]() {
                const ImGuiViewport *main_viewport = ImGui::GetMainViewport();
                if (!running) {
                    edit.Render(main_viewport);
                    edit.ChooseFile(main_viewport);
                    edit.ChooseFileToSave(main_viewport);
                }
            })) {
                do_quit();
            }
        }
    } else {
        options.file = argv[1];

        // What sort of compile?
        if (argc == 2) {
            options.target = CompileTarget::JIT;
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
                std::cout << "UISDL object created" << std::endl;
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
    }
    do_quit();
    return 0;
}

#include <thread>
#include <chrono>
#include <iostream>
#include <filesystem>
#include "UI/UISDL.h"
#include "Input/Input.h"
#include "Config/Config.h"

UISDL *ui = nullptr;
extern "C" void audio_init();
Config config;

std::atomic_bool done = false;
std::atomic_bool start_ui = false;
int screen_width;
int screen_height;
int screen_flags;
std::atomic_bool ui_started = false;
extern Console console;
extern Input input;
std::filesystem::path exe_path;

extern "C" void Implicit();

static void RunThread() {
    Implicit();
    done.store(true);
}

void do_quit() {
    delete ui;
    exit(0);
}

int main(int argc, char *argv[]) {
    exe_path = std::filesystem::path{argv[0]}.parent_path();
    //config.Load();
    audio_init();
    auto t = std::thread(&RunThread);
    t.detach();
    ui = new UISDL();
    while (!done.load()) {
        if (start_ui.load()) {
            ui->Start(screen_width, screen_height, screen_flags & 1, screen_flags & 2);
            start_ui.store(false);
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

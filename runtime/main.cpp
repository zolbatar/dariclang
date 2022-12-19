#include <thread>
#include <chrono>
#include <iostream>
#include <filesystem>
#include "UI/UISDL.h"
#include "Input/Input.h"

UISDL *ui = nullptr;
extern "C" void audio_init();

std::atomic_bool done = false;
std::atomic_bool start_ui = false;
size_t screen_width;
size_t screen_height;
size_t screen_flags;
std::atomic_bool ui_started = false;
extern Console console;
extern Input input;
std::filesystem::path exe_path;

extern "C" void Implicit();

static void RunThread() {
    Implicit();
    done = true;
}

void do_quit() {
    delete ui;
    exit(0);
}

int main(int argc, char *argv[]) {
    exe_path = std::filesystem::path{argv[0]}.parent_path();
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
            if (ui->Render([]() {})) {
                do_quit();
            }
        }
    }
    do_quit();
    return 0;
}

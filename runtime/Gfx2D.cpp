#include <iostream>
#include <thread>
#include "Types.h"
#include "UI/UISDL.h"
#include "UI/Console/Console.h"

extern UISDL *ui;
extern Console console;
extern std::atomic_bool ui_started;
extern std::atomic_bool start_ui;
extern size_t screen_width;
extern size_t screen_height;
extern size_t screen_flags;

extern "C" void gfx2d_mode(T_I w, T_I h, T_I flags) {
    screen_width = w;
    screen_height = h;
    screen_flags = flags;
    start_ui = true;

    // Wait for UI to be initialised
    while (!ui_started) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

extern "C" void gfx2d_line(T_I x1, T_I y1, T_I x2, T_I y2) {
    if (!ui_started)
        return;
    ui->Line(x1, y1, x2, y2);
}

extern "C" T_I gfx2d_swidth() {
    if (!ui_started)
        return 0;
    return ui->GetScreenWidth();
}

extern "C" T_I gfx2d_sheight() {
    if (!ui_started)
        return 0;
    return ui->GetScreenHeight();
}

extern "C" void gfx2d_flip() {
    if (!ui_started)
        return;
    ui->Flip(true);
}

extern "C" void gfx2d_cls() {
    if (!ui_started)
        return;
    ui->Cls();
}

extern "C" void gfx2d_plot(T_I x, T_I y) {
    if (!ui_started)
        return;
    ui->Plot(x, y);
}

extern "C" void gfx2d_origin(T_I x, T_I y) {
    if (!ui_started)
        return;
    ui->Origin(x, y);
}

extern "C" void gfx2d_fg(T_I r, T_I g, T_I b)
{
    if (!ui_started)
        return;
    auto v1 = static_cast<float>(r) / 255.0f;
    auto v2 = static_cast<float>(g) / 255.0f;
    auto v3 = static_cast<float>(b) / 255.0f;
    auto im = ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, 1.0));
    ui->SetFGColour(im);
    console.SetColour(im);
}

extern "C" void gfx2d_bg(T_I r, T_I g, T_I b)
{
    if (!ui_started)
        return;
    auto v1 = static_cast<float>(r) / 255.0f;
    auto v2 = static_cast<float>(g) / 255.0f;
    auto v3 = static_cast<float>(b) / 255.0f;
    auto im = ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, 1.0));
    ui->SetBGColour(im);
    ui->SetBGColour(im);
}
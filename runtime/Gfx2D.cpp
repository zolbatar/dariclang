#include <iostream>
#include <thread>
#include "Types.h"
#include "UI/UISDL.h"
#include "UI/Console/Console.h"
#include "Graphics3D/Engine.h"

extern UISDL *ui;
extern Console console;
extern std::atomic_bool ui_started;
extern std::atomic_bool start_ui;
extern size_t screen_width;
extern size_t screen_height;
extern size_t screen_flags;

extern "C" void gfx_uicheck() {
    if (ui_started.load())
        return;
    std::cout << "This operation requires graphics mode" << std::endl;
    exit(1);
}

extern "C" void gfx2d_bankedon() {
    gfx_uicheck();
    ui->BankedOn();
}

extern "C" void gfx2d_bankedoff() {
    gfx_uicheck();
    ui->BankedOff();
}

extern "C" void gfx2d_linewidth(T_F width) {
    gfx_uicheck();
    ui->SetLineWidth(width);
}

extern "C" void gfx2d_mode(T_I w, T_I h, T_I flags) {
    std::cout << "Mode called with " << w << "," << h << "," << flags << std::endl;
    screen_width = w;
    screen_height = h;
    screen_flags = flags;
    start_ui = true;

    if (flags & 2) {
        ui->BankedOn();
    } else {
        ui->BankedOff();
    }

    // Wait for UI to be initialised
    while (!ui_started.load()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

extern "C" void gfx2d_line(T_F x1, T_F y1, T_F x2, T_F y2) {
    gfx_uicheck();
    ui->Line(x1, y1, x2, y2);
}

extern "C" void gfx2d_rectangle(T_F x1, T_F y1, T_F x2, T_F y2) {
    gfx_uicheck();
    ui->Line(x1, y1, x2, y1);
    ui->Line(x1, y2, x2, y2);
    ui->Line(x1, y1, x1, y2);
    ui->Line(x2, y1, x2, y2);
}

extern "C" void gfx2d_rectanglefill(T_F x1, T_F y1, T_F x2, T_F y2) {
    gfx_uicheck();
    ui->FilledRectangle(x1, y1, x2, y2);
}

extern "C" T_I gfx2d_swidth() {
    gfx_uicheck();
    return ui->GetScreenWidth();
}

extern "C" T_I gfx2d_sheight() {
    gfx_uicheck();
    return ui->GetScreenHeight();
}

extern "C" void gfx2d_flip() {
    gfx_uicheck();
    ui->Flip(true);
}

extern "C" void gfx2d_cls() {
    gfx_uicheck();
    ui->Cls();
}

extern "C" void gfx2d_plot(T_F x, T_F y) {
    gfx_uicheck();
    ui->Plot(x, y);
}

extern "C" void gfx2d_origin(T_F x, T_F y) {
    gfx_uicheck();
    ui->Origin(x, y);
}

extern "C" void gfx2d_clipon(T_F x1, T_F y1, T_F x2, T_F y2) {
    gfx_uicheck();
    ui->Clip(x1, y1, x2, y2);
}

extern "C" void gfx2d_clipoff() {
    gfx_uicheck();
    ui->ClipOff();
}

extern "C" void gfx2d_fg(T_I r, T_I g, T_I b) {
    gfx_uicheck();
    auto v1 = static_cast<float>(r) / 255.0f;
    auto v2 = static_cast<float>(g) / 255.0f;
    auto v3 = static_cast<float>(b) / 255.0f;
    ui->SetFGColour(ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, ui->GetAlpha())));
    console.SetColour(ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, 1.0)));
}

extern "C" void gfx2d_set_alpha(T_I a) {
    gfx_uicheck();
    ui->SetAlpha(static_cast<float>(a) / 255.0f);
}

extern "C" void gfx2d_bg(T_I r, T_I g, T_I b) {
    gfx_uicheck();
    auto v1 = static_cast<float>(r) / 255.0f;
    auto v2 = static_cast<float>(g) / 255.0f;
    auto v3 = static_cast<float>(b) / 255.0f;
    auto im = ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, 1.0));
    ui->SetBGColour(im);
    ui->SetBGColour(im);
}

extern "C" T_I gfx2d_createcolour(T_I r, T_I g, T_I b) {
    gfx_uicheck();
    auto v1 = static_cast<float>(b) / 255.0f;
    auto v2 = static_cast<float>(g) / 255.0f;
    auto v3 = static_cast<float>(r) / 255.0f;
    auto im = ImGui::ColorConvertFloat4ToU32(ImVec4(v1, v2, v3, 1.0));
    return im;
}

extern "C" void gfx2d_circle(T_F x1, T_F y1, T_F r) {
    gfx_uicheck();
    ui->Circle(x1, y1, r);
}

extern "C" void gfx2d_circlefilled(T_F x1, T_F y1, T_F r) {
    gfx_uicheck();
    ui->FilledCircle(x1, y1, r);
}

extern "C" void gfx2d_triangle(T_F x1, T_F y1, T_F x2, T_F y2, T_F x3, T_F y3) {
    gfx_uicheck();
    ui->Triangle(x1, y1, x2, y2, x3, y3);
}

extern "C" void gfx2d_trianglefilled(T_F x1, T_F y1, T_F x2, T_F y2, T_F x3, T_F y3) {
    gfx_uicheck();
    ui->FilledTriangle(x1, y1, x2, y2, x3, y3);
}

extern "C" void gfx2d_triangleshaded(T_F x1, T_F y1, T_I c1, T_F x2, T_F y2, T_I c2, T_F x3, T_F y3, T_I c3) {
    gfx_uicheck();
    ui->ShadedTriangle(x1, y1, x2, y2, x3, y3, c1, c2, c3, false);
}

extern "C" void gfx2d_cursoroff() {
    gfx_uicheck();
    console.CursorOff();
}

extern "C" void gfx2d_cursoron() {
    gfx_uicheck();
    console.CursorOn();
}


#include <unordered_map>
#include <string>
#include <vector>
#include <memory>
#include "Types.h"
#include "UI/UISDL.h"
#include "imgui.h"

struct Window {
    std::string name;
    int x1;
    int y1;
    int x2;
    int y2;
    ImU32 fgColour = 0xFFFFFFFF;
    ImU32 bgColour = 0x000000FF;
    float line_width = 1.0f;
    float alpha = 1.0f;
    float origin_x = 0.0f;
    float origin_y = 0.0f;
    bool show = true;
    std::vector<std::unique_ptr<RenderShape>> shapes;
    std::vector<std::unique_ptr<RenderShape>> shapesBackBuffer;
};

extern UISDL *ui;
extern Console console;
Window regular;
std::unordered_map<std::string, Window> windows;
extern "C" void gui_endwindow();

void GUIInit() {
    gui_endwindow();
}

int GetWindowWidth(T_S window) {
    auto ff = &windows.find(window)->second;
    return ff->x2;
}

int GetWindowHeight(T_S window) {
    auto ff = &windows.find(window)->second;
    return ff->y2;
}

void RenderWindows() {
    auto main_viewport = ImGui::GetMainViewport();
    static bool window_output = true;

    // Core background
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
    ImGui::SetNextWindowPos(main_viewport->Pos);
    ImGui::SetNextWindowSize(main_viewport->Size);
    ImGui::Begin("Fullscreen", &window_output,
                 ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize |
                 ImGuiWindowFlags_NoSavedSettings |
                 ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoBringToFrontOnFocus);
    gui_endwindow();
    ui->Render3DWindow();
    ui->RenderShapes(&regular.shapes, &regular.shapesBackBuffer);
    console.Update();
    ImGui::End();
    ImGui::PopStyleVar();
    ImGui::PopStyleVar();

    // Now child windows
    for (auto &w: windows) {
        auto ff = &w.second;
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
        ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 1.0f);
        ImGui::SetNextWindowPos(ImVec2(ff->x1, ff->y1), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowContentSize(ImVec2(ff->x2, ff->y2));
        ImGui::Begin(ff->name.c_str(), &ff->show, ImGuiWindowFlags_NoSavedSettings);
        auto size = ImGui::GetWindowSize();
        ff->x2 = size.x;
        ff->y2 = size.y - ImGui::GetFrameHeight();
        ui->SetFGColour(ff->fgColour);
        ui->SetBGColour(ff->bgColour);
        ui->SetAlpha(ff->alpha);
        ui->SetLineWidth(ff->line_width);
        ui->SetOrigin(ff->origin_x, ff->origin_y);
        ui->RenderShapes(&ff->shapes, &ff->shapesBackBuffer);
        ImGui::End();
    }
}

extern "C" void gui_window(T_S name, T_I x1, T_I y1, T_I x2, T_I y2) {
    windows.insert(std::make_pair(name, Window{
            .name = name,
            .x1=(int) x1,
            .y1=(int) y1,
            .x2=(int) x2,
            .y2=(int) y2}));
}

extern "C" void gui_startwindow(T_S win) {
    auto ff = &windows.find(win)->second;
    ui->SetShapesBuffer(&ff->shapes, &ff->shapesBackBuffer);
}

extern "C" void gui_endwindow() {
    ui->SetFGColour(regular.fgColour);
    ui->SetBGColour(regular.bgColour);
    ui->SetAlpha(regular.alpha);
    ui->SetLineWidth(regular.line_width);
    ui->SetOrigin(regular.origin_x, regular.origin_y);
    ui->SetShapesBuffer(&regular.shapes, &regular.shapesBackBuffer);
}

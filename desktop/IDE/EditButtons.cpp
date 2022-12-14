#include "Edit.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"
#include "../Compiler/CompilerOptions.h"

extern void RunThread();

extern std::filesystem::path exe_path;
extern CompilerOptions options;

void Edit::SetButtonStyle(int i) {
    ImGui::PushStyleColor(ImGuiCol_Button, (ImVec4) ImColor::HSV(i / 7.0f, 0.6f, 0.6f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, (ImVec4) ImColor::HSV(i / 7.0f, 0.7f, 0.7f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, (ImVec4) ImColor::HSV(i / 7.0f, 0.8f, 0.8f));
}

void Edit::ChooseFile(const ImGuiViewport *main_viewport) {
    ImGui::SetNextWindowPos(main_viewport->GetCenter(), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
    if (ImGuiFileDialog::Instance()->Display("ChooseFileDlgKey",
                                             ImGuiWindowFlags_None,
                                             ImVec2(main_viewport->Size.x * 0.8, main_viewport->Size.y * 0.8))) {

        // action if OK
        if (ImGuiFileDialog::Instance()->IsOk()) {
            std::string filePathName = ImGuiFileDialog::Instance()->GetFilePathName();
            std::string filePath = ImGuiFileDialog::Instance()->GetCurrentPath();
            Edit::LoadFile(filePathName);
        }

        // close
        ImGuiFileDialog::Instance()->Close();
    }
}

void Edit::EditButtons(const ImGuiViewport *main_viewport) {
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(8, 8));
    float height = ImGui::CalcTextSize("|").y + (ImGui::GetStyle().FramePadding.y * 2.0f) + 16;
    ImGui::BeginChild("Buttons", ImVec2(main_viewport->Size.x, height), false, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_AlwaysUseWindowPadding);

    // Load
    if (ImGui::Button("Load")) {
        ImGuiFileDialog::Instance()->OpenDialog(
                "ChooseFileDlgKey",
                "Choose File",
                ".daric",
                ".",
                1,
                nullptr,
                ImGuiFileDialogFlags_Modal);
    }
    ImGui::SameLine();

    // Save
    bool dis = editor == nullptr || !editor_files[editor_name].unsaved_changes;
    if (dis) ImGui::BeginDisabled();
    if (ImGui::Button("Save")) {
        std::ofstream t(editor_name);
        if (t.good()) {
            auto ss = editors[editor_name].GetText();
            t.write(ss.c_str(), ss.length());
            editor_files[editor_name].unsaved_changes = false;
        }
    }
    ImGui::SameLine();
    if (dis) ImGui::EndDisabled();

    // Revert
    dis = editor == nullptr || !editor_files[editor_name].unsaved_changes || !editor_files[editor_name].is_file_based;
    if (dis) ImGui::BeginDisabled();
    ImGui::Button("Revert");
    ImGui::SameLine();
    if (dis) ImGui::EndDisabled();

    std::string path = "Demos/";//exe_path.parent_path().generic_string();
    SetButtonStyle(3);
    if (ImGui::Button("Load Demo"))
        ImGui::OpenPopup("load_demo_popup");
    ImGui::PopStyleColor(3);
    ImGui::SameLine();
    if (ImGui::BeginPopup("load_demo_popup")) {
        if (ImGui::Selectable("Welcome Tape"))
            LoadFile(path + "Welcome.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Bubble Universe"))
            LoadFile(path + "BubbleUniverse.daric");
        if (ImGui::Selectable("Clock"))
            LoadFile(path + "Clock.daric");
        if (ImGui::Selectable("Daric"))
            LoadFile(path + "Daric.daric");
        if (ImGui::Selectable("Death Star"))
            LoadFile(path + "DeathStar.daric");
        if (ImGui::Selectable("Fake Windows"))
            LoadFile(path + "FakeWindows.daric");
        if (ImGui::Selectable("Fonts"))
            LoadFile(path + "Fonts.daric");
        if (ImGui::Selectable("Mandelbrot"))
            LoadFile(path + "Mandelbrot.daric");
        if (ImGui::Selectable("Raytracer"))
            LoadFile(path + "Raytracer.daric");
        if (ImGui::Selectable("Sierpinski"))
            LoadFile(path + "Sierpinski.daric");
        if (ImGui::Selectable("Sprites"))
            LoadFile(path + "Sprites.daric");
        if (ImGui::Selectable("WorldInLines"))
            LoadFile(path + "WorldInLines.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Cubes"))
            LoadFile(path + "Cubes.daric");
        if (ImGui::Selectable("Load 3D Models"))
            LoadFile(path + "Load3D.daric");
        if (ImGui::Selectable("Terrain"))
            LoadFile(path + "Terrain.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Audio Samples"))
            LoadFile(path + "SDLAudio.daric");
        if (ImGui::Selectable("Software Synthesizer"))
            LoadFile(path + "Sound.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Greedy Algorithm (Benchmark)"))
            LoadFile(path + "Greedy.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Tester"))
            LoadFile(path + "Tester.daric");
        if (ImGui::Selectable("Tester File I/O"))
            LoadFile(path + "TesterFileIO.daric");
        ImGui::EndPopup();
    }

    // Run
    dis = editor == nullptr;
    if (dis) ImGui::BeginDisabled();
    SetButtonStyle(0);
    if (ImGui::Button("Run")) {
        options.file = this->editor_name;
        options.target = CompileTarget::INTERACTIVE;
        options.use_exit_as_end = false;
        options.optimise = false;
        options.run = true;
        auto t = std::thread(&RunThread);
        t.detach();
    }
    ImGui::SameLine();
    if (ImGui::Button("Run [Release]")) {
        options.file = this->editor_name;
        options.target = CompileTarget::INTERACTIVE;
        options.use_exit_as_end = true;
        options.optimise = true;
        options.run = true;
        auto t = std::thread(&RunThread);
        t.detach();
    }
    ImGui::SameLine();
    ImGui::PopStyleColor(3);
    if (dis) ImGui::EndDisabled();

    // Quit
    SetButtonStyle(6);
    if (ImGui::Button("Quit")) {
        exit(0);
    }
    ImGui::PopStyleColor(3);
    ImGui::EndChild();
    ImGui::PopStyleVar();
}
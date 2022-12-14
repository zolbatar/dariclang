#include <filesystem>
#include <iostream>
#include "Edit.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"
#include "../UI/UISDL.h"
#include "../../runtime/Library/StringLib.h"
#include "../../runtime/Config/Config.h"

extern std::filesystem::path exe_path;
std::string message;
extern UISDL *ui;
extern std::atomic_bool run;
extern std::string cmd;
extern Config config;

void Edit::SetButtonStyle(int i) {
    ImGui::PushStyleColor(ImGuiCol_Button, (ImVec4) ImColor::HSV(i / 7.0f, 0.6f, 0.6f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, (ImVec4) ImColor::HSV(i / 7.0f, 0.7f, 0.7f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, (ImVec4) ImColor::HSV(i / 7.0f, 0.8f, 0.8f));
}

void Edit::ChooseFile(const ImGuiViewport *main_viewport) {
    ImVec2 maxSize = ImVec2(main_viewport->Size.x * 0.8, main_viewport->Size.y * 0.8);  // The full display area
    ImGui::SetNextWindowPos(main_viewport->GetCenter(), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
    if (ImGuiFileDialog::Instance()->Display("ChooseFileDlgKey", ImGuiWindowFlags_NoCollapse, maxSize, maxSize)) {

        // action if OK
        if (ImGuiFileDialog::Instance()->IsOk()) {
            std::string filePathName = ImGuiFileDialog::Instance()->GetFilePathName();
            Edit::LoadFile(filePathName);
        }

        // close
        ImGuiFileDialog::Instance()->Close();
    }
}

void Edit::ChooseFileToSave(const ImGuiViewport *main_viewport) {
    ImVec2 maxSize = ImVec2(main_viewport->Size.x * 0.8, main_viewport->Size.y * 0.8);  // The full display area
    ImGui::SetNextWindowPos(main_viewport->GetCenter(), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
    if (ImGuiFileDialog::Instance()->Display("ChooseFileDlgKeySave", ImGuiWindowFlags_NoCollapse, maxSize, maxSize)) {

        // action if OK
        if (ImGuiFileDialog::Instance()->IsOk()) {
            std::string filePathName = ImGuiFileDialog::Instance()->GetFilePathName();
            std::string filePath = ImGuiFileDialog::Instance()->GetCurrentPath();

            // Update to new saved name
            {
                auto nn = editor_files.extract(editor_name);
                nn.key() = filePathName;
                editor_files.insert(std::move(nn));
            }
            {
                auto nn = editors.extract(editor_name);
                nn.key() = filePathName;
                editors.insert(std::move(nn));
            }

            // And do actual save
            std::ofstream t(filePathName);
            if (t.good()) {
                auto ss = editors[filePathName].GetText();
                t.write(ss.c_str(), ss.length());
                editor_files[filePathName].unsaved_changes = false;
                editor_files[filePathName].is_file_based = true;
            }
        }

        // close
        ImGuiFileDialog::Instance()->Close();
    }
}

void Edit::EditButtons(const ImGuiViewport *main_viewport) {
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(8, 8));
    float height = ImGui::CalcTextSize("|").y + (ImGui::GetStyle().FramePadding.y * 2.0f) + 16;
    ImGui::BeginChild("Buttons", ImVec2(main_viewport->Size.x, height), false,
                      ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_AlwaysUseWindowPadding);

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
    bool new_file = !editor_name.empty() && !editor_files[editor_name].is_file_based;
    bool dis = !new_file && (editor == nullptr || !editor_files[editor_name].unsaved_changes); // Any changes?
    if (dis) ImGui::BeginDisabled();
    if (ImGui::Button("Save")) {
        if (new_file) {
            ImGuiFileDialog::Instance()->OpenDialog(
                    "ChooseFileDlgKeySave",
                    "Choose File",
                    ".daric",
                    ".",
                    1,
                    nullptr,
                    ImGuiFileDialogFlags_Modal);
        } else {
            std::ofstream t(editor_name);
            if (t.good()) {
                auto ss = editors[editor_name].GetText();
                t.write(ss.c_str(), ss.length());
                editor_files[editor_name].unsaved_changes = false;
            }
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

    std::string path;
#ifdef DEBUG
    path = "/Users/daryl/Shared/Daric/Demos/";
#else
    path = (exe_path.parent_path() / "Demos/").generic_string();
#endif

    SetButtonStyle(3);
    if (ImGui::Button("Load Demo"))
        ImGui::OpenPopup("load_demo_popup");
    ImGui::PopStyleColor(3);
    ImGui::SameLine();
    if (ImGui::BeginPopup("load_demo_popup")) {
        if (ImGui::Selectable("Darch (Zarch style graphics)"))
            LoadFile("Darch/Darch.daric");
        ImGui::Separator();
        if (ImGui::Selectable("2D Primitives"))
            LoadFile(path + "Graphics2d.daric");
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
        if (ImGui::Selectable("Hello"))
            LoadFile(path + "Hello.daric");
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
        if (ImGui::Selectable("Windowed GUI"))
            LoadFile(path + "GUI.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Cubes"))
            LoadFile(path + "Cubes.daric");
        if (ImGui::Selectable("Load 3D Models"))
            LoadFile(path + "Load3D.daric");
        if (ImGui::Selectable("Terrain"))
            LoadFile(path + "Terrain.daric");
        ImGui::Separator();
        if (ImGui::Selectable("Music, Audio Samples & Synth"))
            LoadFile(path + "SDLAudio.daric");
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
#ifdef DEBUG
        cmd = "/Users/daryl/Shared/Daric/mac/Daric";
        cmd += " \"@" + this->editor_name + "\"";
#else
#if _WIN64
        cmd = "\"" + ((exe_path / "Daric.exe").generic_string() + "\" \"@" + this->editor_name + "\"");
#else
        cmd = "\"" + ((exe_path / "Daric").generic_string() + "\" \"@" + this->editor_name + "\"");
#endif
#endif
#if _WIN64
        replaceAll(cmd, "/", "\\");
        cmd = "start \"\" /wait "+cmd;
#endif
        run.store(true);
    }
    ImGui::SameLine();
/*    if (ImGui::Button("Create Executable")) {
        options.file = this->editor_name;
        options.output_filename = std::filesystem::path(this->editor_name).replace_extension("").generic_string();
        options.target = CompileTarget::EXE;
        options.use_exit_as_end = true;
        options.optimise = true;
        options.run = false;
        auto t = std::thread(&RunThread);
        t.detach();
    }
    ImGui::SameLine();*/
    ImGui::PopStyleColor(3);
    if (dis) ImGui::EndDisabled();

    // Quit
    SetButtonStyle(6);
    if (ImGui::Button("Quit")) {
        delete ui;
        exit(0);
    }
    ImGui::PopStyleColor(3);
    ImGui::EndChild();
    ImGui::PopStyleVar();

    if (!message.empty())
        ImGui::OpenPopup("Message");

    // Messages?
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(8, 8));
    if (ImGui::BeginPopupModal("Message", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::Text("%s", message.c_str());
        ImGui::Text("\n\n");

        if (ImGui::Button("Ok", ImVec2(120, 0))) {
            message = "";
            ImGui::CloseCurrentPopup();
        }
        ImGui::SetItemDefaultFocus();
        ImGui::EndPopup();
    }
    ImGui::PopStyleVar();
}
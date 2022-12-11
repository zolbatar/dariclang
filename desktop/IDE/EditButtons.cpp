#include "Edit.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"

void Edit::SetButtonStyle(int i) {
    ImGui::PushStyleColor(ImGuiCol_Button, (ImVec4) ImColor::HSV(i / 7.0f, 0.6f, 0.6f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, (ImVec4) ImColor::HSV(i / 7.0f, 0.7f, 0.7f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, (ImVec4) ImColor::HSV(i / 7.0f, 0.8f, 0.8f));
}

void Edit::OptionsWindow(const ImGuiViewport *main_viewport) {
    ImVec2 center = ImGui::GetMainViewport()->GetCenter();
    ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(8, 8));
    if (ImGui::BeginPopupModal("Options", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
        if (ImGui::TreeNodeEx("Backend Flags", ImGuiTreeNodeFlags_DefaultOpen)) {
//        if (ImGui::CollapsingHeader("Compiler Options"), ImGuiTreeNodeFlags_DefaultOpen) {
            ImGui::Checkbox("Output .ll files", &options_ll);
            ImGui::TreePop();
        }
        ImGui::Separator();
        if (ImGui::Button("OK", ImVec2(80, 0))) { ImGui::CloseCurrentPopup(); }
        ImGui::EndPopup();
    }
    ImGui::PopStyleVar();
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
    ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(40, 40, 40, 255));
    ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(40, 40, 40, 255));
    ImGui::BeginChild("Buttons", ImVec2(main_viewport->Size.x, 42), true);

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
    bool dis = editor == nullptr || editor_files[editor_name].unsaved_changes;
    if (dis) ImGui::BeginDisabled();
    ImGui::Button("Save");
    ImGui::SameLine();
    if (dis) ImGui::EndDisabled();

    // Revert
    dis = true;
    if (dis) ImGui::BeginDisabled();
    ImGui::Button("Revert");
    ImGui::SameLine();
    if (dis) ImGui::EndDisabled();

    // Run
    dis = true;
    if (dis) ImGui::BeginDisabled();
    SetButtonStyle(0);
    ImGui::Button("Run");
    ImGui::SameLine();

    // Run optimised
    ImGui::Button("Run Optimised");
    ImGui::SameLine();
    ImGui::PopStyleColor(3);
    if (dis) ImGui::EndDisabled();

    // Options
    SetButtonStyle(1);
    if (ImGui::Button("Options")) {
        ImGui::OpenPopup("Options");
    }
    ImGui::PopStyleColor(3);
    OptionsWindow(main_viewport);
    ImGui::SameLine();

    // Quit
    SetButtonStyle(6);
    ImGui::Button("Quit");
    ImGui::PopStyleColor(3);
    ImGui::EndChild();
    ImGui::PopStyleColor(2);
    ImGui::PopStyleVar();
}

/*

     if (ImGui::BeginMainMenuBar()) {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("Load", "")) {
                ImGuiFileDialog::Instance()->OpenDialog("ChooseFileDlgKey", "Choose File", ".daric", ".", 1, nullptr, ImGuiFileDialogFlags_Modal);
            }
            if (ImGui::MenuItem("Save", "")) {
                //edit.SaveFile();
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Edit")) {
            if (ImGui::MenuItem("Undo", "CTRL+Z")) {
            }
            if (ImGui::MenuItem("Redo", "CTRL+Y", false, false)) {
            }  // Disabled item
            ImGui::Separator();
            if (ImGui::MenuItem("Cut", "CTRL+X")) {
            }
            if (ImGui::MenuItem("Copy", "CTRL+C")) {
            }
            if (ImGui::MenuItem("Paste", "CTRL+V")) {
            }
            ImGui::EndMenu();
        }
if (ImGui::MenuItem("Run", "CTRL+R")) {
//            auto t = std::thread(&UISDL::RunnerThread, this);
//            t.detach();
}
if (ImGui::MenuItem("Run Optimised", "CTRL+O")) {
//            auto t = std::thread(&UISDL::RunnerOptimisedThread, this);
//            t.detach();
}
ImGui::Separator();
if (ImGui::BeginMenu("Welcome Tape")) {
if (ImGui::MenuItem("Tester", "")) {
LoadFile("Tester.daric");
}
if (ImGui::MenuItem("Greedy (benchmark)", "")) {
LoadFile("Greedy.daric");
}
ImGui::Separator();
if (ImGui::MenuItem("2D Graphics", "")) {
LoadFile("Graphics2D.daric");
}
if (ImGui::MenuItem("Bubble Universe", "")) {
LoadFile("BubbleUniverse.daric");
}
if (ImGui::MenuItem("Clock", "")) {
LoadFile("Clock.daric");
}
if (ImGui::MenuItem("Fonts", "")) {
LoadFile("Fonts.daric");
}
if (ImGui::MenuItem("Mandelbrot", "")) {
LoadFile("Mandelbrot.daric");
}
if (ImGui::MenuItem("Ray tracer", "")) {
LoadFile("Raytracer.daric");
}
if (ImGui::MenuItem("Sierpinski", "")) {
LoadFile("Sierpinski.daric");
}
if (ImGui::MenuItem("Sprites", "")) {
LoadFile("Sprites.daric");
}
if (ImGui::MenuItem("World in Lines", "")) {
LoadFile("WorldInLines.daric");
}
ImGui::Separator();
if (ImGui::MenuItem("Sound", "")) {
LoadFile("Sound.daric");
}
ImGui::Separator();
if (ImGui::MenuItem("3D Cubes", "")) {
LoadFile("Cubes.daric");
}
if (ImGui::MenuItem("Load 3D Meshes", "")) {
LoadFile("Load3D.daric");
}
if (ImGui::MenuItem("Terrain", "")) {
LoadFile("Terrain.daric");
}
ImGui::EndMenu();
}
if (ImGui::BeginMenu("Games")) {
if (ImGui::MenuItem("Darch", "")) {
LoadFile("Darch/Darch.daric");
}
ImGui::EndMenu();
}
ImGui::EndMainMenuBar();
}




*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <map>
#include "Edit.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"
#include "../../runtime/UI/UISDL.h"
#include "../Config/Config.h"

//std::list<DARICException> errors;
//std::tuple<File*, uint32_t> findFileForLine(uint32_t line_number);
extern std::filesystem::path exe_path;
extern UISDL *ui;
extern Config config;

Edit::Edit() {
    ImGuiIO &io = ImGui::GetIO();
    font = io.Fonts->AddFontFromFileTTF((exe_path / config.MonoFont()).generic_string().c_str(),
                                        config.MonoFontSize() * ui->GetDPIRatio());
}

bool Edit::LoadFile(std::string filename) {
    std::ifstream t(filename);
    if (t.good()) {
        std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
        TextEditor editor;
        editor.SetText(str);
        editor.SetLanguageDefinition(TextEditor::LanguageDefinition::DARIC());
        editors.insert(std::make_pair(filename, std::move(editor)));
        EditorFile ef;
        ef.is_file_based = true;
        editor_files.insert(std::make_pair(filename, std::move(ef)));
        return true;
    }

    // File does not exist
    std::cout << "File doesn't exist" << std::endl;
    exit(1);
}

void Edit::SaveFile() {
/*    std::ofstream t(fileBeingEdited);
    if (t.good()) {
        auto ss = editors.find(fileBeingEdited)->second.GetText();
        t.write(ss.c_str(), ss.length());
    }*/
}

void Edit::Render(const ImGuiViewport *main_viewport) {
    // error markers
    //TextEditor::ErrorMarkers markers;
    /*	for (auto it = errors.begin(); it != errors.end(); ++it)
        {

            // Find
            auto r = findFileForLine(it->line_number);
            auto f = std::get<0>(r);
            auto ln = std::get<1>(r);

            if (f->filename == fileBeingEdited || f->filename == temp_name)
            {
                markers.insert(std::make_pair(ln, it->error));
            }
        }*/
    //editor.SetErrorMarkers(markers);

    // "breakpoint" markers
    //TextEditor::Breakpoints bpts;
    //bpts.insert(24);
    //bpts.insert(47);
    //editor.SetBreakpoints(bpts);

    // Any closed tabs?
    for (auto &s: editor_files) {
        if (!s.second.open) {
            if (s.second.unsaved_changes) {
                ImGui::OpenPopup("Delete?");
                s.second.open = true;
            } else {
                editors.erase(s.first);
                editor_files.erase(s.first);
                break;
            }
        }
    }

    std::string title = "Editor";
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Appearing);
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Appearing);
    ImGui::SetNextWindowSize(ImVec2(main_viewport->Size.x, main_viewport->Size.y), ImGuiCond_Appearing);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    ImGui::Begin(title.c_str(),
                 &open,
                 ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove |
                 ImGuiWindowFlags_NoDecoration);
    EditButtons(main_viewport);
    ImGui::BeginChild("Edit Panel", ImVec2(main_viewport->Size.x, 0), false,
                      ImGuiWindowFlags_AlwaysAutoResize);
    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_AutoSelectNewTabs;
    editor = nullptr;
    editor_name = "";
    if (ImGui::BeginTabBar("EditorFiles", tab_bar_flags)) {
        for (auto &s: editors) {
            if (ImGui::BeginTabItem(s.first.c_str(), &editor_files[s.first].open)) {
                editor = &s.second;
                editor_name = s.first;
                ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(20, 20, 20, 255));
                float height = ImGui::GetFrameHeightWithSpacing() + 2;
                ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(4, 4));
                ImGui::BeginChild("Summary Panel", ImVec2(main_viewport->Size.x, height),false,ImGuiWindowFlags_AlwaysUseWindowPadding);
                auto cpos = editor->GetCursorPosition();
                ImGui::PushFont(font);
                ImGui::Text("Line %6d, Column %-6d %6d lines | %s",
                            cpos.mLine + 1,
                            cpos.mColumn + 1,
                            editor->GetTotalLines(),
                            editor->IsOverwrite() ? "Ovr" : "Ins");
                ImGui::PopFont();
                ImGui::EndChild();
                ImGui::PopStyleVar();
                ImGui::PopStyleColor();
                ImGui::BeginChild("Edit Panel", ImVec2(main_viewport->Size.x, 0));
                ImGui::PushFont(font);
                editor->SetShowWhitespaces(false);
                editor->Render(s.first.c_str());
                ImGui::PopFont();
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
        }
        if (ImGui::TabItemButton("+", ImGuiTabItemFlags_Trailing | ImGuiTabItemFlags_NoTooltip)) {
            TextEditor editor;
            editor.SetLanguageDefinition(TextEditor::LanguageDefinition::DARIC());
            editors.insert(std::make_pair("New_" + std::to_string(editors.size() + 1), std::move(editor)));
        }
        ImGui::EndTabBar();
    }
    ImGui::EndChild();
    ImGui::End();
    ImGui::PopStyleVar();

    // Any text changed?
    for (auto &s: editors) {
        if (s.second.IsTextChanged()) {
            if (editor_files[s.first].first_render) {
                editor_files[s.first].first_render = false;
            } else {
                editor_files[s.first].unsaved_changes = true;
            }
        }
    }

    if (ImGui::BeginPopupModal("Delete?", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::Text("This editor tab has unsaved changes.\n\nAre you sure you want to close it?\n\n");
        ImGui::Separator();

        if (ImGui::Button("Yes", ImVec2(120, 0))) {
            editor_files.erase(editor_name);
            editors.erase(editor_name);
            ImGui::CloseCurrentPopup();
        }
        ImGui::SetItemDefaultFocus();
        ImGui::SameLine();
        if (ImGui::Button("Cancel", ImVec2(120, 0))) { ImGui::CloseCurrentPopup(); }
        ImGui::EndPopup();
    }

};
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <filesystem>
#include <map>
#include "Edit.h"
#include "../UI/UISDL.h"
#include "../../runtime/Config/Config.h"
#include "../Exception/Exception.h"
#include "../../runtime/Library/StringLib.h"

extern std::filesystem::path exe_path;
extern UISDL *ui;
extern Config config;
extern std::list<CaughtException> errors;

Edit::Edit() {
    ImGuiIO &io = ImGui::GetIO();
    auto p = (exe_path.parent_path() / std::filesystem::path(config.MonoFont())).generic_string().c_str();
    font = io.Fonts->AddFontFromFileTTF(p, config.MonoFontSize() * ui->GetDPIRatio());
    if (font == nullptr) {
        std::cout << "Failed" << std::endl;
        exit(1);
    }

    // Load all files from config
    for (auto &f: config.GetFilenames()) {
        LoadFile(f);
    }
}

bool Edit::LoadFile(std::string filename) {
#if _WIN64
    replaceAll(filename, "/", "\\");
#endif
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

        // Save to config
        config.GetFilenames().insert(filename);
        config.Save();
        return true;
    }

    // File does not exist
    std::cout << "File '" << filename << "' doesn't exist" << std::endl;
    exit(1);
}

void Edit::Render(const ImGuiViewport *main_viewport) {

    // "breakpoint" markers
    //TextEditor::Breakpoints bpts;
    //bpts.insert(24);
    //bpts.insert(47);
    //editor.SetBreakpoints(bpts);

    // If we have errors for files not open, OPEN THEM!
    for (auto it = errors.begin(); it != errors.end(); ++it) {
        if (!editor_files.contains(it->filename)) {
            LoadFile(it->filename);
        }
    }

    // Any closed tabs?
    for (auto &s: editor_files) {
        if (!s.second.open) {
            if (s.second.unsaved_changes) {
                ImGui::OpenPopup("Delete?");
                s.second.open = true;
            } else {
                config.GetFilenames().erase(s.first);
                config.Save();
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
                 ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize |
                 ImGuiWindowFlags_NoMove |
                 ImGuiWindowFlags_NoDecoration);
    EditButtons(main_viewport);
    ImGui::BeginChild("Edit Panel", ImVec2(main_viewport->Size.x, 0), false,
                      ImGuiWindowFlags_AlwaysAutoResize);
    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_AutoSelectNewTabs;
    editor = nullptr;
    editor_name = "";
    if (ImGui::BeginTabBar("EditorFiles", tab_bar_flags)) {
        for (auto &s: editors) {

            // Any errors? If so colour code the tab
            bool any_errors = false;
            for (auto it = errors.begin(); it != errors.end(); ++it) {
                if (it->filename == s.first) {
                    any_errors = true;
                }
            }
            if (any_errors) {
                ImGui::PushStyleColor(ImGuiCol_Tab, ImVec4(1, 0, 0, 0.8));
                ImGui::PushStyleColor(ImGuiCol_TabActive, ImVec4(1, 0, 0, 1.0));
                ImGui::PushStyleColor(ImGuiCol_TabHovered, ImVec4(1, 0, 0, 0.8));
                ImGui::PushStyleColor(ImGuiCol_TabUnfocused, ImVec4(1, 0, 0, 0.8));
                ImGui::PushStyleColor(ImGuiCol_TabUnfocusedActive, ImVec4(1, 0, 0, 0.4));
            }

            if (ImGui::BeginTabItem(s.first.c_str(), &editor_files[s.first].open)) {
                editor = &s.second;
                editor_name = s.first;

                // Error markers
                TextEditor::ErrorMarkers markers;
                for (auto it = errors.begin(); it != errors.end(); ++it) {
                    if (it->filename == editor_name) {
                        markers.insert(std::make_pair(static_cast<int>(it->line_number), it->error));
                    }
                }
                editor->SetErrorMarkers(markers);

                ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(20, 20, 20, 255));
                float height = ImGui::GetFrameHeightWithSpacing() + 2;
                ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(4, 4));
                ImGui::BeginChild("Summary Panel", ImVec2(main_viewport->Size.x, height), false,
                                  ImGuiWindowFlags_AlwaysUseWindowPadding);
                auto cpos = editor->GetCursorPosition();
                ImGui::PushFont(font);
                ImGui::Text("Line %d : Column %d : %d lines : %s",
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
            if (any_errors)
                ImGui::PopStyleColor(5);
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
            config.GetFilenames().erase(editor_name);
            config.Save();
            ImGui::CloseCurrentPopup();
        }
        ImGui::SetItemDefaultFocus();
        ImGui::SameLine();
        if (ImGui::Button("Cancel", ImVec2(120, 0))) { ImGui::CloseCurrentPopup(); }
        ImGui::EndPopup();
    }

};
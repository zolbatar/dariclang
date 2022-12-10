#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <map>
#include "Edit.h"
#include "ImGuiFileDialog/ImGuiFileDialog.h"
#include "../../runtime/UI/UISDL.h"

//std::list<DARICException> errors;
//std::tuple<File*, uint32_t> findFileForLine(uint32_t line_number);
extern std::filesystem::path exe_path;
extern UISDL *ui;

Edit::Edit() {
    ImGuiIO &io = ImGui::GetIO();
    float size = 20.0f;
    font = io.Fonts->AddFontFromFileTTF((exe_path / "RobotoMono-Regular.ttf").generic_string().c_str(), size * ui->GetDPIRatio());
}

bool Edit::LoadFile(std::string filename) {
    fileBeingEdited = filename;
    std::ifstream t(filename);
    if (t.good()) {
        std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
        TextEditor editor;
        editor.SetText(str);
        editor.SetLanguageDefinition(TextEditor::LanguageDefinition::DARIC());
        editors.insert(std::make_pair(filename, std::move(editor)));
        files.push_back(filename);
        return true;
    }

    // File does not exist
//	log_window.WriteString("\nFile doesn't exist\n");
    return false;
}

void Edit::SaveFile() {
    std::ofstream t(fileBeingEdited);
    if (t.good()) {
        auto ss = editors.find(fileBeingEdited)->second.GetText();
        t.write(ss.c_str(), ss.length());
    }
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
    ImGuiTabBarFlags tab_bar_flags = ImGuiTabBarFlags_Reorderable | ImGuiTabBarFlags_AutoSelectNewTabs;
    bool open = true;
    editor = nullptr;
    if (ImGui::BeginTabBar("EditorFiles", tab_bar_flags)) {
        for (auto &s: editors) {
            if (ImGui::BeginTabItem(s.first.c_str(), &open)) {
                editor = &s.second;
                auto cpos = editor->GetCursorPosition();
                ImGui::BeginChild("Edit Panel", ImVec2(main_viewport->Size.x, main_viewport->Size.y - 105)); // Leave room for 1 line below us
                ImGui::PushFont(font);
                editor->SetShowWhitespaces(false);
                editor->Render(s.first.c_str());
                ImGui::PopFont();
                ImGui::EndChild();
                ImGui::Text("%6d:%-6d %6d lines | %s | %s | %s",
                            cpos.mLine + 1,
                            cpos.mColumn + 1,
                            editor->GetTotalLines(),
                            editor->GetLanguageDefinition().mName.c_str(),
                            editor->IsOverwrite() ? "Overwrite" : "Insert",
                            editor->CanUndo() ? "*" : " "
                );
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
    ImGui::End();
    ImGui::PopStyleVar();
};
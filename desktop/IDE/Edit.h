#pragma once

#include <list>
#include <string>
#include "TextEditor.h"

struct EditorFile {
    bool open = true;
    bool is_file_based = false;
    bool unsaved_changes = false;
    bool first_render = true;
};

class Edit {
public:
    Edit();
    void Render(const ImGuiViewport *main_viewport);
    bool LoadFile(std::string filename);
    void ChooseFile(const ImGuiViewport *main_viewport);
    void ChooseFileToSave(const ImGuiViewport *main_viewport);

private:
    void EditButtons(const ImGuiViewport *main_viewport);
    void SetButtonStyle(int i);

    bool open;
    ImFont *font;
    TextEditor *editor = nullptr;
    std::string editor_name;
    std::unordered_map<std::string, EditorFile> editor_files;
    std::map<std::string, TextEditor> editors;
};


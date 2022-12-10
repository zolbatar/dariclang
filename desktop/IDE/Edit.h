#pragma once

#include <list>
#include <string>
#include "TextEditor.h"

class Edit {
public:
    Edit();
    void Render(const ImGuiViewport *main_viewport);
    bool LoadFile(std::string filename);
    void ChooseFile(const ImGuiViewport *main_viewport);
    void SaveFile();

    std::vector<std::string> GetTextLines() {
        return editors.find(fileBeingEdited)->second.GetTextLines();
    }

    std::string GetFilename() {
        return fileBeingEdited;
    }

private:
    void EditButtons(const ImGuiViewport *main_viewport);
    void OptionsWindow(const ImGuiViewport *main_viewport);
    void SetButtonStyle(int i);

    // Options
    bool options_ll = false;

    bool open;
    ImFont *font;
    TextEditor *editor = nullptr;
    std::string fileBeingEdited = "";
    std::list<std::string> files;
    std::map<std::string, TextEditor> editors;
};
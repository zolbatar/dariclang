#pragma once

#include <unordered_set>
#include <string>

class Config {
public:
    Config();

    void Load();
    void Save();

    std::string UIFont() { return ui_font; }

    std::string SerifFont() { return serif_font; }

    std::string MonoFont() { return mono_font; }

    std::unordered_set<std::string> &GetFilenames() { return filenames; }

    float UIFontSize() { return ui_font_size; }

    float MonoFontSize() { return mono_font_size; }

    int ConsoleColumns() { return console_columns; }

    bool OutputLL() { return output_ll; }

    bool Windowed() { return windowed; }

    int WindowWidth() { return window_w; }

    int WindowHeight() { return window_h; }

    int MSAALevels() { return msaa_levels; }

    bool Logging() { return logging; }

    bool Is3DDisabled() { return disable3d; }

    std::string GetTheme() { return theme; }

private:
    std::string ui_font = "Roboto-Regular.ttf";
    std::string serif_font = "RobotoSerif-Regular.ttf";
    std::string mono_font = "RobotoMono-Regular.ttf";
    std::unordered_set<std::string> filenames;
    float ui_font_size = 20;
    float mono_font_size = 24;
    int console_columns = 132;
    bool output_ll = false;
    bool windowed = false;
    int window_w = 1280;
    int window_h = 1024;
    int msaa_levels = 0;
    bool logging = false;
    bool disable3d = false;
    std::string theme = "dark";

    std::string GetFilename();
};
#pragma once

class Config {
public:
    Config();

    void Load();

    std::string UIFont() { return ui_font; }

    std::string SerifFont() { return serif_font; }

    std::string MonoFont() { return mono_font; }

    float UIFontSize() { return ui_font_size; }

    float MonoFontSize() { return mono_font_size; }

    int ConsoleColumns() { return console_columns; }

    bool OutputLL() { return output_ll; }

    bool Windowed() { return windowed; }

    int WindowWidth() { return window_w; }

    int WindowHeight() { return window_h; }

private:
    std::string ui_font = "Roboto-Regular.ttf";
    std::string serif_font = "RobotoSerif-Regular.ttf";
    std::string mono_font = "RobotoMono-Regular.ttf";
    float ui_font_size = 20;
    float mono_font_size = 24;
    int console_columns = 132;
    bool output_ll = false;
    bool windowed = false;
    int window_w = 1280;
    int window_h = 1024;
};
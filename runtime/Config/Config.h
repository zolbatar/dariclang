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
private:
    std::string ui_font;
    std::string serif_font;
    std::string mono_font;
    float ui_font_size;
    float mono_font_size;
    int console_columns;
    bool output_ll;
};
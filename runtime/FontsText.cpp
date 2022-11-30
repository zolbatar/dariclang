#include <thread>
#include <map>
#include "Types.h"
#include "UI/Console/Console.h"
#include "UI/Text.h"
#include "UI/UISDL.h"

extern std::atomic_bool ui_started;
extern UISDL *ui;
extern Console console;
extern Text text;
static float size = 20.0f;
static ImFont *font = nullptr;
static std::map<std::string, T_I> loaded_fonts;

extern "C" void gfx_uicheck();

extern "C" T_I text_loadfont(T_S filename) {
    gfx_uicheck();

    // Already loaded?
    auto f = loaded_fonts.find(filename);
    if (f != loaded_fonts.end()) {
        return f->second;
    }

    // Send request and wait for start of frame so we know we have the change
    auto io = ImGui::GetIO();
    auto orig = io.Fonts->Fonts.size();
    ui->RequestFontLoad(filename);
    do {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    } while (ui->IsFontRequestActive());
    auto index = io.Fonts->Fonts.size() - 1;
    loaded_fonts.insert(std::make_pair(filename, index));
    return index;
}

extern "C" void text_setfont(T_I index, T_F _size) {
    gfx_uicheck();
    auto io = ImGui::GetIO();
    if (index >= io.Fonts->Fonts.size()) {
        return;
    }
    font = io.Fonts->Fonts[index];
    size = _size;
}

extern "C" void text_left(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0, 20);
    text.PrintText(font, size, _text, x, y);
}

extern "C" void text_right(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0, 20);
    text.PrintTextRight(font, size, _text, x, y);
}

extern "C" void text_centre(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0, 20);
    text.PrintTextCentre(font, size, _text, x, y);
}

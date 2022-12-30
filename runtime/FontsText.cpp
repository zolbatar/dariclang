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
static float size = 20;
static ImFont *font = nullptr;
static std::unordered_map<std::string, T_I> loaded_fonts;
static std::vector<T_F> loaded_fonts_size = {20, 20, 20};

extern "C" void gfx_uicheck();

extern "C" DLLEXTERN T_I text_loadfont(T_S filename, T_F size) {
    gfx_uicheck();

    // Already loaded?
    std::string altered_filename = filename + std::to_string(size);
    auto f = loaded_fonts.find(altered_filename);
    if (f != loaded_fonts.end()) {
        return f->second;
    }

    // Send request and wait for start of frame so we know we have the change
    auto io = ImGui::GetIO();
    ui->RequestFontLoad(filename, size);
    do {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    } while (ui->IsFontRequestActive());
    auto index = io.Fonts->Fonts.size() - 1;
    loaded_fonts.insert(std::make_pair(altered_filename, index));
    if (loaded_fonts_size.size() < static_cast<size_t>(index) + 1) {
        loaded_fonts_size.resize(index + 1);
    }
    loaded_fonts_size[index] = size;
    return index;
}

extern "C" DLLEXTERN void text_setfont(T_I index) {
    gfx_uicheck();
    auto io = ImGui::GetIO();
    if (index >= io.Fonts->Fonts.size()) {
        return;
    }
    font = io.Fonts->Fonts[index];
    size = loaded_fonts_size[index];
}

extern "C" DLLEXTERN void text_left(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0);
    text.PrintText(font, size, _text, x, y);
}

extern "C" DLLEXTERN void text_right(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0);
    text.PrintTextRight(font, size, _text, x, y);
}

extern "C" DLLEXTERN void text_centre(T_I x, T_I y, T_S _text) {
    gfx_uicheck();
    if (font == nullptr) text_setfont(0);
    text.PrintTextCentre(font, size, _text, x, y);
}

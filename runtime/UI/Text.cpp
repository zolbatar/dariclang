#include <memory>
#include "Text.h"
#include "Console/Console.h"

extern UISDL *ui;
extern Console console;
Text text;

void Text::PrintCharacter(ImFont *font, float size, char c, float *cursor_x, float *cursor_y)
{
    // String to write
    std::string s;
    s += c;

    // Size
    auto siz = font->CalcTextSizeA(size, FLT_MAX, 0.0f, s.c_str());
    if (siz.x == 0 && c != '\n') {
        auto siz2 = font->CalcTextSizeA(size, FLT_MAX, 0.0f, s.c_str());
    }

    // Draw
    switch (c) {
        case '\n':
            *cursor_y += siz.y;
            *cursor_x = 0;
            return;
    }
    ui->DrawText(font, size, *cursor_x, *cursor_y, siz.x, siz.y, s);
    *cursor_x += siz.x;

    // End of line?
    while (*cursor_x >= ui->GetScreenWidth()) {
        *cursor_y += siz.y;
        *cursor_x = 0;
    }

    // End of page, go round to top
    while (*cursor_y >= ui->GetScreenHeight()) {
        *cursor_y = 0;
    }
}

void Text::PrintText(ImFont *font, float size, std::string text, float cursor_x, float cursor_y)
{
    std::cout << text;
    if (cursor_x == -1.0)
        cursor_x = lastCursorX;
    if (cursor_y == -1.0)
        cursor_y = lastCursorY;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        PrintCharacter(font, size, ch, &cursor_x, &cursor_y);
    }
    lastCursorX = cursor_x;
    lastCursorY = cursor_y;
}

void Text::PrintTextCentre(ImFont *font, float size, std::string text, float cursor_x, float cursor_y)
{
    if (cursor_x == -1)
        cursor_x = lastCursorX;
    if (cursor_y == -1)
        cursor_y = lastCursorY;
    cursor_x -= StringWidth(font, size, text) / 2;
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        PrintCharacter(font, size, ch, &cursor_x, &cursor_y);
    }
    lastCursorX = cursor_x;
    lastCursorY = cursor_y;
}

void Text::PrintTextRight(ImFont *font, float size, std::string text, float cursor_x, float cursor_y)
{
    if (cursor_x == -1)
        cursor_x = lastCursorX;
    if (cursor_y == -1)
        cursor_y = lastCursorY;
    cursor_x -= StringWidth(font, size, text);
    for (auto it = text.begin(); it != text.end(); ++it) {
        auto ch = (*it);
        PrintCharacter(font, size, ch, &cursor_x, &cursor_y);
    }
    lastCursorX = cursor_x;
    lastCursorY = cursor_y;
}

float Text::StringWidth(ImFont *font, float size, std::string text)
{
    auto siz = font->CalcTextSizeA(size, FLT_MAX, 0.0f, text.c_str());
    return siz.x;
}

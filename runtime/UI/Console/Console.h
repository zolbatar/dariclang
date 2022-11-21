#pragma once

#include <vector>
#include <math.h>

#ifdef __APPLE__

#include <OpenGL/gl.h>

#endif

#include "imgui.h"

class Console {
public:
    void Setup(int w, int h, float dpiRatio, int sx, int sy, bool banked);
    void Cls();
    void Update(ImFont *font);
    void WriteCharacter(char c);
    void WriteString(std::string s);
    void SetColour(ImVec4 colour);
    void SetColour(ImU32 colour);
    void SetBGColour(ImVec4 colour);
    void SetBGColour(ImU32 colour);
    void DeleteCharacter();
    void MoveCursorToNext();
    void MoveCursorToNextLine();

    void CursorOn() {
        cursorActive = true;
    }
    void CursorOff() {
        cursorActive = false;
    }

    ImVec4 colourMagenta = ImVec4(1.0f, 0.0f, 1.0f, 1.0f);
    ImVec4 colourRed = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
    ImVec4 colourYellow = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
    ImVec4 colourDarkYellow = ImVec4(0.5f, 0.5f, 0.0f, 1.0f);
    ImVec4 colourGreen = ImVec4(0.0f, 1.0f, 0.0f, 1.0f);
    ImVec4 colourBlue = ImVec4(0.0f, 0.0f, 1.0f, 1.0f);
    ImVec4 colourCyan = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    ImVec4 colourWhite = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    ImVec4 colourGrey = ImVec4(0.5f, 0.5f, 0.5f, 1.0f);

private:
    void Scroll();
    size_t CalcIndex();

    bool banked = false;
    ImU32 colour;
    ImU32 bgColour;
    int charsAcross, charsDown;
    float w, h;
    float size;
    int cursorX, cursorY;
    bool cursorActive = false;

    std::vector<ImWchar> screenText;
    std::vector<ImU32> screenColours;
    std::vector<ImU32> bgColours;
};

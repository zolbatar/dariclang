#pragma once

#include "../UI/UISDL.h"

class Text {
public:
/*	void cls()
	{
		lastCursorX = 0;
		lastCursorY = 0;
	}*/
    int GetCursorX() {
        return lastCursorX;
    }

    int GetCursorY() {
        return lastCursorY;
    }

    void SetCursorX(int x) {
        lastCursorX = x;
    }

    void SetCursorY(int y) {
        lastCursorY = y;
    }

    void PrintCharacter(ImFont *font, float size, char c, float *cursor_x, float *cursor_y);
    void PrintText(ImFont *font, float size, std::string text, float cursor_x, float cursor_y);
    void PrintTextCentre(ImFont *font, float size, std::string text, float cursor_x, float cursor_y);
    void PrintTextRight(ImFont *font, float size, std::string text, float cursor_x, float cursor_y);
    float StringWidth(ImFont *font, float size, std::string text);

private:
    float lastCursorX = 0, lastCursorY = 0;
};
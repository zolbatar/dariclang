#pragma once
#include <string>
#include <vector>
#include "UI/UISDL.h"
#include "imgui.h"

struct Window {
    std::string name;
    int x1;
    int y1;
    int x2;
    int y2;
    ImU32 fgColour = 0xFFFFFFFF;
    ImU32 bgColour = 0x000000FF;
    float line_width = 1.0f;
    float alpha = 1.0f;
    float origin_x = 0.0f;
    float origin_y = 0.0f;
    bool show = true;
    std::vector<std::unique_ptr<RenderShape>> shapes;
    std::vector<std::unique_ptr<RenderShape>> shapesBackBuffer;
};

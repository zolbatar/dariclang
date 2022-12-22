#include <mutex>
#include <atomic>
#include <thread>
#include "Console/Console.h"
#include "RenderShapes.h"
#include "UISDL.h"
#include "../Graphics3D/Engine.h"

extern World world;
extern Console console;
std::mutex shapes_lock;

void UISDL::SetFGColour(ImU32 colour) {
    fgColour = colour;
}

void UISDL::SetBGColour(ImU32 colour) {
    bgColour = colour;
}

void UISDL::Flip(bool userSpecified) {
    if (mode != Mode::BANKED)
        return;

    // Update
    {
        const std::lock_guard<std::mutex> lock(shapes_lock);
        shapes.clear();
        shapes.swap(shapesBackBuffer);
        //std::cout << "s1: " << shapes.size() << " : " << shapesBackBuffer.size() << std::endl;
    }

    flip_requested = true;

    // Wait for flip
    while (flip_requested == true) {
        if (mode != Mode::BANKED) return;
        std::this_thread::sleep_for(std::chrono::microseconds(0));
    }
}

void UISDL::RenderShapes() {
    const std::lock_guard<std::mutex> lock(shapes_lock);
    ImDrawList *draw_list = ImGui::GetWindowDrawList();
    if (mode == Mode::CLASSIC) {
        //std::cout << "Rendering " << shapesBackBuffer.size() << " shapes" << std::endl;
        for (auto it = shapesBackBuffer.begin(); it != shapesBackBuffer.end(); ++it) {
            it->get()->AddToList(draw_list);
        }
//        std::cout << "Draw list size: " << draw_list->IdxBuffer.size() << std::endl;
    } else {
        // std::cout << "Rendering " << shapes.size() << " shapes" << std::endl;
        for (auto it = shapes.begin(); it != shapes.end(); ++it) {
            it->get()->AddToList(draw_list);
        }
//        std::cout << "Draw list size: " << draw_list->IdxBuffer.size() << std::endl;
    }
}

void UISDL::Cls() {
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.clear();
    console.Cls();
    flip_requested = false;
}

void AddTriangleFilledMultiColor(ImDrawList *draw_list, const ImVec2 &a, const ImVec2 &b, const ImVec2 &c, ImU32 col_a,
                                 ImU32 col_b, ImU32 col_c) {
    if (((col_a | col_b | col_c) & IM_COL32_A_MASK) == 0)
        return;

    auto uv = ImGui::GetFontTexUvWhitePixel();
    draw_list->PrimReserve(3, 3);
    draw_list->PrimWriteIdx((ImDrawIdx) (draw_list->_VtxCurrentIdx));
    draw_list->PrimWriteIdx((ImDrawIdx) (draw_list->_VtxCurrentIdx + 1));
    draw_list->PrimWriteIdx((ImDrawIdx) (draw_list->_VtxCurrentIdx + 2));
    draw_list->PrimWriteVtx(a, uv, col_a);
    draw_list->PrimWriteVtx(b, uv, col_b);
    draw_list->PrimWriteVtx(c, uv, col_c);
}

void UISDL::Render3D() {
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeRender(texColorBuffer3D, desktop_screen_width, desktop_screen_height, dpi_ratio));
}

void UISDL::Line(float x1, float y1, float x2, float y2) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeLine(p1, p2, fgColour, line_width));
}

void UISDL::Rectangle(float x1, float y1, float x2, float y2) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeRectangle(p1, p2, fgColour, line_width));
}

void UISDL::FilledRectangle(float x1, float y1, float x2, float y2) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeRectangleFilled(p1, p2, bgColour));
}

void UISDL::Circle(float xc, float yc, float r) {
    auto p = ImVec2(xc + origin_x, yc + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeCircle(p, r, fgColour, line_width));
}

void UISDL::FilledCircle(float xc, float yc, float r) {
    auto p = ImVec2(xc + origin_x, yc + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeCircleFilled(p, r, bgColour));
}

void UISDL::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    auto p3 = ImVec2(x3 + origin_x, y3 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeTriangle(p1, p2, p3, fgColour, line_width));
}

void UISDL::FilledTriangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    auto p3 = ImVec2(x3 + origin_x, y3 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeTriangleFilled(p1, p2, p3, bgColour));
}

void UISDL::ShadedTriangle(float x1, float y1, float x2, float y2, float x3, float y3, ImU32 colour1, ImU32 colour2,
                           ImU32 colour3, bool flat) {
    auto p1 = ImVec2(x1 + origin_x, y1 + origin_y);
    auto p2 = ImVec2(x2 + origin_x, y2 + origin_y);
    auto p3 = ImVec2(x3 + origin_x, y3 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeTriangleShaded(p1, p2, p3, colour1, colour2, colour3));
}

void UISDL::DrawText(ImFont *font, float size, float x, float y, float w, float h, std::string text) {
    auto p1 = ImVec2(x, y);
    auto p2 = ImVec2(x + w + origin_x, y + h + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeText(font, size, p1, p2, fgColour, text));
}

void UISDL::Plot(float x, float y) {
    auto p1 = ImVec2(x + origin_x, y + origin_y);
    auto p2 = ImVec2(x + 1 + origin_x, y + 1 + origin_y);
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapePixel(p1, p2, fgColour));
}

void UISDL::Origin(float x, float y) {
    origin_x = x;
    origin_y = y;
}

void UISDL::Clip(float x1, float y1, float x2, float y2) {
    auto p1 = ImVec2(x1, y1);
    auto p2 = ImVec2(x2, y2);;
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeClipOn(p1, p2));
}

void UISDL::ClipOff() {
    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeClipOff());
}

static inline ImVec2 operator+(const ImVec2 &lhs, const ImVec2 &rhs) {
    return ImVec2(lhs.x + rhs.x, lhs.y + rhs.y);
}

static inline ImVec2 ImRotate(const ImVec2 &v, float cos_a, float sin_a) {
    return ImVec2(v.x * cos_a - v.y * sin_a, v.x * sin_a + v.y * cos_a);
}

void UISDL::Sprite(SpriteBank *sb, int sx, int sy, float rot_d, float scale, bool flipped) {
    // Convert degrees to radians
    auto rot = rot_d * M_PI / 180.0;
    auto center = ImVec2(sx + (sb->width) / 2, sy + (sb->height / 2));
    auto size = ImVec2(sb->width * scale, sb->height * scale);
    float cos_a = cosf(rot);
    float sin_a = sinf(rot);
    ImVec2 pos[4] =
            {
                    center + ImRotate(ImVec2(-size.x * 0.5f, -size.y * 0.5f), cos_a, sin_a),
                    center + ImRotate(ImVec2(+size.x * 0.5f, -size.y * 0.5f), cos_a, sin_a),
                    center + ImRotate(ImVec2(+size.x * 0.5f, +size.y * 0.5f), cos_a, sin_a),
                    center + ImRotate(ImVec2(-size.x * 0.5f, +size.y * 0.5f), cos_a, sin_a)
            };
    ImVec2 uvs[4] =
            {
                    ImVec2(0.0f, !flipped ? 0.0f : 1.0f),
                    ImVec2(1.0f, !flipped ? 0.0f : 1.0f),
                    ImVec2(1.0f, !flipped ? 1.0f : 0.0f),
                    ImVec2(0.0f, !flipped ? 1.0f : 0.0f)
            };

    const std::lock_guard<std::mutex> lock(shapes_lock);
    shapesBackBuffer.emplace_back(new ShapeSprite(sb, pos, uvs));
}

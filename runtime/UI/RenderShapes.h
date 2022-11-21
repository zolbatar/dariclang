#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <memory>
//#include "Sprite.h"

void AddTriangleFilledMultiColor(ImDrawList *draw_list, const ImVec2 &a, const ImVec2 &b, const ImVec2 &c, ImU32 col_a,
                                 ImU32 col_b, ImU32 col_c);

enum class RenderShapeType {
    NONE,
    CLIPON,
    CLIPOFF,
    PIXEL,
    LINE,
    RECTANGLE,
    RECTANGLEFILLED,
    TRIANGLE,
    TRIANGLEFILLED,
    TRIANGLESHADED,
    CIRCLE,
    CIRCLEFILLED,
    TEXT,
    SPRITE,
    RENDER
};

class RenderShape {
public:
    virtual void AddToList(ImDrawList *draw_list) = 0;

    virtual ~RenderShape() {
//		std::cout << "Delete:" << (int)type << std::endl;
    };

protected:
    RenderShapeType type = RenderShapeType::NONE;
    bool off_screen = false;
};

class ShapeClipOn : public RenderShape {
public:
    ShapeClipOn(ImVec2 min, ImVec2 max)
            : min(min), max(max) {
        type = RenderShapeType::CLIPON;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->PushClipRect(min, max);
    }

private:
    ImVec2 min, max;
};

class ShapeClipOff : public RenderShape {
public:
    ShapeClipOff() {
        type = RenderShapeType::CLIPOFF;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->PopClipRect();
    }
};

class ShapeRender : public RenderShape {
public:
    ShapeRender(GLuint fb, int w, int h, float dpi_ratio)
            : fb(fb), w(w), h(h), dpi_ratio(dpi_ratio) {
        type = RenderShapeType::RENDER;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddImage((void *) (intptr_t) fb, ImVec2(0.0, 0.0), ImVec2(w, h), ImVec2(0, 1), ImVec2(1, 0));
    }

private:
    GLuint fb;
    int w, h;
    float dpi_ratio;
};

class ShapePixel : public RenderShape {
public:
    ShapePixel(ImVec2 p1, ImVec2 p2, ImU32 col)
            : p1(p1), p2(p2), col(col) {
        type = RenderShapeType::PIXEL;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddRectFilled(p1, p2, col);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
};

class ShapeLine : public RenderShape {
public:
    ShapeLine(ImVec2 p1, ImVec2 p2, ImU32 col, float thickness)
            : p1(p1), p2(p2), col(col), thickness(thickness) {
        type = RenderShapeType::LINE;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddLine(p1, p2, col, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
    float thickness;
};

class ShapeRectangle : public RenderShape {
public:
    ShapeRectangle(ImVec2 p1, ImVec2 p2, ImU32 col, float thickness)
            : p1(p1), p2(p2), col(col), thickness(thickness) {
        type = RenderShapeType::RECTANGLE;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddRect(p1, p2, col, 0.0f, ImDrawFlags_Closed, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
    float thickness;
};

class ShapeRectangleFilled : public RenderShape {
public:
    ShapeRectangleFilled(ImVec2 p1, ImVec2 p2, ImU32 col)
            : p1(p1), p2(p2), col(col) {
        type = RenderShapeType::RECTANGLEFILLED;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddRectFilled(p1, p2, col, 0.0f, ImDrawFlags_Closed);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
};

class ShapeTriangle : public RenderShape {
public:
    ShapeTriangle(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col, float thickness)
            : p1(p1), p2(p2), p3(p3), col(col),
              thickness(thickness) {
        type = RenderShapeType::TRIANGLE;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddTriangle(p1, p2, p3, col, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2, p3;
    float thickness;
};

class ShapeTriangleFilled : public RenderShape {
public:
    ShapeTriangleFilled(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col)
            : p1(p1), p2(p2), p3(p3), col(col) {
        type = RenderShapeType::TRIANGLEFILLED;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddTriangleFilled(p1, p2, p3, col);
    }

private:
    ImU32 col;
    ImVec2 p1, p2, p3;
};

class ShapeTriangleShaded : public RenderShape {
public:
    ShapeTriangleShaded(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col1, ImU32 col2, ImU32 col3)
            : p1(p1), p2(p2), p3(p3), col1(col1), col2(col2), col3(col3) {
        type = RenderShapeType::TRIANGLESHADED;
    };

    void AddToList(ImDrawList *draw_list) override {
        AddTriangleFilledMultiColor(draw_list, p1, p2, p3, col1, col2, col3);
    }

private:
    ImU32 col1, col2, col3;
    ImVec2 p1, p2, p3;
};

class ShapeCircle : public RenderShape {
public:
    ShapeCircle(ImVec2 p, float radius, ImU32 col, float thickness)
            : p(p), radius(radius), col(col), thickness(thickness) {
        type = RenderShapeType::CIRCLE;
    };

    void AddToList(ImDrawList *draw_list) override {
        int sections = radius / 3.0f;
        sections = std::max(16, sections);
        draw_list->AddCircle(p, radius, col, sections, thickness);
    }

private:
    ImU32 col;
    ImVec2 p;
    float radius;
    float thickness;
};

class ShapeCircleFilled : public RenderShape {
public:
    ShapeCircleFilled(ImVec2 p, float radius, ImU32 col)
            : p(p), radius(radius), col(col) {
        type = RenderShapeType::CIRCLEFILLED;
    };

    void AddToList(ImDrawList *draw_list) override {
        int sections = radius / 3.0f;
        sections = std::max(16, sections);
        draw_list->AddCircleFilled(p, radius, col, sections);
    }

private:
    ImU32 col;
    ImVec2 p;
    float radius;
};

class ShapeText : public RenderShape {
public:
    ShapeText(ImFont *font, float size, ImVec2 p1, ImVec2 p2, ImU32 col, std::string text)
            : font(font), size(size), p1(p1), p2(p2), text(text), col(col) {
        assert(text.length() > 0);
        type = RenderShapeType::TEXT;
    };

    void AddToList(ImDrawList *draw_list) override {
        draw_list->AddText(font, size, p1, col, text.c_str());
    }

    void scroll(float scroll_height) {
        p1.y -= scroll_height;
        p2.y -= scroll_height;
        off_screen = p2.y < 0.0;
    }

    std::string get_char() {
        assert(text.length() > 0);
        return text.substr(0, 1);
    }

private:
    ImFont *font;
    std::string text;
    ImU32 col;
    ImVec2 p1, p2;
    float size;
};

/*class ShapeSprite : public RenderShape {
public:
    ShapeSprite(SpriteBank *bank,
                ImVec2 pos[4],
                ImVec2 uvs[4],
                float scale, float angle)
            : bank(bank), scale(scale), angle(angle) {
        type = RenderShapeType::SPRITE;
        this->pos[0] = pos[0];
        this->pos[1] = pos[1];
        this->pos[2] = pos[2];
        this->pos[3] = pos[3];
        this->uvs[0] = uvs[0];
        this->uvs[1] = uvs[1];
        this->uvs[2] = uvs[2];
        this->uvs[3] = uvs[3];
    };

    void AddToList(ImDrawList *draw_list) override {
        auto l = (void *) (intptr_t) bank->id;
        draw_list->AddImageQuad(l, pos[0], pos[1], pos[2], pos[3], uvs[0], uvs[1], uvs[2], uvs[3], IM_COL32_WHITE);
    }

private:
    SpriteBank *bank;
    ImVec2 pos[4], uvs[4];
    float scale, angle;
};*/

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <memory>
#include "Sprite.h"

void AddTriangleFilledMultiColor(ImDrawList *draw_list, const ImVec2 &a, const ImVec2 &b, const ImVec2 &c, ImU32 col_a,
                                 ImU32 col_b, ImU32 col_c);

class RenderShape {
public:
    virtual void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) = 0;

    virtual ~RenderShape() = default;
};

class ShapeClipOn : public RenderShape {
public:
    ShapeClipOn(ImVec2 min, ImVec2 max)
            : min(min), max(max) {
    };

    ~ShapeClipOn() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + min.x, wpos.y + min.y);
        ImVec2 ap2 = ImVec2(wpos.x + max.x, wpos.y + max.y);
        draw_list->PushClipRect(ap1, ap2);
    }

private:
    ImVec2 min, max;
};

class ShapeClipOff : public RenderShape {
public:
    ShapeClipOff() {};

    ~ShapeClipOff() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        draw_list->PopClipRect();
    }
};

class ShapeRender : public RenderShape {
public:
    ShapeRender(GLuint fb, int w, int h, float dpi_ratio, float alpha)
            : fb(fb), w(w), h(h) {
    };

    ~ShapeRender() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        draw_list->AddImage((void *) (intptr_t) fb, ImVec2(0.0, 0.0), ImVec2(w, h), ImVec2(0, 1), ImVec2(1, 0));
    }

private:
    GLuint fb;
    int w, h;
};

class ShapePixel : public RenderShape {
public:
    ShapePixel(ImVec2 p1, ImVec2 p2, ImU32 col)
            : col(col), p1(p1), p2(p2) {
    };

    ~ShapePixel() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        draw_list->AddRectFilled(ap1, ap2, col);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
};

class ShapeLine : public RenderShape {
public:
    ShapeLine(ImVec2 p1, ImVec2 p2, ImU32 col, float thickness)
            : col(col), p1(p1), p2(p2), thickness(thickness) {
    };

    ~ShapeLine() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        draw_list->AddLine(ap1, ap2, col, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
    float thickness;
};

class ShapeRectangle : public RenderShape {
public:
    ShapeRectangle(ImVec2 p1, ImVec2 p2, ImU32 col, float thickness)
            : col(col), p1(p1), p2(p2), thickness(thickness) {
    };

    ~ShapeRectangle() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        draw_list->AddRect(ap1, ap2, col, 0.0f, ImDrawFlags_Closed, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
    float thickness;
};

class ShapeRectangleFilled : public RenderShape {
public:
    ShapeRectangleFilled(ImVec2 p1, ImVec2 p2, ImU32 col)
            : col(col), p1(p1), p2(p2) {
    };

    ~ShapeRectangleFilled() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        draw_list->AddRectFilled(ap1, ap2, col, 0.0f, ImDrawFlags_Closed);
    }

private:
    ImU32 col;
    ImVec2 p1, p2;
};

class ShapeTriangle : public RenderShape {
public:
    ShapeTriangle(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col, float thickness)
            : col(col), p1(p1), p2(p2), p3(p3), thickness(thickness) {
    };

    ~ShapeTriangle() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        ImVec2 ap3 = ImVec2(wpos.x + p3.x, wpos.y + p3.y);
        draw_list->AddTriangle(ap1, ap2, ap3, col, thickness);
    }

private:
    ImU32 col;
    ImVec2 p1, p2, p3;
    float thickness;
};

class ShapeTriangleFilled : public RenderShape {
public:
    ShapeTriangleFilled(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col)
            : col(col), p1(p1), p2(p2), p3(p3) {
    };

    ~ShapeTriangleFilled() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        ImVec2 ap3 = ImVec2(wpos.x + p3.x, wpos.y + p3.y);
        draw_list->AddTriangleFilled(ap1, ap2, ap3, col);
    }

private:
    ImU32 col;
    ImVec2 p1, p2, p3;
};

class ShapeTriangleShaded : public RenderShape {
public:
    ShapeTriangleShaded(ImVec2 p1, ImVec2 p2, ImVec2 p3, ImU32 col1, ImU32 col2, ImU32 col3)
            : col1(col1), col2(col2), col3(col3), p1(p1), p2(p2), p3(p3) {
    };

    ~ShapeTriangleShaded() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap1 = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        ImVec2 ap2 = ImVec2(wpos.x + p2.x, wpos.y + p2.y);
        ImVec2 ap3 = ImVec2(wpos.x + p3.x, wpos.y + p3.y);
        AddTriangleFilledMultiColor(draw_list, ap1, ap2, ap3, col1, col2, col3);
    }

private:
    ImU32 col1, col2, col3;
    ImVec2 p1, p2, p3;
};

class ShapeCircle : public RenderShape {
public:
    ShapeCircle(ImVec2 p, float radius, ImU32 col, float thickness)
            : col(col), p(p), radius(radius), thickness(thickness) {
    };

    ~ShapeCircle() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        int sections = radius / 3.0f;
        sections = std::max(16, sections);
        ImVec2 ap = ImVec2(wpos.x + p.x, wpos.y + p.y);
        draw_list->AddCircle(ap, radius, col, sections, thickness);
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
            : col(col), p(p), radius(radius) {
    };

    ~ShapeCircleFilled() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        int sections = radius / 3.0f;
        sections = std::max(16, sections);
        ImVec2 ap = ImVec2(wpos.x + p.x, wpos.y + p.y);
        draw_list->AddCircleFilled(ap, radius, col, sections);
    }

private:
    ImU32 col;
    ImVec2 p;
    float radius;
};

class ShapeText : public RenderShape {
public:
    ShapeText(ImFont *font, float size, ImVec2 p1, ImVec2 p2, ImU32 col, std::string text)
            : font(font), text(text), col(col), p1(p1), p2(p2), size(size) {
        assert(text.length() > 0);
    };

    ~ShapeText() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        ImVec2 ap = ImVec2(wpos.x + p1.x, wpos.y + p1.y);
        draw_list->AddText(font, size, ap, col, text.c_str());
    }

private:
    ImFont *font;
    std::string text;
    ImU32 col;
    ImVec2 p1, p2;
    float size;
};

class ShapeSprite : public RenderShape {
public:
    ShapeSprite(SpriteBank *bank,
                ImVec2 pos[4],
                ImVec2 uvs[4],
                ImU32 col,
                float alpha)
            : bank(bank), col(col), alpha(alpha) {
        this->pos[0] = pos[0];
        this->pos[1] = pos[1];
        this->pos[2] = pos[2];
        this->pos[3] = pos[3];
        this->uvs[0] = uvs[0];
        this->uvs[1] = uvs[1];
        this->uvs[2] = uvs[2];
        this->uvs[3] = uvs[3];
    };

    ~ShapeSprite() {}

    void AddToList(ImDrawList *draw_list, ImVec2 wpos, ImVec2 wsize) override {
        auto l = (void *) (intptr_t) bank->id;
        ImVec2 apos0 = ImVec2(wpos.x + pos[0].x, wpos.y + pos[0].y);
        ImVec2 apos1 = ImVec2(wpos.x + pos[1].x, wpos.y + pos[1].y);
        ImVec2 apos2 = ImVec2(wpos.x + pos[2].x, wpos.y + pos[2].y);
        ImVec2 apos3 = ImVec2(wpos.x + pos[3].x, wpos.y + pos[3].y);
        ImVec4 colour = ImGui::ColorConvertU32ToFloat4(col);
        colour.w = alpha;
        ImU32 col = ImGui::ColorConvertFloat4ToU32(colour);
        draw_list->AddImageQuad(l, apos0, apos1, apos2, apos3, uvs[0], uvs[1], uvs[2], uvs[3], col);
    }

private:
    SpriteBank *bank;
    float alpha;
    ImU32 col;
    ImVec2 pos[4], uvs[4];
};

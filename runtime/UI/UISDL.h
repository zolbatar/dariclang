#pragma once

#include <memory>
#include <vector>
#include <fstream>
#include <sstream>

#ifdef _WIN64
#define GL_GLEXT_PROTOTYPES 1
#include <SDL.h>
#include <gl/glew.h>
#include <SDL_opengl.h>
#include <gl/glu.h>
#else
#define GL_GLEXT_PROTOTYPES 1

#include <SDL.h>
#include <SDL_opengl.h>

#endif

#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_sdl.h"
#include "Console/Console.h"
#include "../Input/Input.h"
#include "RenderShapes.h"

enum class Mode {
    CLASSIC,
    BANKED
};

class UISDL {
public:
    UISDL();
    ~UISDL();

    void Start(int w, int h, bool windowed, bool banked);
    void BankedOn();
    void BankedOff();
    bool Render(std::function<void()> callback);
    void RenderShapes(std::vector<std::unique_ptr<RenderShape>> *front, std::vector<std::unique_ptr<RenderShape>> *back);
    void Render3D();
    void SetFGColour(ImU32 colour);
    void SetBGColour(ImU32 colour);
    void SetAlpha(float _alpha) {
        this->alpha = _alpha;
    }
    float GetAlpha() { return alpha; }
    void Cls();
    void Flip(bool userSpecified);
    void Line(float x1, float y1, float x2, float y2);
    void Rectangle(float x1, float y1, float x2, float y2);
    void FilledRectangle(float x1, float y1, float x2, float y2);
    void Circle(float x, float y, float r);
    void FilledCircle(float x, float y, float r);
    void Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
    void FilledTriangle(float x1, float y1, float x2, float y2, float x3, float y3);
    void ShadedTriangle(float x1, float y1, float x2, float y2, float x3, float y3,
                        uint32_t colour1, uint32_t colour2, uint32_t colour3, bool flat);
    void DrawText(ImFont *font, float size, float x, float y, float w, float h, std::string text);
    void Plot(float x, float y);
    void Origin(float x, float y);
    void Clip(float x1, float y1, float x2, float y2);
    void ClipOff();
    void SetLineWidth(float lw) { this->line_width = lw; }
    void Sprite(SpriteBank *sb, float sx, float sy, float rot, float scale, bool flipped,
                int off_x, int off_y, int sz_x, int sz_y, int render_point, bool use_colour);
    void Render3DWindow();
    int64_t GetScreenWidth() {
        return desktop_screen_width;
    }
    int64_t GetScreenHeight() {
        return desktop_screen_height;
    }
    float GetDPIRatio() { return dpi_ratio; }
    void RequestFontLoad(std::string font, float size) {
        new_font_requested = font;
        new_font_size_requested = size;
    }
    bool IsFontRequestActive() { return !new_font_requested.empty(); }
    Mode GetMode() { return mode; }
    ImU32 GetFGColour() { return fgColour; }
    ImU32 GetBGColour() { return bgColour; }
    std::mutex *GetSpriteLock() { return &sprite_lock; }
    void SetShapesBuffer(std::vector<std::unique_ptr<RenderShape>> *front, std::vector<std::unique_ptr<RenderShape>> *back) {
        shapes = front;
        shapesBackBuffer = back;
    }
    void SetOrigin(float x, float y) {
        origin_x = x;
        origin_y = y;
    }
private:
    void _CreateWindow(bool windowed);
    void Create3DBuffer();
    void SpriteActions();
    bool LoadTextureFromFile(const char *filename, GLuint *outTexture, int *outWidth, int *outHeight);

    std::mutex sprite_lock;
    std::string new_font_requested;
    float new_font_size_requested;
    ImU32 fgColour;
    ImU32 bgColour;
    float line_width = 1.0f;
    float alpha = 1.0f;
    float origin_x = 0.0f;
    float origin_y = 0.0f;
    std::atomic_bool flip_requested = false;
    float dpi_ratio;
    int desktop_screen_width, desktop_screen_height;
    SDL_Window *window;
    Mode mode = Mode::CLASSIC;

    std::vector<std::unique_ptr<RenderShape>> *shapes = nullptr;
    std::vector<std::unique_ptr<RenderShape>> *shapesBackBuffer = nullptr;

    // 3D
    bool msaa = true;
    int msaa_levels = 4;
    GLuint fbo3D;
    GLuint fbo3D_msaa;
    GLuint rbo3D_depth;
    GLuint depthFB;
    GLuint depthTexture;
    GLuint texColorBuffer3D;
    GLuint rbo3D_msaa;
    GLuint texColorBuffer3D_msaa;
};
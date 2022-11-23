#pragma once

#include <memory>
#include <vector>
#include <fstream>
#include <sstream>

#ifdef WINDOWS
#define GL_GLEXT_PROTOTYPES 1
#include <SDL.h>
#include <SDL_opengl.h>
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

    void Start(size_t w, size_t h, bool windowed, bool banked);
    bool Render();
    void RenderShapes();
    void Render3D();
    void ChangeMode(int64_t w, int64_t h, Mode mode);
    void SetFGColour(ImU32 colour);
    void SetBGColour(ImU32 colour);
    void Cls();
    void Flip(bool userSpecified);
    void Line(int x1, int y1, int x2, int y2);
    void LineWidth(int x1, int y1, int x2, int y2, float w);
    void Rectangle(int x1, int y1, int x2, int y2);
    void FilledRectangle(int x1, int y1, int x2, int y2);
    void Circle(int x, int y, float r);
    void CircleWidth(int x, int y, float r, float w);
    void FilledCircle(int x, int y, float r);
    void Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void FilledTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void ShadedTriangle(int x1, int y1, int x2, int y2, int x3, int y3,
                        uint32_t colour1, uint32_t colour2, uint32_t colour3, bool flat);
    void DrawText(ImFont *font, float size, int x, int y, int w, int h, std::string text);
    void Plot(int x, int y);
    void Origin(int x, int y);
    void Clip(int x1, int y1, int x2, int y2);
    void ClipOff();
    void Sprite(SpriteBank *sb, int sx, int sy, float rot, float scale, bool flipped);
    int64_t GetScreenWidth() { return desktop_screen_width; }
    int64_t GetScreenHeight() { return desktop_screen_height; }
    float GetDPIRatio() { return dpi_ratio; }
    float GetFontSize() { return font_size; }
    void RequestFontLoad(std::string font) {
        new_font_requested = font;
    }
    ImU32 GetFGColour() { return fgColour; }

private:
    void _CreateWindow(bool windowed);
    void Create3DBuffer();
    void SpriteActions();
    bool LoadTextureFromFile(const char *filename, GLuint *outTexture, int *outWidth, int *outHeight);

    std::string fps_text = "0 FPS";
    uint32_t fps_offset = 0;
    std::string new_font_requested;
    const float font_size = 20.0f;
    const int console_x_size = 8;
    const int console_y_size = 16;
    ImU32 fgColour;
    ImU32 bgColour;
    int64_t origin_x = 0;
    int64_t origin_y = 0;
    std::atomic_bool flip_requested = false;
    float dpi_ratio;
    int desktop_screen_width, desktop_screen_height;
    SDL_Window *window;
    ImFont *fontMono;
    Mode mode = Mode::CLASSIC;
    float fps_values[64];
    std::chrono::steady_clock::time_point fps_clock = std::chrono::steady_clock::now();

    std::vector<std::unique_ptr<RenderShape>> shapes;
    std::vector<std::unique_ptr<RenderShape>> shapesBackBuffer;

    // 3D
    const bool msaa = true;
    const int msaa_levels = 4;
    GLuint fbo3D;
    GLuint fbo3D_msaa;
    GLuint rbo3D_depth;
    GLuint depthFB;
    GLuint depthTexture;
    GLuint texColorBuffer3D;
    GLuint rbo3D_msaa;
    GLuint texColorBuffer3D_msaa;
};
#pragma once

#include <memory>
#include <vector>
#include <functional>
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

class UISDL {
public:
    UISDL();
    ~UISDL();

    void Start(int w, int h, bool windowed, bool banked);
    bool Render(std::function<void()> callback);
    void Minimise();
    void Restore();

    float GetDPIRatio() {
        return dpi_ratio;
    }

    int64_t GetScreenWidth() {
        return desktop_screen_width;
    }

    int64_t GetScreenHeight() {
        return desktop_screen_height;
    }

private:
    void _CreateWindow(bool windowed);
    bool LoadTextureFromFile(const char *filename, GLuint *outTexture, int *outWidth, int *outHeight);

    bool windowed;
    float dpi_ratio;
    int desktop_screen_width, desktop_screen_height;
    SDL_Window *window;
};
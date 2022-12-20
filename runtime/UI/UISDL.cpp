#include <iostream>
#include <memory>
#include <filesystem>
#include <thread>
#include "UISDL.h"
#include "../Graphics3D/Engine.h"

#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"
#include "Lodepng.h"
#include "../Config/Config.h"

size_t last_sprite_index = 0;
extern Console console;
extern Sprites sprite;
extern size_t sprite_index;
extern Input input;
extern World world;
extern std::filesystem::path exe_path;
extern Config config;

UISDL::UISDL() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << std::endl;
    }

    float ddpi, hdpi, vdpi;
    if (SDL_GetDisplayDPI(0, &ddpi, &hdpi, &vdpi) != 0) {
        std::cout << "ERROR: Failed to obtain DPI information for display 0: \n" << SDL_GetError() << std::endl;
        exit(1);
    }
    dpi_ratio = ddpi / 72.0f;
    std::cout << "DPI ratio: " << dpi_ratio << std::endl;

    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) != 0) {
        std::cout << "ERROR: SDL_GetDesktopDisplayMode failed: " << SDL_GetError() << std::endl;
        exit(1);
    }
    desktop_screen_width = dm.w;
    desktop_screen_height = dm.h;
    std::cout << "Desktop resolution: " << desktop_screen_width << "x" << desktop_screen_height << std::endl;

    SetFGColour(ImGui::ColorConvertFloat4ToU32(ImVec4(1.0, 1.0, 1.0, 1.0)));
    SetBGColour(ImGui::ColorConvertFloat4ToU32(ImVec4(0.0, 0.0, 0.0, 1.0)));
}

UISDL::~UISDL() {
    std::cout << "Shutting down SDL" << std::endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void UISDL::BankedOn() {
    mode = Mode::BANKED;
    Flip(true);
}

void UISDL::BankedOff() {
    mode = Mode::CLASSIC;
    Flip(true);
}

void UISDL::Start(size_t w, size_t h, bool windowed, bool banked) {
    if (w != -1 && h != -1) {
        desktop_screen_width = w;
        desktop_screen_height = h;
    }
    mode = banked ? Mode::BANKED : Mode::CLASSIC;
    if (mode == Mode::CLASSIC) {
        std::cout << "Classic rendering mode" << std::endl;
    } else {
        std::cout << "Banked rendering mode" << std::endl;
    }

    // Decide GL+GLSL versions
    std::cout << "Setting up OpenGL version" << std::endl;
#if defined(IMGUI_IMPL_OPENGL_ES2)
    TerminalOut("OpenGL", "GL ES 2.0 + GLSL 150");
    // GL ES 2.0 + GLSL 100
    const char* glsl_version = "#version 100";
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#elif defined(__APPLE__)
    std::cout << "OpenGL:GL 3.2 Core + GLSL 330" << std::endl;
    // GL 3.2 Core + GLSL 150
    const char *glsl_version = "#version 330";
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    std::cout << "OpenGL:GL GL 3.0 + GLSL 130" << std::endl;
    // GL 3.0 + GLSL 130
    const char* glsl_version = "#version 130";
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);

    // Initialise SDL now and create window
    _CreateWindow(windowed);

    // Create context in window
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_MakeCurrent(window, gl_context);
    SDL_GL_SetSwapInterval(1); // Enable vsync

    // Setup Dear ImGui context
    std::cout << "Setting up Dear ImGui" << std::endl;
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    (void) io;
    io.Fonts->Clear();

    io.Fonts->AddFontFromFileTTF((exe_path / "Roboto-Regular.ttf").generic_string().c_str(), config.UIFontSize() * dpi_ratio);
    io.FontGlobalScale /= dpi_ratio * 1.0f;
    io.Fonts->Build();

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    //ImGui::StyleColorsLight();

    // Output window
    auto size_x = desktop_screen_width / config.ConsoleColumns();
    console.Setup(desktop_screen_width, desktop_screen_height, dpi_ratio,
                  desktop_screen_width / size_x,
                  desktop_screen_height / (size_x * 2),
                  false);

    // 3D
    Create3DBuffer();
    world.SetupOpenGL3();

    // Setup Platform/Renderer backends
    std::cout << "Setting up Dear ImGui backend" << std::endl;
    ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL3_Init(glsl_version);
}

bool UISDL::Render(std::function<void()> callback) {
    ImGuiIO &io = ImGui::GetIO();

    // Process SDL events like keyboard & mouse
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ImGui_ImplSDL2_ProcessEvent(&event);
        input.ProcessEvent(event);
        if (event.type == SDL_QUIT) {
            return true;
        }
        if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE
            && event.window.windowID == SDL_GetWindowID(window)) {
            return true;
        }
    }

    // This is so app thread can lock to load fonts etc before start of frame
    if (!new_font_requested.empty()) {
        ImGui_ImplOpenGL3_DestroyFontsTexture();
        io.Fonts->AddFontFromFileTTF(new_font_requested.c_str(), new_font_size_requested * dpi_ratio);
        io.Fonts->Build();
        ImGui_ImplOpenGL3_CreateFontsTexture();
        std::cout << "Loaded font: " << new_font_requested << " at " << new_font_size_requested << std::endl;
        new_font_requested.clear();
    }

    SpriteActions();

    const ImGuiViewport *main_viewport = ImGui::GetMainViewport();
    bool window_output = true;

    // Generate this frame?
    bool gen = false;
    if (mode == Mode::BANKED) {
        gen = flip_requested;
    } else {
        gen = true;
    }
    if (gen) {
        // Start the Dear ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();

        glViewport(0, 0, static_cast<int>(io.DisplaySize.x), static_cast<int>(io.DisplaySize.y));
        glClearColor(0.0, 0.0, 0.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
        ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
        ImGui::SetNextWindowPos(main_viewport->Pos);
        ImGui::SetNextWindowSize(main_viewport->Size);
        ImGui::Begin("Fullscreen", &window_output,
                     ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize |
                     ImGuiWindowFlags_NoSavedSettings |
                     ImGuiWindowFlags_NoBackground);


        // Render shadows
        if (world.shadows) {
            glBindFramebuffer(GL_FRAMEBUFFER, depthFB);
            world.RenderOpenGL3Shadow();
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
        }

        // Render 3D
        world.Cleanup();
        if (!msaa)
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, fbo3D);
        else
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, fbo3D_msaa);
        world.RenderOpenGL3(depthTexture);
        if (msaa) {
            glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo3D_msaa);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, fbo3D);
            glBlitFramebuffer(0, 0, desktop_screen_width, desktop_screen_height, 0, 0, desktop_screen_width,
                              desktop_screen_height, GL_COLOR_BUFFER_BIT, GL_NEAREST);
        }
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);

        RenderShapes();
        console.Update();
        ImGui::End();
        ImGui::PopStyleVar();
        ImGui::PopStyleVar();

        // Callback?
        callback();
        //ImGui::ShowDemoWindow();

        // Now render
        ImGui::Render();

        // Show
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);

        flip_requested = false;
    }
    return false;
}

void UISDL::_CreateWindow(bool windowed) {
    // Create window
    std::cout << "Creating SDL window\n";
    SDL_WindowFlags window_flags;
    if (!windowed) {
        window_flags = (SDL_WindowFlags) (SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN_DESKTOP | SDL_WINDOW_ALLOW_HIGHDPI);
        window = SDL_CreateWindow("Daric",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  desktop_screen_width,
                                  desktop_screen_height,
                                  window_flags);
    } else {
        window_flags = (SDL_WindowFlags) (SDL_WINDOW_OPENGL | SDL_WINDOW_ALLOW_HIGHDPI);
        window = SDL_CreateWindow("Daric",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  desktop_screen_width,
                                  desktop_screen_height,
                                  window_flags);
    }
    if (window == nullptr) {
        std::cout << "ERROR: Window could not be created. SDL_Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
}

void UISDL::Create3DBuffer() {
    if (msaa) {
        glGenFramebuffers(1, &fbo3D_msaa);
        glBindFramebuffer(GL_FRAMEBUFFER, fbo3D_msaa);
        glGenTextures(1, &texColorBuffer3D_msaa);
        glBindTexture(GL_TEXTURE_2D_MULTISAMPLE, texColorBuffer3D_msaa);
        glTexImage2DMultisample(GL_TEXTURE_2D_MULTISAMPLE, msaa_levels, GL_RGBA, desktop_screen_width,
                                desktop_screen_height, GL_TRUE);
        glTexParameteri(GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D_MULTISAMPLE, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glBindTexture(GL_TEXTURE_2D_MULTISAMPLE, 0);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D_MULTISAMPLE, texColorBuffer3D_msaa,
                               0);
        glGenRenderbuffers(1, &rbo3D_msaa);
        glBindRenderbuffer(GL_RENDERBUFFER, rbo3D_msaa);
        glRenderbufferStorageMultisample(GL_RENDERBUFFER, msaa_levels, GL_DEPTH_COMPONENT, desktop_screen_width,
                                         desktop_screen_height);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, rbo3D_msaa);
        glBindRenderbuffer(GL_RENDERBUFFER, 0);
        glEnable(GL_MULTISAMPLE);
    }

    // Standard buffer
    glGenFramebuffers(1, &fbo3D);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo3D);
    glGenTextures(1, &texColorBuffer3D);
    glBindTexture(GL_TEXTURE_2D, texColorBuffer3D);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, desktop_screen_width, desktop_screen_height, 0, GL_RGBA, GL_UNSIGNED_BYTE,
                 NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glBindTexture(GL_TEXTURE_2D, 0);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, texColorBuffer3D, 0);
    glGenRenderbuffers(1, &rbo3D_depth);
    glBindRenderbuffer(GL_RENDERBUFFER, rbo3D_depth);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT, desktop_screen_width, desktop_screen_height);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, rbo3D_depth);
    glBindRenderbuffer(GL_RENDERBUFFER, 0);

    // Framebuffer
    auto s = glCheckFramebufferStatus(GL_FRAMEBUFFER); // 36055
    if (s != GL_FRAMEBUFFER_COMPLETE) {
        std::cout << "Error with 3D framebuffer\n";
        exit(1);
    }

    // Depth buffer (for shadows)
    glGenFramebuffers(1, &depthFB);
    glGenTextures(1, &depthTexture);
    glBindTexture(GL_TEXTURE_2D, depthTexture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, world.shadow_width * world.shadow_precision,
                 world.shadow_depth * world.shadow_precision, 0, GL_DEPTH_COMPONENT, GL_FLOAT,
                 NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glBindFramebuffer(GL_FRAMEBUFFER, depthFB);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, depthTexture, 0);
    glDrawBuffer(GL_NONE);
    glReadBuffer(GL_NONE);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);

    // Always check that our framebuffer is ok
    s = glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if (s != GL_FRAMEBUFFER_COMPLETE) {
        std::cout << "Error with shadow framebuffer\n";
        exit(1);
    }
}

void UISDL::SpriteActions() {
    sprite_lock.lock();
    while (last_sprite_index != sprite_index) {
        auto s = sprite.GetSprite(last_sprite_index);
        for (auto it = s->banks.begin(); it != s->banks.end(); ++it) {
            switch (it->state) {
                case SpriteState::OK:
                case SpriteState::DEAD:
                    break;
                case SpriteState::LOAD: {
                    it->width = 0;
                    it->height = 0;
                    bool ret = LoadTextureFromFile(it->filename.c_str(), &it->id, &it->width, &it->height);
                    IM_ASSERT(ret);
                    std::cout << "Loaded sprite: " << it->filename << " with ID: " << it->id << std::endl;
                    it->state = SpriteState::OK;
                    break;
                }
                case SpriteState::_DELETE: {
                    glDeleteTextures(1, &it->id);
                    it->state = SpriteState::DEAD;
                }
                case SpriteState::GRAB: {
                    GLuint image_texture;
                    glGenTextures(1, &image_texture);
                    glBindTexture(GL_TEXTURE_2D, image_texture);
                    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, it->width * 2, it->height * 2, 0, GL_RGBA, GL_UNSIGNED_BYTE,
                                 NULL);

                    // Setup filtering parameters for display
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
                                    GL_CLAMP_TO_EDGE); // This is required on WebGL for non power-of-two textures
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); // Same

                    // Copy from fbo
                    glBindFramebuffer(GL_FRAMEBUFFER, 0);
                    auto yy = desktop_screen_height - (it->y * 2);
                    auto xx = it->x * 2;
                    glCopyTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, xx, yy, it->width * 2, it->height * 2, 0);
                    it->id = image_texture;
                    //std::cout << "Created sprite with ID: " << it->id << std::endl;
                    it->state = SpriteState::OK;
                    break;
                }
            }
        }
        last_sprite_index++;
    }
    sprite_lock.unlock();
}

bool UISDL::LoadTextureFromFile(const char *filename, GLuint *outTexture, int *outWidth, int *outHeight) {
    // Load from file
    int image_width = 0;
    int image_height = 0;
    unsigned char *image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
    if (image_data == NULL) {
        std::cout << "ERROR: Image " << filename << " not found" << std::endl;
        exit(1);
    }

    // Create a OpenGL texture identifier
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    // Setup filtering parameters for display
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,
                    GL_CLAMP_TO_EDGE); // This is required on WebGL for non power-of-two textures
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); // Same

    // Upload pixels into texture
#if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);

#endif
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image_width, image_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);

    *outTexture = image_texture;
    *outWidth = image_width;
    *outHeight = image_height;

    return true;
}
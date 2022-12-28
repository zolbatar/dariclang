#include <iostream>
#include <memory>
#include <filesystem>
#include <thread>
#include <chrono>
#include "UISDL.h"

#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"
#include "Lodepng.h"
#include "../../runtime/Config/Config.h"

extern Config config;
extern std::filesystem::path exe_path;

UISDL::UISDL() {
    std::cout << "Starting UI initialisation" << std::endl;
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    float ddpi, hdpi, vdpi;
    std::cout << "Getting display DPI" << std::endl;
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
}

UISDL::~UISDL() {
    std::cout << "Shutting down SDL" << std::endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void UISDL::Start(int w, int h, bool windowed, bool banked) {
    this->windowed = windowed;
    if (windowed) {
        desktop_screen_width = w;
        desktop_screen_height = h;
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
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 0);

    // Initialise SDL now and create window
    _CreateWindow(windowed);

    // Create context in window
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);

    // Setup GLEW
#if _WIN64
    glewExperimental = GL_TRUE;
    GLenum glewError = glewInit();
    if( glewError != GLEW_OK )
    {
        printf( "Error initializing GLEW! %s\n", glewGetErrorString( glewError ) );
    }
#endif

    SDL_GL_MakeCurrent(window, gl_context);
    SDL_GL_SetSwapInterval(1); // Enable vsync

    // Setup Dear ImGui context
    std::cout << "Setting up Dear ImGui" << std::endl;
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    (void) io;
    io.Fonts->Clear();

    std::cout << "Loading font" << std::endl;
    io.Fonts
            ->AddFontFromFileTTF((exe_path / "Roboto-Regular.ttf").generic_string().c_str(),
                                 config.UIFontSize() * dpi_ratio);
    io.FontGlobalScale /= dpi_ratio * 1.0f;
    io.Fonts->Build();

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    //ImGui::StyleColorsLight();

    // Setup Platform/Renderer backends
    std::cout << "Setting up Dear ImGui backend" << std::endl;
    ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL3_Init(glsl_version);
    std::cout << "Dear ImGui init complete" << std::endl;
}

bool UISDL::Render(std::function<void()> callback) {
    ImGuiIO &io = ImGui::GetIO();

    // Process SDL events like keyboard & mouse
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ImGui_ImplSDL2_ProcessEvent(&event);
        if (event.type == SDL_QUIT) {
            return true;
        }
        if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE
            && event.window.windowID == SDL_GetWindowID(window)) {
            return true;
        }
    }

    const ImGuiViewport *main_viewport = ImGui::GetMainViewport();
    bool window_output = true;

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
    return false;
}

void UISDL::_CreateWindow(bool windowed) {
    // Create window
    std::cout << "Creating SDL window\n";
    SDL_WindowFlags window_flags;
    if (!windowed) {
        window_flags = (SDL_WindowFlags) (SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN_DESKTOP | SDL_WINDOW_ALLOW_HIGHDPI);
        //window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN | SDL_WINDOW_ALLOW_HIGHDPI);
        window = SDL_CreateWindow("Daric IDE",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  desktop_screen_width,
                                  desktop_screen_height,
                                  window_flags);
    } else {
        window_flags = (SDL_WindowFlags) (SDL_WINDOW_OPENGL | SDL_WINDOW_ALLOW_HIGHDPI);
        window = SDL_CreateWindow("Daric IDE",
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

void UISDL::Minimise() {
    if (!windowed) {
        if (SDL_SetWindowFullscreen(window, 0)) {
            std::cout << "Can't leave fullscreen mode" << std::endl;
        }
    }
}

void UISDL::Restore() {
    if (!windowed) {
        SDL_Delay(1000);
        if (SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP)) {
            std::cout << "Can't re-enter fullscreen mode" << std::endl;
        }
    }
}

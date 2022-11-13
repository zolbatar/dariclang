#include <thread>
#include <filesystem>
#include "../Compiler/Compiler.h"
#include "../JIT/JIT.h"
#include "llvm/Linker/Linker.h"
#include "llvm/Support/FileSystem.h"

extern "C" void print(const char *format, ...) {
    char buffer[512];

    va_list args;
    va_start(args, format);
    vsnprintf(buffer, 512, format, args);
    va_end(args);
    printf("%s", buffer);
}

void CompilerLLVM::CreateExecutable(std::string output_filename) {
    OptimiseModule();

    std::string p("Program.o");
    while (!std::filesystem::exists(p)) {
        std::cout << "Waiting for object file to write\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
    auto b = std::filesystem::file_size(p);
    std::cout << "Object file is " << b / 1024 << "KB" << std::endl;

    std::string s =
            "clang++ -O3 -e _Implicit -Wl,-no_pie -L/opt/homebrew/lib -L../../runtime/cmake-build-release/ -lDaricRuntimeStatic -framework OpenGL -lGLEW -lSDL2 Program.o -o "
            +
            output_filename;
    system(s.c_str());
    system("rm Program.o");
    b = std::filesystem::file_size(output_filename);
    std::cout << "Executable file '" << output_filename << "' is " << b / 1024 << "KB" << std::endl;
    exit(0);
}

void CompilerLLVM::Run() {
    // Debug
    {
        auto p = "../Out.ll";
        std::cout << "Writing " << p << "\n";
        llvm::StringRef filename_post(p);
        std::error_code EC;
        llvm::raw_fd_ostream out_post(filename_post, EC);
        Module.get()->print(out_post, nullptr);
        out_post.close();
    }

    if (optimise)
        OptimiseModule();

    // Optimised output
    if (optimise) {
        auto p = "../OutOptimised.ll";
        std::cout << "Writing " << p << "\n";
        llvm::StringRef filename_post(p);
        std::error_code EC;
        llvm::raw_fd_ostream out_post(filename_post, EC);
        Module.get()->print(out_post, nullptr);
        out_post.close();
    }

    // Run!
    Strings_Clear();
    JIT jit(std::move(Module), std::move(Context));
    jit.run();
    Strings_Summary();
}
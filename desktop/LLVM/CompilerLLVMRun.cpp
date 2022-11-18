#include <thread>
#include <filesystem>
#include "../Compiler/Compiler.h"
#include "../JIT/JIT.h"
#include "llvm/Linker/Linker.h"
#include "llvm/Support/FileSystem.h"
#include "lld/Common/Driver.h"
#include "llvm/CodeGen/CommandFlags.h"


#include "lld/Common/TargetOptionsCommandFlags.h"
#include "llvm/ADT/Triple.h"
#include "llvm/CodeGen/CommandFlags.h"
#include "llvm/Target/TargetOptions.h"

extern std::string getCPUArch();

extern "C" void print(const char *format, ...) {
    char buffer[512];

    va_list args;
    va_start(args, format);
    vsnprintf(buffer, 512, format, args);
    va_end(args);
    printf("%s", buffer);
}

void CompilerLLVM::CreateExecutable(std::string output_filename) {
    CreateLLVMPasses();

    std::string p(output_filename + ".o");
    while (!std::filesystem::exists(p)) {
        std::cout << "Waiting for object file to write\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }
    auto b = std::filesystem::file_size(p);
    std::cout << "Object file is " << b / 1024 << "KB" << std::endl;

    // Create executable
    std::error_code EC;
    llvm::StringRef filename_s(options.output_filename);
    llvm::raw_fd_ostream out_s(filename_s, EC, llvm::sys::fs::CreationDisposition::CD_CreateAlways);

    // LLD parameters
    auto arch = getCPUArch();
    if (arch == "x86-64") arch = "x86_64";
    if (arch == "aarch64") arch = "arm64";

    std::vector<const char *> args;
    args.push_back("");
    args.push_back(p.c_str());
    args.push_back("-o");
    args.push_back(output_filename.c_str());
    args.push_back("-syslibroot");
    args.push_back("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk");
    args.push_back("-lc++");
    args.push_back("-lSystem");
    args.push_back("-lDaricRuntime");
    args.push_back("-L.");
    args.push_back("-platform_version");
    args.push_back("macos");
    args.push_back("11.0.0");
    args.push_back("0.0.0");
    args.push_back("-arch");
//    args.push_back("'x86_64;aarch64'");
    args.push_back(arch.c_str());
    args.push_back("-O3");
    args.push_back("-e");
    args.push_back("_Implicit");
    lld::macho::link(args, out_s, llvm::outs(), true,
                     false);
    system(("rm " + p).c_str());
    b = std::filesystem::file_size(output_filename);
    std::cout << "Executable file '" << output_filename << "' is " << b / 1024 << "KB" << std::endl;
    exit(0);
}

void CompilerLLVM::Run() {
    // Debug
    if (options.output_ll_files) {
        auto p = "Out.ll";
        llvm::StringRef filename_post(p);
        std::error_code EC;
        llvm::raw_fd_ostream out_post(filename_post, EC);
        Module.get()->print(out_post, nullptr);
        out_post.close();
    }

    CreateLLVMPasses();

    if (options.output_ll_files) {
        auto p = "OutOptimised.ll";
        llvm::StringRef filename_post(p);
        std::error_code EC;
        llvm::raw_fd_ostream out_post(filename_post, EC);
        Module.get()->print(out_post, nullptr);
        out_post.close();
    }

    // Run!
    Strings_Clear();
    JIT jit(std::move(Module), std::move(Context), TheTriple);
    jit.run();
    Strings_Summary();
}
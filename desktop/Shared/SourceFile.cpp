#include <chrono>
#include <list>
#include "SourceFile.h"
#include "../../runtime/UI/UISDL.h"

extern std::atomic_bool ui_started;
extern Console console;
extern UISDL *ui;
extern Input input;
extern std::string message;
extern std::list<CaughtException> errors;

void SourceFile::MoveToTop(std::string file) {
//	std::cout << "Moving to top:" << file << std::endl;
    for (auto ff = parsers.begin(); ff != parsers.end(); ++ff) {
        if (ff->GetFilename() == file) {
            auto ffe = *ff;
            parsers.erase(ff);
            parsers.push_front(std::move(ffe));

            // Now do all dependencies
            auto deps = &dependencies.find(file)->second;
            for (auto &dep: *deps) {
                MoveToTop(dep);
            }
            return;
        }
    }
}

SourceFile::SourceFile(CompilerOptions &options) : options(options) {
    SourceFileData::Reset();

    std::list<std::string> files_to_process;
    files_to_process.push_back(options.file);

    do {
        auto file = files_to_process.front();
        files_to_process.pop_front();

        // Already imported?
        if (!already_imported.contains(file)) {
            parsers.emplace_front(Parser(this->data, options));
            auto parser = &parsers.front();

            // Get file and check it exists
            parser->setFilename(file);
            std::ifstream stream(file);

            // Mark as done
            already_imported.insert(file);

            // Parse
            auto additional_files = parser->Parse(stream, options.target);
            if (!errors.empty())
                return;
            dependencies.insert(std::make_pair(file, additional_files));

            // Add any new IMPORT files to be parsed
            files_to_process.insert(files_to_process.begin(), additional_files.begin(), additional_files.end());
        } else {
            // Find it and push it to the top
            MoveToTop(file);
        }
    } while (!files_to_process.empty());
}

bool SourceFile::ParseCompileAndRun() {
    Compiler compiler(this->data, parsers, options);
    auto t1 = std::chrono::steady_clock::now();
    if (compiler.Compile()) {
        if (options.run) {
            t1 = std::chrono::steady_clock::now();
            compiler.Run();
        } else {
            message = compiler.CreateExecutable();
            auto t2 = std::chrono::steady_clock::now();
            auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
//			std::cout << "Compile finished in " << time_span.count() << "ms. Press a key to quit.\n";
            return true;
        }
    } else {
        return false;
    }
    if (ui_started.load()) {
        auto t2 = std::chrono::steady_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
        console.SetColour(0xFFFFFFFF);
        console.WriteString("Program finished in " + std::to_string(time_span.count()) + "ms. Press a key to quit.");
//        console.WriteString("Program finished. Press a key to quit.");
        if (ui->GetMode() == Mode::BANKED) {
            ui->Flip(true);
        }
        input.Clear();
        input.CheckForKeypress();
        ui->BankedOff();
        ui->Cls();
    }
    return true;
}

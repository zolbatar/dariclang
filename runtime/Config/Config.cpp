#include <fstream>
#include <iostream>
#include <filesystem>
#include <list>
#include "Config.h"
#include "json.hpp"
#include "../../runtime/Library/StringLib.h"

extern std::filesystem::path exe_path;
using json = nlohmann::json;

Config::Config() {

}

void Config::Save() {
    auto cmd = GetFilename();
    std::cout << "Saving config file: " << cmd << std::endl;
    std::ofstream f(cmd);

    json j;
    j["mono_font"] = mono_font;
    j["ui_font"] = ui_font;
    j["serif_font"] = serif_font;
    j["editor_font_size"] = mono_font_size;
    j["ui_font_size"] = ui_font_size;
    j["console_columns"] = console_columns;
    j["output_ll"] = output_ll;
    j["windowed"] = windowed;
    j["window_w"] = window_w;
    j["window_h"] = window_h;
    j["msaa_levels"] = msaa_levels;
    j["logging"] = logging;
    j["disable_3d"] = disable3d;
    std::vector<std::string> files(filenames.begin(), filenames.end());
    json j_vec(files);
    j["open_files"] = j_vec;

    f << j.dump(4) << std::endl;
}

std::string Config::GetFilename() {
    std::string cmd;
#ifdef DEBUG
    cmd = "/Users/daryl/Shared/Daric/Config.json";
#else
    auto p = std::filesystem::path("Config.json");
    cmd = (exe_path.parent_path() / p).generic_string();
#endif
    return cmd;
}

void Config::Load() {
    auto cmd = GetFilename();
    if (!std::filesystem::exists(cmd)) {
        std::cout << "Config file (config.json) not found at " << cmd << std::endl;
        exit(1);
    }
#if _WIN64
    replaceAll(cmd, "/", "\\");
#endif
    std::cout << "Loading config file: " << cmd << std::endl;
    std::ifstream f(cmd);
    json data = json::parse(f);
    for (json::iterator it = data.begin(); it != data.end(); ++it) {
        if (it.key() == "mono_font") {
            mono_font = it.value();
        } else if (it.key() == "ui_font") {
            ui_font = it.value();
        } else if (it.key() == "serif_font") {
            serif_font = it.value();
        } else if (it.key() == "editor_font_size") {
            mono_font_size = it.value();
        } else if (it.key() == "ui_font_size") {
            ui_font_size = it.value();
        } else if (it.key() == "console_columns") {
            console_columns = it.value();
        } else if (it.key() == "output_ll") {
            output_ll = it.value();
        } else if (it.key() == "windowed") {
            windowed = it.value();
        } else if (it.key() == "window_w") {
            window_w = it.value();
        } else if (it.key() == "window_h") {
            window_h = it.value();
        } else if (it.key() == "msaa_levels") {
            msaa_levels = it.value();
        } else if (it.key() == "logging") {
            logging = it.value();
        } else if (it.key() == "disable_3d") {
            disable3d = it.value();
        } else if (it.key() == "open_files") {
            std::vector<std::string> files = it.value();
            filenames.insert(files.begin(), files.end());
        } else {
            std::cout << "Error parsing Config.json" << std::endl;
            exit(1);
        }
//        std::cout << it.key() << " : " << it.value() << "\n";
    }
    std::cout << "Successfully loaded file " << std::endl;
}
#include <fstream>
#include <iostream>
#include <filesystem>
#include "Config.h"
#include "json.hpp"

extern std::filesystem::path exe_path;
using json = nlohmann::json;

Config::Config() {

}

void Config::Load() {
    auto p = std::filesystem::path("Config.json");
    if (!std::filesystem::exists(exe_path / p)) {
        std::cout << "Config file (config.json) not found\n" << std::endl;
        exit(1);
    }
    std::ifstream f(exe_path / p);
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
        } else {
            std::cout << "Error parsing Config.json" << std::endl;
            exit(1);
        }
//        std::cout << it.key() << " : " << it.value() << "\n";
    }
}
#include <fstream>
#include <iostream>
#include "Config.h"
#include "json.hpp"

using json = nlohmann::json;

Config::Config() {

}

void Config::Load() {
    if (!std::filesystem::exists("Config.json")) {
        std::cout << "Config file (config.json) not found\n" << std::endl;
    }
    std::ifstream f("Config.json");
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
        } else {
            std::cout << "Error parsing Config.json" << std::endl;
            exit(1);
        }
        std::cout << it.key() << " : " << it.value() << "\n";
    }
}
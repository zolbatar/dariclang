#include <fstream>
#include <iostream>
#include "Config.h"
#include "json.hpp"

using json = nlohmann::json;

Config::Config() {

}

void Config::Load() {
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
        } else {
            std::cout << "Error parsing Config.json" << std::endl;
            assert(0);
        }
        std::cout << it.key() << " : " << it.value() << "\n";
    }
}
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include "Types.h"

// Files
static int channel_index = 1;
static std::unordered_map<T_I, FILE *> channels;
static std::vector<std::string> files;

void CloseAllFiles() {
    for (auto &f: channels) {
        fclose(f.second);
    }
}

extern "C" T_I fileio_openin(T_S filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        return -1;
    }
    int r = channel_index++;
    channels.insert(std::make_pair(r, file));
    return r;
}

extern "C" T_I fileio_openout(T_S filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        return -1;
    }
    int r = channel_index++;
    channels.insert(std::make_pair(r, file));
    return r;
}

extern "C" T_I fileio_openup(T_S filename) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        return -1;
    }
    int r = channel_index++;
    channels.insert(std::make_pair(r, file));
    return r;
}

extern "C" T_B fileio_bget(T_I channel) {
    auto g = channels.find(channel);
    char b = fgetc(g->second);
    return b;
}

extern "C" void fileio_bput(T_I channel, T_B byte) {
    auto g = channels.find(channel);
    fputc(byte, g->second);
}

extern "C" T_I fileio_eof(T_I channel) {
    auto g = channels.find(channel);
    return feof(g->second);
}

extern "C" void fileio_close(T_I channel) {
    auto g = channels.find(channel);
    fclose(g->second);
    channels.erase(channel);
}

extern "C" T_S fileio_getsh(T_I channel) {
    auto g = channels.find(channel);
    auto ch = g->second;

    // Read line
    char buffer[8192];
    auto r = fgets(buffer, 8192, ch);
    if (r == NULL) {
        buffer[0] = 0;
    }

    // Copy string and add to free stack
    auto m = (char *) malloc(strlen(buffer));
    buffer[strlen(buffer)-1]=0;
    strcpy(m, buffer);
    return m;
}

extern "C" T_I fileio_ptr(T_I channel) {
    auto g = channels.find(channel);
    return ftell(g->second);
}

extern "C" void fileio_sptr(T_I channel, T_I position) {
    auto g = channels.find(channel);
    fseek(g->second, position, SEEK_SET);
}

extern "C" T_I fileio_list_files(T_S folder) {
    const std::filesystem::path sandbox{folder};
    files.clear();
    try {
        for (auto const &dir_entry: std::filesystem::directory_iterator{sandbox}) {
            files.push_back(dir_entry.path().generic_string());
        }
    } catch (std::exception &ex) {
        std::cout << "Directory '" << folder << "' does not exist.\n";
        return -1;
    }
    return files.size();
}

extern "C" T_S fileio_get_filename(T_I idx) {
    if (idx < 0 || static_cast<size_t>(idx) >= files.size()) {
        return 0;
    }
    auto m = (char *) malloc(files[idx].length() + 1);
    strcpy(m, files[idx].c_str());
    return m;
}

extern "C" void fileio_delete(T_S filename) {
    std::remove(filename);
}



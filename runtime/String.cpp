#include <iostream>
#include <string>
#include <unordered_set>
#include "Types.h"

#define DEBUG 1

std::unordered_set<const char *> temp_strings;
std::unordered_set<const char *> perm_strings;

extern "C" DLLEXTERN void Strings_Clear() {
#ifdef DEBUG
    std::cout << "Clearing strings" << std::endl;
#endif
    for (auto &a: temp_strings) {
        free((void *) a);
    }
    temp_strings.clear();
    for (auto &a: perm_strings) {
        free((void *) a);
    }
    perm_strings.clear();
}

extern "C" DLLEXTERN void Strings_Summary() {
#ifdef DEBUG
    std::cout << "\nGC summary\n";
    std::cout << "----------\n";
    std::cout << "Temporary: " << temp_strings.size() << std::endl;
    std::cout << "Permanent: " << perm_strings.size() << std::endl;
#endif
}

extern "C" DLLEXTERN T_S add_string(T_S v1, T_S v2) {
    std::string v1s(v1);
    std::string v2s(v2);
    auto v3s = v1s + v2s;
    auto m = (char *) malloc(v3s.length() + 1);
    strcpy(m, v3s.c_str());
    return m;
}

extern "C" DLLEXTERN T_I String_Compare(T_S s1, T_S s2) {
    return strcmp(s1, s2);
}

extern "C" DLLEXTERN void Add_Temp_String(const char *v) {
#ifdef DEBUG
    std::cout << "Add Temp String: " << (size_t)v << " is '" << v << "'" << std::endl;
#endif
    temp_strings.insert(v);
}

extern "C" DLLEXTERN void Clear_Perm_String(T_S v) {
    auto f = perm_strings.find(v);
    if (f != perm_strings.end()) {
#ifdef DEBUG
        std::cout << "Clear Perm String: " << (size_t)v << " is '" << v << "'" << std::endl;
#endif
        free((void *) *f);
        perm_strings.erase(f);
    }
}

extern "C" DLLEXTERN void Make_Perm_String(T_S v) {
    auto f = temp_strings.find(v);
    if (f != temp_strings.end()) {
#ifdef DEBUG
        std::cout << "Make Perm String: " << (size_t)v << " is '" << v << "'" << std::endl;
#endif
        temp_strings.erase(v);
        perm_strings.insert(v);
    }
}

extern "C" DLLEXTERN void Clear_Temp_Strings() {
#ifdef DEBUG
    std::cout << "Clear Temp Strings" << std::endl;
#endif
    for (auto &a: temp_strings) {
        free((void *) a);
    }
    temp_strings.clear();
}

extern "C" DLLEXTERN T_I asc(T_S v) {
    std::string vs(v);
    int64_t c = -1;
    if (vs.length() != 0) {
        c = vs[0];
    }
    return c;
}

extern "C" DLLEXTERN T_S chrs(T_I v) {
    v &= 0xFF;
    auto vs = (char *) malloc(2);
    vs[0] = v;
    vs[1] = 0;
    return vs;
}

extern "C" DLLEXTERN T_I instr(T_S string, T_S substring, T_I start) {
    auto s1 = std::string(string);
    auto s2 = std::string(substring);
    if (static_cast<size_t>(start) >= s1.length())
        return 0;
    int v = 0;
    auto r = s1.find(s2, start);
    if (r != std::string::npos) {
        v = r + 1;
    }
    return v;
}

extern "C" DLLEXTERN T_S lefts(T_S v2, T_I v1) {
    auto ss = std::string(v2);
    try {
        ss = ss.substr(0, v1).c_str();
        auto v = (char *) malloc(ss.size() + 1);
        strcpy(v, ss.c_str());
        return v;
    }
    catch (const std::out_of_range &e) {
        printf("LEFT$, range error: %s, %lld\n", ss.c_str(), v1);
    }
    return NULL;
}

extern "C" DLLEXTERN T_S mids(T_S v3, T_I v1, T_I v2) {
    auto ss = std::string(v3);
    try {
        ss = ss.substr(v1 - 1, v2).c_str();
        auto v = (char *) malloc(ss.size() + 1);
        strcpy(v, ss.c_str());
        return v;
    }
    catch (const std::out_of_range &e) {
        printf("MID$, range error: %s, %lld, %lld\n", ss.c_str(), v1, v2);
    }
    return NULL;
}

extern "C" DLLEXTERN T_S rights(T_S v2, T_I v1) {
    auto ss = std::string(v2);
    try {
        auto l = ss.length();
        ss = ss.substr(l - v1, v1).c_str();
        auto v = (char *) malloc(ss.size() + 1);
        strcpy(v, ss.c_str());
        return v;
    }
    catch (const std::out_of_range &e) {
        printf("RIGHT$, range error: %s, %lld\n", ss.c_str(), v1);
    }
    return NULL;
}

extern "C" DLLEXTERN T_I len(T_S v) {
    return strlen(v);
}

extern "C" DLLEXTERN T_I string_to_int(T_S v) {
    auto ss = std::string(v);
    try {
        return std::stoi(ss);
    }
    catch (const std::invalid_argument &) {
        return 0;
    }
}

extern "C" DLLEXTERN T_F string_to_float(T_S v) {
    auto ss = std::string(v);
    try {
        return std::stod(ss);
    }
    catch (const std::invalid_argument &) {
        return 0.0;
    }
}

extern "C" DLLEXTERN T_S float_to_string(T_F vi) {
    char buffer[512];
    snprintf(buffer, 512, "%f", vi);
    auto m = (char *) malloc(strlen(buffer) + 1);
    strcpy(m, buffer);
    return m;
}

extern "C" DLLEXTERN T_S int_to_string(T_I vi) {
    char buffer[512];
    snprintf(buffer, 512, "%lld", vi);
    auto m = (char *) malloc(strlen(buffer) + 1);
    strcpy(m, buffer);
    return m;
}

extern "C" DLLEXTERN T_S float_to_string_with(T_F vi, T_S f) {
    char buffer[512];
    snprintf(buffer, 512, f, vi);
    auto m = (char *) malloc(strlen(buffer) + 1);
    strcpy(m, buffer);
    return m;
}

extern "C" DLLEXTERN T_S int_to_string_with(T_I vi, T_S f) {
    char buffer[512];
    snprintf(buffer, 512, f, vi);
    auto m = (char *) malloc(strlen(buffer) + 1);
    strcpy(m, buffer);
    return m;
}
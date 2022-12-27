#pragma once
#ifdef WINDOWS
#include <conio.h>
#include <direct.h>
#endif

#include <string>

bool endsWith(const std::string &mainStr, const std::string &toMatch);
#ifdef WINDOWS
std::wstring s2ws(const std::string& str);
std::string ws2s(const std::wstring& wstr);
#endif
void toupper(std::string &s);
void ltrim(std::string &s);
void rtrim(std::string &s);
void trim(std::string &s);
bool replace(std::string &str, const std::string &from, const std::string &to);
void replaceAll(std::string &str, const std::string &from, const std::string &to);
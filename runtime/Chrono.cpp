#include <string>
#include <chrono>
#include "Types.h"

std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();

int get_clock() {
	auto t2 = std::chrono::steady_clock::now();
	auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
	double d = time_span.count() / 10.0;
	return static_cast<int>(d);
}

extern "C" DLLEXTERN T_F __time() {
	auto t2 = std::chrono::steady_clock::now();
	auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
	return static_cast<double>(time_span.count()) / 1000000.0;
}

extern "C" DLLEXTERN T_S times() {
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%T", timeinfo);

	// Copy string and add to free stack
	auto l = strlen(buffer) + 1;
	auto v = (char *)malloc(l);
	strncpy(v, buffer, strlen(buffer));
	v[l] = 0;
	return v;
}

extern "C" DLLEXTERN T_S dates() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "%a,%d %b %Y", timeinfo);

    // Copy string and add to free stack
    auto l = strlen(buffer) + 1;
    auto v = (char *)malloc(l);
    strncpy(v, buffer, strlen(buffer));
    v[l] = 0;
    return v;
}
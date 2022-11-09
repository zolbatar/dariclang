#include <string>
#include <chrono>

std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point t1_hp = std::chrono::steady_clock::now();

int get_clock() {
	auto t2 = std::chrono::steady_clock::now();
	auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
	double d = time_span.count() / 10.0;
	return static_cast<int>(d);
}

extern "C" int64_t _time() {
	return get_clock();
}

extern "C" double highprec() {
	auto t2 = std::chrono::steady_clock::now();
	auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1_hp);
	t1_hp = t2;
	return static_cast<double>(time_span.count()) / 1000000.0;
}

extern "C" char *times() {
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%a,%e %b %Y.%T", timeinfo);

	// Copy string and add to free stack
	auto l = strlen(buffer) + 1;
	auto v = (char *)malloc(l);
	strncpy(v, buffer, strlen(buffer));
	v[l] = 0;
	return v;
}
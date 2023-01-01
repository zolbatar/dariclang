#include "Types.h"
#include <string.h>
#include <iostream>

T_S aa;
T_S bb;

extern "C" T_S GetStringComp() {
	std::cout << "Match: " << (size_t)bb << std::endl;
	return bb;
}

int set_comp_byte(T_B *a, T_B *b) {
	return *a - *b;
}

int set_comp_int(T_I *a, T_I *b) {
	return *a - *b;
}

int set_comp_float(T_F *a, T_F *b) {
	return *a - *b;
}

int set_comp_string(T_S *a, T_S *b) {
	aa = *a;
	bb = *b;
//	std::cout << aa << ":" << bb << std::endl;
	return strcmp(aa, bb);
}

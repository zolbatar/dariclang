#include "Types.h"
#include <string.h>

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
	auto aa = *a;
	auto bb = *b;
	return strcmp(aa, bb);
}

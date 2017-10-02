#include "assignment2.h"

bool is_little_endian() {
	int a = 1;

	char *arr = (char *)&a;

	if((int)arr[0] == 1) {
		return true;
	}
	else {
		return false;
	} 
}

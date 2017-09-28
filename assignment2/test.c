#include "assignment2.h"

void test_reverse() {
	uint32_t array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned int len1 = 8;
	reverse_array(array1, len1);
}

void test_whitespace() {

}

int main() {
	test_reverse();
	return 0;
}

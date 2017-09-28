#include "assignment2.h"

void test_reverse() {
	uint32_t array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned int len1 = 8;
	reverse_array(array1, len1);
	uint32_t array1_swp[] = {8, 7, 6, 5, 4, 3, 2, 1};

	for(int i = 0; i < len1; i++) {
		if(array1[i] != array1_swp[i]) {
			printf("reverse_array: Error! Value is %i, but should be %i \n", array1[i], array1_swp[i]);
			return;
		}
	}
	printf("reverse_array: Test done, all correct :) \n");
}

void test_whitespace() {

}

int main() {
	test_reverse();
	return 0;
}

#include "assignment2.h"

void test_reverse();
void test_whitespace();

int main() {
	test_reverse();
	test_whitespace();
	return 0;
}

void test_reverse() {
	printf("---------- Test Reverse ----------\n");
	uint32_t array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
	unsigned int len1 = 8;
	reverse_array(array1, len1);
	uint32_t array1_swp[] = {8, 7, 6, 5, 4, 3, 2, 1};

	for(int i = 0; i < len1; i++) {
		if(array1[i] != array1_swp[i]) {
			printf("Error! Value is %i, but should be %i \n", array1[i], array1_swp[i]);
			return;
		}
	}
	printf("Test done, all correct :) \n");
}

void test_whitespace() {
	printf("---------- Test Whitespace ----------\n");
	char *str = "Lorem ipsum dolor sit amet";
	char *ptr = "";
	char **output = &ptr;
	int res = first_word(str, output);
	printf("Length of the word is %i \n", res);
	printf("Word is %p \n", &output); 
}

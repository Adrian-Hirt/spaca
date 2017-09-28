#include "assignment2.h"

int first_word(char *input_string, char **output_word) {
	char current = *input_string;
	int length = 0;

	while(current != ' ') {
		length += 1;
		current = *(input_string + length);
	}

	char *result = malloc(5000);

	for(int i = 0; i < length; i++) {
		result[i] = *(input_string + i);
	}

	output_word = &result;

	printf("The word is %s \n", result);
	printf("The address is %p \n", &result);
	return length;
}

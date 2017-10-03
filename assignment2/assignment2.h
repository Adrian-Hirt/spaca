#ifndef ASSIGNMENT2_H
#define ASSIGNMENT2_H
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void reverse_array(uint32_t arr[], unsigned int len);

int first_word(char *input_string, char **output_word);

bool is_little_endian();

int compute(int val);

void iterate(int (*f)(int), int arr[], int len);
#endif /* ASSIGNMENT2_H */

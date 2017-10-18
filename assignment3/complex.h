#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct complex {
	double a;
	double b;
} complex_t;

typedef struct complex_set {
	int num_points_in_set;
	complex_t *points;
} complex_set_t;

complex_t* add(complex_t* first, complex_t* second);
complex_t* subtract(complex_t* first, complex_t* second);
complex_t* multiply(complex_t* first, complex_t* second);
complex_t* divide(complex_t* first, complex_t* second);

complex_set_t* alloc_set(complex_t c_arr[], int size);
void free_set(complex_set_t* set);

int main();

#endif /* COMPLEX_H */

#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
	double a;
	double b;
} complex_t;

complex_t* add(complex_t* first, complex_t* second);
complex_t* subtract(complex_t* first, complex_t* second);
complex_t* multiply(complex_t* first, complex_t* second);
complex_t* divide(complex_t* first, complex_t* second);

int main();

#endif /* COMPLEX_H */

#include "complex.h"

complex_t* add(complex_t* first, complex_t* second) {
	complex_t* new_number = malloc(sizeof(complex_t));

	if(new_number == NULL) {
		printf("Could not allocate memory!\n");
		return NULL;
	}

	double new_a = first->a + second->a;
	double new_b = first->b + second->b;

	new_number->a = new_a;
	new_number->b = new_b;

	return new_number;
}

complex_t* subtract(complex_t* first, complex_t* second) {
	complex_t* new_number = malloc(sizeof(complex_t));

	if(new_number == NULL) {
		printf("Could not allocate memory!\n");
		return NULL;
	}

	double new_a = first->a - second->a;
	double new_b = first->b - second->b;

	new_number->a = new_a;
	new_number->b = new_b;

	return new_number;
}

complex_t* multiply(complex_t* first, complex_t* second) {
	complex_t* new_number = malloc(sizeof(complex_t));

	if(new_number == NULL) {
		printf("Could not allocate memory!\n");
		return NULL;
	}

	double a = first->a;
	double b = first->b;
	double c = second->a;
	double d = second->b;

	double new_a = (a * c) - (b * d);
	double new_b = (b * c) + (a * d);

	new_number->a = new_a;
	new_number->b = new_b;

	return new_number;
}

complex_t* divide(complex_t* first, complex_t* second) {
	complex_t* new_number = malloc(sizeof(complex_t));

	if(new_number == NULL) {
		printf("Could not allocate memory!\n");
		return NULL;
	}

	double a = first->a;
	double b = first->b;
	double c = second->a;
	double d = second->b;

	if((c == 0.0) && (d == 0.0)) {
		printf("Division by zero error!\n");
		return NULL;
	}

	double new_a = (a * c + b * d) / (c * c + d * d);
	double new_b = (b * c - a * d) / (c * c + d * d);

	new_number->a = new_a;
	new_number->b = new_b;

	return new_number;

}

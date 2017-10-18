#include "complex.h"

complex_t* test_struct(double a, double b);
void test_add();
void test_subtract();
void test_allocate_set();
void test_free_set();

complex_set_t* set;

int main() {
	printf("------ STRUCT TEST ------\n");
	complex_t* struct_test = test_struct(2.5, 4.2);
	printf("a is %f and b is %f\n", struct_test->a, struct_test->b);
	free(struct_test);
	printf("------ ADD TEST ------\n");	
	test_add();
	printf("------ SUBTRACT TEST ------\n");
	test_subtract();
	printf("------ SET TEST ------\n");
	test_allocate_set();
	test_free_set();
	return 0;
}


complex_t* test_struct(double a, double b) {
	complex_t* new_number = malloc(sizeof(complex_t));
	if(new_number == NULL) {
		printf("Memory allocation failed!\n");
		return NULL;
	}
	new_number->a = a;
	new_number->b = b;
	return new_number;
}

void test_add() {
	complex_t* first = malloc(sizeof(complex_t));
	complex_t* second = malloc(sizeof(complex_t));
	
	if((first == NULL) || (second == NULL)) {
		printf("Memory allocation failed!\n");
		return;
	}

	first->a = 100.0;
	first->b = 42.0;
	second->a = 55.0;
	second->b = 18.0;

	complex_t* result = add(first, second);

	if(result == NULL) {
		printf("Memory allocation failed!");
		return;
	}

	if((result->a == 155.0) && (result->b == 60.0)) {
		printf("Addition seems to work fine!\n");
	}
	else {
		printf("There was an error adding two numbers!\n");
	}
	free(first);
	free(second);
	free(result);
}

void test_subtract() {
	complex_t* first = malloc(sizeof(complex_t));
	complex_t* second = malloc(sizeof(complex_t));
	
	if((first == NULL) || (second == NULL)) {
		printf("Memory allocation failed!\n");
		return;
	}

	first->a = 100.0;
	first->b = 42.0;
	second->a = 55.0;
	second->b = 18.0;

	complex_t* result = subtract(first, second);

	if(result == NULL) {
		printf("Memory allocation failed!");
		return;
	}

	if((result->a == 45.0) && (result->b == 24.0)) {
		printf("Subtraction seems to work fine!\n");
	}
	else {
		printf("There was an error subtracting two numbers!\n");
	}
	free(first);
	free(second);
	free(result);

}

void test_allocate_set() {
	int size = 2;
	complex_t arr[2];

	// Let's add some structs to the array (these lie on the stack!)
	arr[0] = (complex_t) {20.0, 40.0};
	arr[1] = (complex_t) {42.0, 21.0};

	set = alloc_set(arr, size);

	assert(arr[0].a == set->points[0].a);
	assert(arr[0].b == set->points[0].b);
	assert(arr[1].a == set->points[1].a);
	assert(arr[1].b == set->points[1].b);

	printf("The set allocation seems to work fine\n");

}

void test_free_set() {
	printf("Memory should be free again. Don't knwo how to test it though\n");
}

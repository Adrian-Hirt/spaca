#include "assignment2.h"

// Returns 1 if the number is even, 0 otherwise. To be on the safe side, first make all 
// numbers positive
int compute(int val) {
	if(val < 0) {
		val = val * -1;
	}
	if(val % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void iterate(int (*f)(int), int arr[], int len) {
	for(int i = 0; i < len; i++) {
		arr[i] = (*f)(arr[i]);
	}
}

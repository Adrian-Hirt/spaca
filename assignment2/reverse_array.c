#include "assignment2.h"

// @params: arr[] -> array of unsigned 32bit integers, length -> int that is the length of the array to reverse
// @returns: void
void reverse_array(uint32_t arr[], unsigned int length) {
	int half = length / 2;
	for(int i = 0; i < half; i++) {
		int temp = arr[i];
		int other = length - i - 1;
		arr[i] = arr[other];
		arr[other] = temp;		
	}	
}

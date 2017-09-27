#include <stdio.h>
#include <stdint.h>

// @params: arr[] -> array of unsigned 32bit integers, length -> int that is the length of the array to reverse
// @returns: void
void reverse_array(uint32_t arr[], int length) {
	int half = length / 2;
	for(int i = 0; i < half; i++) {
		int temp = arr[i];
		int other = length - i - 1;
		arr[i] = arr[other];
		arr[other] = temp;		
	}	
}

int main(void) {
	uint32_t arr[4] = {1, 2, 3, 4};
	int len = 4;
	reverse_array(arr, len);
	for(int i = 0; i < len - 1; i++) {
		printf("%i, ", arr[i]);
	}
	printf("%i \n", arr[len - 1]);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	

	fp = fopen("stateoutflow0708.txt", "r");

	if(fp == NULL) {
		printf("Error opening the file!\n");
		return 1;
	}

	char origin_id[4];
	char trash[32];
	char state_name[32];
	char amount[32];

	long total = 0;
	char* ptr;

	printf("%-32s%-25s\n", "STATE", "TOTAL");
	printf("----------------------------------------\n");

	while(fscanf(fp, "%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s \t%s \n", 
		origin_id, trash, trash, trash, trash, state_name, trash, trash, amount) != EOF) {
		if(origin_id[1] == '2' && origin_id[2] == '5') {
			total += strtol(amount, &ptr, 10);
			
			printf("%-32s%-25s\n", state_name, amount); 
		}
	}
	printf("----------------------------------------\n");
	printf("%-32s%-25ld\n", "TOTAL", total);

	
	return 0;
}

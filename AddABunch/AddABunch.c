#include <stdio.h>

int main ( void ) {
	printf("How many integers are we dealing with today? \n");
	int c;
	scanf("%d", &c);

	int nums[c];

	for(int i = 0; i < c; i++){
		printf("Enter numbers for array index %d\n", i);
		scanf("%d", &nums[i]);
	}
	int total;

	for(int i = 0; i < c; i++){
		total += nums[i];
	}

	printf("total: %d", total);
}

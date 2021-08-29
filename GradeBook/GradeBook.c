#include <stdio.h>
#include <math.h> //for trigonometric functions

int main ( void ){
	int grades[5];
	grades[0] = 92;
	grades[1] = 85;
	grades[2] = 72;
	grades[3] = 73;
	grades[4] = 95;

	//need structs and pointers

	//printf("grade[2] = %d\n", grade[2]);

	for(int i = 0; i < 5; i++){
		printf("grades[%d] = %d\n", i, grades[i]);
	}

	int total = 0;
	for( int i =0; i < 5; i++){
		total += grades[i];
	}

	printf("average: %d\n", total / 5); //needs to be more generalized

return 0;

}

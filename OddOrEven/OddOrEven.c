#include <stdio.h>

int main ( void ){
	int num;
	printf("Enter integer: \n");
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("The number %d is even.", num);
	} else {
		printf("The number %d is odd.", num);
	}
}

#include <stdio.h>

int main ( void ){
	int num1;
	int num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("%d is larger.", num1);
	}else if (num1 < num2){
		printf("%d is larger.", num2);
	}else if (num1 == num2){
		printf("The two numbers are equal.");
	}else {
		printf("Uncomparable.");
	}
}

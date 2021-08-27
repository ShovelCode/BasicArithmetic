#include <stdio.h>

int main ( void ){
	int num1;
	int num2;
	int sum;
	int dif;
	int mult;
	float div;
	int rem;

	printf("%s", "Enter first number: ");
	scanf("%d", &num1);

	printf("%s", "Enter second number: ");
	scanf("%d", &num2);

	sum = num1 + num2;
	dif = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	rem = num1 % num2;

	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", dif);
	printf("Product: %d\n", mult);
	printf("Ratio: %f\n", div); //test with zero
	printf("Remainder: %d\n", rem);
 	
}

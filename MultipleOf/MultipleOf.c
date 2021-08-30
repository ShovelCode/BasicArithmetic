//This needs refactoring

#include <stdio.h>

int main ( void ){

	int num1;
	int num2;
	
	printf("Enter two numbers to find out if the first is a multiple of the second. ");
	scanf("%d%d",&num1, &num2);

	int isMultiple; //0 is no, 1 is yes.

	if( num1 % num2 == 0){
		printf("is multiple");
	} else {
		printf("not a multiple");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main ( void ){

	int c; //the amount of strings
	printf("How many strings are we gluing together today?\n");
	scanf("%d", &c);
	char *strs [c];
	
	for(int i = 0; i < c; i++){
		printf("Enter string for array index %d: ", i);
		gets(strs); //? 
	}

	return 0;
}

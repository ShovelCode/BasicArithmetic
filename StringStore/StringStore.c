#include <stdio.h>
#include <string.h> //for strlen and strcat

int main ( void ){
	char s1[20]; //20 character string

	char s2[] = "This is a long string of some length.";

	int length = strlen(s2);
	printf("%d", length);

	printf("Enter: ");
	scanf("%s", s1); //does not need &

	int i = 0;
	while(s1[i] != '\0'){
		if(s1[i] == '0'){
			printf("Found one.");
		}
		i++;
	}


}

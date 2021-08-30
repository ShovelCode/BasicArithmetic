#include <stdio.h>
void printASlant();

int main (void){
	for(int i=0; i< 4; i++){
		printASlant();
	}
	return 0;
}

void printASlant(){
	printf("* * * * * * * *\n");
	printf(" * * * * * * * *\n");
}

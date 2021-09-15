#include <stdio.h>

void printFirst(int*);

int main(){

	int x[] = {1,2,3};;

	printFirst(x);
}

void printFirst(int* x){
	printf("%d",x[0]);
}

#include <stdio.h>

void printFirst(int*);

int main(){

	int x[] = {1,2,3,4,5,6,7,8,9,10};

	printFirst(x);
}

void printFirst(int* x){
	printf("%d\n",x[0]);
	printf("%d\n",x[9]);
	printf("%c\n", (char) 89);
}

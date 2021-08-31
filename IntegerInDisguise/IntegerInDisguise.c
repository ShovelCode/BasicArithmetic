#include <stdio.h>
#include <string.h>

int main (void){
	char x[]  = {'A', 'B', 'C', 'D', 'a', 'b', 'c', '+', '-'};
	for(int i = 0; i < strlen(x); i++){
		printf("%d ", x[i]);
	}
}

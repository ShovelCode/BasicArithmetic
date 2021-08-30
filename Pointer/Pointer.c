#include <stdio.h>

#define ROWS 9
#define COLS 9

void print_array(); //handy function

int main(int argc, char *argv[]){
	int a[ROWS][COLS] = {0};//9 by 9 all zero
	print_array(a);
	return 0;
	
}

void print_array(int arr[ROWS][COLS]){

	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("array[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
}

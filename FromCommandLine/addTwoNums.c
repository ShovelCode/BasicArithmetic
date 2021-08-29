#include <stdio.h>
#include <stdlib.h> //for atoi()

int main ( int argc, char *argv[] )
{
	if(argc == 3){
		printf("%d", atoi(argv[1]) + atoi(argv[2]));
	}
    if ( argc == 2 ) {
		printf("The argument supplied is %s\n", argv[1]);
	} else if ( argc > 2 ) {
		printf("Too many arguments supplied.\n");
	} else {
		printf("One argument expected.\n");
	}
}

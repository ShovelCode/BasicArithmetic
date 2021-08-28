#include <stdio.h>

void rectangle();
void oletter();
void arrowup();

int main ( void ){
	rectangle();
	oletter();
	arrowup();		
}

void rectangle(){
	printf("*********\n");
	printf("*       *\n");
	printf("*       *\n");

	printf("*       *\n");
	printf("*       *\n");
	printf("*       *\n");

	printf("*       *\n");
	printf("*       *\n");
	printf("*********\n");
}

void oletter(){
	printf("   ***   \n");
	printf(" *     * \n");
	printf("*       *\n");

	printf("*       *\n");
	printf("*       *\n");
	printf("*       *\n");

	printf("*       *\n");
	printf(" *     * \n");
	printf("   ***   \n");

}

void arrowup(){
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
        printf("    *    \n");
 	printf("    *    \n");
	printf("    *    \n");
	printf("    *    \n");
	printf("    *    \n");
	printf("    *    \n");

}

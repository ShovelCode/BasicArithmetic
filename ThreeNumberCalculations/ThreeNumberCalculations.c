#include <stdio.h>

int main ( void ){
	int num1, num2, num3;
	int sum, product,avg, least, most;
	printf("Enter three numbers at once: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("The three numbers were: %d %d %d\n", num1, num2, num3);
	
	sum = num1 + num2 + num3;
	product = num1 * num2 * num3;
	avg = sum / 3;
	
	//determine least
	if( num1 < num2 && num1 < num3){
		least = num1;
	} else if (num2 < num1 && num2 < num3){
		least = num2;
	} else if (num3 < num1 && num3 < num2){
		least = num3;
	}

	//determine most
	if( num1 > num2 && num1 > num3){
                most  = num1;
        } else if (num2 >  num1 && num2 > num3){
                most = num2;
        } else if (num3 > num1 && num3 > num2){
                most = num3;
        }

	printf("Sum: %d\n", sum);
	printf("Average: %d\n", avg); 
	printf("Smallest: %d\n", least);
	printf("Largest: %d\n", most);

}

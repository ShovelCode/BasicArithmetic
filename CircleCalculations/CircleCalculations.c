#include <stdio.h>

int main (void){
	const float pi = 3.14159;
	float area;
	float diameter;
	float circumference;
	float radius;
	printf("Enter radius of circle:\n ");
	scanf("%f", &radius);
	
	area = pi * radius * radius;
	diameter = 2 * radius;
	circumference = pi * diameter;
	
	printf("Area: %f\n", area);
	printf("Diameter: %f\n", diameter);
	printf("circumference: %f\n", circumference);
}

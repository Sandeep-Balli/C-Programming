#include<stdio.h>

int main() {
	float pie, diameter, perimeter;
	
	pie = 3.14;
	printf("Enter the diameter of the circle: ");
	scanf("%f", &diameter);
	perimeter = 2 * pie * diameter;
	printf("The perimeter of the circle is: %f", perimeter);
	return 0;
}

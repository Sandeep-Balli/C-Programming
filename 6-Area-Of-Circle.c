#include<stdio.h>

int main() {
	float area, pie, radius;
	pie = 3.14;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	
	area = (pie * radius * radius);
	
	printf("The area of the circle is: %f", area);
	
	return 0;
	
}

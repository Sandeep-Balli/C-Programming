#include<stdio.h>
int main() {
	int max, num1, num2;
	num1 = 10;
	num2 = 20;
	
	max = num1 > num2 ? num1 : num2;
	printf("%d", max);
	return 0;
}

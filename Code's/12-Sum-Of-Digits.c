#include<stdio.h>
int main() {
	int number, sum = 0, digit = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	while(number > 0) {
		digit = number % 10;
		sum += digit;
		number = number / 10;
	}
	printf("The sum of all the digits of the number is: %d", sum);
	return 0;
	
}

#include<stdio.h>
int main() {
	int number, i, digit = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	for(i = 2; i < number; i++) {
		if(number % 2 == 0){
			digit++;
			break;
		}
	}
	if(digit == 0){
		printf("This is a prime number.");
	} else {
		printf("This is not a prime number.");
	}
}

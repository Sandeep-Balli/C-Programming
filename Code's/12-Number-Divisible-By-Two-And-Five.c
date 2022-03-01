#include<stdio.h>
int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number % 2 == 0 && number % 5 == 0){
		printf("The number is divisible by 2 and 5.");
	} else {
		printf("The number is not divisible.");
	}
	return 0;
}

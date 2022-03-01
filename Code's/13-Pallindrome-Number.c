#include<stdio.h>
int main() {
	int number, temp, remainder, reversed = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	temp = number;
	
	while(number != 0) {
		remainder = number % 10;
		reversed = reversed * 10 + remainder;
		number = number / 10;
	}
	
	if(temp == reversed){
		printf("It is a pallindrome number.");
	} else {
		printf("It is not a pallindrome number.");
	}
	
	return 0;
}

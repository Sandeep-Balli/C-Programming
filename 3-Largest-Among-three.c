#include<stdio.h>
int main() {
	int firstNumber, secondNumber, thirdNumber, largestNumber;
	printf("Enter the value of first number: ");
	scanf("%d", &firstNumber);
	printf("Enter the value of second number: ");
	scanf("%d", &secondNumber);
	printf("Enter the value of third number: ");
	scanf("%d", &thirdNumber);
	
	if(firstNumber >= secondNumber && firstNumber >= thirdNumber){
		largestNumber = firstNumber;
	}
	else if(secondNumber > firstNumber && secondNumber >= thirdNumber) {
		largestNumber = secondNumber;
	}
	else if(thirdNumber > firstNumber && thirdNumber > secondNumber) {
		largestNumber = thirdNumber;
	}
	printf("The largest number among the three numbers is: %d", largestNumber);
	
	return 0;
}

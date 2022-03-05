#include<stdio.h>
int main() {
	int number, digit, count, temp;
	printf("Enter a number: ");
	scanf("%d", &number);
	temp = number;
	while(temp != 0) {
		digit = number % 10;
		count++;
		temp = temp / 10;
	}
	
	printf("%d", count);
	return 0;
}

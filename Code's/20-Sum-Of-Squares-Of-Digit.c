#include<stdio.h>
int main() {
	int num, rem, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num > 0) {
		rem = num % 10;
		sum += rem * rem;
		num = num / 10;
	}
	printf("The sum of squares of digit is: %d", sum);
	return 0;
}


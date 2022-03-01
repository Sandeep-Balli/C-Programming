#include<stdio.h>

int main() {
	int num1, num2, hcf, min, i;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	min = num1 < num2 ? num1 : num2;
	for(i = 1; i <= min; i++) {
		if(num1 % i == 0 && num2 % i == 0) {
			hcf = i;
		}
	}
	
	printf("The HCF of the two numbers is: %d", hcf);
	return 0;
}

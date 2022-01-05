#include<stdio.h>
int main() {
	int a, b, c, i = 0, number;
	printf("Enter a number: ");
	scanf("%d", &number);
	a = 0;
	b = 1;
	for(i = 0; i < number; i++) {
		printf(a);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}

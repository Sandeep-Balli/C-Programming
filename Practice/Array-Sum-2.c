#include<stdio.h>
int main() {
	int a[5], i, sum = 0;
	printf("Enter 5 Integers: ");
	for(i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 5; i++) {
		sum = sum + a[i];
	}
	
	printf("The sum of all the array elements is: %d", sum);
	return 0;
}

#include<stdio.h>
int main() {
	int row, i, j, n, a;
	printf("Enter the no. of rows: ");
	scanf("%d", &n);
	for(row = 1; row <= n; row++) {
		a = 1;
		for(j = 1; j <= 40 - row; j++) {
			printf(" ");
		}
		for(i = 1; i <= row; i++) {
			printf("%d" " ", a);
			a = a * (row - i) / i;
		}
		printf("\n");
	}
}

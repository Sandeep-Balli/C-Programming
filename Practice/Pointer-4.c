#include<stdio.h>
int main() {
	int arr[9] = {1,2,3,4,5,7,13,56,76};
	int *p = arr;
	int i;
	for(i = 0; i < 9; i++) {
		printf("%d ", *(p + i));
	}
	return 0;
}

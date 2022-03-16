#include<stdio.h>

int search(int a[], int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = {2, 4, 7, 3, 5, 9};
	int x = 5;
	int n = sizeof(a);
	int result = search(a, n, x);
	if(result != -1) {
		printf("Element found at: %d", result);
	} else {
		printf("Element not found");
	}
	return 0;
}

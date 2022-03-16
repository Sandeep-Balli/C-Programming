#include<stdio.h>
int main() {
	int i = 10;
	int *ptr;
	ptr = &i;
	printf("Address, before: %d \n", ptr);
	ptr += 1;
	printf("Address, before: %d \n", ptr);
	
	return 0;
}

#include<stdio.h>

int main() {
	int x = 5, y = 10, z = 20;
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = &x;
	ptr2= &y;
	ptr3 = &z;
	
//	*ptr1 = 1; Changing the value of the variable
	printf("%d", *ptr1);
	printf("\n");
	printf("%d", *ptr2);
	printf("\n");
	printf("%d", *ptr3);
//	printf("%d %d %d", ptr1, ptr2, ptr3);
	return 0;
	
}

#include<stdio.h>

void push() {
	if(top == MAX - 1) {
		printf("Stack Overflow");
		return;
	}
}

void print() {
	int i;
	if(top == -1) {
		printf("Stack Underflow\n");
		return;
	}
	for(i = top; i >= 0; i--) {
		printf("%d", stack_arr[i]);
	}
	printf("\n");
}

int main() {
	int choice, data;
	while(1) {
		printf("\n");
		printf("1, Push\n");
		printf("2, Pop\n");
		printf("3, Print the top element\n");
		printf("4, Print all the elements of the stack\n");
		printf("5, Quit\n");
		printf("Please enter your choice: ");
		printf("%d", choice);
	}
	return  0;
	
	switch(choice) {
		case 1: {
			printf("Enter the element to be pushed: ");
			scanf("%d", data);
			push(data);
			break;
		}
		
		case 2: {
			data = pop();
			printf("Deleted Element is %d\n ", data);
			break;
		}
		
		case 3: {
			printf("The top most element of the stack is %d\n ", peek());
			break;
		}
		
		case 4: {
			print();
			break;
		}
		
		case 5: {
			exit();
			break;
		}
		
		default {
			printf("Wrong Choice");
			break;
		}
	}
}

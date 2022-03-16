#include<stdio.h>
#define MAX 4
int stack_arr[MAX];
int top = -1; //Indicates that, the stack is empty

void push(int data) {
	if(top == MAX - 1) {
		printf("Stack Overflow");
		return;
	}
	top = top + 1;
	stack_arr[top] = data;
}

void peek() {
	printf("%d", stack_arr[top]);
}

int isEmpty() {
	if(top == -1) {
		return 1;
	}
	return 0;
}

int isFull() {
	if(top == MAX) {
		return 1;
	}
	return 0;
}

void pop() {
	int data;
	if(top == -1) {
		printf("Stack Underflow");
		return;
	}
	data = stack_arr[top];
	top--;
	printf("%d", data);
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	peek();
	printf("\n");
	pop();
	printf("\n");
	peek();
	return 0;
}

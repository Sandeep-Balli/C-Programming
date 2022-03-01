#include<stdio.h>

int main() {
	char ch;
	printf("Enter a character or inteager: ");
	scanf("%c", &ch);
	
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		printf("It is an alphabet.");
	}
	else if(ch >= '0' && ch <= '9') {
		printf("It is a integer");
	}
	else {
		printf("Enter either an integer or alphabet.");
	}
	
	return 0;
}

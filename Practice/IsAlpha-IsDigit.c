#include<stdio.h>
#include<ctype.h>
int main() {
	char ch;
	printf("Enter a letter or a number: ");
	ch = getchar();
	if(isalpha(ch)) {
		printf("You entered a letter.");
	} else if(isdigit(ch)) {
		printf("You entered a number");
	} else {
		printf("This is not alpha numeric.");
	}
	return 0;
}

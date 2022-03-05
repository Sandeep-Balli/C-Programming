// Has Some Warnings and Bugs
#include<stdio.h>
#include<ctype.h>
int main() {
	char ch;
	printf("Enter a character: ");
	ch = getchar();
	if(islower(ch)) {
		putchar(toupper(ch));
		printf(ch);
	} else if(isupper(ch)) {
		putchar(tolower(ch));
		printf(ch);
	}
	return 0;
}

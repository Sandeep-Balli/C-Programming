#include<stdio.h>

int main() {
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
			printf("It is a vowel");
		} else {
			printf("It is a consonant");
		}
	} else {
		printf("Enter a valid character.");
	}
	
	return 0;
}

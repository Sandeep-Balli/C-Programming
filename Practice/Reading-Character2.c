#include<stdio.h>
int main() {
	char ch;
	printf("Enter Y to display YES or Enter N to display No: ");
	ch = getchar();
	if(ch == 'Y' || ch == 'y') {
		printf("YES");
	} else if( ch == 'N' || ch == 'n') {
		printf("NO");
	}
	return 0;
}

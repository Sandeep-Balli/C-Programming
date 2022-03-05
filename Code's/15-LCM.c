#include <stdio.h>

int main() {
	int num1, num2, max, lcm, i;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	max = num1>num2?num1:num2;
	
	for(i = 0; i < max; i++) {
		if(max % num1 == 0 && max % num2 == 0) {
			lcm = max;
			break;
		}
		max++;
	}
	printf("The lcm is %d", lcm);
	return 0;
}

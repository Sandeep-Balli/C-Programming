#include<stdio.h>
struct {
	char *engine;
} car1, car2;
int main() {
	car1.engine = "Engine 1";
	car2.engine = "Engine 2";
	
	printf("%s \n", car1.engine);
	printf("%s", car2.engine);
	return 0;
}

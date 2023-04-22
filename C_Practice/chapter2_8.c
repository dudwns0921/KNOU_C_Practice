#include <stdio.h>

int a = 100;

int func() {
	int a = 200;
	printf("a : %d \n", a);
	return 0;
}

int main() {
	func();
	printf("a : %d", a);
	return 0;
}
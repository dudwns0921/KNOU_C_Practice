#include <stdio.h>

int a, b, c;
int product(a, b);

main() {
	printf("Enter a number between 1 and 100");
	scanf_s("%d", &a);

	printf("Enter another number between 1 and 100");
	scanf_s("%d", &b);

	c = product(a, b);
	printf("%d * %d = %d", a, b, c);
}

product(int a, int b) {
	return a* b;
}
#include <stdio.h>

void main() {
	char ch;
	int in;
	ch = in = 'A';
	printf("ch = %d /", ch);
	printf("in = %d \n", in);
	ch = in = 100;
	printf("ch = %c /", ch);
	printf("in = %c", in);
}
#include <stdio.h>

void main() {
	int* p, i = 3, j;
	p = &i;
	j = *p;
	j++;
	printf("p : %p, p�� �� : %d \n", p, *p);
	printf("i : %d \n", i);
	printf("j : %d \n", j);
}
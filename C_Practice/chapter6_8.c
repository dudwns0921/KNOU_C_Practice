#include <stdio.h>

void doublePointerValue(int*);
void main() {
	int a = 10;
	int* p = &a;
	printf("함수 호출 이전의 a : %d \n", a);
	doublePointerValue(p);
	printf("함수 호출 이후의 a : %d \n", a);
}

void doublePointerValue(int* k) {
	*k = *k * 2;
}
#include <stdio.h>

void doublePointerValue(int*);
void main() {
	int a = 10;
	int* p = &a;
	printf("�Լ� ȣ�� ������ a : %d \n", a);
	doublePointerValue(p);
	printf("�Լ� ȣ�� ������ a : %d \n", a);
}

void doublePointerValue(int* k) {
	*k = *k * 2;
}
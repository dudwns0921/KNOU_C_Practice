#include <stdio.h>

void main() {
	int* p, a[] = { 10,20,30,40,50 };
	p = &a[0];

	printf("*p : %d \n", *p);
	printf("*p++ : %d \n", *p++);
	printf("++*p : %d \n", *++p); // ��������� �� �� �������� ���� ������ ���̱� ������, �� ��° ��Ҹ� ����Ŵ

	p += 2;
	printf("*p : %d \n", *p);
	printf("*p + 2 : %d \n", *p + 2);
}
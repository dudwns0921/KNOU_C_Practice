#include <stdio.h>

void main() {
	int* p, a[] = { 10,20,30,40,50 };
	p = &a[0];

	printf("*p : %d \n", *p);
	printf("*p++ : %d \n", *p++);
	printf("++*p : %d \n", *++p); // 결과적으로 두 번 포인터의 값이 증가한 것이기 때문에, 세 번째 요소를 가리킴

	p += 2;
	printf("*p : %d \n", *p);
	printf("*p + 2 : %d \n", *p + 2);
}
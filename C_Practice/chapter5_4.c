#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

void main() {
	puts("1에서 8사이의 정수값 입력 : ");
	scanf_s("%d", &x);

	if (1 > x && x > 8) {
		puts("1에서 8사이의 정수값만 입력이 가능합니다. \0");
	}
	else {
		printf("결과 : %d", factorial(x));
	}

}

unsigned int factorial(unsigned int a) {
	if (a == 1) {
		return 1;
	}
	else {
		a *= factorial(a-1);
		return a;
	}
}
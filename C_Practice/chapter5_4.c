#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

void main() {
	puts("1���� 8������ ������ �Է� : ");
	scanf_s("%d", &x);

	if (1 > x && x > 8) {
		puts("1���� 8������ �������� �Է��� �����մϴ�. \0");
	}
	else {
		printf("��� : %d", factorial(x));
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
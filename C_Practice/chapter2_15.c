#include <stdio.h>

void main() {
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];

	printf("정수 a와 long long 정수를 입력 : ");
	scanf_s("%d %lld", &a, &b);
	printf("a=%d, b=%lld \n", a, b);

	printf("실수 c를 입력 : \n");
	scanf_s("%f", &c);
	printf("f=%7.3f \n", c);

	printf("문자를 입력 : \n");
	// 앞에서 입력한 Enter을 무시하기 위해 공백을 넣어야 함
	scanf_s(" %c", &ch);
	printf("ch=%c", ch);
}
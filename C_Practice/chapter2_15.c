#include <stdio.h>

void main() {
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];

	printf("���� a�� long long ������ �Է� : ");
	scanf_s("%d %lld", &a, &b);
	printf("a=%d, b=%lld \n", a, b);

	printf("�Ǽ� c�� �Է� : \n");
	scanf_s("%f", &c);
	printf("f=%7.3f \n", c);

	printf("���ڸ� �Է� : \n");
	// �տ��� �Է��� Enter�� �����ϱ� ���� ������ �־�� ��
	scanf_s(" %c", &ch);
	printf("ch=%c", ch);
}
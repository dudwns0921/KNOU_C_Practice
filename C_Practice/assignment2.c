/* �� ���α׷��� �� ���� Ű����� �Է¹޾� ���� ����� ����ϴ� ���α׷��̴�. */

/* ���Ժ� */
#include <stdio.h> // printf()�� scanf�� ����ϱ� ���� ��� ���� ����
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޽��� ����

int a, b, c; // ������ �����ϴ� ���� ����
int product(int x, int y); // ����� �Լ� ����

/* main �Լ� */
void main() {
	/* ù ��° ���� �Է� */
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);
	/* �� ��° ���� �Է� */
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);
	c = product(a, b);
	printf("%d * %d = %d", a, b, c);
}

int product(int x, int y) {
	return x * y;
}
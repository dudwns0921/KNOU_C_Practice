#include <stdio.h>
#define IN "���� �������� 100 �Դϴ�. \n"
#define PI 3.141592
#define AREA(r) (r*r*PI)
#define OUT "���� ������ ���ϰ� ���α׷��� �����մϴ�."

int main() {
	printf("%s", IN);
	printf("���� ������ %10.5f �Դϴ�. \n", AREA(100));
	printf("%s", OUT);
	return 0;
}
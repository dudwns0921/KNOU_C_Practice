#include <stdio.h>
#define CONDITION 0

int main() {
#if CONDITION
	printf("���� ���ǿ� ���� ���� \n");
#else
	printf("���� ������ ��쿡 ���� \n");
#endif
	printf("���� �� ������ ����");
	return 0;
}
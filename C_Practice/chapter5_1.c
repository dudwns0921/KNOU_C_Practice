#include <stdio.h>

void static_test();
void main() {
	int i = 0;
	while (i < 5) {
		static_test();
		i++;
	}
}

void static_test() {
	static int s; // �������� s�� 0���� �ʱ�ȭ�ǰ�, ���Ŀ� ȣ��Ǹ� �ʱ�ȭ�� �ȵ�.
	int a = 0;

	++s;
	++a;

	printf("s : %d, a : %d \n", s, a);

}
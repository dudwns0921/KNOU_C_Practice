#include <stdio.h>
void main() {
	enum day {SUN, MON, TUE, WED, THU, FRI, SAT};
	enum day d1, d2;
	d1 = SUN;
	d2 = FRI;

	printf("������ d1�� ����� ���� : %d \n", d1);
	printf("������ d2�� ����� ���� : %d", d2);

}
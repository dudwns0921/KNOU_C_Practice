#include <stdio.h>
#include <limits.h>

void main() {
	int in_money, coin_10, coin_50, coin_100, coin_500;
	printf("�������� �ٲ� �ݾ���? 0���� %d ���̷� �Է� : \n", INT_MAX);
	scanf_s("%d", &in_money);

	coin_500 = in_money / 500;
	in_money = in_money % 500;

	coin_100 = in_money / 100;
	in_money = in_money % 100;

	coin_50 = in_money / 50;
	in_money = in_money % 50;

	coin_10 = in_money / 10;
	in_money = in_money % 10;

	printf("500�� ���� = %d \n", coin_500);
	printf("100�� ���� = %d \n", coin_100);
	printf("50�� ���� = %d \n", coin_50);
	printf("10�� ���� = %d \n", coin_10);
	printf("���� �ܵ� = %d \n", in_money);

}
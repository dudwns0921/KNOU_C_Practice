#include <stdio.h>
#include <limits.h>

void main() {
	int in_money, coin_10, coin_50, coin_100, coin_500;
	printf("동전으로 바꿀 금액은? 0에서 %d 사이로 입력 : \n", INT_MAX);
	scanf_s("%d", &in_money);

	coin_500 = in_money / 500;
	in_money = in_money % 500;

	coin_100 = in_money / 100;
	in_money = in_money % 100;

	coin_50 = in_money / 50;
	in_money = in_money % 50;

	coin_10 = in_money / 10;
	in_money = in_money % 10;

	printf("500원 개수 = %d \n", coin_500);
	printf("100원 개수 = %d \n", coin_100);
	printf("50원 개수 = %d \n", coin_50);
	printf("10원 개수 = %d \n", coin_10);
	printf("남은 잔돈 = %d \n", in_money);

}
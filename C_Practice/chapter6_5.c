#include <stdio.h>

void score_sum(int gr[][5], int a, int b);
void main() {
	int score[2][5] = { {10,20,30,40,50}, {10,10,10,10,10} };
	score_sum(score, 2, 5);
}

void score_sum(int gr[][5], int a, int b) {
	int sum;
	for (int row = 0; row < a; row++) {
		sum = 0;
		for (int column = 0; column < b; column++) {
			sum += gr[row][column];
		}
		printf("sum : %d \n", sum);
	}
}
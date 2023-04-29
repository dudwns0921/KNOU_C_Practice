#include <stdio.h>

void main() {
	static int score[4][3] = { {90, 90, 90}, {80, 80, 80}, {70, 70, 70},{60, 60, 60} };
	int sum;
	printf("번호\t국어\t수학\t영어\t합계 \n");
	for (int i = 0; i < 4; i++) {
		sum = 0;
		printf("%d\t", i+1);
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			printf("%d\t", score[i][j]);
		}
		printf("%d\n", sum);
	}
}
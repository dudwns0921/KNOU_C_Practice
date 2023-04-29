#include <stdio.h>

void main() {
	int score[3][3][3];
	int sum[3] = { 0 }; // 모두 0으로 초기화
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d반 %d번 학생의 국어, 영어, 수학 점수 입력 : ", i+1, j+1);
			scanf_s("%d %d %d", &score[i][j][0], &score[i][j][1], &score[i][j][2]);
		}
	}

	for (int k = 0; k < 3; k++) {
		for (int l = 0; l < 3; l++) {
			for (int m = 0; m < 3; m++) {
				sum[m] += score[k][l][m];
			}
		}
	}
	// 각 과목별 점수를 얻기 위해서는 면과 행의 인덱스를 맞춰야 함.

	printf("전체 반 9명의 국어 총점 %d, 평균 : %d \n", sum[0], sum[0] / 9);
	printf("전체 반 9명의 영어 총점 %d, 평균 : %d \n", sum[1], sum[1] / 9);
	printf("전체 반 9명의 수학 총점 %d, 평균 : %d \n", sum[2], sum[2] / 9);
}	
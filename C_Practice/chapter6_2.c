#include <stdio.h>

void main() {
	int score[3][3][3];
	int sum[3] = { 0 }; // ��� 0���� �ʱ�ȭ
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d�� %d�� �л��� ����, ����, ���� ���� �Է� : ", i+1, j+1);
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
	// �� ���� ������ ��� ���ؼ��� ��� ���� �ε����� ����� ��.

	printf("��ü �� 9���� ���� ���� %d, ��� : %d \n", sum[0], sum[0] / 9);
	printf("��ü �� 9���� ���� ���� %d, ��� : %d \n", sum[1], sum[1] / 9);
	printf("��ü �� 9���� ���� ���� %d, ��� : %d \n", sum[2], sum[2] / 9);
}	
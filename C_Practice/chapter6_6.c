#include <stdio.h>

void score_average(int gr[][2][3], int, int, int);
void main() {
	int score[4][2][3] = {
		{{10,20,30}, {10,10,10}},
		{{0,40,50}, {10,10,10}},
		{{30,30,30}, {50,50,50}},
		{{20,20,20}, {0,0,0}}
	};
	score_average(score, 4, 2, 3);
}
void score_average(int gr[][2][3], int a, int b, int c) {
	int class_average, student_sum, student_average;

	for (int i = 0; i < a; i++) {
		class_average = 0;
		for (int k = 0; k < b; k++) {
			student_sum = 0;
			student_average = 0;
			for (int l = 0; l < c; l++) {
				student_sum += gr[i][k][l];
			}
			student_average = student_sum / 3;
			class_average += student_average;
			printf("%d반 %d번 학생의 평균 : %d \n",i+1, k+1, student_average);
		}
		printf("%d반 전체의 평균 : %d \n", i+1, student_average);
	}

};

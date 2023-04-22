#include <stdio.h>
#define NAME_INPUT_MESSAGE "이름을 공백없이 영문으로 입력하시오. (예: Honggildong) : "
#define DEPARTMENT_INPUT_MESSAGE "학과를 공백없이 영문으로 입력하시오. (예: ComputerScience) : "
#define STUDENT_NUMBER_INPUT_MESSAGE "학번을 입력하시오. (예: 202334-123456) : "
#define RESULT_MESSAGE "======처리결과====== \n"
#define NAME_OUTPUT_MESSAGE "이름 홀수번째 문자만 순방향 출력 : "
#define DEPARTMENT_OUTPUT_MESSAGE "학과 짝수번째 문자만 역방향 출력 : "
#define STUDENT_NUMBER_OUTPUT_MESSAGE "학번 홀수번째 문자 *로 출력 : "

void reverseString(char arr[]);
void printStringEvenOrOddIndex(char arr[], int command);
void printStarWhenOddIndex(char arr[]);
void main() {
	char name[50], department[50], studentNumber[50];
	puts(NAME_INPUT_MESSAGE);
	gets(name);
	puts(DEPARTMENT_INPUT_MESSAGE);
	gets(department);
	puts(STUDENT_NUMBER_INPUT_MESSAGE);
	gets(studentNumber);

	puts(RESULT_MESSAGE);
	puts(NAME_OUTPUT_MESSAGE);
	printStringEvenOrOddIndex(name, 0);

	reverseString(department);
	puts(DEPARTMENT_OUTPUT_MESSAGE);
	printStringEvenOrOddIndex(department, 1);

	puts(STUDENT_NUMBER_OUTPUT_MESSAGE);
	printStarWhenOddIndex(studentNumber);
}

void reverseString(char arr[]) {
	int length = strlen(arr);
	char temp;
	for (int i = 0; i < length / 2; i++) {
		temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}
}

void printStringEvenOrOddIndex(char arr[], int command) {
	// 1이면 짝수 번째 요소만 출력, 0이면 홀수 번째 출력
	int length = strlen(arr);
	for (int i = 0; i < length; i++) {
		if (command) {
			if (i % 2 == 0) {
				putchar(arr[i]);
			}
		}
		else {
			if (i % 2 != 0) {
				putchar(arr[i]);
			}
		}
	}
	putchar('\n');
}


void printStarWhenOddIndex(char arr[]) {
	int length = strlen(arr);
	for (int i = 0; i < length; i++) {
		if (i % 2 != 0) {
			putchar('*');
		}
		else {
			putchar(arr[i]);
		}
	}
	putchar('\n');
}
#include <stdio.h>
#define NAME_INPUT_MESSAGE "�̸��� ������� �������� �Է��Ͻÿ�. (��: Honggildong) : "
#define DEPARTMENT_INPUT_MESSAGE "�а��� ������� �������� �Է��Ͻÿ�. (��: ComputerScience) : "
#define STUDENT_NUMBER_INPUT_MESSAGE "�й��� �Է��Ͻÿ�. (��: 202334-123456) : "
#define RESULT_MESSAGE "======ó�����====== \n"
#define NAME_OUTPUT_MESSAGE "�̸� Ȧ����° ���ڸ� ������ ��� : "
#define DEPARTMENT_OUTPUT_MESSAGE "�а� ¦����° ���ڸ� ������ ��� : "
#define STUDENT_NUMBER_OUTPUT_MESSAGE "�й� Ȧ����° ���� *�� ��� : "

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
	// 1�̸� ¦�� ��° ��Ҹ� ���, 0�̸� Ȧ�� ��° ���
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
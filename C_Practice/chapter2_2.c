#include <stdio.h>
#include <limits.h>

void main() {
	char ch1 = CHAR_MIN;
	char ch2 = CHAR_MAX;
	short sh1 = SHRT_MAX;
	short sh2 = SHRT_MIN;
	int in1 = INT_MIN;
	int in2 = INT_MAX;
	long lo1 = LONG_MIN;
	long lo2 = LONG_MAX;
	long long ll1 = LLONG_MAX;
	long long ll2 = LLONG_MIN;

	printf("char �ڷ��� ���� : %d ~ %d \n", ch1, ch2);
	printf("short �ڷ��� ���� : %d ~ %d \n", sh1, sh2);
	printf("int �ڷ��� ���� : %d ~ %d \n", in1,in2);
	printf("long �ڷ��� ���� : %ld ~ %ld \n", lo1, lo2);
	printf("long long �ڷ��� ���� : %lld ~ %lld \n", ll1, ll2);
}
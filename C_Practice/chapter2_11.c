#include <stdio.h>
#define CONDITION 0

int main() {
#if CONDITION
	printf("나는 조건에 따라 수행 \n");
#else
	printf("나는 예외의 경우에 수행 \n");
#endif
	printf("끝날 때 무조건 수행");
	return 0;
}
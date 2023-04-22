#include <stdio.h>

void main() {
	printf("test", 123);
	// 오류만 발생
	printf("test %d");
	// 랜덤으로 할당됨.
}
#include <stdio.h>
#define IN "원의 반지름은 100 입니다. \n"
#define PI 3.141592
#define AREA(r) (r*r*PI)
#define OUT "원의 면적을 구하고 프로그램을 종료합니다."

int main() {
	printf("%s", IN);
	printf("원의 면적은 %10.5f 입니다. \n", AREA(100));
	printf("%s", OUT);
	return 0;
}
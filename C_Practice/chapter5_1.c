#include <stdio.h>

void static_test();
void main() {
	int i = 0;
	while (i < 5) {
		static_test();
		i++;
	}
}

void static_test() {
	static int s; // 정적변수 s는 0으로 초기화되고, 이후에 호출되면 초기화가 안됨.
	int a = 0;

	++s;
	++a;

	printf("s : %d, a : %d \n", s, a);

}
#include <limits.h>
#include <stdio.h>

main() {
	short int a;
	printf("short int max limit : %d \n", SHRT_MAX);
	// 32767
	a = SHRT_MAX + 1;
	printf("%d = %d", a, SHRT_MIN);

}
#include <stdio.h>
#define HAP(x,y) (x+y)
#define GOP(x,y) x*y

int main() {
	printf("1 + 3 = %d \n", HAP(1, 3));
	printf("1 * 3 = %d", GOP(1, 3));
	return 0;
}
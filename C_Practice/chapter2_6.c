#include <stdio.h>
void main() {
	enum day {SUN, MON, TUE, WED, THU, FRI, SAT};
	enum day d1, d2;
	d1 = SUN;
	d2 = FRI;

	printf("열거형 d1에 저장된 값은 : %d \n", d1);
	printf("열거형 d2에 저장된 값은 : %d", d2);

}
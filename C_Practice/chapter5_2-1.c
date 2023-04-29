#include <stdio.h>

extern char s[]; // extern 의미는 s가 외부에서 정의되어 있다는 것

// 위에서 문자열의 크기를 따로 지정하지 않았는데, 그 이유는 컴파일러는 외부에서 정의된 char s[100] 을 보고 이 변수의 크기를 100이라고 판단.

void extern_ex() {
	printf("외부변수 s값은 %s입니다. \n", s);
}

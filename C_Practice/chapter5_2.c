#include <stdio.h>

void extern_ex();
// 암묵적 프로토타입 선언, 외부 파일에 실제 함수가 정의되어 있음.
// 함수가 정의된 파일이 동일 프로그램에 존재
// 위 두 가지 이유로 main 함수에서 바로 사용 가능
char s[100];
 
void main() {
	puts("문자열을 입력하세요 : ");
	gets(s);
	printf("입력받는 문자열 %s는 전역변수 s에 저장되었습니다. \n", s);
	extern_ex();
}
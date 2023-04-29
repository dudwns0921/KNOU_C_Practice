#include <stdio.h>

char upper(char ch);
char lower(char ch);

void main() {
	char s[50];
	char convertedS[50];
	char ch;
	int i = 0;

	puts("문자열을 입력해주세요. (영어로 50자 이내) : ");
	gets(s);

	ch = s[i];

	while (ch != '\0') {
		if (ch >= 'A' && ch <= 'Z') {
			convertedS[i] = lower(ch);
		}
		else if(ch >= 'a' && ch <= 'z') {
			convertedS[i] = upper(ch);
		}
		else {
			convertedS[i] = ch;
		}
		i++;
		ch = s[i];
	}
	// 이 시점에서 i는 s 문자열 변수의 마지막 인덱스의 값이 됨.
	convertedS[i] = '\0';

	printf("변환 결과 : %s", convertedS);
	
}

char upper(char ch) {
	return ch - 32;
}

char lower(char ch) {
	return ch + 32;
}
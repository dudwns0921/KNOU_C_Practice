#include <stdio.h>

void main() {
	char str_in[50], str_out[50];
	puts("문자열을 입력하세요. : ");
	gets(str_in);
	int i = 0;
	do {
		str_out[i] = '*';
		i++;
	} while (str_in[i] != '\0');
	for (int j = 0; j < strlen(str_out); j++) {
		printf("%d인덱스의 값 : %c \n", j, str_out[j]);
	}
	str_out[i] = '\0';

	printf("%s", str_out);
}
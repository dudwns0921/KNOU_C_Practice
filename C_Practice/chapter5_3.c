#include <stdio.h>

char upper(char ch);
char lower(char ch);

void main() {
	char s[50];
	char convertedS[50];
	char ch;
	int i = 0;

	puts("���ڿ��� �Է����ּ���. (����� 50�� �̳�) : ");
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
	// �� �������� i�� s ���ڿ� ������ ������ �ε����� ���� ��.
	convertedS[i] = '\0';

	printf("��ȯ ��� : %s", convertedS);
	
}

char upper(char ch) {
	return ch - 32;
}

char lower(char ch) {
	return ch + 32;
}
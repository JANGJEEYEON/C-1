#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int convCase(int ch)
{
	// 모든 문자의 대소문자간 차의 크기는 같음
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}
int main(void)
{
	int ch = 0;
	int ch1 = 1;
	printf("Input> ");
	while (1) { // Enter 키 만날때까지 반복
		ch = getchar(); // 문자 입력)
		ch = convCase(ch); // 문자 변환
		if (ch1 == 1) {
			printf("Output> ");
		}
		ch1++;
		if (ch == '\n'){
			break;
		}
		if (ch != '\n') {
			putchar(ch); // 변환된 문자 출력
		}
	}
	printf("\n");
	return 0;
}
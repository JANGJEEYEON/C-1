#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int convCase(int ch)
{
	// ��� ������ ��ҹ��ڰ� ���� ũ��� ����
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
	while (1) { // Enter Ű ���������� �ݺ�
		ch = getchar(); // ���� �Է�)
		ch = convCase(ch); // ���� ��ȯ
		if (ch1 == 1) {
			printf("Output> ");
		}
		ch1++;
		if (ch == '\n'){
			break;
		}
		if (ch != '\n') {
			putchar(ch); // ��ȯ�� ���� ���
		}
	}
	printf("\n");
	return 0;
}
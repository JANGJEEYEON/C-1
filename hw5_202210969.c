#include <stdio.h>

int Solve(int num)
{
	if (num > 1)
		Solve(num / 2);
	printf("%d", num % 2);
}
int main(void)
{
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	Solve(num);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int i, num, j = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
		if (num % i == 0)
			j++;

	if (j == 1)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");

	return 0;
}


#include <stdio.h>

int main(void)
{
	double km;
	const double mile = 1.609;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	printf("%.1lf km is equal to %.1lf miles. \n", km, km / mile);

	return 0;
}

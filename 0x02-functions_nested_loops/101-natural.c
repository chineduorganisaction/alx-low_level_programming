#include <stdio.h>
/**
 * main - main entry point
 *
 * Return: print an integer
 **/

int main(void)
{
	int n, sum3 = 0, sum5 = 0, sum15 = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0)
		{
			sum3 = sum3 + n;
		}
		if ((n % 5) == 0)
		{
			sum5 = sum5 + n;
		}
		if ((n % 15) == 0)
		{
			sum15 += n
		}
	}
	printf("%d\n", sum3 + sum5 - sum15);
	return (0);
}

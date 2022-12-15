#include <stdio.h>
/**
 * main - main entry point
 *
 * Return: print an integer
 **/

int main(void)
{
	int n, sum3 = 0, sum5 = 0;

	for (n = 0; n < 100; n++)
	{
		if ((n % 3) == 0)
		{
			sum3 = sum3 + n;
			printf("%d", sum3);
		}
		if ((n % 5) == 0)
		{
			sum5 = sum5 + n;
			printf("%d", sum5);
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}

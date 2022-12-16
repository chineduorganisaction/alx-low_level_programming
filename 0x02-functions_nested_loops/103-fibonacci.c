#include <stdio.h>
/**
 * main - main entry point
 * Return: prints an integer
 **/

int main(void)
{
	int sum2 = 0, nextvar = 0, sum = 0;

	int n1 = 0, n2 = 1, i;

	for (i = 0; i < 50; i++)
	{
		n1 = nextvar;
		nextvar = (n1 + n2);
		n2 = n1;
		if (((nextvar % 2) == 0) && (nextvar < 4000000))
		{
			sum2 = nextvar;
		}
	}
	sum = sum + sum2;
	printf("%d", sum);
	printf("\n");
	return (0);
}

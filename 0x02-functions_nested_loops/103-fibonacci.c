#include <stdio.h>
/**
 * main - main entry point
 * Return: prints an integer
 **/

int main(void)
{
	long int sum2 = 0, nextvar = 0;

	int n1 = 0, n2 = 1;

	while (nextvar < 4000000)
	{
		n1 = nextvar;
		nextvar = (n1 + n2);
		n2 = n1;
		if ((nextvar % 2) == 0)
		{
			sum2 = (sum2 + nextvar);
			printf("%ld", sum2);
		}
	}
	printf("\n");
	return(0);
}

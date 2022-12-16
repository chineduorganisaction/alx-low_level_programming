#include <stdio.h>
/**
 * main - main entry point
 * Return: prints integer
 **/

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, m98 = 0, i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < 98; i++)
	{
		m98 = (n2 + n1);
		n1 = n2, n2 = m98;
		printf("%lu", n2);
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - main entry point
 * Return: prints integer
 **/

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, m98 = 0, i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 1; i <= 98; i++)
	{
		n1 = m98;
		m98 = (n2 + n1);
		printf("%lu", m98);
		n2 = n1;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

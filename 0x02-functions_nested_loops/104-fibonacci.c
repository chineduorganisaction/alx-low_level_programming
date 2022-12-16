#include <stdio.h>
/**
 * main - main entry point
 * Return: prints integer
 **/

int main(void)
{
	long int n1 = 0, n2 = 1, m98 = 0, i;

	m98 = (n1 + n2);
	for (i = 1; i <= 98; i++)
	{
		n1 = m98;
		m98 = (n2 + n1);
		printf("%ld", m98);
		n2 = n1;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

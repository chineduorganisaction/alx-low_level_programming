#include <stdio.h>
/**
 * main - main entry point
 *
 * Return: print integer
 **/

int main(void)
{
	int n1 = 0, n2 = 1, nextvar = 0, i;

	nextvar = n1 + n2;
	printf("%d", nextvar);
	for (i = 1; i < 50; i++)
	{
		n1 = nextvar;
		nextvar = n1 + n2;
		n2 = n1;
		printf("%d, ", nextvar);
	}
	return (0);
}	

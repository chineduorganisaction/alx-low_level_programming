#include <stdio.h>
/**
 * main - Main entry point
 *
 * Return: prints an integer at code end
*/

int main(void)
{
	int comb = 0;

	while (comb < 10)
	{
		putchar('0' + comb);
		if (comb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	}
	putchar('\n');
	return (0);
}

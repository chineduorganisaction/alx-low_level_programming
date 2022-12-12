#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int n, m;

	for (n = 00; n < 99; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m % 10) + '0');
			if (n == 98 && m == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

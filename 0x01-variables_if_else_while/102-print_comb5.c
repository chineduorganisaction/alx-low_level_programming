#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int n, m, o, p;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (o = n; o < 10; o++)
			{
				for (p = o + 1; p < 10; p++)
				{
					putchar((n % 10) + '0');
					putchar((m % 10) + '0');
					putchar(' ');

					putchar((o % 10) + '0');
					putchar((p % 10) + '0');
				}
				if ( n == 9 && m == 8 && o == 9 && p == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

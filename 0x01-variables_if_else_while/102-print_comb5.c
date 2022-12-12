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
		for (m = 0; m < 9; m++)
		{
			for (o = 0; o < 10; o++)
			{
				for (p = m; p < 10; p++)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(' ');

					putchar(o + '0');
					putchar(p + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

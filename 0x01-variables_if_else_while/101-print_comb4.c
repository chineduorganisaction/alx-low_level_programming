#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int n, m, o;

	for (n = 47; n <= 55; n++)
	{
		for (m = 48; m <= 56; m++)
		{
			for (o = 49; o <= 57; o++)
			{
				if (o > m > n)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 47 || m != 48 || o != 49)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

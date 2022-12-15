#include "main.h"
/**
 * times_table - print multiples
 *
 * Return: print integer at code end
 **/

void times_table(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar('0' + (n * m));
			_putchar(',');
			_putchar(' ');
		}
	}
}

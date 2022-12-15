#include "main.h"
/**
 * times_table - main entry point
 *
 * Return: print integer code end
 **/

void times_table(void)
{
	int m, n, d;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			d = (n * m);
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(' ');
	}
}

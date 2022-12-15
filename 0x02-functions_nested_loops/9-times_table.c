#include "main.h"
/**
 * times_table - main entry point
 *
 * Return: print integer code end
 **/

void times_table(void)
{
	int m, n, d;

	_putchar('0');
	_putchar(',');
	_putchar(' ');

	for (m = 0; m < 10; m++)
	{
		for (n = 1; n < 10; n++)
		{
			d = (n * m);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

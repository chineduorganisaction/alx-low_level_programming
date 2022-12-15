#include "main.h"
/**
 * times_table - main entry point
 *
 * Return: print integer code end
 **/

void times_table(void)
{
	int m, n;

	for (m = 0; m < 10: m++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar('0' + (n * m));
			if (n == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}

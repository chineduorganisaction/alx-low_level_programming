#include "main.h"
/**
 * jack_bauer - entry point
 *
 * Return: print output
 **/

void jack_bauer(void)
{
	int hour = 0, minute = 0, second = 0, track = 0;
	 
	while (hour <= 2)
	{
		while (minute <= 3)
		{
			while (second <= 5)
			{
				while (track <= 9)
				{
					_putchar('0' + hour);
					hour++;
					_putchar('0' + minute);
					minute++;
					_putchar(':');
					_putchar('0' + second);
					second++;
					_putchar('0' + track);
					track++;
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}

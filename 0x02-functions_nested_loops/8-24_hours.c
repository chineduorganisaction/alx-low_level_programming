#include "main.h"
/**
 * jack_bauer - entry point
 *
 * Return: print output
 **/

void jack_bauer(void)
{
	int hour, minute, second, track;

	for (hour = 0; hour <= 2; hour++)
	{
		for (minute = 0; minute <= 3; minute++)
		{
			for (second = 0; second <= 5; second++)
			{
				for (track = 0; track <= 9; track++)
				{
					_putchar('0' + hour);
					_putchar('0' + minute);
					_putchar(':');
					_putchar('0' + second);
					_putchar('0' + track);
					_putchar('\n');
				}
			}
		}
	}
}

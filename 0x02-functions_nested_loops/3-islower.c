#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 *
 * c: is a initiator
 *
 * Return: print integer at code end
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	_putchar('\n');
}

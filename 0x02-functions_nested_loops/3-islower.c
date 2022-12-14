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
		return (1);
	}
	else
	{
		return (2);
	}
	_putchar('\n');
}

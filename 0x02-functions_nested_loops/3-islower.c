#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 *
 * Return: print integer at code end
 **/

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}

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
	return (0);
}

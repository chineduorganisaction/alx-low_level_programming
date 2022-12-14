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
	char letter;

	c = c + '0';
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			_putchar(1 + '0');
		}
		else
		{
			_putchar(0 + '0');
		}
	}
	return (0);
}

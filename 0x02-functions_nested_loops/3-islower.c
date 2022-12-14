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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

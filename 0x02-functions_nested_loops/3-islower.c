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
	_putchar('0' + r);
	r = _islower('o');
	_putchar('0' + r);
	r = _islower(108);
	_putchar('0' + r);

	_putchar('\n');
	return (0);
}

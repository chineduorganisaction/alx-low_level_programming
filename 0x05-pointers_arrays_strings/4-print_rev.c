#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
 * Return: print integer 0
 */

void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

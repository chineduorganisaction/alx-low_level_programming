#include "main.h"

/**
 * _puts - prints out inputs
 * @str: parameter
 * Return: always the integer
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}


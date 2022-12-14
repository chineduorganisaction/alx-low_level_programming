#include "main.h"
/**
 * print_sign - main entry point
 *
 * @n: parameter
 *
 * Return: prints an integer
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+ + '0');
		return (1);
	}
	else if (n = 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar(- + '0');
		return (-1);
	}
}

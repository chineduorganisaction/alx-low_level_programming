#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - main entry point
 * @n: parameter of variable
 * Return: print integer answer
 **/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = (-1) * n;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		_putchar('0' +  n);
		return (n);
	}
}

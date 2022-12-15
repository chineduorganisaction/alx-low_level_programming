#include "main.h"
/**
 * print_to_98 - main entry point
 * @n: parameter
 * 
 * Return: print an integer
 **/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			_putchar('0' + n);
			--n;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar('0' + n);
			++n;
		}
	}
}

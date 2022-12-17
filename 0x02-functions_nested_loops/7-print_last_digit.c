#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - main entry point
 * @n: parameter of variable
 * Return: print integer answer
 **/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		n = n % 10;
		printf("%d%d", n, n);
	}
	else
	{
		n = n % 10;
		printf("%d%d", n, n);
	}
	return (0);
}

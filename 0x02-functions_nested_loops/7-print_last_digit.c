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
		printf("%d", n);
		return (n);
	}
	else
	{
		printf("%d", n);
		return (n);
	}
}

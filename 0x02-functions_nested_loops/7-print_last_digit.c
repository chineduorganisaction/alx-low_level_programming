#include "main.h"
/**
 * print_last_digit - main entry point
 * @n: parameter of variable
 * Return: print integer answer
 **/

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}

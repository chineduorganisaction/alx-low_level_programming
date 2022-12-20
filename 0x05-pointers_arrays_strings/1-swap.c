#include "main.h"

/**
 * swap_int - function that swap integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: returns the integer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

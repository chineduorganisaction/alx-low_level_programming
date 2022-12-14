#include "main.h"
/**
 * _abs - main entry point
 *
 * @n: parameter
 *
 * Return: print integer at code end
 **/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (n);
	}
}

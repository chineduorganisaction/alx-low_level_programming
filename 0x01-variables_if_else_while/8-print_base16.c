#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
*/

int main(void)
{
	int hex = 0, result;

	while (hex <= 16)
	{
		result = putchar('%x', hex);
		putchar('0' + result);
		hex++;
	}
	putchar('\n');
	return (0);
}

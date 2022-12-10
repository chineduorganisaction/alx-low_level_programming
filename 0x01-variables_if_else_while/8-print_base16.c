#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
*/

int main(void)
{
	int hex = 0;

	while (hex <= 16)
	{
		putchar('0' + hex);
		if (hex > 10)
		{
			hex = hex % 16;
			putchar(hex);
		}
		hex++;
	}
	putchar('\n');
	return (0);
}

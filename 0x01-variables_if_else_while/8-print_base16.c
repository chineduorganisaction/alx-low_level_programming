#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print an integer at code end
*/

int main(void)
{
	int hex = 0;
	char res = 'a';

	while (hex <= 10)
	{
		putchar('0' + hex);
		hex++;
	}
	while (res <= 'f')
	{
		putchar(res);
		res++;
	}
	putchar('\n');
	return (0);
}

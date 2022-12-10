#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print integer at code end
*/

int main(void)
{
	char alph = 'z';

	while ('a' <= alph)
	{
		putchar(alph);
		--alph;
	}
	putchar('\n');
	return (0);
}

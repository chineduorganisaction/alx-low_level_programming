#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print integer at end of code
*/

int main(void)
{
	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

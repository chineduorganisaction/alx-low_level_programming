#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print integer at code end
*/

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		++lower;
		if (lower != 'f' && lower != 'r')
		{
			putchar(lower - 1);
		}
	}
	putchar('\n');
	return (0);
}

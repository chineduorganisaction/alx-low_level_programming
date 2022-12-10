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
		if (lower != 'e' && lower != 'q')
		{
			lower++;
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}

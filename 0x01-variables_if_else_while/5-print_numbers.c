#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print integer at code end
*/

int main(void)
{
	int numb = 0;

	while (numb < 10)
	{
		putchar(numb);
		numb++;
	}
	putchar('\n');
	return (0);
}

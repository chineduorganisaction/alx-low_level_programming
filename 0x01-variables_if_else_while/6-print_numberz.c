#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: prints an integer at code end
*/

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');
	return (0);
}

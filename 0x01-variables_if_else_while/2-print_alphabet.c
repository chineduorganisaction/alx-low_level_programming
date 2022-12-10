#include <stdio.h>
/**
 * main - Main is entry point
 *
 * Return: print integer to end program
*/

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}

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
		putchar(lower + "\n");
		lower++;
	}
	return (0);
}

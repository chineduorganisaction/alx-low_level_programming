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

	while(lower <= 'z' && upper <= 'Z')
	{
		putchar(lower);
		putchar(upper);
		lower++;
		upper;
	}
	putchar('\n');
	return (0);
}

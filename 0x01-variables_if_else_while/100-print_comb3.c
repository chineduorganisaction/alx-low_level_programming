#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	for (int comb = 0; comb < 10; comb++)
	{
		for (int num = 0; num < 10; num++)
		{
			putchar('0' + comb);
			putchar('0' + num);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

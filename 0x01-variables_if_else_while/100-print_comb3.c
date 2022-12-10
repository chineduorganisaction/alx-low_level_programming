#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int comb = 0, num = 0;

	while (comb < 10)
	{
		while (num < 10)
		{
			putchar('0' + comb);
			putchar('0' + num);
			num++;
			comb++;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int comb = 0, num = 0;

	for (comb; comb < 10; comb++;)
	{
		for (num; num < 10; num++;)
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

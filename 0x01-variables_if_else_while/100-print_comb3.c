#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int comb, num;

	for (comb = 0; comb < 10; comb++)
	{
		for (num = 0; num < 10; num++)
		{
			if (num == (comb < 10))
			{
				comb = comb + 1;

				putchar('0' + comb);
				putchar('0' + num);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

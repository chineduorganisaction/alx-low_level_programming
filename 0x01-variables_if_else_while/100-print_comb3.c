#include <stdio.h>
/**
 * main -Main is entry point
 *
 * Return: print an integer at code end
 */

int main(void)
{
	int comb, num;

	for (comb = 48; comb <= 56; comb++)
	{
		for (num = 49; num <= 57; num++)
		{
			if (num < comb)
			{
				putchar('0' + num);
				putchar('0' + comb);
				if (numb != 57 || comb != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

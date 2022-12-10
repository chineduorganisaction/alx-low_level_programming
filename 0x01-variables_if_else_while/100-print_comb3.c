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
		putchar('0' + comb);
		while (num < 10)
		{
			if (num != comb)
			{
				putchar('0' + num);
				if (num != 89)
				{
					putchar(',');
					putchar(' ');
				}
				num++;
			}
		}
		comb++;
	}
	putchar('\n');
	return (0);
}

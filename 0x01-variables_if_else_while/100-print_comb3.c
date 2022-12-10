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
			if (num != comb)
			{
				if (num != 89)
				{
					putchar('0' + num);
					putchar(',');
					putchar(' ');
				}
				num++;
			}
		}
		putchar('0' + comb);
		comb++;
	}
	putchar('\n');
	return (0);
}

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
		putchar(comb);
		while (num < 10)
		{
			if (num != comb)
			{
				putchar(num);
				if (num != 89)
				{
					putchar(',');
					pitchar(' ');
				}
				num++;
			}
		}
		comb++;
	}
	putchar('\n);
	return (0);
}

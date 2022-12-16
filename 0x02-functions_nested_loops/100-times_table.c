#include <stdio.h>
#include "main.h"
/**
 * print_times_table - main entry point
 * @n: parameter
 * Return: return integer 0
 **/

void print_times_table(int n)
{
	int m, h, j;

	if (n >= 15 || n <= 0)
	{
		return;
	}
	else
	{
		for (m = 0; m <= n; m++)
		{
			printf("%d, ", 0);
			for (h = 1; h <= n; h++)
			{
				j = (m * h);
				if ((j / 10) > 0)
				{
					printf("%d", (j / 10));
				}
				else
				{
					printf("  ");
				}
				if ((j % 10) >= 0)
				{
					printf("%d", (j % 10));
				}
				if (h <= (n - 1))
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}

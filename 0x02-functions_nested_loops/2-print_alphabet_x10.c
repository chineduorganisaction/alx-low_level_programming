#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - void function
 *
 **/

void print_alphabet_x10(void)
{
	int num = 0;

	char letter = 'a';

	while (letter <= 'z')
	{
		while (num < 10)
		{
			_putchar(letter);
			letter++;
			num++;
		}
	}
	_putchar('\n');
}

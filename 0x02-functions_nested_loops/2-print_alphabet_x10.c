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

	while (num < 10)
	{
		while (letter <= 'z')
		{
			letter++;
			continue;
		}
		_putchar(letter);
		num++;
	}
	_putchar('\n');
}
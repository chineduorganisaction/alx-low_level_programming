#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - void function
 *
 **/

void print_alphabet_x10(void)
{
	char num = 'a';

	char letter = 'a';

	while (num < 'j')
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

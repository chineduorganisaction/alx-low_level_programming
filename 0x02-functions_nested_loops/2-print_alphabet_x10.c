#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - void function
 *
 **/

void print_alphabet_x10(void)
{
	int num;

	char letter = 'a';

	for (num = 0; num < 10; num++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}

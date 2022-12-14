#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - void function
 *
 **/

void print_alphabet_x10(void)
{
	char num;

	char letter;

	for (num = 'a'; num < 'j'; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

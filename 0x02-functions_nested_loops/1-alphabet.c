#include "main.h"
/**
 * main - main entry point
 *
 * print_alphabet: a void function
 *
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

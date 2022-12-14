#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar: prints character in singles
 * print_alphabet: void function of loop
 * print_alphabet_x10: print alphabet 10times
 **/

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


#endif

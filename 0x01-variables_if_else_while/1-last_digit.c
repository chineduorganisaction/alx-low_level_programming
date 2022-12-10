#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Main entry point
 *
 * Return: print an integer at end of code
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of n is %d and is greaterthan 5", n);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of n is %d and is zero", n);
	}
	else (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of n is %d and is less than 6 and 0", n);
	}
	return (0);
}

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
	int n,last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of n is %d and is greaterthan 5", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of n is %d and is zero", last_digit);
	}
	else if (last_digit > 0 < 6)
	{
		printf("Last digit of n is %d and is less than 6 and 0", last_digit);
	}
	return (0);
}

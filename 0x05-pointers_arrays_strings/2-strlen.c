#include "main.h"

/**
 * _strlen - checks string length
 * @s: parameter
 * Return: returns integer
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; *s != '\0'; s++)
	{
		str++;
	}

	return (str);
}

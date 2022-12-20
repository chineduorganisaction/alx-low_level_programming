#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: parameter1
 * @src: parameter2
 * Return: return an integer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; strc[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

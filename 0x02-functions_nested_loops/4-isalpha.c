#include "main.h"
/**
 * _isalpha - entry point for alphabet check
 *
 * @c: is a peremeter for variables
 **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 9)0 || (c >= 97 &&c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

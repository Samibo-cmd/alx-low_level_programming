#include "main.h"

/**
 * _isalpha - check for alphabet and returns an integer
 * @c: int checked
 * Return: an integer value of 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

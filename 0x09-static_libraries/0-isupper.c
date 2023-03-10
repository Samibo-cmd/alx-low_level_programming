#include "main.h"

/**
 * _isupper - prints uppercase letters
 * @c: int to be passed
 * Return: an integer value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _islower - prints lowercase letters
 * @c: int to be passed
 * Return: an integer value 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

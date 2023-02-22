#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: passed in the number
 * Return: an integer value.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar((-l) + '0');
	}
	else
	{
		_putchar(l + '0');
	}
	return (l);
}

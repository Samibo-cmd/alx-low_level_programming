#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 * @n: pass integer
 * Return: an integer
 */

void print_to_98(int n)
{
	n = 0;
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}

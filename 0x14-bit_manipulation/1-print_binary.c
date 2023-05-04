#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number to be converted to binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		int binary = (n >> i);

		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

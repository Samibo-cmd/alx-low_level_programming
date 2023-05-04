#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the given number
 * @index: the index number of each bit in the given number
 * Return: an integer.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}

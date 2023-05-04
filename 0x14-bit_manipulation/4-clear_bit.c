#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the given number
 * @index: the index of the bit that is to be set
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

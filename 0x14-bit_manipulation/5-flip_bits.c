#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped.
 * @n: an integer
 * @m: an integer
 * Return: the flipped number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}

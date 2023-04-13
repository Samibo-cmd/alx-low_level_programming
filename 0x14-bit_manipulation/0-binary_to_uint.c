#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned in.
 * @b: a string of binary number to be converted.
 * Return: number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		if (*b++ == '1')
			num += 1;
	}
	return (num);
}

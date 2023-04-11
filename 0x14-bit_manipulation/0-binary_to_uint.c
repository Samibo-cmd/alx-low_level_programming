#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned in.
 * @b: a string of binary number to be converted.
 * Return: number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int i, num = 0;
	int exp = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		if ((b[i] != '0' || b[i] != '1') || b == NULL)
			return (0);
		if (b[i] == '1')
		{
			num += exp; 
		}
		exp *= 2;
	}
	return (num);
}

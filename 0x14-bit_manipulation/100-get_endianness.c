#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: a pointer.
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *d = (char *) &y;

	return (*d);
}

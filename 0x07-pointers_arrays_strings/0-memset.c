#include "main.h"

/**
 * *_memset - fills a memory space with a constant character
 * @s: a pointer to a variable address
 * @b: the variable that will fill the memory
 * @n: the number of times the variable b is to fill the memory
 * Return: return s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

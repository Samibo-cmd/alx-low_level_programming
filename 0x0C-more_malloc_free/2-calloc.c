#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: a variable to be copied
 * @n: number of time the variable should be copied
 * Return: a pointer to the memory area.
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

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: a string.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
